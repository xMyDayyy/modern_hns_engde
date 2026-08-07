RockTunnel_B1F_Frlg_MapScripts::
	.byte 0

RockTunnel_B1F_EventScript_Sofia::
	trainerbattle_single TRAINER_PICNICKER_SOFIA, RockTunnel_B1F_Text_SofiaIntro, RockTunnel_B1F_Text_SofiaDefeat
	msgbox RockTunnel_B1F_Text_SofiaPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Martha::
	trainerbattle_single TRAINER_PICNICKER_MARTHA, RockTunnel_B1F_Text_MarthaIntro, RockTunnel_B1F_Text_MarthaDefeat
	msgbox RockTunnel_B1F_Text_MarthaPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Dudley::
	trainerbattle_single TRAINER_HIKER_DUDLEY, RockTunnel_B1F_Text_DudleyIntro, RockTunnel_B1F_Text_DudleyDefeat
	msgbox RockTunnel_B1F_Text_DudleyPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Allen::
	trainerbattle_single TRAINER_HIKER_ALLEN, RockTunnel_B1F_Text_AllenIntro, RockTunnel_B1F_Text_AllenDefeat
	msgbox RockTunnel_B1F_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Eric::
	trainerbattle_single TRAINER_HIKER_ERIC, RockTunnel_B1F_Text_EricIntro, RockTunnel_B1F_Text_EricDefeat
	msgbox RockTunnel_B1F_Text_EricPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Cooper::
	trainerbattle_single TRAINER_POKEMANIAC_COOPER, RockTunnel_B1F_Text_CooperIntro, RockTunnel_B1F_Text_CooperDefeat
	msgbox RockTunnel_B1F_Text_CooperPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Steve::
	trainerbattle_single TRAINER_POKEMANIAC_STEVE, RockTunnel_B1F_Text_SteveIntro, RockTunnel_B1F_Text_SteveDefeat
	msgbox RockTunnel_B1F_Text_StevePostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Winston::
	trainerbattle_single TRAINER_POKEMANIAC_WINSTON, RockTunnel_B1F_Text_WinstonIntro, RockTunnel_B1F_Text_WinstonDefeat
	msgbox RockTunnel_B1F_Text_WinstonPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_Text_SofiaIntro::
#if GERMAN
	.string "Weißt du wie man es vermeidet,\n"
	.string "sich im Gebirge zu verlaufen?\p"
	.string "Wanderer knicken Zweige, um ihren\n"
	.string "Weg zu markieren.$"
#else
	.string "Do you know how you can avoid\n"
	.string "getting lost in the mountains?\p"
	.string "You can bend twigs as trail\n"
	.string "markers.$"
#endif

RockTunnel_B1F_Text_SofiaDefeat::
#if GERMAN
	.string "Ich habe mein Bestes gegeben!$"
#else
	.string "Ohhh!\n"
	.string "I did my best!$"
#endif

RockTunnel_B1F_Text_SofiaPostBattle::
#if GERMAN
	.string "Ich will nach Hause!$"
#else
	.string "I want to go home!$"
#endif

RockTunnel_B1F_Text_DudleyIntro::
#if GERMAN
	.string "Haha!\n"
	.string "Kannst du mich besiegen?$"
#else
	.string "Hahaha!\n"
	.string "Can you beat my power?$"
#endif

RockTunnel_B1F_Text_DudleyDefeat::
#if GERMAN
	.string "Hups!\n"
	.string "Das war zu viel des Guten!$"
#else
	.string "Oops!\n"
	.string "Outmuscled!$"
#endif

RockTunnel_B1F_Text_DudleyPostBattle::
#if GERMAN
	.string "Ich trainiere lieber meine Muskeln\n"
	.string "als mein Gehirn!!!$"
#else
	.string "I go for power because I hate\n"
	.string "thinking.$"
#endif

RockTunnel_B1F_Text_CooperIntro::
#if GERMAN
	.string "Du besitzt einen {COLOR RED}Pokédex{COLOR DARK_GRAY}? Cool!\n"
	.string "Ich möchte auch einen haben!$"
#else
	.string "You have a POKéDEX?\n"
	.string "I want one, too.$"
#endif

RockTunnel_B1F_Text_CooperDefeat::
#if GERMAN
	.string "Ach, ich bin ja so neidisch!!!$"
#else
	.string "Shoot!\n"
	.string "I am so jealous!$"
#endif

RockTunnel_B1F_Text_CooperPostBattle::
#if GERMAN
	.string "Gibst du mir den {COLOR RED}Pokédex{COLOR DARK_GRAY}, wenn er\n"
	.string "fertig ist?$"
#else
	.string "When you finish your POKéDEX,\n"
	.string "can I have it?$"
#endif

RockTunnel_B1F_Text_SteveIntro::
#if GERMAN
	.string "Möchtest du etwas über Spaßvögel\n"
	.string "erfahren?$"
#else
	.string "Um… Do you know about POKéMON\n"
	.string "cosplay?$"
#endif

RockTunnel_B1F_Text_SteveDefeat::
#if GERMAN
	.string "So weit, so gut.$"
#else
	.string "Well, that's that.$"
#endif

RockTunnel_B1F_Text_StevePostBattle::
#if GERMAN
	.string "Spaßvögel verkleiden sich gerne als\n"
	.string "Pokémon.\p"
	.string "Als Piepi gehe ich am liebsten!$"
#else
	.string "POKéMON cosplay is dressing up as\n"
	.string "POKéMON for fun.\p"
	.string "CLEFAIRY is a favorite.$"
#endif

RockTunnel_B1F_Text_AllenIntro::
#if GERMAN
	.string "Mein Pokémon wird dich das\n"
	.string "Fürchten lehren!$"
#else
	.string "My POKéMON techniques will leave\n"
	.string "you crying!$"
#endif

RockTunnel_B1F_Text_AllenDefeat::
#if GERMAN
	.string "Ich gebe auf!\n"
	.string "Du bist besser!$"
#else
	.string "I give!\n"
	.string "You're a better technician!$"
#endif

RockTunnel_B1F_Text_AllenPostBattle::
#if GERMAN
	.string "In den Bergen findet man viele\n"
	.string "Stein-Pokémon.$"
#else
	.string "In mountains, you'll often find\n"
	.string "ROCK-type POKéMON.$"
#endif

RockTunnel_B1F_Text_MarthaIntro::
#if GERMAN
	.string "Ich komme nicht oft hierher.\n"
	.string "Aber ich will kämpfen!$"
#else
	.string "I don't often come here, but I will\n"
	.string "battle you.$"
#endif

RockTunnel_B1F_Text_MarthaDefeat::
#if GERMAN
	.string "Oh!\n"
	.string "Ich habe verloren!$"
#else
	.string "Oh!\n"
	.string "I lost!$"
#endif

RockTunnel_B1F_Text_MarthaPostBattle::
#if GERMAN
	.string "Ich mag nur kleine Pokémon, die\n"
	.string "großen jagen mir Angst ein!$"
#else
	.string "I like tiny POKéMON.\n"
	.string "Big ones are too scary!$"
#endif

RockTunnel_B1F_Text_EricIntro::
#if GERMAN
	.string "Zeig mir, was du drauf hast!$"
#else
	.string "Hit me with your best shot!$"
#endif

RockTunnel_B1F_Text_EricDefeat::
#if GERMAN
	.string "Du bist gut!$"
#else
	.string "Fired away!$"
#endif

RockTunnel_B1F_Text_EricPostBattle::
#if GERMAN
	.string "Ich werde mit meinen Pokémon\n"
	.string "trainieren!$"
#else
	.string "I'll raise my POKéMON to beat\n"
	.string "yours, kid.$"
#endif

RockTunnel_B1F_Text_WinstonIntro::
#if GERMAN
	.string "Zuhause zeichne ich gerne Pokémon.$"
#else
	.string "I draw illustrations of POKéMON\n"
	.string "when I'm home.$"
#endif

RockTunnel_B1F_Text_WinstonDefeat::
#if GERMAN
	.string "Ich bin erschöpft!$"
#else
	.string "Whew…\n"
	.string "I'm exhausted…$"
#endif

RockTunnel_B1F_Text_WinstonPostBattle::
#if GERMAN
	.string "Ich liebe die Kunst, nicht den\n"
	.string "Kampf!$"
#else
	.string "I'm an artist, not a fighter.\n"
	.string "I'll go home to draw.$"
#endif

