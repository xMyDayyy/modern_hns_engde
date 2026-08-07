SlateportCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SlateportCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

SlateportCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_SLATEPORT_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_Sailor::
	msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
	end

SlateportCity_PokemonCenter_1F_EventScript_Woman::
	msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
	end

SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon:
#if GERMAN
	.string "Möchtest du einen Tipp?\p"
	.string "Ich sage dir, es ist wichtig, die\l"
	.string "unter-\n"
	.string "schiedlichsten Pokémon zu trainieren.\p"
	.string "\p"
	.string "Gleichmäßigkeit ist wichtig. Ein\n"
	.string "einzelnes starkes Pokémon reicht\l"
	.string "nicht.\p"
	.string "Wenn es vom Typ her Nachteile besitzt,\n"
	.string "kann auch ein sehr starkes Pokémon\l"
	.string "einen Kampf verlieren.$"
#else
	.string "Want a tip for battling?\p"
	.string "I'd say it's raising different kinds\n"
	.string "of POKéMON in a balanced manner.\p"
	.string "It's no good to make just one\n"
	.string "POKéMON strong.\p"
	.string "If it has a type disadvantage,\n"
	.string "it might not stand a chance.$"
#endif

SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend:
#if GERMAN
	.string "Ich tausche mit Freunden Pokémon.\p"
	.string "Und wenn ein getauschtes Pokémon ein\n"
	.string "Item trägt, bin ich umso glücklicher!$"
#else
	.string "I trade POKéMON with my friends.\p"
	.string "If a traded POKéMON is holding an\n"
	.string "item, it makes me twice as happy!$"
#endif

