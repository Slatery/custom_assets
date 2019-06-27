// //Temp Class for broken cfg
// 	class Box_East_Ammo_F; // CUP_RUBasicAmmunitionBox
//     class Box_NATO_Ammo_F; // CUP_USBasicAmmunitionBox
//     class Box_East_Wps_F; // CUP_RUBasicWeaponsBox
//     class Box_NATO_Wps_F; // CUP_USBasicWeaponsBox
//     class Box_East_Support_F; // CUP_RUSpecialWeaponsBox
//     class Box_NATO_Support_F; // CUP_USSpecialWeaponsBox
//     class Box_East_WpsLaunch_F; // CUP_RULaunchersBox
//     class Box_NATO_WpsLaunch_F; // CUP_USLaunchersBox
//     class Box_East_Uniforms_F; // CUP_RUBasicWeaponsBox
//     class Box_NATO_Uniforms_F; // CUP_USBasicWeaponsBox
//     class O_SupplyCrate_F; // CUP_RUVehicleBox
//     class B_SupplyCrate_F; // CUP_USVehicleBox
// 	class rhsusf_mags_crate; //heavy box

//     class B_REDI_usa_modern_AmmoBox_light : Box_NATO_Ammo_F {
//         author = LT Slatery;
//         displayName = Redeye - USA Ammo Box - Light;
//         class TransportMagazines {
//             mag_xx(1Rnd_SmokeBlue_Grenade_shell,10);
//             mag_xx(1Rnd_SmokeRed_Grenade_shell,10);
//             mag_xx(SmokeShell,10);
//             mag_xx(SmokeShellGreen,5);
//             mag_xx(1Rnd_HE_Grenade_shell,20);
//             mag_xx(rhs_mag_m67,10);
//             mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,25);
//             mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,10);
//             mag_xx(rhsusf_100Rnd_556x45_M855_mixed_soft_pouch,10);
//         };
//         class TransportWeapons {
//         };
//         class TransportItems {
//         };
//     };
// 	class B_REDI_usa_modern_AmmoBox_Heavy : rhsusf_mags_crate {
//         author = LT Slatery;
//         displayName = Redeye - USA Ammo Box - Heavy;
//         class TransportMagazines {
//             mag_xx(1Rnd_SmokeBlue_Grenade_shell,30);
//             mag_xx(1Rnd_SmokeRed_Grenade_shell,30);
//             mag_xx(SmokeShell,25);
//             mag_xx(SmokeShellGreen,15);
//             mag_xx(SmokeShellBlue,15);
//             mag_xx(SmokeShellRed,15);
//             mag_xx(1Rnd_HE_Grenade_shell,40);
//             mag_xx(rhs_mag_m67,25);
//             mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,50);
//             mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,10);
//             mag_xx(rhsusf_100Rnd_556x45_M855_mixed_soft_pouch,15);
//             mag_xx(rhs_magazine_rhsusf_200Rnd_556x45_mixed_box,10);
//         };
//         class TransportWeapons {
//         };
//         class TransportItems {
//         };
//     };
// 	class B_REDI_usa_modern_WeaponsBox_quick : Box_NATO_Wps_F {
//         author = ALiVE ORBAT CREATOR;
//         displayName = Redeye - USA Weapons Box - Essentials;
//         class TransportMagazines {
//             mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,15);
//             mag_xx(1Rnd_HE_Grenade_shell,10);
//             mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,10);
//             mag_xx(rhsusf_100Rnd_556x45_M855_mixed_soft_pouch,10);
//         };
//         class TransportWeapons {};
//         class TransportItems {};
//     };
//     class B_REDI_usa_modern_WeaponsBox : Box_NATO_Wps_F {
//         author = ALiVE ORBAT CREATOR;
//         displayName = Redeye - USA Weapons Box;
//         class TransportMagazines {
//             mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,50);
//             mag_xx(1Rnd_HE_Grenade_shell,50);
//             mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,50);
//             mag_xx(rhsusf_100Rnd_556x45_M855_mixed_soft_pouch,50);
//         };
//         class TransportWeapons {
//             weap_xx(rhs_weap_m4a1_m320,10);
//             weap_xx(rhsusf_weap_m9,10);
//             weap_xx(rhs_weap_m4a1_m203s,10);
//             weap_xx(rhs_weap_m249_pip_L,10);
//             weap_xx(rhs_weap_m4a1_carryhandle,10);
//             weap_xx(rhs_weap_m4,10);
//             weap_xx(rhs_weap_m4a1_m203,10);
//         };
//         class TransportItems {
//             item_xx(rhsusf_acc_anpeq15side_bk,10);
//             item_xx(rhsusf_acc_ACOG_RMR,10);
//             item_xx(rhsusf_acc_compm4,10);
//             item_xx(rhsusf_acc_ELCAN_ard,10);
//             item_xx(rhsusf_acc_anpeq15,10);
//             item_xx(rhsusf_acc_grip3,10);
//             item_xx(rhsusf_acc_eotech_552,10);
//             item_xx(acc_pointer_IR,10);
//             item_xx(rhsusf_acc_g33_xps3,10);
//         };
//     };
//     class B_REDI_usa_modern_LaunchersBox : Box_NATO_WpsLaunch_F {
//         author = ALiVE ORBAT CREATOR;
//         displayName = Redeye - USA Launchers Box;
//         class TransportMagazines {
//         };
//         class TransportWeapons {
//             weap_xx(rhs_weap_M136,5);
//         };
//         class TransportItems {
//         };
//     };
//     class B_REDI_usa_modern_UniformBox : Box_NATO_Uniforms_F {
//         author = ALiVE ORBAT CREATOR;
//         displayName = Redeye - USA Uniform Box;
//         class TransportWeapons {
//         };
//         class TransportMagazines {
//         };
//         class TransportItems {
//             item_xx(rhs_uniform_cu_ocp,15);
//         };
//     };
//     class B_REDI_usa_modern_SupportBox : Box_NATO_Support_F {
//         author = ALiVE ORBAT CREATOR;
//         displayName = Redeye - USA Support Box;
//         class TransportWeapons {
//         };
//         class TransportMagazines {
//         };
//         class TransportItems {
//             item_xx(rhsusf_iotv_ocp_Squadleader,10);
//             item_xx(rhsusf_ach_bare_des_headset_ess,10);
//             item_xx(ItemMap,10);
//             item_xx(ItemCompass,10);
//             item_xx(ItemWatch,10);
//             item_xx(TFAR_anprc152,10);
//             item_xx(ItemGPS,10);
//             item_xx(rhsusf_iotv_ocp_Teamleader,10);
//             item_xx(rhsusf_ach_bare_semi_headset,10);
//             item_xx(rhs_ess_black,10);
//             item_xx(rhsusf_spcs_ocp_squadleader,10);
//             item_xx(rhsusf_ach_helmet_headset_ess_ocp,10);
//             item_xx(rhs_googles_black,10);
//             item_xx(rhsusf_bino_m24,10);
//             item_xx(rhsusf_iotv_ocp_SAW,10);
//             item_xx(rhsusf_ach_helmet_headset_ocp,10);
//             item_xx(G_Tactical_Clear,10);
//             item_xx(TFAR_microdagr,10);
//             item_xx(TFAR_rf7800str,10);
//             item_xx(rhsusf_spcs_ocp_rifleman_alt,10);
//             item_xx(rhsusf_spcs_ocp_rifleman,10);
//             item_xx(rhsusf_ach_helmet_ocp,10);
//             item_xx(rhsusf_spcs_ocp_medic,10);
//             item_xx(rhsusf_mich_bare_tan,10);
//             item_xx(rhsusf_assault_eagleaiii_coy,10);
//             item_xx(Laserdesignator,10);
//             item_xx(rhsusf_spcs_ocp_teamleader_alt,10);
//             item_xx(rhsusf_ach_helmet_camo_ocp,10);
//             item_xx(TFAR_rt1523g_rhs,10);
//             item_xx(B_UavTerminal,10);
//         };
//     };
//     class B_REDI_usa_modern_SupplyBox : B_SupplyCrate_F {
//         author = ALiVE ORBAT CREATOR;
//         displayName = Redeye - USA Supply Box;
//         class TransportMagazines {
//             mag_xx(Chemlight_red,50);
//             mag_xx(1Rnd_SmokeBlue_Grenade_shell,50);
//             mag_xx(1Rnd_SmokeRed_Grenade_shell,50);
//             mag_xx(SmokeShell,50);
//             mag_xx(SmokeShellGreen,50);
//             mag_xx(1Rnd_HE_Grenade_shell,50);
//             mag_xx(rhs_mag_m67,50);
//             mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,50);
//             mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,50);
//             mag_xx(rhsusf_100Rnd_556x45_M855_mixed_soft_pouch,50);
//             mag_xx(HandGrenade,50);
//         };
//         class TransportWeapons {
//             weap_xx(rhs_weap_m4a1_m320,10);
//             weap_xx(rhsusf_weap_m9,10);
//             weap_xx(rhs_weap_m4a1_m203s,10);
//             weap_xx(rhs_weap_m249_pip_L,10);
//             weap_xx(rhs_weap_m4a1_carryhandle,10);
//             weap_xx(rhs_weap_m4,10);
//             weap_xx(rhs_weap_m4a1_m203,10);
//             weap_xx(rhs_weap_M136,10);
//         };
//         class TransportItems {
//             item_xx(rhsusf_acc_anpeq15side_bk,10);
//             item_xx(rhsusf_acc_ACOG_RMR,10);
//             item_xx(rhsusf_acc_compm4,10);
//             item_xx(rhsusf_acc_ELCAN_ard,10);
//             item_xx(rhsusf_acc_anpeq15,10);
//             item_xx(rhsusf_acc_grip3,10);
//             item_xx(rhsusf_acc_eotech_552,10);
//             item_xx(acc_pointer_IR,10);
//             item_xx(rhsusf_acc_g33_xps3,10);
//             item_xx(rhsusf_iotv_ocp_Squadleader,10);
//             item_xx(rhsusf_ach_bare_des_headset_ess,10);
//             item_xx(ItemMap,10);
//             item_xx(ItemCompass,10);
//             item_xx(ItemWatch,10);
//             item_xx(TFAR_anprc152,10);
//             item_xx(ItemGPS,10);
//             item_xx(rhsusf_iotv_ocp_Teamleader,10);
//             item_xx(rhsusf_ach_bare_semi_headset,10);
//             item_xx(rhs_ess_black,10);
//             item_xx(rhsusf_spcs_ocp_squadleader,10);
//             item_xx(rhsusf_ach_helmet_headset_ess_ocp,10);
//             item_xx(rhs_googles_black,10);
//             item_xx(rhsusf_bino_m24,10);
//             item_xx(rhsusf_iotv_ocp_SAW,10);
//             item_xx(rhsusf_ach_helmet_headset_ocp,10);
//             item_xx(G_Tactical_Clear,10);
//             item_xx(TFAR_microdagr,10);
//             item_xx(TFAR_rf7800str,10);
//             item_xx(rhsusf_spcs_ocp_rifleman_alt,10);
//             item_xx(rhsusf_spcs_ocp_rifleman,10);
//             item_xx(rhsusf_ach_helmet_ocp,10);
//             item_xx(rhsusf_spcs_ocp_medic,10);
//             item_xx(rhsusf_mich_bare_tan,10);
//             item_xx(rhsusf_assault_eagleaiii_coy,10);
//             item_xx(Laserdesignator,10);
//             item_xx(rhsusf_spcs_ocp_teamleader_alt,10);
//             item_xx(rhsusf_ach_helmet_camo_ocp,10);
//             item_xx(TFAR_rt1523g_rhs,10);
//             item_xx(B_UavTerminal,10);
//             item_xx(rhs_uniform_cu_ocp,10);
//         };
//     };


