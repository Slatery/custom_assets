_args = _this;
_player = _this select 0;
_isAdmin = false;

if(isNull(_player)) exitWith {_isAdmin};

_guid = getPlayerUID _player;

_whitelist = [
	"76561198031500363", //ACE
	"76561198009993601", //Slatery
	"76561197972118326", //Princecoo
	"76561198175958969", //GentileGinger 
	"76561198323474934", //Flyer 
	"76561197981545233", //Mischief Maker
	"76561198028218247", //Jazza 
	"76561198083050531", //Natalia Le'Faux
	"76561198073847837", //Ping Law
	"76561198052181465"  //PyroV
];

if(_guid in _whitelist) then {
	_isAdmin = true;
};

_isAdmin;