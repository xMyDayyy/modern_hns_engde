VictoryRoad_B1F_MapScripts::
	.byte 0

VictoryRoad_B1F_EventScript_Samuel::
	trainerbattle_single TRAINER_SAMUEL, VictoryRoad_B1F_Text_SamuelIntro, VictoryRoad_B1F_Text_SamuelDefeat
	msgbox VictoryRoad_B1F_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Shannon::
	trainerbattle_single TRAINER_SHANNON, VictoryRoad_B1F_Text_ShannonIntro, VictoryRoad_B1F_Text_ShannonDefeat
	msgbox VictoryRoad_B1F_Text_ShannonPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Michelle::
	trainerbattle_single TRAINER_MICHELLE, VictoryRoad_B1F_Text_MichelleIntro, VictoryRoad_B1F_Text_MichelleDefeat
	msgbox VictoryRoad_B1F_Text_MichellePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Mitchell::
	trainerbattle_single TRAINER_MITCHELL, VictoryRoad_B1F_Text_MitchellIntro, VictoryRoad_B1F_Text_MitchellDefeat
	msgbox VictoryRoad_B1F_Text_MitchellPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Halle::
	trainerbattle_single TRAINER_HALLE, VictoryRoad_B1F_Text_HalleIntro, VictoryRoad_B1F_Text_HalleDefeat
	msgbox VictoryRoad_B1F_Text_HallePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_Text_SamuelIntro:
#if GERMAN
	.string "Der Gedanke, dass ich der Pokémon Liga\n"
	.string "immer näher komme…\p"
	.string "Ich bekomme Lampenfieber…$"
#else
	.string "The thought that I'm getting closer to\n"
	.string "the POKéMON LEAGUE…\p"
	.string "I'm getting stage fright…$"
#endif

VictoryRoad_B1F_Text_SamuelDefeat:
#if GERMAN
	.string "Ich konnte gar nichts machen…$"
#else
	.string "I couldn't do a thing…$"
#endif

VictoryRoad_B1F_Text_SamuelPostBattle:
#if GERMAN
	.string "Die Pokémon Liga rückt in weite Ferne…\n"
	.string "Was für eine Enttäuschung…$"
#else
	.string "The POKéMON LEAGUE became distant\n"
	.string "again… What a letdown…$"
#endif

VictoryRoad_B1F_Text_ShannonIntro:
#if GERMAN
	.string "Um dich siegreich durch die Pokémon\n"
	.string "Liga zu kämpfen, brauchst du das\l"
	.string "Vertrauen deiner Pokémon.$"
#else
	.string "To win your way through the POKéMON\n"
	.string "LEAGUE, you need the trust of your\l"
	.string "POKéMON.$"
#endif

VictoryRoad_B1F_Text_ShannonDefeat:
#if GERMAN
	.string "Eure Beziehung ist auf solidem\n"
	.string "Vertrauen aufgebaut.$"
#else
	.string "Your relationship is based on\n"
	.string "solid trust.$"
#endif

VictoryRoad_B1F_Text_ShannonPostBattle:
#if GERMAN
	.string "Das Vertrauen zwischen Pokémon und\n"
	.string "Trainer wächst beständig, da sie immer\l"
	.string "zusammen sind.$"
#else
	.string "By being together all the time, trust\n"
	.string "grows between POKéMON and TRAINERS.$"
#endif

VictoryRoad_B1F_Text_MichelleIntro:
#if GERMAN
	.string "Das ist nicht das Ziel. Nur eine\n"
	.string "Zwischenstation auf dem Weg zur\l"
	.string "Pokémon Liga.$"
#else
	.string "This isn't the goal. It's only a place\n"
	.string "on the way to the POKéMON LEAGUE.$"
#endif

VictoryRoad_B1F_Text_MichelleDefeat:
#if GERMAN
	.string "Das ist der Weg!$"
#else
	.string "That's the way!$"
#endif

VictoryRoad_B1F_Text_MichellePostBattle:
#if GERMAN
	.string "Du wirst dich sehr gut schlagen, das\n"
	.string "ist sicher. Deine Pokémon lieben dich!$"
#else
	.string "You'll do fine, for sure!\n"
	.string "Your POKéMON are all eager to go!$"
#endif

VictoryRoad_B1F_Text_MitchellIntro:
#if GERMAN
	.string "Meine Pokémon sind einfach kosmisch!\n"
	.string "Beeindruckend und inspirierend.$"
#else
	.string "My POKéMON are cosmically\n"
	.string "awe inspiring!$"
#endif

VictoryRoad_B1F_Text_MitchellDefeat:
#if GERMAN
	.string "Jemanden wie dich habe ich noch nie\n"
	.string "getroffen.$"
#else
	.string "I've never met anyone like you before.$"
#endif

VictoryRoad_B1F_Text_MitchellPostBattle:
#if GERMAN
	.string "Auch außerhalb eines Kampfes spüre ich\n"
	.string "die Kraft, die von dir und deinen\l"
	.string "Pokémon ausgeht.$"
#else
	.string "Even outside of battle, I sense\n"
	.string "incredible power emanating from you\l"
	.string "and your POKéMON.$"
#endif

VictoryRoad_B1F_Text_HalleIntro:
#if GERMAN
	.string "Du brauchst dich nicht gleich in Pose\n"
	.string "zu schmeißen! Bleib ganz ruhig.$"
#else
	.string "Okay, no need to get your back up!\n"
	.string "Relax, let's take it easy!$"
#endif

VictoryRoad_B1F_Text_HalleDefeat:
#if GERMAN
	.string "Whoa! Wunderbar!$"
#else
	.string "Whoa!\n"
	.string "Wonderful!$"
#endif

VictoryRoad_B1F_Text_HallePostBattle:
#if GERMAN
	.string "Sicher, dies ist die Siegesstraße.\p"
	.string "Aber sie unterscheidet sich nicht viel\n"
	.string "von dem Weg, den du bisher gegangen\l"
	.string "bist.\p"
	.string "Versuch, den Rest des Weges zu\n"
	.string "genießen.$"
#else
	.string "Sure, this is VICTORY ROAD.\p"
	.string "But it's not all that different from\n"
	.string "the path you've taken so far.\p"
	.string "Try to enjoy things the rest of\n"
	.string "the way!$"
#endif

