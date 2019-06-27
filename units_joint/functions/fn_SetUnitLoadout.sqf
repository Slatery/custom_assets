_args = _this;
_player = _args select 0;
_loadout = _args select 1;
_curmode = _args select 2;

_tfr_hasLr = call TFAR_fnc_haveLRRadio;
_tfr_LrSettings = [];
if(_tfr_hasLr) then {
	_tfr_LrSettings = (call TFAR_fnc_activeLrRadio) call TFAR_fnc_getLrSettings;
};

_tfr_hasSw = call TFAR_fnc_haveSWRadio;
_tfr_SwSettings = [];
if(_tfr_hasSw) then {
	_tfr_SwSettings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
};

_player setUnitLoadout _loadout;

if(_tfr_hasLr) then {
	[(call TFAR_fnc_activeLrRadio) select 0, (call TFAR_fnc_activeLrRadio) select 1, _tfr_LrSettings] call TFAR_fnc_setLrSettings;
};

if(_tfr_hasSw) then {
	[(call TFAR_fnc_activeSwRadio), _tfr_SwSettings] call TFAR_fnc_setSwSettings;
};
if(_curmode == 1) then {
	_player action ["nvGoggles", _player];
};