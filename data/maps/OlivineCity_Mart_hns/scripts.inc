OlivineCity_Mart_hns_MapScripts::
	.byte 0

OlivineCity_EventScript_Trainer1::
	lock
	faceplayer
	msgbox OlivineCity_Text_MartCooltrainerF, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_Lass::
	lock
	faceplayer
	msgbox OlivineCity_Text_MartLass, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Text_MartCooltrainerF:
#if GERMAN
	.string "Kennen deine Pokémon schon eine\n"
	.string "Attacke, die es ihnen erlaubt, Leute\l"
	.string "übers Wasser zu tragen?$"
#else
	.string "Do your POKéMON already know\n"
	.string "the move for carrying people\l"
	.string "across water?$"
#endif

OlivineCity_Text_MartLass:
#if GERMAN
	.string "Das Smettbo, das mir mein Schatz aus\n"
	.string "Übersee geschickt hat, hatte einen\l"
	.string "Brief dabei!\p"
	.string "Willst du wissen, was er schreibt?\n"
	.string "In Ordnung…\p"
	.string "Oder lieber doch nicht. Das ist geheim!$"
#else
	.string "My BUTTERFREE came from my\n"
	.string "boyfriend overseas.\p"
	.string "It carried some MAIL from him.\p"
	.string "Want to know what it says?\p"
	.string "Let's see... Nope! It's a\n"
	.string "secret!$"
#endif
