SaffronCity_CopyCatsHouse_1F_hns_MapScripts::
	.byte 0

SaffronCity_CopyCatsHouse_1F_EventScript_Mom::
	goto_if_set FLAG_RETURNED_MACHINE_PART, SaffronCity_CopyCatsHouse_1F_EventScript_MomAfter
	msgbox CopycatsHouse1F_Text_PokefanF, MSGBOX_NPC
	end

SaffronCity_CopyCatsHouse_1F_EventScript_MomAfter::
	msgbox CopycatsHouse1F_Text_PokefanF_ReturnedPart, MSGBOX_NPC
	end

SaffronCity_CopyCatsHouse_1F_EventScript_Dad::
	msgbox CopycatsHouse1F_Text_PokefanM, MSGBOX_NPC
	end

SaffronCity_CopyCatsHouse_1F_EventScript_Blissey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
	msgbox CopycatsHouse1F_Text_Blissey, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CopycatsHouse1F_Text_PokefanM:
#if GERMAN
	.string "Sehr zu meinem Leidwesen ahmt meine\n"
	.string "Tochter gerne andere Leute nach.\p"
	.string "Keine Minute vergeht, in der sie normal\n"
	.string "mit mir spricht. Die Nachbarn nennen sie\l"
	.string "sogar schon die “Nachahmerin”!$"
#else
	.string "My daughter likes to mimic people.\p"
	.string "Her mimicry has earned her the\n"
	.string "nickname COPYCAT around here.$"
#endif

CopycatsHouse1F_Text_PokefanF:
#if GERMAN
	.string "Meine Tochter ist sehr ichbezogen…\p"
	.string "Sie hat nur wenige Freunde.$"
#else
	.string "My daughter is so self-centered…\p"
	.string "She only has a few friends.$"
#endif

CopycatsHouse1F_Text_PokefanF_ReturnedPart:
#if GERMAN
	.string "Seit sie die Poképuppe verloren hat, die\n"
	.string "sie vor drei Jahren von einem Jungen\l"
	.string "geschenkt bekommen hatte, wurde es mit\l"
	.string "ihrer Nachahmerei noch viel schlimmer.\p"
	.string "Sie wurde einfach immer besser darin…$"
#else
	.string "She recently lost the POKé DOLL\n"
	.string "that a boy gave her three years\l"
	.string "ago.\p"
	.string "Ever since then, she's gotten even\n"
	.string "better at mimicry…$"
#endif

CopycatsHouse1F_Text_Blissey:
#if GERMAN
	.string "Heiteira: Hei! Teira!$"
#else
	.string "BLISSEY: Bliisii!$"
#endif
