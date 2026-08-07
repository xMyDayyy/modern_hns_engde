Route11_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route11_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route11_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route11_EventScript_Owen::
	trainerbattle_single TRAINER_OWEN_HNS, Route11_Text_YoungsterOwenSeen, Route11_Text_YoungsterOwenBeaten
	msgbox Route11_Text_YoungsterOwenAfterBattle, MSGBOX_AUTOCLOSE
	end

Route11_EventScript_Jason::
	trainerbattle_single TRAINER_JASON_HNS, Route11_Text_YoungsterJasonSeen, Route11_Text_YoungsterJasonBeaten
	msgbox Route11_Text_YoungsterJasonAfterBattle, MSGBOX_AUTOCLOSE
	end

Route11_EventScript_Herman::
	trainerbattle_single TRAINER_HERMAN_HNS, Route11_Text_PsychicHermanSeen, Route11_Text_PsychicHermanBeaten
	msgbox Route11_Text_PsychicHermanAfterBattle, MSGBOX_AUTOCLOSE
	end

Route11_EventScript_Fidel::
	trainerbattle_single TRAINER_FIDEL_HNS, Route11_Text_PsychicFidelSeen, Route11_Text_PsychicFidelBeaten
	msgbox Route11_Text_PsychicFidelAfterBattle, MSGBOX_AUTOCLOSE
	end

Route11_EventScript_Engineer::
	msgbox Route11_Text_Engineer, MSGBOX_NPC
	end

Route11_EventScript_Item_Grass_Knot::
    finditem ITEM_TM_GRASS_KNOT
    end

Route11_Text_Engineer:
#if GERMAN
	.string "Ich habe ein seltsames Pokémon\n"
	.string "im Baum klettern sehen.\l"
	.string "Es sah nicht wie ein Menki aus…$"
#else
	.string "I saw a strange POKéMON climbing\n"
	.string "in the trees, but it didn't\l"
	.string "look like MANKEY...$"
#endif

Route11_Text_YoungsterOwenSeen:
#if GERMAN
	.string "Für Pokémon-Trainer ist Mogeln tabu!\n"
	.string "Liefern wir uns einen fairen Kampf!$"
#else
	.string "There's no cheating in POKéMON.\p"
	.string "Let's keep it fair and square!$"
#endif

Route11_Text_YoungsterOwenBeaten:
#if GERMAN
	.string "Huch? Wie ist\n"
	.string "das denn passiert?$"
#else
	.string "Huh? How did this happen?$"
#endif

Route11_Text_YoungsterOwenAfterBattle:
#if GERMAN
	.string "Ich habe immer fair und ehrenhaft ge-\n"
	.string "kämpft. Ich habe es noch nie bereut.$"
#else
	.string "I fought fair and square with\n"
	.string "honor.\p"
	.string "I don't regret this at all.$"
#endif

Route11_Text_YoungsterJasonSeen:
#if GERMAN
	.string "Es juckt und sticht, wenn ich mit\n"
	.string "meinen Shorts durchs Gras laufe.$"
#else
	.string "It itches and tickles a bit when\n"
	.string "I wear shorts in the grass.$"
#endif

Route11_Text_YoungsterJasonBeaten:
#if GERMAN
	.string "Aiyaaah!\n"
	.string "Ich gebe mich geschlagen!$"
#else
	.string "Aiyaaah! I got stomped!$"
#endif

Route11_Text_YoungsterJasonAfterBattle:
#if GERMAN
	.string "Ich muss wohl noch ein paar mehr\n"
	.string "Pokémon im Gras fangen.$"
#else
	.string "I'm going to catch more POKéMON in\n"
	.string "the grass.$"
#endif

Route11_Text_PsychicHermanSeen:
	.string "…$"

Route11_Text_PsychicHermanBeaten:
	.string "…$"

Route11_Text_PsychicHermanAfterBattle:
#if GERMAN
	.string "… … … …\p"
	.string "Ich schloss nur kurz die Augen und\n"
	.string "schwupps, schon hatte ich verloren…$"
#else
	.string "…\p"
	.string "I lost while I had my eyes closed…$"
#endif

Route11_Text_PsychicFidelSeen:
#if GERMAN
	.string "Ich kann es sehen…\p"
	.string "Ich kann alles über dich sehen…$"
#else
	.string "I can see it…\p"
	.string "Everything to see about you…$"
#endif

Route11_Text_PsychicFidelBeaten:
#if GERMAN
	.string "Dass du so stark sein würdest,\n"
	.string "konnte ich nicht vorhersagen…$"
#else
	.string "I couldn't foresee your power…$"
#endif

Route11_Text_PsychicFidelAfterBattle:
#if GERMAN
	.string "Du bist von deiner Sache überzeugt…\p"
	.string "Deine Stärke rührt von ebendiesem\n"
	.string "Glauben an dein Pokémon-Team her…$"
#else
	.string "Strength in conviction…\p"
	.string "You're strong because you believe\n"
	.string "in your POKéMON.$"
#endif

Route11_Text_Sign:
#if GERMAN
	.string "Route 11$"
#else
	.string "ROUTE 11$"
#endif

