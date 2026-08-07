Route21_North_Frlg_MapScripts::
	.byte 0

Route21_North_Text_RonaldIntro::
#if GERMAN
	.string "Möchtest du wissen, ob die Fische\n"
	.string "beißen?$"
#else
	.string "You want to know if the fish are\n"
	.string "biting?$"
#endif

Route21_North_Text_RonaldDefeat::
#if GERMAN
	.string "Mist!$"
#else
	.string "Dang!$"
#endif

Route21_North_Text_RonaldPostBattle::
#if GERMAN
	.string "Bisher habe ich noch nichts\n"
	.string "gefangen!$"
#else
	.string "I can't catch anything good.\n"
	.string "Not one good POKéMON to be had!$"
#endif

Route21_North_Text_WadeIntro::
#if GERMAN
	.string "Ich habe einen guten Fang\n"
	.string "gemacht! Möchtest du ihn sehen?$"
#else
	.string "I got a big haul!\n"
	.string "Wanna go for it?$"
#endif

Route21_North_Text_WadeDefeat::
#if GERMAN
	.string "Nein!\n"
	.string "Karpador!$"
#else
	.string "Heheh, MAGIKARP just don't make\n"
	.string "the grade, do they?$"
#endif

Route21_North_Text_WadePostBattle::
#if GERMAN
	.string "Oh nein! Ich habe schon wieder\n"
	.string "ein Karpador gefangen!$"
#else
	.string "I seem to only catch MAGIKARP!$"
#endif

Route21_North_Text_SpencerIntro::
#if GERMAN
	.string "Die See reinigt Körper und Seele!$"
#else
	.string "The sea cleanses my body and soul!$"
#endif

Route21_North_Text_SpencerDefeat::
#if GERMAN
	.string "Nein!$"
#else
	.string "Ayah!$"
#endif

Route21_North_Text_SpencerPostBattle::
#if GERMAN
	.string "Aber ich mag die Berge genauso\n"
	.string "gern!$"
#else
	.string "The sea is great and all, but I\n"
	.string "like the mountains, too.$"
#endif

@ Below is the battle text for the Cue Ball that was on Route 21 in Gen 1.
@ This trainer wasnt used in Gen 3 so their text goes unused/untranslated
@ Interestingly they did add a rematch intro text for this trainer
@ English translations from RB are listed

@ "What's wrong with me swimming?"
Route21_North_Text_CueBallIntro::
	.string "おれだって　たまには\n"
	.string "およぎに　くるぜ！$"

@ "Cheap shot!"
Route21_North_Text_CueBallDefeat::
	.string "ぐわわ！$"

@ "I look like what? A studded inner tube? Get lost!"
Route21_North_Text_CueBallPostBattle::
	.string "うきやすそう　だと？\n"
	.string "うるせー　おおきな　おせわだッ！$"
