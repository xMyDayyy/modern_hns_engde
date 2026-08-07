EcruteakCity_Mart_hns_MapScripts::
	.byte 0

EcruteakCity_Mart_EventScript_Nerd::
	lock
	faceplayer
	msgbox EcruteakMart_Text_SuperNerd, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Mart_EventScript_Granny::
	lock
	faceplayer
	msgbox EcruteakMart_Text_Granny, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakMart_Text_SuperNerd:
#if GERMAN
	.string "Mein Evoli hat sich zu einem Psiana\n"
	.string "entwickelt, aber aus dem Evoli eines\l"
	.string "Freundes von mir wurde ein Nachtara…\p"
	.string "Was hat er bloß anders gemacht als ich?\p"
	.string "Wir haben unsere Evoli schließlich\n"
	.string "immer gleich trainiert…$"
#else
	.string "My EEVEE evolved into an ESPEON.\p"
	.string "But my friend's EEVEE turned into\n"
	.string "an UMBREON.\p"
	.string "I wonder why? We both were raising\n"
	.string "our EEVEE in the same way…$"
#endif

EcruteakMart_Text_Granny:
#if GERMAN
	.string "Setzt du Beleber ein, wacht ein\n"
	.string "bewusstloses Pokémon wieder auf.$"
#else
	.string "If you use REVIVE, a POKéMON that's\n"
	.string "fainted will wake right up.$"
#endif
