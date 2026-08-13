Route116_TunnelersRestHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
	.byte 0

Route116_TunnelersRestHouse_OnTransition:
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
	end

Route116_TunnelersRestHouse_EventScript_Tunneler1::
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
	end

Route116_TunnelersRestHouse_EventScript_Tunneler2::
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
	end

Route116_TunnelersRestHouse_EventScript_Tunneler3::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_TunnelOpened
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
	release
	end

Route116_TunnelersRestHouse_EventScript_TunnelOpened::
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
	release
	end

Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
#if GERMAN
	.string "Der Metaflurtunnel…\p"
	.string "Zunächst hatten wir ein großes Team,\n"
	.string "das mit schweren Maschinen durch den\l"
	.string "Felsen brechen sollte. Dann mussten\l"
	.string "wir\l"
	.string "die Arbeit stoppen.\p"
	.string "Es stellte sich heraus, dass sich\n"
	.string "unsere Arbeit negativ auf die wilden\l"
	.string "Pokémon in dieser Gegend auswirkte.\p"
	.string "Und daher haben wir nun nichts mehr zu\n"
	.string "tun, außer hier faul herumzuhängen.$"
#else
	.string "That RUSTURF TUNNEL there…\p"
	.string "At first, we had a huge work crew boring\n"
	.string "through rock with the latest machinery.\l"
	.string "But, we had to stop.\p"
	.string "It turns out that we would have had\n"
	.string "a negative effect on wild POKéMON in\l"
	.string "the area.\p"
	.string "So, we've got nothing to do but loll\n"
	.string "around here doing nothing.$"
#endif

Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
#if GERMAN
	.string "Da ist ein Mann, der sich ganz alleine\n"
	.string "seinen Weg nach Wiesenflur gräbt. Er\l"
	.string "versucht verzweifelt durchzukommen.\p"
	.string "Er sagt, wenn er Schritt für Schritt\n"
	.string "ohne laute Maschinen gräbt, werden die\l"
	.string "Pokémon nicht gestört und ihr natür-\l"
	.string "licher Lebensraum bleibt erhalten.$"
#else
	.string "There's a man digging his way to\n"
	.string "VERDANTURF all by his lonesome.\l"
	.string "He's desperate to get through.\p"
	.string "He says that if he digs little by little\n"
	.string "without using machines, he won't\l"
	.string "disturb POKéMON, and he'll avoid\l"
	.string "harming the natural environment.\p"
	.string "I wonder if he made it through yet.$"
#endif

Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
#if GERMAN
	.string "Um ohne diesen Tunnel nach Wiesenflur\n"
	.string "zu kommen, muss man das Meer bei\p"
	.string "Faustauhaven überqueren, nach\n"
	.string "Graphitport City segeln und durch\l"
	.string "Malvenfroh City reisen.$"
#else
	.string "To get to VERDANTURF without using\n"
	.string "this TUNNEL, you'd have to cross the\l"
	.string "sea to DEWFORD, sail on to SLATEPORT,\l"
	.string "then travel through MAUVILLE.$"
#endif

Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
#if GERMAN
	.string "Hast du schon gehört!?! Der Tunnel bei\n"
	.string "Wiesenflur ist fertig!\p"
	.string "Wenn man nur fest an seine Träume\n"
	.string "glaubt, werden sie irgendwann wahr.$"
#else
	.string "Did you hear? The TUNNEL to VERDANTURF\n"
	.string "has gone through!\p"
	.string "Sometimes, if you hope strongly enough,\n"
	.string "dreams do come true.$"
#endif

