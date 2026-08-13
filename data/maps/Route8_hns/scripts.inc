Route8_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route8_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route8_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route8_EventScript_Dwayne::
	trainerbattle_single TRAINER_DWAYNE_HNS, Route8_Text_BikerDwayneSeen, Route8_Text_BikerDwayneBeaten
	msgbox Route8_Text_BikerDwayneAfter, MSGBOX_AUTOCLOSE
	end

Route8_EventScript_Harris::
	trainerbattle_single TRAINER_HARRIS_HNS, Route8_Text_BikerHarrisSeen, Route8_Text_BikerHarrisBeaten
	msgbox Route8_Text_BikerHarrisAfter, MSGBOX_AUTOCLOSE
	end

Route8_EventScript_Zeke::
	trainerbattle_single TRAINER_ZEKE_HNS, Route8_Text_BikerZekeSeen, Route8_Text_BikerZekeBeaten
	msgbox Route8_Text_BikerZekeAfter, MSGBOX_AUTOCLOSE
	end

Route8_EventScript_Sam::
	trainerbattle_single TRAINER_SAM_HNS, Route8_Text_SupernerdSamSeen, Route8_Text_SupernerdSamBeaten
	msgbox Route8_Text_SupernerdSamAfter, MSGBOX_AUTOCLOSE
	end

Route8_EventScript_Tom::
	trainerbattle_single TRAINER_TOM_HNS, Route8_Text_SupernerdTomSeen, Route8_Text_SupernerdTomBeaten
	msgbox Route8_Text_SupernerdTomAfter, MSGBOX_AUTOCLOSE
	end

Route8_Text_BikerDwayneSeen:
#if GERMAN
	.string "Wir repräsentieren die\n"
	.string "Pokémon-Trainergilde aus Kanto.\l"
	.string "Einen wie dich erledigen wir mit links!$"
#else
	.string "We're the KANTO POKéMON FEDERATION\n"
	.string "trainer group.\p"
	.string "We'll drive you under our wheels!$"
#endif

Route8_Text_BikerDwayneBeaten:
#if GERMAN
	.string "E-entschuldigung!$"
#else
	.string "S-sorry!$"
#endif

Route8_Text_BikerDwayneAfter:
#if GERMAN
	.string "Die Pokémon-Trainergilde aus Kanto\n"
	.string "wird niemals untergehen!$"
#else
	.string "The KANTO POKéMON FEDERATION will\n"
	.string "never fall!$"
#endif

Route8_Text_BikerHarrisSeen:
#if GERMAN
	.string "Das Ordnungsamt hat unseren\n"
	.string "Tunnelpfad zuschütten lassen.\l"
	.string "Uuuh, das macht mich ganz rasend!$"
#else
	.string "The cops shut down our\n"
	.string "UNDERGROUND PATH!\p"
	.string "That really fries me!$"
#endif

Route8_Text_BikerHarrisBeaten:
#if GERMAN
	.string "V-vergib mir!$"
#else
	.string "F-forgive me!$"
#endif

Route8_Text_BikerHarrisAfter:
#if GERMAN
	.string "In die Schranken gewiesen\n"
	.string "von einem Rowdy aus Johto…$"
#else
	.string "Wiped out by some punk from\n"
	.string "JOHTO…$"
#endif

Route8_Text_BikerZekeSeen:
#if GERMAN
	.string "Wir sind die Pokémon-Trainergilde aus\n"
	.string "Kanto! Nimm dich in Acht!$"
#else
	.string "We're the KANTO POKéMON FEDERA-\n"
	.string "TION!\n"
	.string "Right on!$"
#endif

Route8_Text_BikerZekeBeaten:
#if GERMAN
	.string "E-entschuldige!$"
#else
	.string "Yikes! Sorry!$"
#endif

Route8_Text_BikerZekeAfter:
#if GERMAN
	.string "Wir werden unser Bestes geben, von nun\n"
	.string "an niemandem mehr Ärger zu bereiten…\l"
	.string "wirklich!$"
#else
	.string "We'll try not to disturb anyone\n"
	.string "from now on…$"
#endif

Route8_Text_SupernerdSamSeen:
#if GERMAN
	.string "Möchte zu gerne mal wissen, wie\n"
	.string "dieser Magnetzug funktioniert!$"
#else
	.string "How does the MAGNET TRAIN work?$"
#endif

Route8_Text_SupernerdSamBeaten:
#if GERMAN
	.string "Ich möchte nur den Magnetzug sehen…$"
#else
	.string "I just want to see the MAGNET\n"
	.string "TRAIN…$"
#endif

Route8_Text_SupernerdSamAfter:
#if GERMAN
	.string "Die Kraft von Magneten\n"
	.string "ist schon beeindruckend!$"
#else
	.string "The power of magnets is awesome!$"
#endif

Route8_Text_SupernerdTomSeen:
#if GERMAN
	.string "Toll… du hast aber\n"
	.string "viele Orden!$"
#else
	.string "Hm… You've got many GYM BADGES.$"
#endif

Route8_Text_SupernerdTomBeaten:
#if GERMAN
	.string "Wie ich dachte…\n"
	.string "Du bist stark!$"
#else
	.string "Just as I thought… You're tough!$"
#endif

Route8_Text_SupernerdTomAfter:
#if GERMAN
	.string "Arena-Orden verleihen Vorteile\n"
	.string "in Kämpfen.$"
#else
	.string "GYM BADGES give you advantages in\n"
	.string "battles.$"
#endif

Route8_Text_LockedDoor:
#if GERMAN
	.string "Abgeschlossen…$"
#else
	.string "It's locked…$"
#endif

Route8_Text_UndergroundPathSign:
#if GERMAN
	.string "Das Flugblatt ist zerrissen.\p"
	.string "Es ist nicht mehr lesbar…$"
#else
	.string "The flyer's torn.\p"
	.string "It's impossible to read…$"
#endif
