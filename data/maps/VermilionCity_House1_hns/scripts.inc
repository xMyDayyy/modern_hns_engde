VermilionCity_House1_hns_MapScripts::
	.byte 0

VermilionCity_House1_EventScript_Fisher::
	msgbox VermilionCity_House1_Text_FishingDude, MSGBOX_NPC
	end
VermilionCity_House1_EventScript_Photo::
	msgbox VermilionCity_House1_Text_Photo, MSGBOX_NPC
	end
VermilionCity_House1_Text_FishingDude:
#if GERMAN
	.string "Ich bin der Senior-Angler, der ältere\n"
	.string "der beiden Anglerbrüder.\p"
	.string "Hast du schon mal was von diesem\n"
	.string "Profi-Angler am See des Zorns gehört?\p"
	.string "Sein Traum ist es, einmal das größte\n"
	.string "Karpador der Welt zu entdecken.\p"
	.string "Wenn’s dir nichts ausmacht, dann zeige\n"
	.string "ihm doch alle Karpador, die du fängst!\p"
	.string "Wer weiß, vielleicht fängst du ja das\n"
	.string "Karpador seiner Träume!$"
#else
	.string "I am the FISHING DUDE, the elder\n"
	.string "of the FISHING BROS.\p"
	.string "Have you met the FISHING GURU at\n"
	.string "LAKE OF RAGE?\p"
	.string "He dreams about seeing the\n"
	.string "world's greatest MAGIKARP.\p"
	.string "If you don't mind, could you show\n"
	.string "him any MAGIKARP you catch?\p"
	.string "Who knows, you may catch the\n"
	.string "MAGIKARP of his dreams.$"
#endif

VermilionCity_House1_Text_Photo:
#if GERMAN
	.string "Das ist ein Foto von Leuten, die angeln…\p"
	.string "Sie haben eine tolle Zeit…$"
#else
	.string "It's a photo of people fishing…\p"
	.string "They're having a great time…$"
#endif
