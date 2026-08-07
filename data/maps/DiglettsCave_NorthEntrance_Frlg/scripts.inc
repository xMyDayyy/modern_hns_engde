DiglettsCave_NorthEntrance_Frlg_MapScripts::
	.byte 0

DiglettsCave_NorthEntrance_EventScript_Hiker::
	msgbox DiglettsCave_NorthEntrance_RockTunnelPitchBlack, MSGBOX_NPC
	end

DiglettsCave_NorthEntrance_RockTunnelPitchBlack::
#if GERMAN
	.string "Im Felstunnel ist es stockdunkel\n"
	.string "und furchtbar gruselig!\p"
	.string "Wenn nur ein Pokémon mit einem\n"
	.string "Blitz für Licht sorgen könnte...$"
#else
	.string "I went inside ROCK TUNNEL, but it's\n"
	.string "pitch-black and scary in there.\p"
	.string "If I could get a POKéMON to use\n"
	.string "FLASH and light it up…$"
#endif

