class B_AssaultPack_rgr;
class B_AssaultPack_cbr;
class B_TacticalPack_oli;
class ADFU_Assaultpack_MC;
class ADFU_Kitbag_MC;
class ADFU_Assaultpack_AMC;
class ADFU_Kitbag_AMC;
class B_AssaultPack_khk;
class B_Kitbag_rgr;
class TFAR_anarc164;
class REDI_eng_bag: B_AssaultPack_cbr{
	scope = 1;
	class TransportItems{
		item_xx(ToolKit,1);
		item_xx(DemoCharge_Remote_Mag, 4);
	};
};
class redi_med_bag: B_TacticalPack_oli{
	scope = 1;
	class TransportItems{
		item_xx(ACE_fieldDressing,15);
		item_xx(ACE_elasticBandage,15);
		item_xx(ACE_packingBandage,15);
		item_xx(ACE_quikclot,15);
		item_xx(ACE_epinephrine,5);
		item_xx(ACE_morphine,15);
		item_xx(ACE_tourniquet,4);
		item_xx(ACE_salineIV,2);
		item_xx(ACE_salineIV_500,6);
		item_xx(ACE_salineIV_250,8);
		item_xx(ACE_surgicalKit,1);
		item_xx(adv_aceSplint_splint,4);
		item_xx(ADFU_Booniehat_AMC,1);
	};
};
// amcu bags
class redi_rifle_bag: ADFU_Assaultpack_AMC{
	scope = 1;
	class TransportItems{
		item_xx(ADFU_Booniehat_AMC,1);
		item_xx(ACE_30Rnd_556x45_Stanag_Mk262_mag,4);
		item_xx(SmokeShell,3);
		item_xx(SmokeShellBlue,2);
		item_xx(ACE_HandFlare_Red,1);
		item_xx(ACE_m84,4);
	};
};
class redi_hat_bag: ADFU_Kitbag_AMC{
	scope = 1;
	class TransportItems{
		item_xx(ADFU_Booniehat_AMC,1);
		item_xx(SmokeShell,1);
		item_xx(SmokeShellBlue,1);
		item_xx(ACE_HandFlare_Red,1);
		item_xx(ADFU_m3CG_HEAT,2);
		item_xx(ADFU_m3CG_HEDP,2);
	};
};
class redi_gl_bag: ADFU_Assaultpack_AMC{
	scope = 1;
	class TransportItems{
		item_xx(ADFU_Booniehat_AMC,1);
		item_xx(ACE_30Rnd_556x45_Stanag_Mk262_mag,2);
		item_xx(1Rnd_HE_Grenade_shell,4);
		item_xx(1Rnd_SmokeRed_Grenade_shell,4);
		item_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		item_xx(SmokeShell,3);
		item_xx(SmokeShellBlue,2);
		item_xx(ACE_HandFlare_Red,1);
		item_xx(ACE_m84,4);
	};
};
class redi_mg_bag: ADFU_Assaultpack_AMC{
	scope = 1;
	class TransportItems{
		item_xx(ADFU_Booniehat_AMC,1);
		item_xx(rhsusf_200rnd_556x45_mixed_box,2);
		item_xx(SmokeShell,3);
		item_xx(SmokeShellBlue,2);
		item_xx(ACE_HandFlare_Red,1);
		item_xx(ACE_m84,4);
	};
};
class redi_marksman_bag: ADFU_Assaultpack_AMC{
	scope = 1;
	class TransportItems{
		item_xx(ADFU_Booniehat_AMC,1);
		item_xx(ACE_20Rnd_762x51_M118LR_Mag,4);
		item_xx(SmokeShell,3);
		item_xx(SmokeShellBlue,2);
		item_xx(ACE_HandFlare_Red,1);
		item_xx(ACE_m84,4);
	};
};

// amct bags
class redi_rifle_bag_AMCT: B_AssaultPack_khk{
	scope = 1;
	class TransportItems{
		item_xx(ADFU_Booniehat_AMCT,1);
		item_xx(ACE_30Rnd_556x45_Stanag_Mk262_mag,4);
		item_xx(SmokeShell,3);
		item_xx(SmokeShellBlue,2);
		item_xx(ACE_HandFlare_Red,1);
		item_xx(ACE_m84,4);
	};
};
class redi_hat_bag_AMCT: B_Kitbag_rgr{
	scope = 1;
	class TransportItems{
		item_xx(ADFU_Booniehat_AMCT,1);
		item_xx(SmokeShell,1);
		item_xx(SmokeShellBlue,1);
		item_xx(ACE_HandFlare_Red,1);
		item_xx(ADFU_m3CG_HEAT,2);
		item_xx(ADFU_m3CG_HEDP,2);
	};
};
class redi_gl_bag_AMCT: B_AssaultPack_khk{
	scope = 1;
	class TransportItems{
		item_xx(ADFU_Booniehat_AMCT,1);
		item_xx(ACE_30Rnd_556x45_Stanag_Mk262_mag,2);
		item_xx(1Rnd_HE_Grenade_shell,4);
		item_xx(1Rnd_SmokeRed_Grenade_shell,4);
		item_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		item_xx(SmokeShell,3);
		item_xx(SmokeShellBlue,2);
		item_xx(ACE_HandFlare_Red,1);
		item_xx(ACE_m84,4);
	};
};
class redi_mg_bag_AMCT: B_AssaultPack_khk{
	scope = 1;
	class TransportItems{
		item_xx(ADFU_Booniehat_AMCT,1);
		item_xx(rhsusf_200rnd_556x45_mixed_box,2);
		item_xx(SmokeShell,3);
		item_xx(SmokeShellBlue,2);
		item_xx(ACE_HandFlare_Red,1);
		item_xx(ACE_m84,4);
	};
};
class redi_marksman_bag_AMCT: B_AssaultPack_khk{
	scope = 1;
	class TransportItems{
		item_xx(ADFU_Booniehat_AMCT,1);
		item_xx(ACE_20Rnd_762x51_M118LR_Mag,4);
		item_xx(SmokeShell,3);
		item_xx(SmokeShellBlue,2);
		item_xx(ACE_HandFlare_Red,1);
		item_xx(ACE_m84,4);
	};
};
// mc bags
class redi_rifle_bag_MC: ADFU_Assaultpack_MC{
	scope = 1;
	class TransportItems{
		item_xx(ADFU_Booniehat_MC,1);
		item_xx(ACE_30Rnd_556x45_Stanag_Mk262_mag,4);
		item_xx(SmokeShell,3);
		item_xx(SmokeShellBlue,2);
		item_xx(ACE_HandFlare_Red,1);
		item_xx(ACE_m84,4);
	};
};
class redi_hat_bag_MC: ADFU_Kitbag_MC{
	scope = 1;
	class TransportItems{
		item_xx(ADFU_Booniehat_MC,1);
		item_xx(SmokeShell,1);
		item_xx(SmokeShellBlue,1);
		item_xx(ACE_HandFlare_Red,1);
		item_xx(ADFU_m3CG_HEAT,2);
		item_xx(ADFU_m3CG_HEDP,2);
	};
};
class redi_gl_bag_MC: ADFU_Assaultpack_MC{
	scope = 1;
	class TransportItems{
		item_xx(ADFU_Booniehat_MC,1);
		item_xx(ACE_30Rnd_556x45_Stanag_Mk262_mag,2);
		item_xx(1Rnd_HE_Grenade_shell,4);
		item_xx(1Rnd_SmokeRed_Grenade_shell,4);
		item_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		item_xx(SmokeShell,3);
		item_xx(SmokeShellBlue,2);
		item_xx(ACE_HandFlare_Red,1);
		item_xx(ACE_m84,4);
	};
};
class redi_mg_bag_MC: ADFU_Assaultpack_MC{
	scope = 1;
	class TransportItems{
		item_xx(ADFU_Booniehat_MC,1);
		item_xx(rhsusf_200rnd_556x45_mixed_box,2);
		item_xx(SmokeShell,3);
		item_xx(SmokeShellBlue,2);
		item_xx(ACE_HandFlare_Red,1);
		item_xx(ACE_m84,4);
	};
};
class redi_marksman_bag_MC: ADFU_Assaultpack_MC{
	scope = 1;
	class TransportItems{
		item_xx(ADFU_Booniehat_MC,1);
		item_xx(ACE_20Rnd_762x51_M118LR_Mag,4);
		item_xx(SmokeShell,3);
		item_xx(SmokeShellBlue,2);
		item_xx(ACE_HandFlare_Red,1);
		item_xx(ACE_m84,4);
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