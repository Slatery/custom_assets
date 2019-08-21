private ["_heli","_throttleidle","_throttle","_rudderidle","_rudder","_rudder2"];
_heli = _this select 0;
_throttleidle = 0.5;
_rudderidle = 0.5;
_throttle = 0.3;
_rudder=0.5;
while {(alive _heli)} do 
{
	if (local _heli) then 
	{
		if (player in _heli) then 
 		{
			if (difficultyEnabledRTD) then {
			//hintsilent format ["Heli:%1 Phase:%2 RTD:%3 Rudder:%4",_heli, _throttle, difficultyEnabledRTD, _rudder];
			_throttle = _heli animationphase "lever_pilot";
			_rudder = ((_heli animationphase "pedalL_pilot") +1)/2;
			} 
			else 
			{
  			_throttle = (inputAction "HeliUp") + (inputAction "HeliThrottlePos") + _throttleidle;
  			_rudder = (inputAction "heliRudderRight") - (inputAction "heliRudderLeft") + _rudderidle;
			if ((inputAction "HeliDown") == 1) then 
			{
  				_heli animate ["TiltBlade_1", 0];
  				_heli animate ["TiltBlade_2", 0];
  				_heli animate ["TiltBlade_3", 0];
  				_heli animate ["TiltBlade_4", 0];
  			};
			//hintsilent format ["Heli:%1 Phase:%2 RTD:%3 Rudder:%4 Rudder2:%5",_heli, _heli animationphase "TiltBlade_1", difficultyEnabledRTD, _rudder];
			};
  			_heli animate ["TiltBlade_1", _throttle];
  			_heli animate ["TiltBlade_2", _throttle];
  			_heli animate ["TiltBlade_3", _throttle];
  			_heli animate ["TiltBlade_4", _throttle];
  			_heli animate ["TiltTailRotor", _rudder];
  			_heli animate ["TiltTailBlade_1", _rudder];
  			_heli animate ["TiltTailBlade_2", _rudder];
  			_heli animate ["TiltTailBlade_3", _rudder];
  			_heli animate ["TiltTailBlade_4", _rudder];
 		};
 		sleep 0.005;
	}
	else
	{
		sleep 1;
	};
};