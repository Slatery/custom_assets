_args = _this;
_player = _this select 0;
_uniform = _this select 1;

_curmode = currentVisionMode _player;

_unitLoadout = getUnitLoadout _player;
_uniformLoadout = _unitLoadout select 3;
_uniformLoadout set [0, _uniform]; 
_unitLoadout set [3, _uniformLoadout];

[_player, _unitLoadout,_curmode] call SOCOMD_fnc_SetUnitLoadout;