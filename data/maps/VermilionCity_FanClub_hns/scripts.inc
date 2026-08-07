VermilionCity_FanClub_hns_MapScripts::
	.byte 0

VermilionCity_FanClub_EventScript_Chairman::
	lock
	faceplayer
	goto_if_eq VAR_FAN_CLUB_GUY, 1, VermilionCity_FanClub_EventScript_ChairmanAfter
	msgbox PokemonFanClub_Text_Chairman_Intro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_FanClub_EventScript_ChairmanRefused
	msgbox PokemonFanClub_Text_Chairman_Rapidash, MSGBOX_DEFAULT
	msgbox PokemonFanClub_Text_Chairman_Gift, MSGBOX_DEFAULT
	giveitem ITEM_RARE_CANDY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setvar VAR_FAN_CLUB_GUY, 1
	msgbox PokemonFanClub_Text_Chairman_Candy, MSGBOX_DEFAULT
	closemessage
	release
	end

VermilionCity_FanClub_EventScript_ChairmanRefused::
	msgbox PokemonFanClub_Text_Chairman_Disappointed, MSGBOX_DEFAULT
	closemessage
	release
	end

VermilionCity_FanClub_EventScript_ChairmanAfter::
	msgbox PokemonFanClub_Text_Chairman_MoreTales, MSGBOX_DEFAULT
	closemessage
	release
	end

VermilionCity_FanClub_EventScript_Woman1::
	msgbox PokemonFanClub_Text_Receptionist, MSGBOX_NPC
	end

VermilionCity_FanClub_EventScript_Woman2::
	msgbox PokemonFanClub_Text_Teacher, MSGBOX_NPC
	end

VermilionCity_FanClub_EventScript_ClefairyGuy::
	lock
	faceplayer
	msgbox PokemonFanClub_Text_ClefairyGuy_Adorable, MSGBOX_DEFAULT
	goto_if_eq VAR_FAN_CLUB_CLEFAIRY, 1, VermilionCity_FanClub_EventScript_ClefairyGiveDoll
	goto_if_ge VAR_FAN_CLUB_CLEFAIRY, 2, VermilionCity_FanClub_EventScript_ClefairyAfter
	msgbox PokemonFanClub_Text_ClefairyGuy_MakingDo, MSGBOX_DEFAULT
	closemessage
	release
	end

VermilionCity_FanClub_EventScript_ClefairyGiveDoll::
	msgbox PokemonFanClub_Text_ClefairyGuy_ReturnDoll, MSGBOX_DEFAULT
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_HIDE_FAN_CLUB_CLEFAIRY_DOLL
	removeobject LOCALID_FAN_CLUB_CLEFAIRY_DOLL
	fadescreenswapbuffers FADE_FROM_BLACK
	giveitem ITEM_LOST_ITEM
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setvar VAR_FAN_CLUB_CLEFAIRY, 2
	msgbox PokemonFanClub_Text_ClefairyGuy_GoingToGetOne, MSGBOX_DEFAULT
	closemessage
	release
	end

VermilionCity_FanClub_EventScript_ClefairyAfter::
	msgbox PokemonFanClub_Text_ClefairyGuy_GoingToGetOne, MSGBOX_DEFAULT
	closemessage
	release
	end

VermilionCity_FanClub_EventScript_Bayleef::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BAYLEEF, CRY_MODE_NORMAL
	msgbox PokemonFanClub_Text_Bayleef, MSGBOX_DEFAULT
	waitmoncry
	release
	end


PokemonFanClub_Text_Chairman_Intro:
#if GERMAN
	.string "Ich bin der Vorsitzende des\n"
	.string "Pokémon Fan Clubs!\p"
	.string "Ich habe schon mehr als 150\n"
	.string "Pokémon trainiert!\p"
	.string "Ach, ich könnte einfach stundenlang\n"
	.string "über Pokémon reden…\p"
	.string "Möchtest du eine meiner\n"
	.string "tollen Pokémon-Geschichten hören?$"
#else
	.string "I'm the CHAIRMAN of the POKéMON\n"
	.string "FAN CLUB.\p"
	.string "I've raised over 150 POKéMON.\p"
	.string "I'm very fussy when it comes to\n"
	.string "POKéMON.\p"
	.string "Did you visit just to hear about\n"
	.string "my POKéMON?$"
#endif

PokemonFanClub_Text_Chairman_Rapidash:
#if GERMAN
	.string "Gut! Dann hör zu!\p"
	.string "Also… mein Liebling Galoppa…\p"
	.string "Ist… süß… lieblich… schlau…\n"
	.string "unfassbar…\l"
	.string "und… toll… oh… glaubst du\l"
	.string "auch?…\l"
	.string "Zu viel… wild… schön…\l"
	.string "niedlich…\l"
	.string "liebe es!\p"
	.string "Umarme… wenn… schläft… warm\n"
	.string "und kuschlig…\l"
	.string "Oh, und… Spektakulär…\l"
	.string "einfach… so göttlich…\p"
	.string "Oops! Schau auf die Uhr!\n"
	.string "Ich rede zu viel!$"
#else
	.string "Good! Then listen up!\p"
	.string "So… my favorite RAPIDASH…\p"
	.string "It… cute… lovely… smart…\n"
	.string "unbearably…\l"
	.string "plus… amazing… oh… you think\l"
	.string "so?…\l"
	.string "Too much… wild… beautiful…\l"
	.string "kindly…\l"
	.string "love it!\p"
	.string "Hug it… when… sleeping… warm\n"
	.string "and cuddly…\l"
	.string "Oh, and… spectacular…\l"
	.string "ravishing… simply divine…\p"
	.string "Oops! Look at the time!\n"
	.string "I've kept you too long!$"
#endif

PokemonFanClub_Text_Chairman_Gift:
#if GERMAN
	.string "Danke, dass du zugehört hast.\n"
	.string "Ich möchte dir etwas geben!$"
#else
	.string "Thanks for hearing me out.\n"
	.string "I want you to have this!$"
#endif

PokemonFanClub_Text_Chairman_Candy:
#if GERMAN
	.string "Dieses Sonderbonbon macht\n"
	.string "schlaffe Pokémon fit!\p"
	.string "Aber meine Pokémon sollen lieber\n"
	.string "durch Kämpfe stark werden.\p"
	.string "Du kannst es also haben!$"
#else
	.string "It's a RARE CANDY that makes\n"
	.string "POKéMON stronger.\p"
	.string "I prefer making my POKéMON\n"
	.string "stronger by battling, so you\l"
	.string "can have it.$"
#endif

PokemonFanClub_Text_Chairman_MoreTales:
#if GERMAN
	.string "Oh, hallo {PLAYER}!\p"
	.string "Bist du hier, um ein paar neue\n"
	.string "wunderbare Geschichten über mich\l"
	.string "und meine Pokémon zu hören?\p"
	.string "Nein? Echt nicht? Hm, zu schade…\n"
	.string "Du bist so ein Langweiler…\n$"
#else
	.string "Hello, {PLAYER}!\p"
	.string "Did you come see me about my\n"
	.string "POKéMON again?\p"
	.string "No? Oh… I had more tales to\n"
	.string "tell…$"
#endif

PokemonFanClub_Text_Chairman_Disappointed:
#if GERMAN
	.string "Du bist echt ein Langweiler…\p"
	.string "Komm wieder, wenn du das Bedürfnis\n"
	.string "verspürst, doch eine meiner\l"
	.string "wunderbaren Geschichten zu hören!$"
#else
	.string "How disappointing…\p"
	.string "Come back if you want to listen.$"
#endif

PokemonFanClub_Text_Receptionist:
#if GERMAN
	.string "Unser Vorsitzender ist wirklich sehr\n"
	.string "redselig, wenn es um Pokémon geht.$"
#else
	.string "Our CHAIRMAN is very vocal when\n"
	.string "it comes to POKéMON…$"
#endif

@=Clefairy=Guy=========================================================================================================
PokemonFanClub_Text_ClefairyGuy_Adorable:
#if GERMAN
	.string "Das ist ein Piepi! Was?\p"
	.string "Ach so! Das ist eine Puppe von Piepi.$"
#else
	.string "I love the way CLEFAIRY waggles\n"
	.string "its finger when it's trying to\l"
	.string "use METRONOME.\p"
	.string "It's so adorable!$"
#endif

PokemonFanClub_Text_ClefairyGuy_MakingDo:
#if GERMAN
	.string "Ich mag Piepi, aber ich werde es nie\n"
	.string "schaffen, eins zu fangen. Tja, ich\l"
	.string "werde mich wohl mit dieser Poképuppe\l"
	.string "begnügen müssen, die ich gefunden habe.$"
#else
	.string "I love CLEFAIRY, but I could\n"
	.string "never catch one.\p"
	.string "So I'm making do with a\n"
	.string "POKé DOLL that I found.$"
#endif

PokemonFanClub_Text_ClefairyGuy_ReturnDoll:
#if GERMAN
	.string "Ach so, jetzt verstehe ich.\n"
	.string "Das Mädchen, das diese Puppe\l"
	.string "verloren hat, ist traurig…\p"
	.string "Gut. Bringst du die Piepi-Puppe\n"
	.string "zu der armen Kleinen zurück?\p"
	.string "Ich freunde mich eines Tages\n"
	.string "mit einem echten Piepi an.\l"
	.string "Keine Sorge!$"
#else
	.string "Oh, I see now. The girl who lost\n"
	.string "this POKé DOLL is sad…\p"
	.string "OK. Could you take this POKé DOLL\n"
	.string "back to that poor little girl?\p"
	.string "I'll befriend a real CLEFAIRY on\n"
	.string "my own one day. No worries!$"
#endif

PokemonFanClub_Text_ClefairyGuy_GoingToGetOne:
#if GERMAN
	.string "Irgendwann finde ich ein echtes Piepi\n"
	.string "als Freund! Du wirst schon sehen!$"
#else
	.string "You watch. I'm going to get a\n"
	.string "real CLEFAIRY as my friend.$"
#endif

@============================================================================================================================

PokemonFanClub_Text_Teacher:
#if GERMAN
	.string "Sieh nur, sieh nur! Mein Lorblatt!\p"
	.string "Das Blatt auf seinem Köpfchen ist\n"
	.string "ja so süß und schick!$"
#else
	.string "Look at my darling BAYLEEF!\p"
	.string "The leaf on its head is so cute!$"
#endif

PokemonFanClub_Text_ClefairyDoll:
#if GERMAN
	.string "Das ist ein Piepi!\n"
	.string "… … … ?\p"
	.string "Ach so, es ist nur eine Puppe…$"
#else
	.string "It's a CLEFAIRY! Huh?\p"
	.string "Oh, right. It's a CLEFAIRY POKé\n"
	.string "DOLL.$"
#endif

PokemonFanClub_Text_Bayleef:
#if GERMAN
	.string "Lorblatt: Looorblatt!$"
#else
	.string "BAYLEEF: Li liif!$"
#endif

PokemonFanClub_Text_Listen:
#if GERMAN
	.string "Wenn dir jemand eine “wunderbare”\n"
	.string "Geschichte erzählen will, dann höre\l"
	.string "ihm einfach geduldig zu.$"
#else
	.string "Let's all listen politely to\n"
	.string "other trainers.$"
#endif

PokemonFanClub_Text_Bragging:
#if GERMAN
	.string "Wenn jemand so schwärmt, wird einfach\n"
	.string "doppelt so viel zurückgeschwärmt!$"
#else
	.string "If someone brags, brag right\n"
	.string "back!$"
#endif
