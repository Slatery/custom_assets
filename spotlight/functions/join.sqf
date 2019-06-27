#include "\A3\Ui_f\hpp\defineResincl.inc"
/*
    File: join.sqf
    Date: 2019-01-29
    Last Update: 2019-05-21
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html

    Description:
        Skrypt powoduje dołączenie do serwera z głównego menu.
        Oparty o "http://killzonekid.com/farewell-my-arma-friends/"

    Parameter(s):
        _buttons - Przyciski które były kliknięte
*/
params [["_buttons", []]];

#define MULTI_SESSIONS_CTRL     (findDisplay IDD_MULTIPLAYER displayCtrl IDC_MULTI_SESSIONS)

diag_log text "[ArmaForces] [spotlight] Auto joining to ArmaForces server";

ctrlActivate ((ctrlparent (_buttons select 0)) displayctrl 105);

AF_spotlight_server_address = "server.armaforces.com";
AF_spotlight_server_port = "2302";
AF_spotlight_timeout = diag_tickTime + 30;

onEachFrame {
    onEachFrame {
        ctrlActivate (findDisplay IDD_MULTIPLAYER displayCtrl IDC_MULTI_TAB_DIRECT_CONNECT);

        onEachFrame {
            private _ctrlServerAddress = findDisplay IDD_IP_ADDRESS displayCtrl 2300;
            _ctrlServerAddress controlsGroupCtrl IDC_IP_ADDRESS ctrlSetText AF_spotlight_server_address;
            _ctrlServerAddress controlsGroupCtrl IDC_IP_PORT ctrlSetText AF_spotlight_server_port;
            ctrlActivate (_ctrlServerAddress controlsGroupCtrl IDC_OK);

            onEachFrame {
                (MULTI_SESSIONS_CTRL lbData 0) call {
                    if (diag_tickTime > AF_spotlight_timeout) then
                    {
                        diag_log text "[ArmaForces] [spotlight] Join timeout, no server";
                        onEachFrame {};
                    };
                    // If there is an password box and it is not empty
                    if (_this != "") then {
                        MULTI_SESSIONS_CTRL lbSetCurSel 0;

                        onEachFrame {
                            ctrlActivate (findDisplay IDD_MULTIPLAYER displayCtrl IDC_MULTI_JOIN);

                            onEachFrame
                            {
                                if (diag_tickTime > AF_spotlight_timeout) then {
                                    diag_log text "[ArmaForces] [spotlight] Join timeout";
                                    onEachFrame {};
                                };

                                if (!isNull findDisplay IDD_PASSWORD) then {
                                    private _ctrlPassword = findDisplay IDD_PASSWORD displayCtrl IDC_PASSWORD;
                                    private _savedPassword = ctrlText  _ctrlPassword;

                                    if(count _savedPassword > 0) then {
                                        _ctrlPassword ctrlSetText _savedPassword;
                                        ctrlActivate (findDisplay IDD_PASSWORD displayCtrl IDC_OK);
                                        diag_log text "[ArmaForces] [spotlight] Saved password found, entering";
                                        onEachFrame {};
                                    }
                                    else {
                                        diag_log text "[ArmaForces] [spotlight] No saved password, wait for manual input";
                                        onEachFrame {};
                                    };
                                };

                                if (getClientStateNumber >= 3) then {
                                    diag_log text "[ArmaForces] [spotlight] Connection success";
                                    onEachFrame {};
                                };
                            };
                        };
                    };
                };
            };
        };
    };
};
