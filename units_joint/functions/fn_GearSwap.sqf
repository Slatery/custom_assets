params ["_unit"];
_player = this select 0;
//Check for locality
if (!local _unit) exitWith {};

private _unitClass = typeOf _unit;
//magazines and items saveing
_items = items _unit;

// skip if in 3den or unit has custom loadout
if (is3DEN || _unit getvariable ["saved3DENInventory",false]) exitwith {};
//uniform Randomization
private _unif = getArray (configfile >> "CfgVehicles" >> _unitClass >> "unifoptions");
if (count _unif == 0) then {}
else {
	private _randunif = selectRandom _unif;
	if (_randunif != "") then {
		[_unit, _randunif] call redi_fnc_Action_ReplaceUniform;
	};
};
private _unif = getArray (configfile >> "CfgVehicles" >> _unitClass >> "headoptions");
if (count _unif == 0) then {}
else {
	private _randunif = selectRandom _unif;
	if (_randunif != "") then {
		[_unit, _randunif] call redi_fnc_Action_ReplaceHeadGear;
	};
};