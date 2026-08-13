MagmaHideout_2F_2R_MapScripts::
	.byte 0

MagmaHideout_2F_2R_EventScript_Grunt15::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_15, MagmaHideout_2F_2R_Text_Grunt15Intro, MagmaHideout_2F_2R_Text_Grunt15Defeat
	msgbox MagmaHideout_2F_2R_Text_Grunt15PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_2R_EventScript_Grunt6::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_6, MagmaHideout_2F_2R_Text_Grunt6Intro, MagmaHideout_2F_2R_Text_Grunt6Defeat
	msgbox MagmaHideout_2F_2R_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_2R_EventScript_Grunt7::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_7, MagmaHideout_2F_2R_Text_Grunt7Intro, MagmaHideout_2F_2R_Text_Grunt7Defeat
	msgbox MagmaHideout_2F_2R_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_2R_EventScript_Grunt8::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_8, MagmaHideout_2F_2R_Text_Grunt8Intro, MagmaHideout_2F_2R_Text_Grunt8Defeat
	msgbox MagmaHideout_2F_2R_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_2R_Text_Grunt15Intro:
#if GERMAN
	.string "Ich habe nichts gegen dich!\n"
	.string "Aber ich habe meine Befehle.$"
#else
	.string "I don't have a bone to pick with you.\n"
	.string "I'm just following orders!$"
#endif

MagmaHideout_2F_2R_Text_Grunt15Defeat:
#if GERMAN
	.string "Ich mag vielleicht verloren haben,\n"
	.string "aber…$"
#else
	.string "I may have lost, but…$"
#endif

MagmaHideout_2F_2R_Text_Grunt15PostBattle:
#if GERMAN
	.string "Wir haben etwas Unglaubliches\n"
	.string "ausgegraben! Und… wir haben die Blaue\l"
	.string "Kugel!\p"
	.string "Nun muss unser Boss nur noch…\n"
	.string "Hahaha… Muahahahahahaha!$"
#else
	.string "We dug up something beyond belief!\n"
	.string "And, we got the BLUE ORB!\p"
	.string "All that's left is for our leader to…\n"
	.string "Fufufu… Fwahahaha!$"
#endif

MagmaHideout_2F_2R_Text_Grunt6Intro:
#if GERMAN
	.string "Ich hasse Hitze! Ich hätte mich lieber\n"
	.string "Team Aqua anschließen sollen…$"
#else
	.string "I can't stand heat. Maybe I should've\n"
	.string "joined TEAM AQUA instead…$"
#endif

MagmaHideout_2F_2R_Text_Grunt6Defeat:
#if GERMAN
	.string "Ich bin tatsächlich nicht geschaffen\n"
	.string "für Team Magma…$"
#else
	.string "Yeah, I really may not be right for\n"
	.string "TEAM MAGMA…$"
#endif

MagmaHideout_2F_2R_Text_Grunt6PostBattle:
#if GERMAN
	.string "Bekommst du an einem Ort wie diesem\n"
	.string "nicht Sehnsucht nach dem Meer?$"
#else
	.string "Don't you get lonely for the sea\n"
	.string "being in a place like this?$"
#endif

MagmaHideout_2F_2R_Text_Grunt7Intro:
#if GERMAN
	.string "Ab und zu bemerkt man hier\n"
	.string "Erschütterungen.\p"
	.string "Ob der Vulkan daran schuld ist?\n"
	.string "Oder ist es Grou…\p"
	.string "Huuups! Ach, egal! Dummdidumm…$"
#else
	.string "You can hear tremors here sometimes.\p"
	.string "Could it be the volcano rattling?\n"
	.string "Or is it GROU…\p"
	.string "Whoops!\n"
	.string "No, no, never mind!$"
#endif

MagmaHideout_2F_2R_Text_Grunt7Defeat:
#if GERMAN
	.string "Du bist ein hitziger Kämpfer.\n"
	.string "Wie ein Vulkan.$"
#else
	.string "You're a fiery battler.\n"
	.string "Just like a volcano!$"
#endif

MagmaHideout_2F_2R_Text_Grunt7PostBattle:
#if GERMAN
	.string "Dieses Mal hast du es tatsächlich\n"
	.string "geschafft, zu gewinnen. Aber das macht\l"
	.string "überhaupt nichts.\p"
	.string "Team Magma ist bald am Ziel.$"
#else
	.string "You just happened to win this time,\n"
	.string "but that doesn't matter.\p"
	.string "TEAM MAGMA's goal is about to be\n"
	.string "reached!$"
#endif

MagmaHideout_2F_2R_Text_Grunt8Intro:
#if GERMAN
	.string "Eines unserer Mitglieder ist\n"
	.string "ausgerastet. Es hat sein Magmaemblem\l"
	.string "verloren!\p"
	.string "Warte mal! Du hast das doch nicht\n"
	.string "etwa gefunden?!?$"
#else
	.string "One of our guys was freaking out that\n"
	.string "he lost his MAGMA EMBLEM…\p"
	.string "Wait a minute!\n"
	.string "Was it you who found it?$"
#endif

MagmaHideout_2F_2R_Text_Grunt8Defeat:
#if GERMAN
	.string "Das kann ich einfach nicht glauben…$"
#else
	.string "I'm having trouble believing this…$"
#endif

MagmaHideout_2F_2R_Text_Grunt8PostBattle:
#if GERMAN
	.string "Ich habe das Gefühl, dass unser Plan\n"
	.string "scheitern wird…$"
#else
	.string "I'm getting this feeling that our plan\n"
	.string "is going to end in failure…$"
#endif

