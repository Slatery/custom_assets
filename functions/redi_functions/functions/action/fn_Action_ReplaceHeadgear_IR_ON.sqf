_args = _this;
_player = _this select 0;
_headgear = _this select 1;
_curmode = currentVisionMode _player;
_unitLoadout = getUnitLoadout _player;
_unitLoadout set [6, _headgear];

[_player, _unitLoadout,_curmode] call SOCOMD_fnc_SetUnitLoadout;
[_player,"true"] call SOCOMD_fnc_HandleIrStrobe;