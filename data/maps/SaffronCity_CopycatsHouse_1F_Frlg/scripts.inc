SaffronCity_CopycatsHouse_1F_Frlg_MapScripts::
	.byte 0

SaffronCity_CopycatsHouse_1F_EventScript_CopycatsMom::
	msgbox SaffronCity_CopycatsHouse_1F_Text_DaughterIsSelfCentered, MSGBOX_NPC
	end

SaffronCity_CopycatsHouse_1F_EventScript_CopycatsDad::
	msgbox SaffronCity_CopycatsHouse_1F_Text_DaughterLikesToMimicPeople, MSGBOX_NPC
	end

SaffronCity_CopycatsHouse_1F_EventScript_Chansey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
	msgbox SaffronCity_CopycatsHouse_1F_Text_Chansey
	waitmoncry
	release
	end

SaffronCity_CopycatsHouse_1F_Text_DaughterIsSelfCentered::
#if GERMAN
	.string "Meine Tochter ist furchtbar\n"
	.string "schüchtern! Sie hat nur wenige\l"
	.string "Freunde!$"
#else
	.string "My daughter is so self-centered.\n"
	.string "She has but a few friends.$"
#endif

SaffronCity_CopycatsHouse_1F_Text_DaughterLikesToMimicPeople::
#if GERMAN
	.string "Meine Tochter ahmt gerne Leute\n"
	.string "nach.\p"
	.string "Wegen ihres Mienenspiels nennt man\n"
	.string "sie die Nachahmerin!$"
#else
	.string "My daughter likes to mimic people.\n"
	.string "It's rather vexing.\p"
	.string "Her mimicry has earned her the\n"
	.string "nickname COPYCAT around here.$"
#endif

SaffronCity_CopycatsHouse_1F_Text_Chansey::
#if GERMAN
	.string "Chaneira: Cha! Neera!$"
#else
	.string "CHANSEY: Chaan! Sii!$"
#endif

