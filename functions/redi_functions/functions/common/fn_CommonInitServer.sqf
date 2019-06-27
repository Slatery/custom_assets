if(!isServer) exitWith {};

// set all vehicles post init to allow the crew to remain in the vehicle and man the weapons / driver seat.
// this script could be enhanced to only look for main turret seats to apply this too so the driver ejects, but good enough for now  
["AllVehicles", "InitPost", {
	if (isClass (configfile >> "CfgVehicles" >> (typeOf (_this select 0)) >> "Turrets" >> "MainTurret")) then { (_this select 0) allowCrewInImmobile true };
	}, true, [], true
] call CBA_fnc_addClassEventHandler;

//Call CommonInitLocal on all connected clients/JIP clients
[[], "SOCOMD_fnc_CommonInitLocal", true, true, true] call BIS_fnc_MP;