AzaleaTown_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AzaleaTown_Pokecenter_OnTransition
	.byte 0

AzaleaTown_Pokecenter_OnTransition::
	setrespawn HEAL_LOCATION_AZALEA_TOWN_HNS
	end

AzaleaPokeCenter_EventScript_Gentleman::
	lock
	faceplayer
	msgbox AzaleaPokecenter_Text_Gentleman, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaPokeCenter_EventScript_Fisher::
	lock
	faceplayer
	msgbox AzaleaPokecenter_Text_FishingGuru, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaPokeCenter_EventScript_PokefanF::
	lock
	faceplayer
	msgbox AzaleaPokecenter_Text_PokefanF, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaPokecenter_Text_Gentleman:
#if GERMAN
	.string "Können deine Pokémon VM-Attacken?\p"
	.string "Diese können benutzt werden, sogar\n"
	.string "wenn dein Pokémon außer Gefecht ist.$"
#else
	.string "Do your POKéMON know HM moves?\p"
	.string "Those moves can be used even if\n"
	.string "your POKéMON has fainted.$"
#endif

AzaleaPokecenter_Text_UnusedPCExplanation:
#if GERMAN
	.string "Dieser Bill hat das\n"
	.string "Pokémon-Lagerungssystem für PC\l"
	.string "entwickelt.\p"
	.string "Auf Bills PC können bis zu 30 Pokémon\n"
	.string "pro Box gelagert werden.$"
#else
	.string "This BILL guy created the system\n"
	.string "for storing POKéMON in a PC.\p"
	.string "BILL's PC can store up to 30\n"
	.string "POKéMON per BOX.$"
#endif

AzaleaPokecenter_Text_FishingGuru:
#if GERMAN
	.string "Das Pokémon-Lagerungssystem, das Bill\n"
	.string "erfunden hat, erlaubt es dir, bis zu 30\l"
	.string "Pokémon in einer Box zu lagern!$"
#else
	.string "BILL's PC can store up to 30\n"
	.string "POKéMON per BOX.$"
#endif

AzaleaPokecenter_Text_PokefanF:
#if GERMAN
	.string "Weißt du über Beeren Bescheid?\p"
	.string "Brich eine auf und höhle sie aus und\n"
	.string "verbinde sie mit einer speziellen\l"
	.string "Vorrichtung.\p"
	.string "Dann kannst du Pokémon damit fangen.\p"
	.string "Vor der Erfindung von Pokébällen\n"
	.string "hat jeder Beeren verwendet.$"
#else
	.string "Do you know about BERRIES?\p"
	.string "Crack one open, hollow it out and\n"
	.string "fit it with a special device.\p"
	.string "Then you can catch POKéMON with it.\p"
	.string "Before POKé BALLS were invented,\n"
	.string "everyone used BERRIES.$"
#endif
