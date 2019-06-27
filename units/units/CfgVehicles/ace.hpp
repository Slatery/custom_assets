class Man;
class CAManBase: Man {
	class ACE_SelfActions {
		class ACE_MapDagr {
			displayName = "Dagr Config";
			icon = "\z\ace\addons\dagr\UI\DAGR_Icon.paa";
			condition = "visibleMap and ('ACE_DAGR' in (items player))";
			statement = "call ace_dagr_fnc_menuInit";
			exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			showDisabled = 0;

			class ACE_MapDagr_ALL {
				displayName = "Prefix ALL";
				condition = "(count DAGR_Marker_Prefix) <=1";
				statement = "DAGR_Marker_Prefix = DAGR_Marker_Prefix_ALL";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_ExcalmationMark {
				displayName = "Prefix !";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""!""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_Hash {
				displayName = "Prefix #";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""#""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_Dollar {
				displayName = "Prefix $";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""$""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_Percentage {
				displayName = "Prefix %";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""%""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_Carrot {
				displayName = "Prefix ^";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""^""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_And {
				displayName = "Prefix &";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""&""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_Asterisk {
				displayName = "Prefix *";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""*""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_Underscore {
				displayName = "Prefix _";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""_""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_minus {
				displayName = "Prefix -";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""-""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_plus {
				displayName = "Prefix +";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""+""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
		};
		class ACE_Equipment {
			#include "replace_actions.hpp"
		};
	};
};