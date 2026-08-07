VermilionCity_House3_Frlg_MapScripts::
	.byte 0

VermilionCity_House3_EventScript_Boy::
	msgbox VermilionCity_House3_Text_PidgeyFlyLetterToSaffron, MSGBOX_NPC
	end

VermilionCity_House3_EventScript_Lass::
	msgbox VermilionCity_House3_Text_SendMyPidgeyToUnionRoom, MSGBOX_NPC
	end

VermilionCity_House3_EventScript_Pidgey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
	msgbox VermilionCity_House3_Text_Pidgey
	waitmoncry
	release
	end

VermilionCity_House3_EventScript_Letter::
	msgbox VermilionCity_House3_Text_DearPippiLetter, MSGBOX_SIGN
	end

VermilionCity_House3_Text_PidgeyFlyLetterToSaffron::
#if GERMAN
	.string "Ich lasse Taubsi einen Brief nach\n"
	.string "{COLOR RED}Saffronia City{COLOR DARK_GRAY} im Norden bringen!$"
#else
	.string "I'm getting my PIDGEY to fly a\n"
	.string "letter to SAFFRON in the north.$"
#endif

VermilionCity_House3_Text_Pidgey::
#if GERMAN
	.string "Taubsi: Taubsi!$"
#else
	.string "PIDGEY: Kurukkoo!$"
#endif

VermilionCity_House3_Text_DearPippiLetter::
#if GERMAN
	.string "Liebe Nikki! Ich hoffe, wir sehen\n"
	.string "uns bald wieder!\p"
	.string "Wie ich höre, stiftet das Team\n"
	.string "Rocket in Saffronia City Unruhe!\p"
	.string "In Orania City scheint es sicher\n"
	.string "zu sein.$"
#else
	.string "Dear PIPPI,\n"
	.string "I hope to see you soon.\p"
	.string "I heard SAFFRON has problems with\n"
	.string "TEAM ROCKET.\p"
	.string "VERMILION appears to be safe.$"
#endif

VermilionCity_House3_Text_SendMyPidgeyToUnionRoom::
#if GERMAN
	.string "Ich möchte mit allen Menschen\n"
	.string "Briefe austauschen.\p"
	.string "Ich schicke mein Taubsi in einen\n"
	.string "Konnex-Klub, um Briefe\l"
	.string "für mich auszutauschen.$"
#else
	.string "I want to exchange MAIL with all\n"
	.string "sorts of people.\p"
	.string "I send my PIDGEY to a UNION ROOM\n"
	.string "to exchange MAIL for me.$"
#endif

