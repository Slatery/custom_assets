class B_soldier_F;
class REDI_base_soldier :B_soldier_F{
	author = "[REDi]1R Slatery";
	identityTypes[] = {"Head_NATO","LanguageENG_F"};
	uniformClass="ADFU_G3_AMC";
	scope = 1;
	Items[] 				= {FIRSTAID_KIT,REQUIRED_KIT};
	RespawnItems[] 			= {FIRSTAID_KIT,REQUIRED_KIT};
	
};
// Medic Base
class B_base_medic : REDI_base_soldier{
	attendant = 1;
	scope = 1;
};