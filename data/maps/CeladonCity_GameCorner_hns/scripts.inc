CeladonCity_GameCorner_hns_MapScripts::
	.byte 0

CeladonGameCorner_EventScript_PokefanM::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_PokefanM, MSGBOX_NPC
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

CeladonGameCorner_EventScript_Teacher::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_Teacher, MSGBOX_NPC
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
	waitmovement 0
	release
	end

CeladonGameCorner_EventScript_FishingGuru::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_FishingGuru, MSGBOX_NPC
	closemessage
	release
	end

CeladonGameCorner_EventScript_Fisher1::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_Fisher1, MSGBOX_NPC
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

CeladonGameCorner_EventScript_Fisher2::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_Fisher2, MSGBOX_NPC
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

CeladonGameCorner_EventScript_GymGuide::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_GymGuide, MSGBOX_NPC
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
	waitmovement 0
	release
	end

CeladonGameCorner_EventScript_Gramps::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_Gramps, MSGBOX_NPC
	closemessage
	release
	end

CeladonGameCorner_EventScript_PokefanF::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_PokefanF, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
	waitmovement 0
	release
	end

CeladonGameCorner_EventScript_Woman::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_Woman, MSGBOX_DEFAULT
	closemessage
	release
	end

CeladonGameCorner_Text_PokefanM:
#if GERMAN
	.string "Die Spielautomaten sind alle auf\n"
	.string "dem neuesten Stand.$"
#else
	.string "The slot machines are all state\n"
	.string "of the art.$"
#endif

CeladonGameCorner_Text_Teacher:
#if GERMAN
	.string "Genau diese Maschine will ich.\p"
	.string "Gestern hat sie mich leergeräumt,\n"
	.string "heute sollte sie auszahlen.$"
#else
	.string "It's this machine I want.\p"
	.string "It cleaned me out yesterday, so it\n"
	.string "should pay out today.$"
#endif

CeladonGameCorner_Text_FishingGuru:
#if GERMAN
	.string "Ich glaube, dieser Spielautomat wird\n"
	.string "auszahlen…\p"
	.string "Die Chancen unterscheiden sich bei den\n"
	.string "Maschinen.$"
#else
	.string "I think this slot machine will pay\n"
	.string "out…\p"
	.string "The odds vary among machines.$"
#endif

CeladonGameCorner_Text_Fisher1:
#if GERMAN
	.string "Gahahaha!\p"
	.string "Die Münzen kommen einfach immer wieder\n"
	.string "heraus!\p"
	.string "Hm? Was, Junge? Willst du spielen?\p"
	.string "Ich teile mein Glück mit dir!$"
#else
	.string "Gahahaha!\p"
	.string "The coins just keep coming in!\p"
	.string "Hm? What, kid? You want to play?\p"
	.string "I'll share my luck with you!$"
#endif

CeladonGameCorner_Text_Fisher2:
#if GERMAN
	.string "Gahahaha!\p"
	.string "Es macht mich froh, anderen Leuten\n"
	.string "eine Freude zu bereiten!$"
#else
	.string "Gahahaha!\p"
	.string "It makes me feel good to do nice\n"
	.string "things for other people!$"
#endif

CeladonGameCorner_Text_GymGuide:
#if GERMAN
	.string "Hey! Künftiger Champ!\p"
	.string "Spielst du auch an den Spielautomaten?\p"
	.string "Ich versuche, genug Münzen für\n"
	.string "ein Preis-Pokémon zu bekommen.\p"
	.string "Aber ich habe noch nicht genug Münzen…$"
#else
	.string "Hey! CHAMP in making!\p"
	.string "Are you playing the slots too?\p"
	.string "I'm trying to get enough coins for\n"
	.string "a prize POKéMON.\p"
	.string "But I don't have enough coins yet…$"
#endif

CeladonGameCorner_Text_PokefanF:
#if GERMAN
	.string "Roulette…\p"
	.string "Ich mag die Slots lieber, da ist es\n"
	.string "leichter, die Chancen auszurechnen.$"
#else
	.string "Roulette…\p"
	.string "I prefer it over the slots because\n"
	.string "it's easier to figure the odds.\p"
	.string "But the payout is much lower.$"
#endif

CeladonGameCorner_Text_Gramps:
#if GERMAN
	.string "Hmmm… Die Chancen sind sicher besser\n"
	.string "für Pikachus Linie, aber… was tun?$"
#else
	.string "Hmmm… The odds are surely\n"
	.string "better putting it all on blue,\l"
	.string "but… what to do?$"
#endif

CeladonGameCorner_Text_Woman:
#if GERMAN
	.string "Ich kann nicht aufhören zu gewinnen!$"
#else
	.string "I can't stop winning!$"
#endif
