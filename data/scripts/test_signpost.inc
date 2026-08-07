Text_ThisIsATestSignpostMsg::
#if GERMAN
	.string "Dies ist ein Test.\n"
	.string "Ein Schild.$"
#else
	.string "This is a test message.\n"
	.string "This is a signpost.$"
#endif

EventScript_TestSignpostMsg::
	msgbox Text_ThisIsATestSignpostMsg, MSGBOX_SIGN
	end
