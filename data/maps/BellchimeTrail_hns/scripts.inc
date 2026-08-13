BellchimeTrail_hns_MapScripts::
	.byte 0


BellchimeTrail_EventScript_Morty::
	lock
	faceplayer
	msgbox BellchimeTrail_Text_Morty, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_HIDE_BELLCHIME_MORTY
	removeobject LOCALID_BELLCHIME_MORTY
	fadescreenswapbuffers FADE_FROM_BLACK
	clearflag FLAG_HIDE_DOJO_MORTY
	release
	end

BellchimeTrail_Text_Morty:
#if GERMAN
	.string "Jens: Das Legendäre Pokémon hat mich\n"
	.string "nicht auserwählt…\p"
	.string "Aber deshalb muss ich ja nicht\n"
	.string "sofort das Handtuch werfen.\p"
	.string "Ich trainiere einfach weiter, bis\n"
	.string "sich ein neues Ziel vor mir auftut.\p"
	.string "Was sagst du? Wollen wir nicht ab\n"
	.string "und zu gemeinsam trainieren?$"
#else
	.string "MORTY: The legendary POKéMON\n"
	.string "did not choose me...\p"
	.string "But that does not mean that I\n"
	.string "have lost out on my future.\p"
	.string "I will continue my training until I\n"
	.string "I discover a new future for me.\p"
	.string "If you seek another battle, find\n"
	.string "me at the FIGHTING DOJO.$"
#endif

EcruteakBellchimeTrail_EventScript_Item_BigMushroom::
	finditem ITEM_BIG_MUSHROOM
	end

EcruteakBellchimeTrail_EventScript_DoorTrigger::
	lock
	opendoor 28, 12
	waitdooranim
	addobject OBJ_EVENT_ID_CAMERA
	removeobject OBJ_EVENT_ID_PLAYER
	closedoor 28, 12
	applymovement OBJ_EVENT_ID_CAMERA, EcruteakBellchimeTrail_Movement_CameraPanUp
	waitmovement 0
	warp MAP_TIN_TOWER_1F_HNS, 1
	release
	end

EcruteakBellchimeTrail_Movement_CameraPanUp::
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	step_end
