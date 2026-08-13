ApricornTreeScript::
	lock
	faceplayer
	message ApricornTree_Text_Intro
	waitmessage
	waitbuttonpress
	special ObjectEventInteractionGetApricornTreeData
	goto_if_gt VAR_0x8005, 0, ApricornTree_EventScript_WantToPick
	message ApricornTree_Text_Empty
	waitmessage
	waitbuttonpress
	release
	end

ApricornTree_EventScript_WantToPick::
	buffernumberstring STR_VAR_2, VAR_0x8005
	msgbox ApricornTree_Text_WantToPick, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, ApricornTree_EventScript_PickApricorn
	goto_if_eq VAR_RESULT, NO, ApricornTree_EventScript_CancelPickingApricorn

.set APRICORN_NORMAL_BAG_FULL, 0
.set APRICORN_NORMAL_SPACE_IN_BAG, 1

ApricornTree_EventScript_PickApricorn::
	special ObjectEventInteractionPickApricornTree
	call EventScript_BufferPocketNameAndTryFanfare
	goto_if_eq VAR_0x8006, APRICORN_NORMAL_BAG_FULL, ApricornTree_EventScript_PocketFull
	message ApricornTree_Text_PickedTheApricorn
.if OW_SHOW_ITEM_DESCRIPTIONS != OW_ITEM_DESCRIPTIONS_OFF
	copyvar VAR_0x8006 VAR_0x8004
.endif
	delay 10
.if OW_SHOW_ITEM_DESCRIPTIONS != OW_ITEM_DESCRIPTIONS_OFF
	showberrydescription
.endif
	playfanfare MUS_OBTAIN_BERRY
	waitmessage
	waitfanfare
	waitbuttonpress
	message ApricornTree_Text_PutAwayApricorn
	waitmessage
	waitbuttonpress
.if OW_SHOW_ITEM_DESCRIPTIONS != OW_ITEM_DESCRIPTIONS_OFF
	hideitemdescription
.endif
	release
	end

ApricornTree_EventScript_PocketFull::
	message ApricornTree_Text_PocketFull
	waitmessage
	waitbuttonpress
	release
	end

ApricornTree_EventScript_CancelPickingApricorn::
	message ApricornTree_Text_ApricornLeftUnpicked
	waitmessage
	waitbuttonpress
	release
	end

ApricornTree_Text_Intro:
#if GERMAN
	.string "Hier steht ein Aprikokobaum!$"
#else
	.string "It's an Apricorn Tree!$"
#endif

ApricornTree_Text_Empty:
#if GERMAN
	.string "Der Baum trägt keine Früchte…$"
#else
	.string "There are no Apricorns…$"
#endif

ApricornTree_Text_WantToPick:
#if GERMAN
	.string "{STR_VAR_2} {STR_VAR_1}!\p"
	.string "Möchtest du die {STR_VAR_1} pflücken?$"
#else
	.string "…It's {STR_VAR_2} {STR_VAR_1}!\n"
	.string "Do you want to pick the\l"
	.string "{STR_VAR_1}?$"
#endif

ApricornTree_Text_PickedTheApricorn:
#if GERMAN
	.string "{PLAYER} pflückt die {STR_VAR_2}\n"
	.string "{STR_VAR_1}.$"
#else
	.string "{PLAYER} obtained\n"
	.string "{STR_VAR_2} {STR_VAR_1}.$"
#endif

ApricornTree_Text_PutAwayApricorn:
#if GERMAN
	.string "{PLAYER} packt {STR_VAR_1} in die\n"
	.string "{STR_VAR_3}-Tasche.$"
#else
	.string "{PLAYER} put away the\n"
	.string "{STR_VAR_1} in\l"
	.string "the BAG's {STR_VAR_3} POCKET.$"
#endif

ApricornTree_Text_PocketFull:
#if GERMAN
	.string "Die {STR_VAR_3}-Tasche ist voll.\p"
	.string "{PLAYER} kann die {STR_VAR_1} nicht\n"
	.string "pflücken…$"
#else
	.string "The BAG's {STR_VAR_3} POCKET is full.\p"
	.string "{PLAYER} gave up on the\n"
	.string "{STR_VAR_1}…$"
#endif

ApricornTree_Text_ApricornLeftUnpicked:
#if GERMAN
	.string "{PLAYER} pflückt keine {STR_VAR_1}.$"
#else
	.string "{PLAYER} gave up on the\n"
	.string "{STR_VAR_1}…$"
#endif
