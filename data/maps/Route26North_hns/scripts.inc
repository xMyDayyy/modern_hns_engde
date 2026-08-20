Route26North_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route26North_OnTransition
	.byte 0

@ Kanto-Merge: Erster Johto-Boden hinter dem Torhaus. Ab hier zeigt die
@ Regionskarte die kombinierte Johto/Kanto-Ansicht statt nur Kanto.
Route26North_OnTransition::
	setflag FLAG_VISITED_JOHTO
	end

Route26North_Trigger::
	setflag FLAG_VISITED_RECEPTION_GATE
	setvar VAR_TEMP_0, 1
	end
