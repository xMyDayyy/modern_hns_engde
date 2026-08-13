VioletCity_House2_hns_MapScripts::
	.byte 0

VioletCity_House2_EventScript_Lass::
	lock
	faceplayer
	msgbox VioletCity_NicknameHouse_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_House2_EventScript_Teacher::
	lock
	faceplayer
	msgbox VioletCity_NicknameHouse_Text_Teacher, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_House2_EventScript_Pidgey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
	msgbox VioletCity_NicknameHouse_Text_Bird, MSGBOX_DEFAULT
	waitmoncry
	release
	end

VioletCity_NicknameHouse_Text_Teacher:
#if GERMAN
	.string "Sie verwendet die Namen ihrer\n"
	.string "Lieblingsspeisen, als Spitznamen für\l"
	.string "ihre Pokémon.\p"
	.string "So süß.$"
#else
	.string "She uses the names of her\n"
	.string "favorite things to eat.\p"
	.string "For the nicknames she gives to\n"
	.string "her POKéMON, I mean.$"
#endif

VioletCity_NicknameHouse_Text_Lass:
#if GERMAN
	.string "Mein Taubsi heißt Erdbeere!$"
#else
	.string "I call my PIDGEY STRAWBERRY!$"
#endif

VioletCity_NicknameHouse_Text_Bird:
#if GERMAN
	.string "Erdbeere: Tataubsi!$"
#else
	.string "STRAWBERRY: Pijji!$"
#endif
