Common_EventScript_SetGymTrainers::
# 2 "data/scripts/set_gym_trainers.pory"
	switch VAR_0x8008
# 3 "data/scripts/set_gym_trainers.pory"
	case 1, Common_EventScript_SetGymTrainers_2
# 4 "data/scripts/set_gym_trainers.pory"
	case 2, Common_EventScript_SetGymTrainers_3
# 5 "data/scripts/set_gym_trainers.pory"
	case 3, Common_EventScript_SetGymTrainers_4
# 6 "data/scripts/set_gym_trainers.pory"
	case 4, Common_EventScript_SetGymTrainers_5
# 7 "data/scripts/set_gym_trainers.pory"
	case 5, Common_EventScript_SetGymTrainers_6
# 8 "data/scripts/set_gym_trainers.pory"
	case 6, Common_EventScript_SetGymTrainers_7
# 9 "data/scripts/set_gym_trainers.pory"
	case 7, Common_EventScript_SetGymTrainers_8
# 10 "data/scripts/set_gym_trainers.pory"
	case 8, Common_EventScript_SetGymTrainers_9
	return

Common_EventScript_SetGymTrainers_2:
# 3 "data/scripts/set_gym_trainers.pory"
	call KoiPond_Dojo_SetGymTrainers
	return

Common_EventScript_SetGymTrainers_3:
# 4 "data/scripts/set_gym_trainers.pory"
	call Bonsai_Dojo_SetGymTrainers
	return

Common_EventScript_SetGymTrainers_4:
# 5 "data/scripts/set_gym_trainers.pory"
	call MauvilleCity_Gym_SetGymTrainers
	return

Common_EventScript_SetGymTrainers_5:
# 6 "data/scripts/set_gym_trainers.pory"
	call LavaridgeTown_Gym_SetGymTrainers
	return

Common_EventScript_SetGymTrainers_6:
# 7 "data/scripts/set_gym_trainers.pory"
	call PetalburgCity_Gym_SetGymTrainers
	return

Common_EventScript_SetGymTrainers_7:
# 8 "data/scripts/set_gym_trainers.pory"
	call FortreeCity_Gym_SetGymTrainers
	return

Common_EventScript_SetGymTrainers_8:
# 9 "data/scripts/set_gym_trainers.pory"
	call MossdeepCity_Gym_SetGymTrainers
	return

Common_EventScript_SetGymTrainers_9:
# 10 "data/scripts/set_gym_trainers.pory"
	call SootopolisCity_Gym_SetGymTrainers
	return


KoiPond_Dojo_SetGymTrainers::
# 15 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_IZUMI
# 16 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_REN
# 17 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_MIZU
	return


Bonsai_Dojo_SetGymTrainers::
# 22 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_TAKAO
# 23 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_JOCELYN
# 24 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_LAURA
# 25 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_BRENDEN
# 26 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_CRISTIAN
# 27 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_LILITH
	return


MauvilleCity_Gym_SetGymTrainers::
# 32 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_KIRK
# 33 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_SHAWN
# 34 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_BEN
# 35 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_VIVIAN
# 36 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_ANGELO
	return


LavaridgeTown_Gym_SetGymTrainers::
# 41 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_COLE
# 42 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_AXLE
# 43 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_KEEGAN
# 44 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_GERALD
# 45 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_DANIELLE
# 46 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_JACE
# 47 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_JEFF
# 48 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_ELI
	return


PetalburgCity_Gym_SetGymTrainers::
# 53 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_RANDALL
# 54 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_PARKER
# 55 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_GEORGE
# 56 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_BERKE
# 57 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_MARY
# 58 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_ALEXIA
# 59 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_JODY
	return


FortreeCity_Gym_SetGymTrainers::
# 64 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_JARED
# 65 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_FLINT
# 66 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_ASHLEY
# 67 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_EDWARDO
# 68 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_HUMBERTO
# 69 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_DARIUS
	return


MossdeepCity_Gym_SetGymTrainers::
# 74 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_PRESTON
# 75 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_VIRGIL
# 76 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_BLAKE
# 77 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_HANNAH
# 78 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_SAMANTHA
# 79 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_MAURA
# 80 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_SYLVIA
# 81 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_NATE
# 82 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_KATHLEEN
# 83 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_CLIFFORD
# 84 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_MACEY
# 85 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_NICHOLAS
	return


SootopolisCity_Gym_SetGymTrainers::
# 90 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_ANDREA
# 91 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_CRISSY
# 92 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_BRIANNA
# 93 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_CONNIE
# 94 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_BRIDGET
# 95 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_OLIVIA
# 96 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_TIFFANY
# 97 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_BETHANY
# 98 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_ANNIKA
# 99 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_DAPHNE
	return

