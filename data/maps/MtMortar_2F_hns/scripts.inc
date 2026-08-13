MtMortar_2F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtMortar_2F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtMortar_2F_OnTransition:
	callnative SetTimeBasedEncounters
	end

MtMortar_2F_EventScript_Item_Iron::
    finditem ITEM_IRON
    end

MtMortar_2F_EventScript_Item_MaxRevive::
    finditem ITEM_MAX_REVIVE
    end

MtMortar_2F_EventScript_Item_Ether::
    finditem ITEM_ETHER
    end

MtMortar_2F_EventScript_Item_RareCandy::
    finditem ITEM_RARE_CANDY
    end

MtMortar_2F_EventScript_Item_DragonScale::
    finditem ITEM_DRAGON_SCALE
    end

MtMortar_2F_EventScript_Item_Elixir::
    finditem ITEM_ELIXIR
    end

MtMortar_2F_EventScript_Nerd::
	trainerbattle_single TRAINER_HUGH_HNS, MtMortar_2F_Text_SupernerdHughSeen, MtMortar_2F_Text_SupernerdHughBeaten
	msgbox MtMortar_2F_Text_SupernerdHughAfter, MSGBOX_AUTOCLOSE
	end

MtMortar_2F_Text_SupernerdHughSeen::
#if GERMAN
	.string "Yo! Urban!$"
#else
	.string "Yo! MARKUS!$"
#endif

MtMortar_2F_Text_SupernerdHughBeaten:
#if GERMAN
	.string "Sorry, mein Fehler.\n"
	.string "Ich hab dich mit jemandem verwechselt.$"
#else
	.string "Sorry, my mistake.\n"
	.string "I misjudged you.$"
#endif

MtMortar_2F_Text_SupernerdHughAfter:
#if GERMAN
	.string "Ich untersuche den Kesselberg, aber\n"
	.string "mein Kumpel ist verschwunden.\p"
	.string "Hast du einen Trainer gesehen, dessen\n"
	.string "Flegmon Stärke einsetzen kann?$"
#else
	.string "I'm investigating MT.MORTAR,\n"
	.string "but my pal's gone AWOL.\p"
	.string "Have you seen a trainer who\n"
	.string "has a SLOWPOKE that can use\l"
	.string "STRENGTH?$"
#endif
