#if IS_HNS
// HnS rematch trainer check page text — currently unused (check page disabled).
// Rematch slot → HnS trainer mapping kept here for reference if re-enabled.
// REMATCH_ROSE         = Joey (Youngster, Route 30)
// REMATCH_ANDRES       = Wade (Bug Catcher, Route 31)
// REMATCH_DUSTY        = Ralph (Fisherman, Route 32)
// REMATCH_LOLA         = Liz (Picnicker, Route 32)
// REMATCH_RICKY        = Anthony (Hiker, Route 33)
// REMATCH_LILA_AND_ROY = Todd (Camper, Route 34)
// REMATCH_CRISTIN      = Gina (Picnicker, Route 34)
// REMATCH_BROOKE       = Irwin (Juggler, Route 35)
// REMATCH_WILTON       = Arnie (Bug Catcher, Route 35)
// REMATCH_VALERIE      = Alan (School Kid, Route 36)
// REMATCH_CINDY        = Dana (Lass, Route 38)
// REMATCH_THALIA       = Chad (School Kid, Route 38)
// REMATCH_JESSICA      = Derek (Pokefan, Route 39)
// REMATCH_WINSTON      = Tully (Fisherman, Route 42)
// REMATCH_STEVE        = Brent (Pokemaniac, Route 43)
// REMATCH_TONY         = Tiffany (Picnicker, Route 43)
// REMATCH_NOB          = Vance (Bird Keeper, Route 44)
// REMATCH_KOJI         = Wilton (Fisherman, Route 44)
// REMATCH_FERNANDO     = Kenji (Black Belt, Route 45)
// REMATCH_DALTON       = Parry (Hiker, Route 45)
// REMATCH_BERNIE       = Erin (Picnicker, Route 46)
// REMATCH_ETHAN        = Jack (School Kid, National Park)
// REMATCH_JOHN_AND_JAY = Beverly (Parasol Lady, National Park)
// REMATCH_JEFFREY      = Huey (Sailor, Lighthouse)
// REMATCH_CAMERON      = Gaven (Cooltrainer, Route 26)
// REMATCH_JACKI        = Beth (Cooltrainer, Route 26)
// REMATCH_WALTER       = Jose (Bird Keeper, Route 27)
// REMATCH_KAREN        = Reena (Cooltrainer, Route 27)
// Crystal phone text reference: pokecrystal/data/phone/text/<name>_caller.asm
#else
#if GERMAN
const u8 gText_MatchCallAromaLady_Rose_Strategy[] = _("Emotionen beruhigen.");
#else
const u8 gText_MatchCallAromaLady_Rose_Strategy[] = _("Becalm fighting emotions.");
#endif
#if GERMAN
const u8 gText_MatchCallAromaLady_Rose_Pokemon[] = _("Duftende Pflanzen-Pokémon.");
#else
const u8 gText_MatchCallAromaLady_Rose_Pokemon[] = _("Fragrant GRASS POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallAromaLady_Rose_Intro1[] = _("Beruhigende Aromen reini-");
#else
const u8 gText_MatchCallAromaLady_Rose_Intro1[] = _("Soothing aromas make the");
#endif
#if GERMAN
const u8 gText_MatchCallAromaLady_Rose_Intro2[] = _("gen Körper und Geist.");
#else
const u8 gText_MatchCallAromaLady_Rose_Intro2[] = _("body and mind healthy.");
#endif

#if GERMAN
const u8 gText_MatchCallRuinManiac_Andres_Strategy[] = _("Darin bin ich nicht gut!");
#else
const u8 gText_MatchCallRuinManiac_Andres_Strategy[] = _("I'm not very good at this.");
#endif
#if GERMAN
const u8 gText_MatchCallRuinManiac_Andres_Pokemon[] = _("Ruinenerforschungsteam");
#else
const u8 gText_MatchCallRuinManiac_Andres_Pokemon[] = _("Ruin-exploration partners.");
#endif
#if GERMAN
const u8 gText_MatchCallRuinManiac_Andres_Intro1[] = _("Ich such unter Wasser");
#else
const u8 gText_MatchCallRuinManiac_Andres_Intro1[] = _("I am searching for undersea");
#endif
#if GERMAN
const u8 gText_MatchCallRuinManiac_Andres_Intro2[] = _("nach Ruinen und Relikten.");
#else
const u8 gText_MatchCallRuinManiac_Andres_Intro2[] = _("ruins and relics.");
#endif

#if GERMAN
const u8 gText_MatchCallRuinManiac_Dusty_Strategy[] = _("Durch Stärke überzeugen!");
#else
const u8 gText_MatchCallRuinManiac_Dusty_Strategy[] = _("Overwhelm with power!");
#endif
#if GERMAN
const u8 gText_MatchCallRuinManiac_Dusty_Pokemon[] = _("Felsige Gestein-Pokémon.");
#else
const u8 gText_MatchCallRuinManiac_Dusty_Pokemon[] = _("Craggy ROCK POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallRuinManiac_Dusty_Intro1[] = _("Während des Studiums der");
#else
const u8 gText_MatchCallRuinManiac_Dusty_Intro1[] = _("In search of ancient lore,");
#endif
#if GERMAN
const u8 gText_MatchCallRuinManiac_Dusty_Intro2[] = _("Antike sehe ich die Welt.");
#else
const u8 gText_MatchCallRuinManiac_Dusty_Intro2[] = _("I travel the world.");
#endif

#if GERMAN
const u8 gText_MatchCallTuber_Lola_Strategy[] = _("Ich strenge mich stets an!");
#else
const u8 gText_MatchCallTuber_Lola_Strategy[] = _("I'm going to try hard!");
#endif
#if GERMAN
const u8 gText_MatchCallTuber_Lola_Pokemon[] = _("Pokémon, die gut schwimmen.");
#else
const u8 gText_MatchCallTuber_Lola_Pokemon[] = _("Good swimmer POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallTuber_Lola_Intro1[] = _("Ich würde gerne ohne den");
#else
const u8 gText_MatchCallTuber_Lola_Intro1[] = _("I wish I could swim without");
#endif
#if GERMAN
const u8 gText_MatchCallTuber_Lola_Intro2[] = _("Reifen schwimmen können.");
#else
const u8 gText_MatchCallTuber_Lola_Intro2[] = _("using an inner tube.");
#endif

#if GERMAN
const u8 gText_MatchCallTuber_Ricky_Strategy[] = _("Ich versuche einfach alles.");
#else
const u8 gText_MatchCallTuber_Ricky_Strategy[] = _("I don't know. I'll try hard.");
#endif
#if GERMAN
const u8 gText_MatchCallTuber_Ricky_Pokemon[] = _("Wasser-Pkmn sind Kumpel.");
#else
const u8 gText_MatchCallTuber_Ricky_Pokemon[] = _("WATER POKéMON are buddies.");
#endif
#if GERMAN
const u8 gText_MatchCallTuber_Ricky_Intro1[] = _("Ich kann schwimmen! Ich");
#else
const u8 gText_MatchCallTuber_Ricky_Intro1[] = _("It's not like I can't swim.");
#endif
#if GERMAN
const u8 gText_MatchCallTuber_Ricky_Intro2[] = _("mag halt den Schwimmreifen!");
#else
const u8 gText_MatchCallTuber_Ricky_Intro2[] = _("I just like my inner tube.");
#endif

#if GERMAN
const u8 gText_MatchCallSisAndBro_LilaAndRoy_Strategy[] = _("Wir teilen die Arbeit auf.");
#else
const u8 gText_MatchCallSisAndBro_LilaAndRoy_Strategy[] = _("We split our duties.");
#endif
#if GERMAN
const u8 gText_MatchCallSisAndBro_LilaAndRoy_Pokemon[] = _("Wir lieben nette Pokémon.");
#else
const u8 gText_MatchCallSisAndBro_LilaAndRoy_Pokemon[] = _("We like friendly POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallSisAndBro_LilaAndRoy_Intro1[] = _("Wir teilen die Liebe zu den");
#else
const u8 gText_MatchCallSisAndBro_LilaAndRoy_Intro1[] = _("We enjoy POKéMON together");
#endif
#if GERMAN
const u8 gText_MatchCallSisAndBro_LilaAndRoy_Intro2[] = _("Pkmn. Wir sind Geschwister!");
#else
const u8 gText_MatchCallSisAndBro_LilaAndRoy_Intro2[] = _("as sister and brother.");
#endif

#if GERMAN
const u8 gText_MatchCallCooltrainer_Cristin_Strategy[] = _("Mächtige Finalattacken!");
#else
const u8 gText_MatchCallCooltrainer_Cristin_Strategy[] = _("I finish with power moves!");
#endif
#if GERMAN
const u8 gText_MatchCallCooltrainer_Cristin_Pokemon[] = _("Verschiedene Arten.");
#else
const u8 gText_MatchCallCooltrainer_Cristin_Pokemon[] = _("A mix of different types.");
#endif
#if GERMAN
const u8 gText_MatchCallCooltrainer_Cristin_Intro1[] = _("Ich werde der ultimative");
#else
const u8 gText_MatchCallCooltrainer_Cristin_Intro1[] = _("I aim to become the ultimate");
#endif
#if GERMAN
const u8 gText_MatchCallCooltrainer_Cristin_Intro2[] = _("Trainer sein.");
#else
const u8 gText_MatchCallCooltrainer_Cristin_Intro2[] = _("TRAINER!");
#endif

#if GERMAN
const u8 gText_MatchCallCooltrainer_Brooke_Strategy[] = _("Schwächen erkennen.");
#else
const u8 gText_MatchCallCooltrainer_Brooke_Strategy[] = _("Exploit the foe's weakness.");
#endif
#if GERMAN
const u8 gText_MatchCallCooltrainer_Brooke_Pokemon[] = _("Gleichgewicht ist wichtig.");
#else
const u8 gText_MatchCallCooltrainer_Brooke_Pokemon[] = _("Balance is crucial.");
#endif
#if GERMAN
const u8 gText_MatchCallCooltrainer_Brooke_Intro1[] = _("Mein Ziel ist es, der");
#else
const u8 gText_MatchCallCooltrainer_Brooke_Intro1[] = _("My goal is to become the");
#endif
#if GERMAN
const u8 gText_MatchCallCooltrainer_Brooke_Intro2[] = _("Pokémon-Champ zu werden.");
#else
const u8 gText_MatchCallCooltrainer_Brooke_Intro2[] = _("POKéMON CHAMPION.");
#endif

#if GERMAN
const u8 gText_MatchCallCooltrainer_Wilton_Strategy[] = _("Den Gegner umwerfen.");
#else
const u8 gText_MatchCallCooltrainer_Wilton_Strategy[] = _("Upset the opponent.");
#endif
#if GERMAN
const u8 gText_MatchCallCooltrainer_Wilton_Pokemon[] = _("Der Pkmn-Typ ist unwichtig.");
#else
const u8 gText_MatchCallCooltrainer_Wilton_Pokemon[] = _("Type doesn't matter.");
#endif
#if GERMAN
const u8 gText_MatchCallCooltrainer_Wilton_Intro1[] = _("Ich bin der beste Schüler");
#else
const u8 gText_MatchCallCooltrainer_Wilton_Intro1[] = _("I'm a top student at the");
#endif
#if GERMAN
const u8 gText_MatchCallCooltrainer_Wilton_Intro2[] = _("der Pokémon-Trainerschule.");
#else
const u8 gText_MatchCallCooltrainer_Wilton_Intro2[] = _("TRAINER'S SCHOOL.");
#endif

#if GERMAN
const u8 gText_MatchCallHexManiac_Valerie_Strategy[] = _("Langsames Niederringen.");
#else
const u8 gText_MatchCallHexManiac_Valerie_Strategy[] = _("Slow, steady suffering.");
#endif
#if GERMAN
const u8 gText_MatchCallHexManiac_Valerie_Pokemon[] = _("Nachts Furcht einflößend.");
#else
const u8 gText_MatchCallHexManiac_Valerie_Pokemon[] = _("Scary to meet at night.");
#endif
#if GERMAN
const u8 gText_MatchCallHexManiac_Valerie_Intro1[] = _("Ich sehe Dinge, die den");
#else
const u8 gText_MatchCallHexManiac_Valerie_Intro1[] = _("I see things that others");
#endif
#if GERMAN
const u8 gText_MatchCallHexManiac_Valerie_Intro2[] = _("anderen verborgen sind...");
#else
const u8 gText_MatchCallHexManiac_Valerie_Intro2[] = _("can't see...");
#endif

#if GERMAN
const u8 gText_MatchCallLady_Cindy_Strategy[] = _("Alles, was zum Sieg führt.");
#else
const u8 gText_MatchCallLady_Cindy_Strategy[] = _("Anything to win.");
#endif
#if GERMAN
const u8 gText_MatchCallLady_Cindy_Pokemon[] = _("Hinreißende Wesen!");
#else
const u8 gText_MatchCallLady_Cindy_Pokemon[] = _("Gorgeous type!");
#endif
#if GERMAN
const u8 gText_MatchCallLady_Cindy_Intro1[] = _("Ich habe zu Hause einen");
#else
const u8 gText_MatchCallLady_Cindy_Intro1[] = _("I have a pool specially for");
#endif
#if GERMAN
const u8 gText_MatchCallLady_Cindy_Intro2[] = _("Pool für meine Pokémon.");
#else
const u8 gText_MatchCallLady_Cindy_Intro2[] = _("my POKéMON at home.");
#endif

#if GERMAN
const u8 gText_MatchCallBeauty_Thalia_Strategy[] = _("Du bist in meinem Bann!");
#else
const u8 gText_MatchCallBeauty_Thalia_Strategy[] = _("You'll fall under my spell!");
#endif
#if GERMAN
const u8 gText_MatchCallBeauty_Thalia_Pokemon[] = _("Reifer Wasser-Typ.");
#else
const u8 gText_MatchCallBeauty_Thalia_Pokemon[] = _("Mature WATER type.");
#endif
#if GERMAN
const u8 gText_MatchCallBeauty_Thalia_Intro1[] = _("Mein Traum ist eine");
#else
const u8 gText_MatchCallBeauty_Thalia_Intro1[] = _("I dream of cruising around");
#endif
#if GERMAN
const u8 gText_MatchCallBeauty_Thalia_Intro2[] = _("Kreuzfahrt über die Meere.");
#else
const u8 gText_MatchCallBeauty_Thalia_Intro2[] = _("the world on a luxury liner.");
#endif

#if GERMAN
const u8 gText_MatchCallBeauty_Jessica_Strategy[] = _("Ich bringe dich vom Weg ab.");
#else
const u8 gText_MatchCallBeauty_Jessica_Strategy[] = _("I'll lead you astray.");
#endif
#if GERMAN
const u8 gText_MatchCallBeauty_Jessica_Pokemon[] = _("Niedlich, natürlich!");
#else
const u8 gText_MatchCallBeauty_Jessica_Pokemon[] = _("Cute, of course.");
#endif
#if GERMAN
const u8 gText_MatchCallBeauty_Jessica_Intro1[] = _("Ich liebe die Safari-Zone,");
#else
const u8 gText_MatchCallBeauty_Jessica_Intro1[] = _("I love the SAFARI ZONE.");
#endif
#if GERMAN
const u8 gText_MatchCallBeauty_Jessica_Intro2[] = _("dort werde ich bleiben.");
#else
const u8 gText_MatchCallBeauty_Jessica_Intro2[] = _("I seem to end up there.");
#endif

#if GERMAN
const u8 gText_MatchCallRichBoy_Winston_Strategy[] = _("Wer braucht Strategie?!?");
#else
const u8 gText_MatchCallRichBoy_Winston_Strategy[] = _("Strategy? Who needs it?");
#endif
#if GERMAN
const u8 gText_MatchCallRichBoy_Winston_Pokemon[] = _("Alle, die teuer sind.");
#else
const u8 gText_MatchCallRichBoy_Winston_Pokemon[] = _("I spent big money on it!");
#endif
#if GERMAN
const u8 gText_MatchCallRichBoy_Winston_Intro1[] = _("Ich bin reich. Und daher");
#else
const u8 gText_MatchCallRichBoy_Winston_Intro1[] = _("I, being rich, sleep in a");
#endif
#if GERMAN
const u8 gText_MatchCallRichBoy_Winston_Intro2[] = _("besitze ich ein Pkmn-Bett.");
#else
const u8 gText_MatchCallRichBoy_Winston_Intro2[] = _("custom POKéMON bed.");
#endif

#if GERMAN
const u8 gText_MatchCallPokeManiac_Steve_Strategy[] = _("Durch Stärke gewinnen!");
#else
const u8 gText_MatchCallPokeManiac_Steve_Strategy[] = _("Wrestle down with power.");
#endif
#if GERMAN
const u8 gText_MatchCallPokeManiac_Steve_Pokemon[] = _("Habe sie nachts gefangen...");
#else
const u8 gText_MatchCallPokeManiac_Steve_Pokemon[] = _("Took all night to catch.");
#endif
#if GERMAN
const u8 gText_MatchCallPokeManiac_Steve_Intro1[] = _("Große, kräftige und zähe");
#else
const u8 gText_MatchCallPokeManiac_Steve_Intro1[] = _("Big, burly, and buff");
#endif
#if GERMAN
const u8 gText_MatchCallPokeManiac_Steve_Intro2[] = _("Pokémon sind die besten...");
#else
const u8 gText_MatchCallPokeManiac_Steve_Intro2[] = _("POKéMON are the best...");
#endif

#if GERMAN
const u8 gText_MatchCallSwimmer_Tony_Strategy[] = _("Volle Pulle zuschlagen!");
#else
const u8 gText_MatchCallSwimmer_Tony_Strategy[] = _("Ram at full speed!");
#endif
#if GERMAN
const u8 gText_MatchCallSwimmer_Tony_Pokemon[] = _("Funky Wasser-Pokémon!");
#else
const u8 gText_MatchCallSwimmer_Tony_Pokemon[] = _("Funky WATER type!");
#endif
#if GERMAN
const u8 gText_MatchCallSwimmer_Tony_Intro1[] = _("Wenn ich nicht schwimme,");
#else
const u8 gText_MatchCallSwimmer_Tony_Intro1[] = _("If I can't be out swimming,");
#endif
#if GERMAN
const u8 gText_MatchCallSwimmer_Tony_Intro2[] = _("stemme ich Gewichte!");
#else
const u8 gText_MatchCallSwimmer_Tony_Intro2[] = _("I'll be pumping weights.");
#endif

#if GERMAN
const u8 gText_MatchCallBlackBelt_Nob_Strategy[] = _("Immer gewinnen!");
#else
const u8 gText_MatchCallBlackBelt_Nob_Strategy[] = _("Grand slam pummeling!");
#endif
#if GERMAN
const u8 gText_MatchCallBlackBelt_Nob_Pokemon[] = _("Kampf-Pokémon!");
#else
const u8 gText_MatchCallBlackBelt_Nob_Pokemon[] = _("FIGHTING type.");
#endif
#if GERMAN
const u8 gText_MatchCallBlackBelt_Nob_Intro1[] = _("Ohne zu prahlen: Ich kann");
#else
const u8 gText_MatchCallBlackBelt_Nob_Intro1[] = _("Not to brag, but I can bust");
#endif
#if GERMAN
const u8 gText_MatchCallBlackBelt_Nob_Intro2[] = _("10 Ziegel zerschmettern!");
#else
const u8 gText_MatchCallBlackBelt_Nob_Intro2[] = _("ten roof tiles!");
#endif

#if GERMAN
const u8 gText_MatchCallBlackBelt_Koji_Strategy[] = _("Erlebe Karate!");
#else
const u8 gText_MatchCallBlackBelt_Koji_Strategy[] = _("Witness karate power!");
#endif
#if GERMAN
const u8 gText_MatchCallBlackBelt_Koji_Pokemon[] = _("Meine Sparringspartner.");
#else
const u8 gText_MatchCallBlackBelt_Koji_Pokemon[] = _("My partners in training!");
#endif
#if GERMAN
const u8 gText_MatchCallBlackBelt_Koji_Intro1[] = _("Lass es uns mit unseren");
#else
const u8 gText_MatchCallBlackBelt_Koji_Intro1[] = _("Let us discuss matters of");
#endif
#if GERMAN
const u8 gText_MatchCallBlackBelt_Koji_Intro2[] = _("Fäusten ausdiskutieren.");
#else
const u8 gText_MatchCallBlackBelt_Koji_Intro2[] = _("the world with bare fists!");
#endif

#if GERMAN
const u8 gText_MatchCallGuitarist_Fernando_Strategy[] = _("E-Gitarrenmusik ist toll!");
#else
const u8 gText_MatchCallGuitarist_Fernando_Strategy[] = _("Rock to stunning sounds!");
#endif
#if GERMAN
const u8 gText_MatchCallGuitarist_Fernando_Pokemon[] = _("Elektro-Soundkombo!");
#else
const u8 gText_MatchCallGuitarist_Fernando_Pokemon[] = _("Electric-and-sound combo!");
#endif
#if GERMAN
const u8 gText_MatchCallGuitarist_Fernando_Intro1[] = _("Meine Songs schockieren");
#else
const u8 gText_MatchCallGuitarist_Fernando_Intro1[] = _("My compositions will shock");
#endif
#if GERMAN
const u8 gText_MatchCallGuitarist_Fernando_Intro2[] = _("und betäuben dich.");
#else
const u8 gText_MatchCallGuitarist_Fernando_Intro2[] = _("you and stun you!");
#endif

#if GERMAN
const u8 gText_MatchCallGuitarist_Dalton_Strategy[] = _("Ich elektrisiere dich!");
#else
const u8 gText_MatchCallGuitarist_Dalton_Strategy[] = _("I'll electrify you!");
#endif
#if GERMAN
const u8 gText_MatchCallGuitarist_Dalton_Pokemon[] = _("Es sind Elektro-Pokémon.");
#else
const u8 gText_MatchCallGuitarist_Dalton_Pokemon[] = _("They're ELECTRIC!");
#endif
#if GERMAN
const u8 gText_MatchCallGuitarist_Dalton_Intro1[] = _("Ich bringe die Menschen mit");
#else
const u8 gText_MatchCallGuitarist_Dalton_Intro1[] = _("I want to make people cry");
#endif
#if GERMAN
const u8 gText_MatchCallGuitarist_Dalton_Intro2[] = _("meinen Liedern zum Weinen.");
#else
const u8 gText_MatchCallGuitarist_Dalton_Intro2[] = _("with songs from my heart.");
#endif

#if GERMAN
const u8 gText_MatchCallKindler_Bernie_Strategy[] = _("Alles niederbrennen!");
#else
const u8 gText_MatchCallKindler_Bernie_Strategy[] = _("Burn it all down!");
#endif
#if GERMAN
const u8 gText_MatchCallKindler_Bernie_Pokemon[] = _("Feuergefährliche Pokémon!");
#else
const u8 gText_MatchCallKindler_Bernie_Pokemon[] = _("Burn-inducing POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallKindler_Bernie_Intro1[] = _("Neben einem Lagerfeuer");
#else
const u8 gText_MatchCallKindler_Bernie_Intro1[] = _("When you light a campfire,");
#endif
#if GERMAN
const u8 gText_MatchCallKindler_Bernie_Intro2[] = _("sollte stets Wasser stehen!");
#else
const u8 gText_MatchCallKindler_Bernie_Intro2[] = _("be sure there's some water.");
#endif

#if GERMAN
const u8 gText_MatchCallCamper_Ethan_Strategy[] = _("Man muss hartnäckig sein.");
#else
const u8 gText_MatchCallCamper_Ethan_Strategy[] = _("Hang in and be tenacious!");
#endif
#if GERMAN
const u8 gText_MatchCallCamper_Ethan_Pokemon[] = _("Jede Art von Pokémon.");
#else
const u8 gText_MatchCallCamper_Ethan_Pokemon[] = _("I'll raise any POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallCamper_Ethan_Intro1[] = _("Pokémon, aus der Wildnis,");
#else
const u8 gText_MatchCallCamper_Ethan_Intro1[] = _("POKéMON raised in the wild");
#endif
#if GERMAN
const u8 gText_MatchCallCamper_Ethan_Intro2[] = _("werden stark!");
#else
const u8 gText_MatchCallCamper_Ethan_Intro2[] = _("grow strong!");
#endif

#if GERMAN
const u8 gText_MatchCallOldCouple_JohnAndJay_Strategy[] = _("Unsere Liebe schlägt alles.");
#else
const u8 gText_MatchCallOldCouple_JohnAndJay_Strategy[] = _("Our love lets us prevail.");
#endif
#if GERMAN
const u8 gText_MatchCallOldCouple_JohnAndJay_Pokemon[] = _("Wir haben sie seit Jahren.");
#else
const u8 gText_MatchCallOldCouple_JohnAndJay_Pokemon[] = _("We've had them for years.");
#endif
#if GERMAN
const u8 gText_MatchCallOldCouple_JohnAndJay_Intro1[] = _("In 50 Jahren Ehe waren");
#else
const u8 gText_MatchCallOldCouple_JohnAndJay_Intro1[] = _("Married 50 years, we've");
#endif
#if GERMAN
const u8 gText_MatchCallOldCouple_JohnAndJay_Intro2[] = _("wir den Pokémon immer treu.");
#else
const u8 gText_MatchCallOldCouple_JohnAndJay_Intro2[] = _("devotedly raised POKéMON.");
#endif

#if GERMAN
const u8 gText_MatchCallBugManiac_Jeffrey_Strategy[] = _("Wellenförmiger Angriff!");
#else
const u8 gText_MatchCallBugManiac_Jeffrey_Strategy[] = _("Attack in waves!");
#endif
#if GERMAN
const u8 gText_MatchCallBugManiac_Jeffrey_Pokemon[] = _("Käfer-Pokémon sind cool!");
#else
const u8 gText_MatchCallBugManiac_Jeffrey_Pokemon[] = _("BUG POKéMON are cool.");
#endif
#if GERMAN
const u8 gText_MatchCallBugManiac_Jeffrey_Intro1[] = _("Ich gehe jeden Tag in den");
#else
const u8 gText_MatchCallBugManiac_Jeffrey_Intro1[] = _("I go into the forest every");
#endif
#if GERMAN
const u8 gText_MatchCallBugManiac_Jeffrey_Intro2[] = _("Wald, Käfer-Pokémon fangen.");
#else
const u8 gText_MatchCallBugManiac_Jeffrey_Intro2[] = _("day to catch BUG POKéMON.");
#endif

#if GERMAN
const u8 gText_MatchCallPsychic_Cameron_Strategy[] = _("Schwächen und verwirren!");
#else
const u8 gText_MatchCallPsychic_Cameron_Strategy[] = _("Daze and confuse!");
#endif
#if GERMAN
const u8 gText_MatchCallPsychic_Cameron_Pokemon[] = _("Solche mit irren Kräften.");
#else
const u8 gText_MatchCallPsychic_Cameron_Pokemon[] = _("Ones with weird powers.");
#endif
#if GERMAN
const u8 gText_MatchCallPsychic_Cameron_Intro1[] = _("Ich kann deine Gedanken");
#else
const u8 gText_MatchCallPsychic_Cameron_Intro1[] = _("I can see through exactly");
#endif
#if GERMAN
const u8 gText_MatchCallPsychic_Cameron_Intro2[] = _("klar und deutlich lesen.");
#else
const u8 gText_MatchCallPsychic_Cameron_Intro2[] = _("what you're thinking!");
#endif

#if GERMAN
const u8 gText_MatchCallPsychic_Jacki_Strategy[] = _("Mit vollem Einsatz kämpfen.");
#else
const u8 gText_MatchCallPsychic_Jacki_Strategy[] = _("Battle at full power.");
#endif
#if GERMAN
const u8 gText_MatchCallPsychic_Jacki_Pokemon[] = _("Geheimnisvolle Pokémon.");
#else
const u8 gText_MatchCallPsychic_Jacki_Pokemon[] = _("POKéMON of many mysteries.");
#endif
#if GERMAN
const u8 gText_MatchCallPsychic_Jacki_Intro1[] = _("Wenn ich spreche,");
#else
const u8 gText_MatchCallPsychic_Jacki_Intro1[] = _("When we spoke, I was really");
#endif
#if GERMAN
const u8 gText_MatchCallPsychic_Jacki_Intro2[] = _("setze ich Telepathie ein.");
#else
const u8 gText_MatchCallPsychic_Jacki_Intro2[] = _("using telepathy.");
#endif

#if GERMAN
const u8 gText_MatchCallGentleman_Walter_Strategy[] = _("Ruhig, gesammelt vorgehen.");
#else
const u8 gText_MatchCallGentleman_Walter_Strategy[] = _("Calm and collected.");
#endif
#if GERMAN
const u8 gText_MatchCallGentleman_Walter_Pokemon[] = _("Ganz verschiedene Pokémon.");
#else
const u8 gText_MatchCallGentleman_Walter_Pokemon[] = _("POKéMON of distinction.");
#endif
#if GERMAN
const u8 gText_MatchCallGentleman_Walter_Intro1[] = _("Wir genießen die tägliche");
#else
const u8 gText_MatchCallGentleman_Walter_Intro1[] = _("We enjoy a spot of tea");
#endif
#if GERMAN
const u8 gText_MatchCallGentleman_Walter_Intro2[] = _("Tasse Tee.");
#else
const u8 gText_MatchCallGentleman_Walter_Intro2[] = _("every day. It's imported.");
#endif

#if GERMAN
const u8 gText_MatchCallSchoolKid_Karen_Strategy[] = _("Ich kämpfe mit Köpfchen.");
#else
const u8 gText_MatchCallSchoolKid_Karen_Strategy[] = _("I use my head to battle.");
#endif
#if GERMAN
const u8 gText_MatchCallSchoolKid_Karen_Pokemon[] = _("Ich liebe jedes Pokémon.");
#else
const u8 gText_MatchCallSchoolKid_Karen_Pokemon[] = _("I love any kind of POKéMON!");
#endif
#if GERMAN
const u8 gText_MatchCallSchoolKid_Karen_Intro1[] = _("Schreibe ich gute Noten,");
#else
const u8 gText_MatchCallSchoolKid_Karen_Intro1[] = _("My daddy gives me spending");
#endif
#if GERMAN
const u8 gText_MatchCallSchoolKid_Karen_Intro2[] = _("gibt Papi mir Geld.");
#else
const u8 gText_MatchCallSchoolKid_Karen_Intro2[] = _("money if I ace a test.");
#endif

#if GERMAN
const u8 gText_MatchCallSchoolKid_Jerry_Strategy[] = _("Mein Wissen ist Macht!");
#else
const u8 gText_MatchCallSchoolKid_Jerry_Strategy[] = _("My knowledge rules!");
#endif
#if GERMAN
const u8 gText_MatchCallSchoolKid_Jerry_Pokemon[] = _("Jedes clevere Pokémon.");
#else
const u8 gText_MatchCallSchoolKid_Jerry_Pokemon[] = _("Any smart POKéMON!");
#endif
#if GERMAN
const u8 gText_MatchCallSchoolKid_Jerry_Intro1[] = _("Ich will später ein großer");
#else
const u8 gText_MatchCallSchoolKid_Jerry_Intro1[] = _("I want to be a POKéMON");
#endif
#if GERMAN
const u8 gText_MatchCallSchoolKid_Jerry_Intro2[] = _("Pokémon-Forscher werden.");
#else
const u8 gText_MatchCallSchoolKid_Jerry_Intro2[] = _("researcher in the future.");
#endif

#if GERMAN
const u8 gText_MatchCallSrAndJr_AnnaAndMeg_Strategy[] = _("Wir sprechen uns ab.");
#else
const u8 gText_MatchCallSrAndJr_AnnaAndMeg_Strategy[] = _("We talk it over first.");
#endif
#if GERMAN
const u8 gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon[] = _("Pkmn, die wir beide mögen.");
#else
const u8 gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon[] = _("POKéMON that we both like.");
#endif
#if GERMAN
const u8 gText_MatchCallSrAndJr_AnnaAndMeg_Intro1[] = _("Wir sind Senior und Junior");
#else
const u8 gText_MatchCallSrAndJr_AnnaAndMeg_Intro1[] = _("We're senior and junior");
#endif
#if GERMAN
const u8 gText_MatchCallSrAndJr_AnnaAndMeg_Intro2[] = _("im Studium der Pokémon.");
#else
const u8 gText_MatchCallSrAndJr_AnnaAndMeg_Intro2[] = _("students into POKéMON!");
#endif

#if GERMAN
const u8 gText_MatchCallPokefan_Isabel_Strategy[] = _("Los geht’s, meine Lieben!");
#else
const u8 gText_MatchCallPokefan_Isabel_Strategy[] = _("Go for it, my dears!");
#endif
#if GERMAN
const u8 gText_MatchCallPokefan_Isabel_Pokemon[] = _("Ich mag sie alle!");
#else
const u8 gText_MatchCallPokefan_Isabel_Pokemon[] = _("I have no likes or dislikes.");
#endif
#if GERMAN
const u8 gText_MatchCallPokefan_Isabel_Intro1[] = _("Auch beim Einkaufen lasse");
#else
const u8 gText_MatchCallPokefan_Isabel_Intro1[] = _("While out shopping for");
#endif
#if GERMAN
const u8 gText_MatchCallPokefan_Isabel_Intro2[] = _("ich keinen Kampf aus!");
#else
const u8 gText_MatchCallPokefan_Isabel_Intro2[] = _("supper, I battle too.");
#endif

#if GERMAN
const u8 gText_MatchCallPokefan_Miguel_Strategy[] = _("Ich kämpfe mit dem Herzen.");
#else
const u8 gText_MatchCallPokefan_Miguel_Strategy[] = _("I battle with love!");
#endif
#if GERMAN
const u8 gText_MatchCallPokefan_Miguel_Pokemon[] = _("Pkmn, die Liebe erfahren!");
#else
const u8 gText_MatchCallPokefan_Miguel_Pokemon[] = _("A POKéMON raised with love!");
#endif
#if GERMAN
const u8 gText_MatchCallPokefan_Miguel_Intro1[] = _("Pkmn und Menschen müssen");
#else
const u8 gText_MatchCallPokefan_Miguel_Intro1[] = _("It's important to build");
#endif
#if GERMAN
const u8 gText_MatchCallPokefan_Miguel_Intro2[] = _("Vertrauen aufbauen!");
#else
const u8 gText_MatchCallPokefan_Miguel_Intro2[] = _("trust with your POKéMON.");
#endif

#if GERMAN
const u8 gText_MatchCallExpert_Timothy_Strategy[] = _("Ich durchschaue Gegner!");
#else
const u8 gText_MatchCallExpert_Timothy_Strategy[] = _("I see through your moves!");
#endif
#if GERMAN
const u8 gText_MatchCallExpert_Timothy_Pokemon[] = _("Die Basis des Kampfes.");
#else
const u8 gText_MatchCallExpert_Timothy_Pokemon[] = _("The essence of FIGHTING.");
#endif
#if GERMAN
const u8 gText_MatchCallExpert_Timothy_Intro1[] = _("Ich bin noch nicht bereit,");
#else
const u8 gText_MatchCallExpert_Timothy_Intro1[] = _("I'm not ready to give way");
#endif
#if GERMAN
const u8 gText_MatchCallExpert_Timothy_Intro2[] = _("Jüngeren Platz zu machen.");
#else
const u8 gText_MatchCallExpert_Timothy_Intro2[] = _("to the young yet!");
#endif

#if GERMAN
const u8 gText_MatchCallExpert_Shelby_Strategy[] = _("Angriff als Verteidigung!");
#else
const u8 gText_MatchCallExpert_Shelby_Strategy[] = _("Attack while defending.");
#endif
#if GERMAN
const u8 gText_MatchCallExpert_Shelby_Pokemon[] = _("Kampf-Pokémon!");
#else
const u8 gText_MatchCallExpert_Shelby_Pokemon[] = _("The FIGHTING type.");
#endif
#if GERMAN
const u8 gText_MatchCallExpert_Shelby_Intro1[] = _("Ich bin alt und habe daher");
#else
const u8 gText_MatchCallExpert_Shelby_Intro1[] = _("Being old, I have my own");
#endif
#if GERMAN
const u8 gText_MatchCallExpert_Shelby_Intro2[] = _("meinen eigenen Stil.");
#else
const u8 gText_MatchCallExpert_Shelby_Intro2[] = _("style of battling.");
#endif

#if GERMAN
const u8 gText_MatchCallYoungster_Calvin_Strategy[] = _("Ich tue, was ich kann.");
#else
const u8 gText_MatchCallYoungster_Calvin_Strategy[] = _("I do what I can.");
#endif
#if GERMAN
const u8 gText_MatchCallYoungster_Calvin_Pokemon[] = _("Verschiedene Arten.");
#else
const u8 gText_MatchCallYoungster_Calvin_Pokemon[] = _("I use different types.");
#endif
#if GERMAN
const u8 gText_MatchCallYoungster_Calvin_Intro1[] = _("Ich will irgendwann einen");
#else
const u8 gText_MatchCallYoungster_Calvin_Intro1[] = _("I'm going to keep working");
#endif
#if GERMAN
const u8 gText_MatchCallYoungster_Calvin_Intro2[] = _("Arenaleiter besiegen!");
#else
const u8 gText_MatchCallYoungster_Calvin_Intro2[] = _("until I beat a GYM LEADER.");
#endif

#if GERMAN
const u8 gText_MatchCallFisherman_Elliot_Strategy[] = _("Geduld und Spucke.");
#else
const u8 gText_MatchCallFisherman_Elliot_Strategy[] = _("I battle patiently.");
#endif
#if GERMAN
const u8 gText_MatchCallFisherman_Elliot_Pokemon[] = _("Wasser-Pokémon!");
#else
const u8 gText_MatchCallFisherman_Elliot_Pokemon[] = _("WATER POKéMON to battle!");
#endif
#if GERMAN
const u8 gText_MatchCallFisherman_Elliot_Intro1[] = _("Niemand vor mir hat je");
#else
const u8 gText_MatchCallFisherman_Elliot_Intro1[] = _("I'm the world's only guy to");
#endif
#if GERMAN
const u8 gText_MatchCallFisherman_Elliot_Intro2[] = _("etwas Größeres gefangen!");
#else
const u8 gText_MatchCallFisherman_Elliot_Intro2[] = _("catch a huge POKéMON!");
#endif

#if GERMAN
const u8 gText_MatchCallTriathlete_Isaiah_Strategy[] = _("Die Umgebung erforschen.");
#else
const u8 gText_MatchCallTriathlete_Isaiah_Strategy[] = _("Exploit the environment!");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Isaiah_Pokemon[] = _("Wasser-Pokémon!");
#else
const u8 gText_MatchCallTriathlete_Isaiah_Pokemon[] = _("All hail the WATER type!");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Isaiah_Intro1[] = _("Ich lasse mich nicht von");
#else
const u8 gText_MatchCallTriathlete_Isaiah_Intro1[] = _("I won't be beaten by some");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Isaiah_Intro2[] = _("Strandhäschen besiegen.");
#else
const u8 gText_MatchCallTriathlete_Isaiah_Intro2[] = _("beach bum SWIMMER!");
#endif

#if GERMAN
const u8 gText_MatchCallTriathlete_Maria_Strategy[] = _("Geschwindigkeit ist alles!");
#else
const u8 gText_MatchCallTriathlete_Maria_Strategy[] = _("Speed above all!");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Maria_Pokemon[] = _("Ich liebe schnelle Pokémon.");
#else
const u8 gText_MatchCallTriathlete_Maria_Pokemon[] = _("I use a speedy POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Maria_Intro1[] = _("Beim Marathon forderst du");
#else
const u8 gText_MatchCallTriathlete_Maria_Intro1[] = _("A marathon is a challenge");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Maria_Intro2[] = _("dich selbst heraus.");
#else
const u8 gText_MatchCallTriathlete_Maria_Intro2[] = _("against your own self.");
#endif

#if GERMAN
const u8 gText_MatchCallTriathlete_Abigail_Strategy[] = _("Verteidigung ist die Basis.");
#else
const u8 gText_MatchCallTriathlete_Abigail_Strategy[] = _("Defense is crucial.");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Abigail_Pokemon[] = _("Kraftvolle Pokémon!");
#else
const u8 gText_MatchCallTriathlete_Abigail_Pokemon[] = _("My POKéMON is solid.");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Abigail_Intro1[] = _("Dies war als Diät gedacht,");
#else
const u8 gText_MatchCallTriathlete_Abigail_Intro1[] = _("I started this for dieting,");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Abigail_Intro2[] = _("jetzt ist es mein Hobby.");
#else
const u8 gText_MatchCallTriathlete_Abigail_Intro2[] = _("but I got right into it.");
#endif

#if GERMAN
const u8 gText_MatchCallTriathlete_Dylan_Strategy[] = _("Schneller als andere sein.");
#else
const u8 gText_MatchCallTriathlete_Dylan_Strategy[] = _("Strike before stricken!");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Dylan_Pokemon[] = _("Ein rasend schnelles Pkmn!");
#else
const u8 gText_MatchCallTriathlete_Dylan_Pokemon[] = _("A fast-running POKéMON!");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Dylan_Intro1[] = _("Rennt man rasend schnell,");
#else
const u8 gText_MatchCallTriathlete_Dylan_Intro1[] = _("If you ran and ran, you'd");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Dylan_Intro2[] = _("wird man eins mit dem Wind.");
#else
const u8 gText_MatchCallTriathlete_Dylan_Intro2[] = _("become one with the wind.");
#endif

#if GERMAN
const u8 gText_MatchCallTriathlete_Katelyn_Strategy[] = _("Stets Offensive zeigen!");
#else
const u8 gText_MatchCallTriathlete_Katelyn_Strategy[] = _("All-out offensive!");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Katelyn_Pokemon[] = _("Nur Wasser-Pokémon...");
#else
const u8 gText_MatchCallTriathlete_Katelyn_Pokemon[] = _("WATER POKéMON rule!");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Katelyn_Intro1[] = _("Ich muss jeden Tag");
#else
const u8 gText_MatchCallTriathlete_Katelyn_Intro1[] = _("I must swim over 6 miles");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Katelyn_Intro2[] = _("10 Kilometer schwimmen.");
#else
const u8 gText_MatchCallTriathlete_Katelyn_Intro2[] = _("every day.");
#endif

#if GERMAN
const u8 gText_MatchCallTriathlete_Benjamin_Strategy[] = _("Weiter, immer weiter!");
#else
const u8 gText_MatchCallTriathlete_Benjamin_Strategy[] = _("Push and push again!");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Benjamin_Pokemon[] = _("Die Stärke von Stahl...");
#else
const u8 gText_MatchCallTriathlete_Benjamin_Pokemon[] = _("The strength of STEEL.");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Benjamin_Intro1[] = _("Wenn du schwitzt, musst du");
#else
const u8 gText_MatchCallTriathlete_Benjamin_Intro1[] = _("If you're sweating, get");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Benjamin_Intro2[] = _("regelmäßig etwas trinken!");
#else
const u8 gText_MatchCallTriathlete_Benjamin_Intro2[] = _("fluids into you regularly.");
#endif

#if GERMAN
const u8 gText_MatchCallTriathlete_Pablo_Strategy[] = _("Erlebe Wasserkraft!");
#else
const u8 gText_MatchCallTriathlete_Pablo_Strategy[] = _("Draw the power of WATER.");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Pablo_Pokemon[] = _("Starke Wasser-Pokémon.");
#else
const u8 gText_MatchCallTriathlete_Pablo_Pokemon[] = _("Toughened WATER POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Pablo_Intro1[] = _("Pkmn zu trainieren ist gut,");
#else
const u8 gText_MatchCallTriathlete_Pablo_Intro1[] = _("Training POKéMON is good,");
#endif
#if GERMAN
const u8 gText_MatchCallTriathlete_Pablo_Intro2[] = _("sich selbst aber auch.");
#else
const u8 gText_MatchCallTriathlete_Pablo_Intro2[] = _("but don't neglect yourself.");
#endif

#if GERMAN
const u8 gText_MatchCallDragonTamer_Nicolas_Strategy[] = _("Die Stärke der Pkmn nutzen.");
#else
const u8 gText_MatchCallDragonTamer_Nicolas_Strategy[] = _("It's about POKéMON power!");
#endif
#if GERMAN
const u8 gText_MatchCallDragonTamer_Nicolas_Pokemon[] = _("Sieh die Macht der Drachen!");
#else
const u8 gText_MatchCallDragonTamer_Nicolas_Pokemon[] = _("See the power of DRAGONS!");
#endif
#if GERMAN
const u8 gText_MatchCallDragonTamer_Nicolas_Intro1[] = _("Eines Tages werde ich zur");
#else
const u8 gText_MatchCallDragonTamer_Nicolas_Intro1[] = _("I'll become legendary as the");
#endif
#if GERMAN
const u8 gText_MatchCallDragonTamer_Nicolas_Intro2[] = _("Legende!!!");
#else
const u8 gText_MatchCallDragonTamer_Nicolas_Intro2[] = _("strongest one day!");
#endif

#if GERMAN
const u8 gText_MatchCallBirdKeeper_Robert_Strategy[] = _("Ich zeige dir die Technik!");
#else
const u8 gText_MatchCallBirdKeeper_Robert_Strategy[] = _("I'll show you my technique!");
#endif
#if GERMAN
const u8 gText_MatchCallBirdKeeper_Robert_Pokemon[] = _("Elegant kreisende Vögel.");
#else
const u8 gText_MatchCallBirdKeeper_Robert_Pokemon[] = _("Elegantly wheeling BIRDS.");
#endif
#if GERMAN
const u8 gText_MatchCallBirdKeeper_Robert_Intro1[] = _("Meine Vogel-Pkmn bringen");
#else
const u8 gText_MatchCallBirdKeeper_Robert_Intro1[] = _("My BIRD POKéMON, deliver my");
#endif
#if GERMAN
const u8 gText_MatchCallBirdKeeper_Robert_Intro2[] = _("dem Mädchen meine Liebe!");
#else
const u8 gText_MatchCallBirdKeeper_Robert_Intro2[] = _("love to that girl!");
#endif

#if GERMAN
const u8 gText_MatchCallNinjaBoy_Lao_Strategy[] = _("Du wirst Gift schmecken!");
#else
const u8 gText_MatchCallNinjaBoy_Lao_Strategy[] = _("You'll suffer from poison!");
#endif
#if GERMAN
const u8 gText_MatchCallNinjaBoy_Lao_Pokemon[] = _("Giftige Pokémon.");
#else
const u8 gText_MatchCallNinjaBoy_Lao_Pokemon[] = _("Poisonous POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallNinjaBoy_Lao_Intro1[] = _("Ich trainiere hart, um ein");
#else
const u8 gText_MatchCallNinjaBoy_Lao_Intro1[] = _("I undertake training so");
#endif
#if GERMAN
const u8 gText_MatchCallNinjaBoy_Lao_Intro2[] = _("Ninja zu werden.");
#else
const u8 gText_MatchCallNinjaBoy_Lao_Intro2[] = _("that I may become a ninja.");
#endif

#if GERMAN
const u8 gText_MatchCallBattleGirl_Cyndy_Strategy[] = _("Der Erstschlag siegt!");
#else
const u8 gText_MatchCallBattleGirl_Cyndy_Strategy[] = _("The first strike wins!");
#endif
#if GERMAN
const u8 gText_MatchCallBattleGirl_Cyndy_Pokemon[] = _("Schnelle Kampf-Pokémon.");
#else
const u8 gText_MatchCallBattleGirl_Cyndy_Pokemon[] = _("Speedy FIGHTING type.");
#endif
#if GERMAN
const u8 gText_MatchCallBattleGirl_Cyndy_Intro1[] = _("Wenn mein Pokémon verliert,");
#else
const u8 gText_MatchCallBattleGirl_Cyndy_Intro1[] = _("If my POKéMON lose,");
#endif
#if GERMAN
const u8 gText_MatchCallBattleGirl_Cyndy_Intro2[] = _("kämpfe ich doch weiter.");
#else
const u8 gText_MatchCallBattleGirl_Cyndy_Intro2[] = _("I'll carry on the fight!");
#endif

#if GERMAN
const u8 gText_MatchCallParasolLady_Madeline_Strategy[] = _("Los, los, meine Pokémon!");
#else
const u8 gText_MatchCallParasolLady_Madeline_Strategy[] = _("Go, go, my POKéMON!");
#endif
#if GERMAN
const u8 gText_MatchCallParasolLady_Madeline_Pokemon[] = _("Ich mag alle Pokémon.");
#else
const u8 gText_MatchCallParasolLady_Madeline_Pokemon[] = _("I'll raise anything.");
#endif
#if GERMAN
const u8 gText_MatchCallParasolLady_Madeline_Intro1[] = _("Uv-Strahlen sind die Feinde");
#else
const u8 gText_MatchCallParasolLady_Madeline_Intro1[] = _("UV rays are your skin's");
#endif
#if GERMAN
const u8 gText_MatchCallParasolLady_Madeline_Intro2[] = _("der Haut. Creme dich ein!");
#else
const u8 gText_MatchCallParasolLady_Madeline_Intro2[] = _("enemy. Get protected.");
#endif

#if GERMAN
const u8 gText_MatchCallSwimmer_Jenny_Strategy[] = _("Keine Gnade!");
#else
const u8 gText_MatchCallSwimmer_Jenny_Strategy[] = _("No mercy!");
#endif
#if GERMAN
const u8 gText_MatchCallSwimmer_Jenny_Pokemon[] = _("Niedliche Wasser-Pokémon.");
#else
const u8 gText_MatchCallSwimmer_Jenny_Pokemon[] = _("Cute WATER POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallSwimmer_Jenny_Intro1[] = _("Ich habe zu viele Fans, ich");
#else
const u8 gText_MatchCallSwimmer_Jenny_Intro1[] = _("I have too many fans.");
#endif
#if GERMAN
const u8 gText_MatchCallSwimmer_Jenny_Intro2[] = _("war nämlich im Fernsehen.");
#else
const u8 gText_MatchCallSwimmer_Jenny_Intro2[] = _("I was interviewed on TV.");
#endif

#if GERMAN
const u8 gText_MatchCallPicnicker_Diana_Strategy[] = _("Ich probiere dies und das.");
#else
const u8 gText_MatchCallPicnicker_Diana_Strategy[] = _("I think about this & that.");
#endif
#if GERMAN
const u8 gText_MatchCallPicnicker_Diana_Pokemon[] = _("Ich liebe alle Pokémon.");
#else
const u8 gText_MatchCallPicnicker_Diana_Pokemon[] = _("I like all POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallPicnicker_Diana_Intro1[] = _("Was liegt hinter diesem");
#else
const u8 gText_MatchCallPicnicker_Diana_Intro1[] = _("What lies beyond that");
#endif
#if GERMAN
const u8 gText_MatchCallPicnicker_Diana_Intro2[] = _("hohen Berg dort?");
#else
const u8 gText_MatchCallPicnicker_Diana_Intro2[] = _("yonder hill?");
#endif

#if GERMAN
const u8 gText_MatchCallTwins_AmyAndLiv_Strategy[] = _("Wir kämpfen zusammen!");
#else
const u8 gText_MatchCallTwins_AmyAndLiv_Strategy[] = _("We battle together!");
#endif
#if GERMAN
const u8 gText_MatchCallTwins_AmyAndLiv_Pokemon[] = _("Wir trainieren zusammen!");
#else
const u8 gText_MatchCallTwins_AmyAndLiv_Pokemon[] = _("We train together!");
#endif
#if GERMAN
const u8 gText_MatchCallTwins_AmyAndLiv_Intro1[] = _("Wir lieben die gleichen Pkmn");
#else
const u8 gText_MatchCallTwins_AmyAndLiv_Intro1[] = _("We like the same POKéMON,");
#endif
#if GERMAN
const u8 gText_MatchCallTwins_AmyAndLiv_Intro2[] = _("und verschiedene Desserts.");
#else
const u8 gText_MatchCallTwins_AmyAndLiv_Intro2[] = _("but different desserts.");
#endif

#if GERMAN
const u8 gText_MatchCallSailor_Ernest_Strategy[] = _("Ich setze Stärke ein.");
#else
const u8 gText_MatchCallSailor_Ernest_Strategy[] = _("I force things with power!");
#endif
#if GERMAN
const u8 gText_MatchCallSailor_Ernest_Pokemon[] = _("Wasser- und Kampf-Pokémon.");
#else
const u8 gText_MatchCallSailor_Ernest_Pokemon[] = _("WATER and FIGHTING types.");
#endif
#if GERMAN
const u8 gText_MatchCallSailor_Ernest_Intro1[] = _("Matrosen sind raue Typen!");
#else
const u8 gText_MatchCallSailor_Ernest_Intro1[] = _("Seamen are rough spirits!");
#endif
#if GERMAN
const u8 gText_MatchCallSailor_Ernest_Intro2[] = _("Irgendwelche Einwände?");
#else
const u8 gText_MatchCallSailor_Ernest_Intro2[] = _("Any complaints?");
#endif

#if GERMAN
const u8 gText_MatchCallSailor_Cory_Strategy[] = _("Jederzeit kampfbereit!");
#else
const u8 gText_MatchCallSailor_Cory_Strategy[] = _("Up for a fight anytime!");
#endif
#if GERMAN
const u8 gText_MatchCallSailor_Cory_Pokemon[] = _("Ich liebe Wasser-Pokémon!");
#else
const u8 gText_MatchCallSailor_Cory_Pokemon[] = _("WATER POKéMON are my faves!");
#endif
#if GERMAN
const u8 gText_MatchCallSailor_Cory_Intro1[] = _("Um laut zu schreien,");
#else
const u8 gText_MatchCallSailor_Cory_Intro1[] = _("If you want to shout loud,");
#endif
#if GERMAN
const u8 gText_MatchCallSailor_Cory_Intro2[] = _("musst du tief einatmen.");
#else
const u8 gText_MatchCallSailor_Cory_Intro2[] = _("suck in air with your belly!");
#endif

#if GERMAN
const u8 gText_MatchCallCollector_Edwin_Strategy[] = _("Pkmn vor Schaden bewahren.");
#else
const u8 gText_MatchCallCollector_Edwin_Strategy[] = _("Protect POKéMON from harm.");
#endif
#if GERMAN
const u8 gText_MatchCallCollector_Edwin_Pokemon[] = _("Ich liebe seltene Pokémon.");
#else
const u8 gText_MatchCallCollector_Edwin_Pokemon[] = _("I love rare POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallCollector_Edwin_Intro1[] = _("Ich möchte seltene Pokémon");
#else
const u8 gText_MatchCallCollector_Edwin_Intro1[] = _("I want to collect all the");
#endif
#if GERMAN
const u8 gText_MatchCallCollector_Edwin_Intro2[] = _("aus aller Welt sammeln.");
#else
const u8 gText_MatchCallCollector_Edwin_Intro2[] = _("world's rare POKéMON.");
#endif

#if GERMAN
const u8 gText_MatchCallPkmnBreeder_Lydia_Strategy[] = _("Meine Stärke...");
#else
const u8 gText_MatchCallPkmnBreeder_Lydia_Strategy[] = _("I count on power.");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnBreeder_Lydia_Pokemon[] = _("Pokémon sind meine Kinder.");
#else
const u8 gText_MatchCallPkmnBreeder_Lydia_Pokemon[] = _("POKéMON are my children.");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnBreeder_Lydia_Intro1[] = _("Man benötigt Wissen und");
#else
const u8 gText_MatchCallPkmnBreeder_Lydia_Intro1[] = _("It takes knowledge and");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnBreeder_Lydia_Intro2[] = _("Liebe im Umgang mit Pkmn.");
#else
const u8 gText_MatchCallPkmnBreeder_Lydia_Intro2[] = _("love to raise POKéMON.");
#endif

#if GERMAN
const u8 gText_MatchCallPkmnBreeder_Isaac_Strategy[] = _("Angriff aus vollen Rohren!");
#else
const u8 gText_MatchCallPkmnBreeder_Isaac_Strategy[] = _("Full-on attack!");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnBreeder_Isaac_Pokemon[] = _("Jedes Pkmn kommt in Frage.");
#else
const u8 gText_MatchCallPkmnBreeder_Isaac_Pokemon[] = _("Anything. I'll raise it.");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnBreeder_Isaac_Intro1[] = _("Ich gebe ihnen {POKEBLOCK}, um");
#else
const u8 gText_MatchCallPkmnBreeder_Isaac_Intro1[] = _("I give them {POKEBLOCK}S for");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnBreeder_Isaac_Intro2[] = _("in Wettbewerben zu siegen.");
#else
const u8 gText_MatchCallPkmnBreeder_Isaac_Intro2[] = _("going after CONTEST titles.");
#endif

#if GERMAN
const u8 gText_MatchCallPkmnBreeder_Gabrielle_Strategy[] = _("Ich trainiere Pokémon toll!");
#else
const u8 gText_MatchCallPkmnBreeder_Gabrielle_Strategy[] = _("I raise POKéMON with care.");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnBreeder_Gabrielle_Pokemon[] = _("Trainierbare Pokémon.");
#else
const u8 gText_MatchCallPkmnBreeder_Gabrielle_Pokemon[] = _("Fun-to-raise POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnBreeder_Gabrielle_Intro1[] = _("Behandle jedes Pokémon");
#else
const u8 gText_MatchCallPkmnBreeder_Gabrielle_Intro1[] = _("Treat every POKéMON you");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnBreeder_Gabrielle_Intro2[] = _("mit Respekt.");
#else
const u8 gText_MatchCallPkmnBreeder_Gabrielle_Intro2[] = _("meet with respect.");
#endif

#if GERMAN
const u8 gText_MatchCallPkmnRanger_Catherine_Strategy[] = _("Ich glaube an meine Pkmn.");
#else
const u8 gText_MatchCallPkmnRanger_Catherine_Strategy[] = _("I believe in my POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnRanger_Catherine_Pokemon[] = _("Ich liebe starke Pokémon.");
#else
const u8 gText_MatchCallPkmnRanger_Catherine_Pokemon[] = _("I like strong POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnRanger_Catherine_Intro1[] = _("Ich bilde meine Pokémon zu");
#else
const u8 gText_MatchCallPkmnRanger_Catherine_Intro1[] = _("I'm training for rescue");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnRanger_Catherine_Intro2[] = _("einem Rettungsteam aus.");
#else
const u8 gText_MatchCallPkmnRanger_Catherine_Intro2[] = _("work with my POKéMON.");
#endif

#if GERMAN
const u8 gText_MatchCallPkmnRanger_Jackson_Strategy[] = _("Wellenförmiger Angriff!");
#else
const u8 gText_MatchCallPkmnRanger_Jackson_Strategy[] = _("Attack in waves!");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnRanger_Jackson_Pokemon[] = _("Verschiedene Arten.");
#else
const u8 gText_MatchCallPkmnRanger_Jackson_Pokemon[] = _("I use different types.");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnRanger_Jackson_Intro1[] = _("Umweltverschmutzern darf");
#else
const u8 gText_MatchCallPkmnRanger_Jackson_Intro1[] = _("Those who destroy nature");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnRanger_Jackson_Intro2[] = _("man niemals vergeben!");
#else
const u8 gText_MatchCallPkmnRanger_Jackson_Intro2[] = _("must never be forgiven!");
#endif

#if GERMAN
const u8 gText_MatchCallLass_Haley_Strategy[] = _("Ich zeige meinen Mut.");
#else
const u8 gText_MatchCallLass_Haley_Strategy[] = _("I'll show you some guts!");
#endif
#if GERMAN
const u8 gText_MatchCallLass_Haley_Pokemon[] = _("Ich liebe niedliche Pkmn!");
#else
const u8 gText_MatchCallLass_Haley_Pokemon[] = _("Cute POKéMON are my faves!");
#endif
#if GERMAN
const u8 gText_MatchCallLass_Haley_Intro1[] = _("Nach einem Kampf gehe ich");
#else
const u8 gText_MatchCallLass_Haley_Intro1[] = _("After a battle, I always");
#endif
#if GERMAN
const u8 gText_MatchCallLass_Haley_Intro2[] = _("mit meinen Pkmn schwimmen.");
#else
const u8 gText_MatchCallLass_Haley_Intro2[] = _("bathe with my POKéMON.");
#endif

#if GERMAN
const u8 gText_MatchCallBugCatcher_James_Strategy[] = _("Blitzschnelle Attacken.");
#else
const u8 gText_MatchCallBugCatcher_James_Strategy[] = _("Lightning-fast attack!");
#endif
#if GERMAN
const u8 gText_MatchCallBugCatcher_James_Pokemon[] = _("Käfer-Pkmn sind das Beste!");
#else
const u8 gText_MatchCallBugCatcher_James_Pokemon[] = _("BUG POKéMON are number 1!");
#endif
#if GERMAN
const u8 gText_MatchCallBugCatcher_James_Intro1[] = _("Um Käfer-Pkmn zu fangen,");
#else
const u8 gText_MatchCallBugCatcher_James_Intro1[] = _("If you want to catch BUG");
#endif
#if GERMAN
const u8 gText_MatchCallBugCatcher_James_Intro2[] = _("musst du früh aufstehen.");
#else
const u8 gText_MatchCallBugCatcher_James_Intro2[] = _("POKéMON, wake up early.");
#endif

#if GERMAN
const u8 gText_MatchCallHiker_Trent_Strategy[] = _("Ich kämpfe mit Stärke.");
#else
const u8 gText_MatchCallHiker_Trent_Strategy[] = _("I battle with power.");
#endif
#if GERMAN
const u8 gText_MatchCallHiker_Trent_Pokemon[] = _("Pokémon mit hartem Körper.");
#else
const u8 gText_MatchCallHiker_Trent_Pokemon[] = _("Hard-bodied POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallHiker_Trent_Intro1[] = _("Ich habe diese Wanderung");
#else
const u8 gText_MatchCallHiker_Trent_Intro1[] = _("I've been planning a month");
#endif
#if GERMAN
const u8 gText_MatchCallHiker_Trent_Intro2[] = _("einen Monat vorbereitet.");
#else
const u8 gText_MatchCallHiker_Trent_Intro2[] = _("for today's hike.");
#endif

#if GERMAN
const u8 gText_MatchCallHiker_Sawyer_Strategy[] = _("Ich mag es heiß!");
#else
const u8 gText_MatchCallHiker_Sawyer_Strategy[] = _("I like it hot!");
#endif
#if GERMAN
const u8 gText_MatchCallHiker_Sawyer_Pokemon[] = _("Heiße Pokémon!");
#else
const u8 gText_MatchCallHiker_Sawyer_Pokemon[] = _("Hot POKéMON!");
#endif
#if GERMAN
const u8 gText_MatchCallHiker_Sawyer_Intro1[] = _("Ich liebe das Wandern,");
#else
const u8 gText_MatchCallHiker_Sawyer_Intro1[] = _("As much as I love POKéMON,");
#endif
#if GERMAN
const u8 gText_MatchCallHiker_Sawyer_Intro2[] = _("wie ich Pokémon liebe.");
#else
const u8 gText_MatchCallHiker_Sawyer_Intro2[] = _("I surely like hiking!");
#endif

#if GERMAN
const u8 gText_MatchCallYoungCouple_LoisAndHal_Strategy[] = _("Liebevolle Strategie!");
#else
const u8 gText_MatchCallYoungCouple_LoisAndHal_Strategy[] = _("Lovey-dovey strategy!");
#endif
#if GERMAN
const u8 gText_MatchCallYoungCouple_LoisAndHal_Pokemon[] = _("Liebevolle Pokémon!");
#else
const u8 gText_MatchCallYoungCouple_LoisAndHal_Pokemon[] = _("Lovey-dovey POKéMON!");
#endif
#if GERMAN
const u8 gText_MatchCallYoungCouple_LoisAndHal_Intro1[] = _("Wir sind liebevoll!");
#else
const u8 gText_MatchCallYoungCouple_LoisAndHal_Intro1[] = _("We're lovey-dovey!");
#endif
#if GERMAN
const u8 gText_MatchCallYoungCouple_LoisAndHal_Intro2[] = _("Immer liebevoll!");
#else
const u8 gText_MatchCallYoungCouple_LoisAndHal_Intro2[] = _("Forever lovey-dovey!");
#endif

#if GERMAN
const u8 gText_MatchCallPkmnTrainer_Wally_Strategy[] = _("Wir lassen alles raus.");
#else
const u8 gText_MatchCallPkmnTrainer_Wally_Strategy[] = _("We let it all hang out.");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnTrainer_Wally_Pokemon[] = _("Das 1. Pkmn, das ich fing.");
#else
const u8 gText_MatchCallPkmnTrainer_Wally_Pokemon[] = _("The 1st POKéMON I caught.");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnTrainer_Wally_Intro1[] = _("Die Pokémon und ich sind");
#else
const u8 gText_MatchCallPkmnTrainer_Wally_Intro1[] = _("POKéMON and I have grown");
#endif
#if GERMAN
const u8 gText_MatchCallPkmnTrainer_Wally_Intro2[] = _("zusammengewachsen.");
#else
const u8 gText_MatchCallPkmnTrainer_Wally_Intro2[] = _("stronger together.");
#endif

#if GERMAN
const u8 gText_MatchCallRockinWhiz_Roxanne_Strategy[] = _("Steinharte Attacken.");
#else
const u8 gText_MatchCallRockinWhiz_Roxanne_Strategy[] = _("ROCK-type power attack.");
#endif
#if GERMAN
const u8 gText_MatchCallRockinWhiz_Roxanne_Pokemon[] = _("Ich liebe steinharte Pkmn!");
#else
const u8 gText_MatchCallRockinWhiz_Roxanne_Pokemon[] = _("I prefer rock-hard POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallRockinWhiz_Roxanne_Intro1[] = _("Als Leiterin einer Arena");
#else
const u8 gText_MatchCallRockinWhiz_Roxanne_Intro1[] = _("A LEADER of a big GYM bears");
#endif
#if GERMAN
const u8 gText_MatchCallRockinWhiz_Roxanne_Intro2[] = _("habe ich Verantwortung.");
#else
const u8 gText_MatchCallRockinWhiz_Roxanne_Intro2[] = _("a lot of responsibility.");
#endif

#if GERMAN
const u8 gText_MatchCallTheBigHit_Brawly_Strategy[] = _("Direkte physische Attacke.");
#else
const u8 gText_MatchCallTheBigHit_Brawly_Strategy[] = _("Direct physical action!");
#endif
#if GERMAN
const u8 gText_MatchCallTheBigHit_Brawly_Pokemon[] = _("Ich baue auf Kampf-Pokémon.");
#else
const u8 gText_MatchCallTheBigHit_Brawly_Pokemon[] = _("FIGHTING POKéMON rule!");
#endif
#if GERMAN
const u8 gText_MatchCallTheBigHit_Brawly_Intro1[] = _("Die Welt erwartet mich als");
#else
const u8 gText_MatchCallTheBigHit_Brawly_Intro1[] = _("The world awaits me as the");
#endif
#if GERMAN
const u8 gText_MatchCallTheBigHit_Brawly_Intro2[] = _("neuen, starken Kämpfer.");
#else
const u8 gText_MatchCallTheBigHit_Brawly_Intro2[] = _("next big wave!");
#endif

#if GERMAN
const u8 gText_MatchCallSwellShock_Wattson_Strategy[] = _("Elektrisieren... Britzel...");
#else
const u8 gText_MatchCallSwellShock_Wattson_Strategy[] = _("I choose to electrify.");
#endif
#if GERMAN
const u8 gText_MatchCallSwellShock_Wattson_Pokemon[] = _("Elektrizität ist alles.");
#else
const u8 gText_MatchCallSwellShock_Wattson_Pokemon[] = _("Get shocked by electricity!");
#endif
#if GERMAN
const u8 gText_MatchCallSwellShock_Wattson_Intro1[] = _("Man muss sich jedem Kampf");
#else
const u8 gText_MatchCallSwellShock_Wattson_Intro1[] = _("One must never throw a");
#endif
#if GERMAN
const u8 gText_MatchCallSwellShock_Wattson_Intro2[] = _("stellen! Auch ich muss das!");
#else
const u8 gText_MatchCallSwellShock_Wattson_Intro2[] = _("match. Even I must not.");
#endif

#if GERMAN
const u8 gText_MatchCallPassionBurn_Flannery_Strategy[] = _("Aggressiv kämpfen.");
#else
const u8 gText_MatchCallPassionBurn_Flannery_Strategy[] = _("Battle aggressively.");
#endif
#if GERMAN
const u8 gText_MatchCallPassionBurn_Flannery_Pokemon[] = _("Brennen vor Leidenschaft!");
#else
const u8 gText_MatchCallPassionBurn_Flannery_Pokemon[] = _("Burn with passion!");
#endif
#if GERMAN
const u8 gText_MatchCallPassionBurn_Flannery_Intro1[] = _("Spül die tägliche Müdigkeit");
#else
const u8 gText_MatchCallPassionBurn_Flannery_Intro1[] = _("Completely wash away daily");
#endif
#if GERMAN
const u8 gText_MatchCallPassionBurn_Flannery_Intro2[] = _("in den Heißen Quellen ab.");
#else
const u8 gText_MatchCallPassionBurn_Flannery_Intro2[] = _("fatigue in hot springs!");
#endif

#if GERMAN
const u8 gText_MatchCallReliableOne_Dad_Strategy[] = _("Mein Stil ist flexibel.");
#else
const u8 gText_MatchCallReliableOne_Dad_Strategy[] = _("I flexibly adapt my style.");
#endif
#if GERMAN
const u8 gText_MatchCallReliableOne_Dad_Pokemon[] = _("Gleichmäßig gewachsen.");
#else
const u8 gText_MatchCallReliableOne_Dad_Pokemon[] = _("Grown in a balanced manner.");
#endif
#if GERMAN
const u8 gText_MatchCallReliableOne_Dad_Intro1[] = _("Ich laufe jeden Tag 30 Min.");
#else
const u8 gText_MatchCallReliableOne_Dad_Intro1[] = _("I walk the 30 minutes from");
#endif
#if GERMAN
const u8 gText_MatchCallReliableOne_Dad_Intro2[] = _("von zu Hause aus hierher.");
#else
const u8 gText_MatchCallReliableOne_Dad_Intro2[] = _("home to here every day.");
#endif

#if GERMAN
const u8 gText_MatchCallSkyTamer_Winona_Strategy[] = _("Ich nutze die Initiative.");
#else
const u8 gText_MatchCallSkyTamer_Winona_Strategy[] = _("I take advantage of speed.");
#endif
#if GERMAN
const u8 gText_MatchCallSkyTamer_Winona_Pokemon[] = _("Anmutige Himmelstänzer.");
#else
const u8 gText_MatchCallSkyTamer_Winona_Pokemon[] = _("Graceful sky dancers.");
#endif
#if GERMAN
const u8 gText_MatchCallSkyTamer_Winona_Intro1[] = _("Es wäre toll, im Einklang");
#else
const u8 gText_MatchCallSkyTamer_Winona_Intro1[] = _("The ultimate would be to");
#endif
#if GERMAN
const u8 gText_MatchCallSkyTamer_Winona_Intro2[] = _("mit der Natur zu leben.");
#else
const u8 gText_MatchCallSkyTamer_Winona_Intro2[] = _("live as one with nature.");
#endif

#if GERMAN
const u8 gText_MatchCallMysticDuo_TateAndLiza_Strategy[] = _("Wir kämpfen zusammen.");
#else
const u8 gText_MatchCallMysticDuo_TateAndLiza_Strategy[] = _("We battle in cooperation.");
#endif
#if GERMAN
const u8 gText_MatchCallMysticDuo_TateAndLiza_Pokemon[] = _("Immer freundliche Pokémon.");
#else
const u8 gText_MatchCallMysticDuo_TateAndLiza_Pokemon[] = _("Always friendly POKéMON.");
#endif
#if GERMAN
const u8 gText_MatchCallMysticDuo_TateAndLiza_Intro1[] = _("Papa kann uns beide");
#else
const u8 gText_MatchCallMysticDuo_TateAndLiza_Intro1[] = _("Papa has trouble telling");
#endif
#if GERMAN
const u8 gText_MatchCallMysticDuo_TateAndLiza_Intro2[] = _("kaum auseinander halten.");
#else
const u8 gText_MatchCallMysticDuo_TateAndLiza_Intro2[] = _("the two of us apart!");
#endif

#if GERMAN
const u8 gText_MatchCallDandyCharm_Juan_Strategy[] = _("Ich setze auf Wasserkraft.");
#else
const u8 gText_MatchCallDandyCharm_Juan_Strategy[] = _("I use splendid waterpower.");
#endif
#if GERMAN
const u8 gText_MatchCallDandyCharm_Juan_Pokemon[] = _("Elegante Pokémon!");
#else
const u8 gText_MatchCallDandyCharm_Juan_Pokemon[] = _("POKéMON of elegance!");
#endif
#if GERMAN
const u8 gText_MatchCallDandyCharm_Juan_Intro1[] = _("Die Schmeichelei schöner");
#else
const u8 gText_MatchCallDandyCharm_Juan_Intro1[] = _("The adulation of beautiful");
#endif
#if GERMAN
const u8 gText_MatchCallDandyCharm_Juan_Intro2[] = _("Damen spornt mich an!");
#else
const u8 gText_MatchCallDandyCharm_Juan_Intro2[] = _("ladies fills me with energy!");
#endif

#if GERMAN
const u8 gText_MatchCallEliteFour_Sidney_Strategy[] = _("Offensive vor Defensive.");
#else
const u8 gText_MatchCallEliteFour_Sidney_Strategy[] = _("Offense over defense!");
#endif
#if GERMAN
const u8 gText_MatchCallEliteFour_Sidney_Pokemon[] = _("Das Schöne des Unlichts.");
#else
const u8 gText_MatchCallEliteFour_Sidney_Pokemon[] = _("The DARK side's beauties.");
#endif
#if GERMAN
const u8 gText_MatchCallEliteFour_Sidney_Intro1[] = _("Nein, ich bin kein Freak!");
#else
const u8 gText_MatchCallEliteFour_Sidney_Intro1[] = _("They said I was a punk, but");
#endif
#if GERMAN
const u8 gText_MatchCallEliteFour_Sidney_Intro2[] = _("Ich bin einer der Top Vier!");
#else
const u8 gText_MatchCallEliteFour_Sidney_Intro2[] = _("I'm one of the ELITE FOUR!");
#endif

#if GERMAN
const u8 gText_MatchCallEliteFour_Phoebe_Strategy[] = _("Verwirrend verwirren.");
#else
const u8 gText_MatchCallEliteFour_Phoebe_Strategy[] = _("Confuse and confound.");
#endif
#if GERMAN
const u8 gText_MatchCallEliteFour_Phoebe_Pokemon[] = _("Keine besondere Vorliebe.");
#else
const u8 gText_MatchCallEliteFour_Phoebe_Pokemon[] = _("There's nothing definite.");
#endif
#if GERMAN
const u8 gText_MatchCallEliteFour_Phoebe_Intro1[] = _("Wie es wohl meiner Oma am");
#else
const u8 gText_MatchCallEliteFour_Phoebe_Intro1[] = _("I wonder how my grandma at");
#endif
#if GERMAN
const u8 gText_MatchCallEliteFour_Phoebe_Intro2[] = _("Pyroberg geht?");
#else
const u8 gText_MatchCallEliteFour_Phoebe_Intro2[] = _("MT. PYRE is doing?");
#endif

#if GERMAN
const u8 gText_MatchCallEliteFour_Glacia_Strategy[] = _("Ich setze Items ein.");
#else
const u8 gText_MatchCallEliteFour_Glacia_Strategy[] = _("I use items for help.");
#endif
#if GERMAN
const u8 gText_MatchCallEliteFour_Glacia_Pokemon[] = _("Flammendes Inferno in Eis.");
#else
const u8 gText_MatchCallEliteFour_Glacia_Pokemon[] = _("Flaming passion in icy cold!");
#endif
#if GERMAN
const u8 gText_MatchCallEliteFour_Glacia_Intro1[] = _("Der Eis-Typ entwickelt");
#else
const u8 gText_MatchCallEliteFour_Glacia_Intro1[] = _("The ICE type can be better");
#endif
#if GERMAN
const u8 gText_MatchCallEliteFour_Glacia_Intro2[] = _("sich gut an warmen Orten.");
#else
const u8 gText_MatchCallEliteFour_Glacia_Intro2[] = _("trained in this hot land.");
#endif

#if GERMAN
const u8 gText_MatchCallEliteFour_Drake_Strategy[] = _("Starke Fähigkeiten nutzen.");
#else
const u8 gText_MatchCallEliteFour_Drake_Strategy[] = _("Harness strong abilities.");
#endif
#if GERMAN
const u8 gText_MatchCallEliteFour_Drake_Pokemon[] = _("Die rohe Kraft der Drachen.");
#else
const u8 gText_MatchCallEliteFour_Drake_Pokemon[] = _("The raw power of DRAGONS!");
#endif
#if GERMAN
const u8 gText_MatchCallEliteFour_Drake_Intro1[] = _("Ich widme mich den Pokémon,");
#else
const u8 gText_MatchCallEliteFour_Drake_Intro1[] = _("I dedicate myself to the");
#endif
#if GERMAN
const u8 gText_MatchCallEliteFour_Drake_Intro2[] = _("die mich gerettet haben.");
#else
const u8 gText_MatchCallEliteFour_Drake_Intro2[] = _("POKéMON that saved me.");
#endif

#if GERMAN
const u8 gText_MatchCallChampion_Wallace_Strategy[] = _("Würde und Respekt.");
#else
const u8 gText_MatchCallChampion_Wallace_Strategy[] = _("Dignity and respect.");
#endif
#if GERMAN
const u8 gText_MatchCallChampion_Wallace_Pokemon[] = _("Ich liebe anmutige Pokémon.");
#else
const u8 gText_MatchCallChampion_Wallace_Pokemon[] = _("I prefer POKéMON of grace.");
#endif
#if GERMAN
const u8 gText_MatchCallChampion_Wallace_Intro1[] = _("Ich stehe für Schönheit als");
#else
const u8 gText_MatchCallChampion_Wallace_Intro1[] = _("I represent beauty as");
#endif
#if GERMAN
const u8 gText_MatchCallChampion_Wallace_Intro2[] = _("auch für Intelligenz!");
#else
const u8 gText_MatchCallChampion_Wallace_Intro2[] = _("well as intelligence.");
#endif
#endif
#if IS_HNS
// Check page disabled for HnS trainers — table left empty.
// To re-enable: add MCFLAVOR entries here and set HasCheckPage_Trainer to TRUE.
const u8 *const gMatchCallFlavorTexts[REMATCH_TABLE_ENTRIES][CHECK_PAGE_ENTRY_COUNT] = {0};
#else
const u8 *const gMatchCallFlavorTexts[REMATCH_TABLE_ENTRIES][CHECK_PAGE_ENTRY_COUNT] =
{
    [REMATCH_ROSE] = MCFLAVOR(AromaLady_Rose),
    [REMATCH_ANDRES] = MCFLAVOR(RuinManiac_Andres),
    [REMATCH_DUSTY] = MCFLAVOR(RuinManiac_Dusty),
    [REMATCH_LOLA] = MCFLAVOR(Tuber_Lola),
    [REMATCH_RICKY] = MCFLAVOR(Tuber_Ricky),
    [REMATCH_LILA_AND_ROY] = MCFLAVOR(SisAndBro_LilaAndRoy),
    [REMATCH_CRISTIN] = MCFLAVOR(Cooltrainer_Cristin),
    [REMATCH_BROOKE] = MCFLAVOR(Cooltrainer_Brooke),
    [REMATCH_WILTON] = MCFLAVOR(Cooltrainer_Wilton),
    [REMATCH_VALERIE] = MCFLAVOR(HexManiac_Valerie),
    [REMATCH_CINDY] = MCFLAVOR(Lady_Cindy),
    [REMATCH_THALIA] = MCFLAVOR(Beauty_Thalia),
    [REMATCH_JESSICA] = MCFLAVOR(Beauty_Jessica),
    [REMATCH_WINSTON] = MCFLAVOR(RichBoy_Winston),
    [REMATCH_STEVE] = MCFLAVOR(PokeManiac_Steve),
    [REMATCH_TONY] = MCFLAVOR(Swimmer_Tony),
    [REMATCH_NOB] = MCFLAVOR(BlackBelt_Nob),
    [REMATCH_KOJI] = MCFLAVOR(BlackBelt_Koji),
    [REMATCH_FERNANDO] = MCFLAVOR(Guitarist_Fernando),
    [REMATCH_DALTON] = MCFLAVOR(Guitarist_Dalton),
    [REMATCH_BERNIE] = MCFLAVOR(Kindler_Bernie),
    [REMATCH_ETHAN] = MCFLAVOR(Camper_Ethan),
    [REMATCH_JOHN_AND_JAY] = MCFLAVOR(OldCouple_JohnAndJay),
    [REMATCH_JEFFREY] = MCFLAVOR(BugManiac_Jeffrey),
    [REMATCH_CAMERON] = MCFLAVOR(Psychic_Cameron),
    [REMATCH_JACKI] = MCFLAVOR(Psychic_Jacki),
    [REMATCH_WALTER] = MCFLAVOR(Gentleman_Walter),
    [REMATCH_KAREN] = MCFLAVOR(SchoolKid_Karen),
    [REMATCH_JERRY] = MCFLAVOR(SchoolKid_Jerry),
    [REMATCH_ANNA_AND_MEG] = MCFLAVOR(SrAndJr_AnnaAndMeg),
    [REMATCH_ISABEL] = MCFLAVOR(Pokefan_Isabel),
    [REMATCH_MIGUEL] = MCFLAVOR(Pokefan_Miguel),
    [REMATCH_TIMOTHY] = MCFLAVOR(Expert_Timothy),
    [REMATCH_SHELBY] = MCFLAVOR(Expert_Shelby),
    [REMATCH_CALVIN] = MCFLAVOR(Youngster_Calvin),
    [REMATCH_ELLIOT] = MCFLAVOR(Fisherman_Elliot),
    [REMATCH_ISAIAH] = MCFLAVOR(Triathlete_Isaiah),
    [REMATCH_MARIA] = MCFLAVOR(Triathlete_Maria),
    [REMATCH_ABIGAIL] = MCFLAVOR(Triathlete_Abigail),
    [REMATCH_DYLAN] = MCFLAVOR(Triathlete_Dylan),
    [REMATCH_KATELYN] = MCFLAVOR(Triathlete_Katelyn),
    [REMATCH_BENJAMIN] = MCFLAVOR(Triathlete_Benjamin),
    [REMATCH_PABLO] = MCFLAVOR(Triathlete_Pablo),
    [REMATCH_NICOLAS] = MCFLAVOR(DragonTamer_Nicolas),
    [REMATCH_ROBERT] = MCFLAVOR(BirdKeeper_Robert),
    [REMATCH_LAO] = MCFLAVOR(NinjaBoy_Lao),
    [REMATCH_CYNDY] = MCFLAVOR(BattleGirl_Cyndy),
    [REMATCH_MADELINE] = MCFLAVOR(ParasolLady_Madeline),
    [REMATCH_JENNY] = MCFLAVOR(Swimmer_Jenny),
    [REMATCH_DIANA] = MCFLAVOR(Picnicker_Diana),
    [REMATCH_AMY_AND_LIV] = MCFLAVOR(Twins_AmyAndLiv),
    [REMATCH_ERNEST] = MCFLAVOR(Sailor_Ernest),
    [REMATCH_CORY] = MCFLAVOR(Sailor_Cory),
    [REMATCH_EDWIN] = MCFLAVOR(Collector_Edwin),
    [REMATCH_LYDIA] = MCFLAVOR(PkmnBreeder_Lydia),
    [REMATCH_ISAAC] = MCFLAVOR(PkmnBreeder_Isaac),
    [REMATCH_GABRIELLE] = MCFLAVOR(PkmnBreeder_Gabrielle),
    [REMATCH_CATHERINE] = MCFLAVOR(PkmnRanger_Catherine),
    [REMATCH_JACKSON] = MCFLAVOR(PkmnRanger_Jackson),
    [REMATCH_HALEY] = MCFLAVOR(Lass_Haley),
    [REMATCH_JAMES] = MCFLAVOR(BugCatcher_James),
    [REMATCH_TRENT] = MCFLAVOR(Hiker_Trent),
    [REMATCH_SAWYER] = MCFLAVOR(Hiker_Sawyer),
    [REMATCH_KIRA_AND_DAN] = MCFLAVOR(YoungCouple_LoisAndHal),
    [REMATCH_WALLY_VR] = MCFLAVOR(PkmnTrainer_Wally),
    [REMATCH_ROXANNE] = MCFLAVOR(RockinWhiz_Roxanne),
    [REMATCH_BRAWLY] = MCFLAVOR(TheBigHit_Brawly),
    [REMATCH_WATTSON] = MCFLAVOR(SwellShock_Wattson),
    [REMATCH_FLANNERY] = MCFLAVOR(PassionBurn_Flannery),
    [REMATCH_NORMAN] = MCFLAVOR(ReliableOne_Dad),
    [REMATCH_WINONA] = MCFLAVOR(SkyTamer_Winona),
    [REMATCH_TATE_AND_LIZA] = MCFLAVOR(MysticDuo_TateAndLiza),
    [REMATCH_JUAN] = MCFLAVOR(DandyCharm_Juan),
    [REMATCH_SIDNEY] = MCFLAVOR(EliteFour_Sidney),
    [REMATCH_PHOEBE] = MCFLAVOR(EliteFour_Phoebe),
    [REMATCH_GLACIA] = MCFLAVOR(EliteFour_Glacia),
    [REMATCH_DRAKE] = MCFLAVOR(EliteFour_Drake),
    [REMATCH_WALLACE] = MCFLAVOR(Champion_Wallace),
};
#endif
