class B_AssaultPack_rgr;
class B_AssaultPack_cbr;
class TFAR_anarc164;
class REDI_eng_bag: B_AssaultPack_cbr{
	scope = 1;
	class TransportItems{
		item_xx(ToolKit,1);
		item_xx(DemoCharge_Remote_Mag, 4);
	};
};
class redi_med_bag: B_AssaultPack_rgr{
	scope = 1;
	class TransportItems{
		item_xx(ACE_fieldDressing,10);
		item_xx(ACE_elasticBandage,10);
		item_xx(ACE_packingBandage,10);
		item_xx(ACE_quikclot,10);
		item_xx(ACE_epinephrine,5);
		item_xx(ACE_morphine,10);
		item_xx(ACE_tourniquet,2);
		item_xx(ACE_salineIV,2);
		item_xx(ACE_salineIV_500,4);
		item_xx(ACE_salineIV_250,6);
		item_xx(ACE_surgicalKit,1);
	};
};
// z\tfar\addons\backpacks
class REDI_aus_radio: TFAR_anarc164{
	scope = 2;
	displayName = "AN/ARC 164 (Australian Radio)";
	tf_encryptionCode ="tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
};
class rto_radio: REDI_aus_radio{
	scope=1;
	class TransportItems{
		item_xx(SmokeShellGreen,4);
	};
};