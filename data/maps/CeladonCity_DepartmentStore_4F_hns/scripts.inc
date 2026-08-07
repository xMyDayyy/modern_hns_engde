CeladonCity_DepartmentStore_4F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonDeptElevator_OnFrame
	.byte 0

CeladonDept_EventScript_Supernerd::
	msgbox CeladonDeptStore4F_Text_SuperNerd, MSGBOX_NPC
	end
CeladonDept_EventScript_Youngster::
	msgbox CeladonDeptStore4F_Text_Youngster, MSGBOX_NPC
	end
CeladonDept_EventScript_Directory::
	msgbox CeladonDeptStore4F_Text_Directory, MSGBOX_NPC
	end

CeladonDeptStore4F_Text_SuperNerd:
#if GERMAN
	.string "Ich bin hier um einen Surferbrief\n"
	.string "für meine Freundin zu bekommen.\p"
	.string "Warte, die sind ausverkauft?$"
#else
	.string "I'm here to buy SURF MAIL to send\n"
	.string "to my girlfriend.\p"
	.string "Wait, they're out of stock?$"
#endif

CeladonDeptStore4F_Text_Youngster:
#if GERMAN
	.string "Dies ist der einzige Ort,\n"
	.string "um Herzbrief zu kaufen.\p"
	.string "Zumindest war er das. Angeblich\n"
	.string "ist die Ware ausverkauft.$"
#else
	.string "This is the only place where you\n"
	.string "can buy LOVELY MAIL.\p"
	.string "At least it was. They are saying\n"
	.string "they are out of stock.$"
#endif

CeladonDeptStore4F_Text_Directory:
#if GERMAN
	.string "Lass ein Geschenk für dich sprechen!\n"
	.string "3S: Geschenkartikel$"
#else
	.string "Express Yourself With Gifts!\p"
	.string "4F: WISEMAN GIFTS$"
#endif
