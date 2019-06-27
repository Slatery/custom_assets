_args = _this;
_player = _args select 0;
_set = _args select 1;
_strobe = "ACE_IR_Strobe_Effect";
if (_set == "true") then {
	_attachedItem = _strobe createVehicle getpos _player;
	_player setVariable ["_strobeObject", _attachedItem,false];
    _attachedItem attachTo [_player, [ 0, 0, 0.2], "head_axis"];
};
if (_set == "false") then {
	_object = _player getVariable "_strobeObject";
	detach _object; 
	deleteVehicle _object;
}; 
