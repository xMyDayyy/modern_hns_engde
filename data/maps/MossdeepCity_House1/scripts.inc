MossdeepCity_House1_MapScripts::
	.byte 0

MossdeepCity_House1_EventScript_BlackBelt::
	lock
	faceplayer
	bufferleadmonspeciesname STR_VAR_1
	msgbox MossdeepCity_House1_Text_HmmYourPokemon, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetPokeblockNameByMonNature
	goto_if_eq VAR_RESULT, 0, MossdeepCity_House1_EventScript_NeutralNature
	msgbox MossdeepCity_House1_Text_ItLikesXPokeblocks, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House1_EventScript_NeutralNature::
	msgbox MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House1_EventScript_Woman::
	msgbox MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes, MSGBOX_NPC
	end

MossdeepCity_House1_Text_HmmYourPokemon:
#if GERMAN
	.string "Hmm! Dein {STR_VAR_1}…$"
#else
	.string "Hmm!\n"
	.string "Your {STR_VAR_1}…$"
#endif

MossdeepCity_House1_Text_ItLikesXPokeblocks:
#if GERMAN
	.string "Es mag {STR_VAR_1}, nicht wahr?\p"
	.string "Nein, ich bin mir sicher. Es mag mit\n"
	.string "Sicherheit {STR_VAR_1}!$"
#else
	.string "It likes {STR_VAR_1}S,\n"
	.string "doesn't it?\p"
	.string "No, I'm positive of it! It definitely\n"
	.string "likes {STR_VAR_1}S!$"
#endif

MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks:
#if GERMAN
	.string "Es scheint {POKEBLOCK} weder zu lieben\n"
	.string "noch abzulehnen.$"
#else
	.string "It doesn't appear to like or dislike\n"
	.string "any {POKEBLOCK}S.$"
#endif

MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes:
#if GERMAN
	.string "Mein Mann weiß auf den ersten Blick,\n"
	.string "welche Art von {POKEBLOCK} ein Pokémon\l"
	.string "mag und welche nicht.$"
#else
	.string "My husband can tell what kind of\n"
	.string "{POKEBLOCK}S a POKéMON likes at a glance.$"
#endif

