VerdanturfTown_FriendshipRatersHouse_MapScripts::
	.byte 0

VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater::
	lock
	faceplayer
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	switch VAR_RESULT
	case FRIENDSHIP_NONE, VerdanturfTown_FriendshipRatersHouse_EventScript_DetestsYou
	case FRIENDSHIP_1_TO_49, VerdanturfTown_FriendshipRatersHouse_EventScript_VeryWary
	case FRIENDSHIP_50_TO_99, VerdanturfTown_FriendshipRatersHouse_EventScript_NotUsedToYou
	case FRIENDSHIP_100_TO_149, VerdanturfTown_FriendshipRatersHouse_EventScript_GettingUsedToYou
	case FRIENDSHIP_150_TO_199, VerdanturfTown_FriendshipRatersHouse_EventScript_LikesYouQuiteALot
	case FRIENDSHIP_200_TO_254, VerdanturfTown_FriendshipRatersHouse_EventScript_VeryHappy
	case FRIENDSHIP_MAX, VerdanturfTown_FriendshipRatersHouse_EventScript_AdoresYou
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_DetestsYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_VeryWary::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryWary, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_NotUsedToYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_GettingUsedToYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_LikesYouQuiteALot::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_VeryHappy::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_AdoresYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_Pikachu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou:
#if GERMAN
	.string "Zeig mir doch mal dein Pokémon.\n"
	.string "Ich prüfe, wie sehr es dich mag.\p"
	.string "Oh. Dein Pokémon…$"
#else
	.string "Let me see your POKéMON.\n"
	.string "I'll check to see how much it likes you.\p"
	.string "Oh.\n"
	.string "Your POKéMON…$"
#endif

VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou:
#if GERMAN
	.string "Es liebt dich über alles.\n"
	.string "Mehr lieben könnte es dich gar nicht.\l"
	.string "Das zu sehen, macht mich glücklich.$"
#else
	.string "It adores you.\n"
	.string "It can't possibly love you any more.\l"
	.string "I even feel happy seeing it.$"
#endif

VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy:
#if GERMAN
	.string "Es scheint sehr glücklich zu sein.\n"
	.string "Es mag dich wirklich sehr.$"
#else
	.string "It seems to be very happy.\n"
	.string "It obviously likes you a whole lot.$"
#endif

VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot:
#if GERMAN
	.string "Es mag dich.\n"
	.string "Es möchte von dir verwöhnt werden.$"
#else
	.string "It likes you quite a lot.\n"
	.string "It seems to want to be babied a little.$"
#endif

VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou:
#if GERMAN
	.string "Es gewöhnt sich langsam an dich.\n"
	.string "Es glaubt an dich.$"
#else
	.string "It's getting used to you.\n"
	.string "It seems to believe in you.$"
#endif

VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou:
#if GERMAN
	.string "Es hat sich noch nicht an dich\n"
	.string "gewöhnt.\l"
	.string "Weder liebt es dich, noch hasst es\p"
	.string "dich.$"
#else
	.string "It's not very used to you yet.\n"
	.string "It neither loves nor hates you.$"
#endif

VerdanturfTown_FriendshipRatersHouse_Text_VeryWary:
#if GERMAN
	.string "Es schwankt in seinen Gefühlen.\n"
	.string "Es hat eine beängstigende Bösartigkeit\l"
	.string "in den Augen. Es mag dich nicht.$"
#else
	.string "It's very wary.\n"
	.string "It has scary viciousness in its eyes.\l"
	.string "It doesn't like you much at all.$"
#endif

VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou:
#if GERMAN
	.string "Es fällt mir schwer, das zu sagen…\p"
	.string "Dein Pokémon hasst dich. Das ist nicht\n"
	.string "gerade angenehm für dich, oder?$"
#else
	.string "This is a little hard for me to say…\p"
	.string "Your POKéMON simply detests you.\n"
	.string "Doesn't that make you uncomfortable?$"
#endif

VerdanturfTown_FriendshipRatersHouse_Text_Pikachu:
#if GERMAN
	.string "Pikachu: Pika pika!$"
#else
	.string "PIKACHU: Pika pika!$"
#endif

