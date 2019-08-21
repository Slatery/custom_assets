_tex=["1","2","3","4","5","6","7","8","9","0"];
_countA = (floor random (count _tex));
(_this select 0) setObjectTexture [0, format ["\uh60\t1\numbers\%1_ca.paa", _tex select _countA]];
_countB = (floor random (count _tex));
if (_countA == 9 and _countB == 9) then {
	_countB = _countB - (floor random (count _tex));
};
(_this select 0) setObjectTexture [1, format ["\uh60\t1\numbers\%1_ca.paa", _tex select _countB]];
exit;
