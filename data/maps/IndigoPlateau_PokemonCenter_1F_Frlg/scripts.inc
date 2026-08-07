IndigoPlateau_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

IndigoPlateau_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_INDIGO_PLATEAU
	specialvar VAR_RESULT, IsNationalPokedexEnabled
	call_if_eq VAR_RESULT, TRUE, IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor
	end

IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor::
	goto_if_set FLAG_IS_CHAMPION, Common_EventScript_NopReturn
	setobjectxyperm LOCALID_LEAGUE_DOOR_GUARD, 4, 2
	return

IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard::
	lock
	faceplayer
	specialvar VAR_RESULT, IsNationalPokedexEnabled
	goto_if_eq VAR_RESULT, TRUE, IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
	release
	end

IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete::
	goto_if_set FLAG_IS_CHAMPION, IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete
	msgbox IndigoPlateau_PokemonCenter_1F_Text_LoreleiIsAbsentClosedForTimeBeing
	release
	end

IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete::
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
	release
	end

IndigoPlateau_PokemonCenter_1F_EventScript_GymGuy::
	msgbox IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice, MSGBOX_NPC
	end

IndigoPlateau_PokemonCenter_1F_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart IndigoPlateau_PokemonCenter_1F_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
IndigoPlateau_PokemonCenter_1F_Items::
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_MAX_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
	release
	end

IndigoPlateau_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice::
#if GERMAN
	.string "Heh!\n"
	.string "Warte, du Champion in spe!\p"
	.string "In der Pokémon Liga trittst du\n"
	.string "gegen die Top Vier nacheinander\l"
	.string "an.\p"
	.string "Wenn du einen Kampf verlierst,\n"
	.string "musst du ganz von vorne beginnen!$"
#else
	.string "Yo!\n"
	.string "Champ in the making!\p"
	.string "At the POKéMON LEAGUE, you will\n"
	.string "face the ELITE FOUR all in a row.\p"
	.string "If you lose, you have to start all\n"
	.string "over again!\p"
	.string "This is it!\n"
	.string "Go for it!$"
#endif

IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck::
#if GERMAN
	.string "Ab jetzt triffst du nacheinander\n"
	.string "auf die Top Vier!\p"
	.string "Wenn du einen Kampf gewinnst, wird\n"
	.string "der Weg zum nächsten Trainer\l"
	.string "freigegeben! Viel Glück!$"
#else
	.string "From here on, you face the\n"
	.string "ELITE FOUR one by one.\p"
	.string "If you win, a door opens to the\n"
	.string "next TRAINER. Good luck!$"
#endif

IndigoPlateau_PokemonCenter_1F_Text_LoreleiIsAbsentClosedForTimeBeing::
#if GERMAN
	.string "Es tut mir Leid, aber du hast deine\n"
	.string "Zeit verschwendet, hier\l"
	.string "herzukommen.\l"
	.string "Lorelei von den Top Vier ist\l"
	.string "nicht zugegen, weißt du!\p"
	.string "Daher ist die Pokémon Liga\n"
	.string "vorübergehend geschlossen.$"
#else
	.string "I am so sorry, but you've wasted\n"
	.string "your time coming here.\p"
	.string "LORELEI of the ELITE FOUR is\n"
	.string "absent, you see.\p"
	.string "As a result, the POKéMON LEAGUE is\n"
	.string "closed for the time being.$"
#endif

IndigoPlateau_PokemonCenter_1F_Text_AgathaWhuppedUs::
#if GERMAN
	.string "Agathes Geist-Pokémon\n"
	.string "sind erschreckend hartnäckig.\p"
	.string "Ich habe meine Kampf-Pokémon\n"
	.string "bis zum Äußersten trainiert.\p"
	.string "Ich bin selbstbewusst zu Agathe\n"
	.string "gegangen, aber sie hat uns mit\l"
	.string "Leichtigkeit besiegt.\l"
	.string "Die alte Dame ist auch leicht\l"
	.string "zu verärgern.\p"
	.string "Es bedarf nur einer Bagatelle und\n"
	.string "die Angst einflößende Dame\l"
	.string "legt los.$"
#else
	.string "AGATHA's GHOST-type POKéMON are\n"
	.string "horrifically terrifying in toughness.\p"
	.string "I took my FIGHTING-type POKéMON\n"
	.string "and raised them to the max.\p"
	.string "I went at AGATHA feeling pretty\n"
	.string "confident, but she whupped us.\p"
	.string "That old lady's also got a really\n"
	.string "short fuse, too.\p"
	.string "It doesn't take anything to get\n"
	.string "that scary lady hollering.$"
#endif

IndigoPlateau_PokemonCenter_1F_Text_LancesCousinGymLeaderFarAway::
#if GERMAN
	.string "Vielleicht liegt eine Mitgliedschaft\n"
	.string "bei den Top Vier in den Genen.\p"
	.string "Ich habe gehört, dass {COLOR RED}Siegfried{COLOR DARK_GRAY}\n"
	.string "einen Cousin hat, der irgendwo\l"
	.string "weit weg Arenaleiter ist.$"
#else
	.string "Maybe becoming an ELITE FOUR\n"
	.string "member is in the blood.\p"
	.string "From what I've heard, LANCE has\n"
	.string "a cousin who's a GYM LEADER\l"
	.string "somewhere far away.$"
#endif

