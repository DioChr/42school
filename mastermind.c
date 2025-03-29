#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int player_colour_input(char **colours, int number_colours, int index)
{
	int player_guess, i;
	char temp[2];
	
	printf("Please choose color! \n");
	if (index == 0)			//checks if it is the first choice for this round. Then prints the colours so the player can choose from
	{
		for(i = 0; i < number_colours; i++)
		{
			printf("Type %d for %s\n", i+1 , colours[i]);
		}
	}
	do
	{
		printf("Give colour for place number %d: ", index + 1);
		scanf("%s", temp);
		player_guess = atoi(temp);
		if (player_guess < 1 || player_guess > number_colours)
			printf("Invalid choice! Please select a number between 1 and %d .\n", number_colours);
	}while(player_guess < 1 || player_guess > number_colours);
	return(player_guess);
}

int array_compare(int *colours_to_find, int *player_guesses, int number_places)
{
	int i, j, counter;
	char feedback[number_places + 1];
	
	counter = 0;
	for(i = 0; i < number_places; i++)
	{
		feedback[i] = 'X';
	}
	feedback[i] = '\0';
	printf("Round results!\n");
	sleep(1);
	for(i = 0; i < number_places; i++)
	{
		if(player_guesses[i] == colours_to_find[i])
		{
			feedback[i] = '$';
			counter++;
		}
	}
	printf("There were %d colours in the right place!\n", counter);
	sleep(1);
	for(i = 0; i < number_places; i++)
	{
		for(j = number_places; j >= 0; j--)
		{
			if (player_guesses[i] == colours_to_find[j] && (i != j))
			{
				feedback[i] = '!';
			}
		}		
	}
	printf("$ stands for colours in the right place!\n! stands for correct colours but in ther wrong place\nX stands for wrong colours!\n");
	sleep(1);
	for(i = 0; i < number_places; i++)
	{
		printf("%d  %c\n", player_guesses[i], feedback[i]);
		sleep(1);
	}	
		if(counter == number_places)
	{
		printf("You are the Best! You win the game!!!");
		return(1);
	}
	return(0);
}


int *PC_setting_colours(int colours_to_find[], int number_colours, int number_places)
{
	int i, j, check;
	
	j = 0;
	for(i = 0; i < number_places; i++)
	{
		check = 1;
		while(check != 0) //while loop to give new value to arr[i] incase the colour is chosen before
		{
			colours_to_find[i] = (rand() % number_colours) + 1;
			if (i >0)
			{
				for (j = i - 1; j >= 0; j--) //comparing last random number with all the previous to ensure i dont have the same colour more than 1 time
				{
					if(colours_to_find[i] == colours_to_find[j]) //if colour already exist break from for loop and i back to rand()
						break;
				}
			}
			else
				check = 0;
			if(j < 0) //if j <0 that means the previos for loop didnt find a colour selected more than once so i set chech to 0 to break out of while and go to the next number
				check = 0;
		}
		//printf("test: %d,", colours_to_find[i]);
	}
	printf("PC has set the Mastermind table try to guess it!\n");
	return(colours_to_find);
}

void player_guessing(char **colours,int *colours_to_find, int number_colours, int number_places, int number_rounds)
{
	int i, j,k, check;
	int player_guesses[number_places];
	
	for(i = 0; i < number_rounds; i++)
	{
		printf("Round %d:", i + 1);
		for(j = 0; j < number_places; j++)
		{	
			check = 1;
			while(check != 0)
			{
				player_guesses[j] = player_colour_input(colours ,number_colours, j);
				if (j > 0)
				{
					for(k = j - 1; k >= 0; k--)
					{
						if(player_guesses[j] == player_guesses[k])
						{
							printf("You can't choose the same colour 2 times! Please choose a different colour!!!");
							break;
						}
					}
				if(k < 0)
					check = 0;
				}
				if(j == 0)
					break;
			}
			printf("you chose: %d for %s\n", player_guesses[j], colours[player_guesses[j] - 1]);
		}
		if(array_compare(colours_to_find, player_guesses, number_places) == 1)
			return;
	}
	printf("You wasted all your chances! YOU LOSE!\nBetter luck next time! Goodbye!");
}
void PC_guessing(char **colours,int *colours_to_find, int number_colours, int number_places, int number_rounds)
{
	int i, j,k, check;
	int pc_guesses[number_places];
	
	for(i = 0; i < number_rounds; i++)
	{
		printf("Round %d:\n", i + 1);
		sleep(1);
		for(j = 0; j < number_places; j++)
		{	
			check = 1;
			while(check != 0)
			{
				pc_guesses[j] = (rand() % number_colours) + 1;
				if (j > 0)
				{
					for(k = j - 1; k >= 0; k--)
					{
						if(pc_guesses[j] == pc_guesses[k])
						{
							printf("The same colour can't be chosen 2 times! Computer will choose a different colour!!!\n");
							sleep(1);
							break;
						}
					}
				if(k < 0)
					check = 0;
				}
				if(j == 0)
					break;
			}
			printf("Computer chose: %d for %s\n", pc_guesses[j], colours[pc_guesses[j] - 1]);
			sleep(1);
		}
		if(array_compare(colours_to_find, pc_guesses, number_places) == 1)
			return;
	}
	printf("You wasted all your chances! YOU LOSE!\nBetter luck next time! Goodbye!");
}
void human_set_colors(char **colours,int *colours_to_find, int number_colours, int number_places)
{
	int i, j, check;
	
	printf("player 1 has to select %d colours to hide!\n", number_places);
	j=0;
	for(i = 0; i < number_places; i++)
	{
		check = 1;
		while(check != 0) //while loop to give new value to arr[i] incase the colour is chosen before
		{
			colours_to_find[i] = player_colour_input(colours ,number_colours, i);
			if (i >0)
			{
				for (j = i - 1; j >= 0; j--) //comparing last random number with all the previous to ensure i dont have the same colour more than 1 time
				{
					if(colours_to_find[i] == colours_to_find[j]) //if colour already exist break from for loop and i back to player input
						break;
				}
			}
			else
				check = 0;
			if(j < 0) //if j <0 that means the previos for loop didnt find a colour selected more than once so i set chech to 0 to break out of while and go to the next number
				check = 0;
		}
		//printf("test: %d,", colours_to_find[i]);
	}
	printf("Player 1 has set the Mastermind table try to guess it!\n");
	//system("clear");
}
int game_mode()
{
	int mode;
	
	mode = -1;
	printf("Choose Mode:\n1) Human vs Human\n2) Human vs PC\n3) PC vs PC\n0) Exit\n");
	while(mode < 0 || mode >3)
	{
		printf("Select a number from 1 to 3 or 0 for Exit: ");
		scanf("%d", &mode);
	}
	if(mode == 0)
	{
		printf("You chose Exit! Goodbye!!!");
		return(0);
	}
	printf("You chose game mode number %d\n", mode);
	return(mode);
}

int game_difficulty()
{
	int difficulty;
	
	difficulty = -1;
	printf("Choose Level:\n1)Easy: 10 Rounds with 8 Colors on 4 Places\n2)Medium: 7 Rounds with 8 Colors on 4 Places\n3)Hard: 5 Rounds with 8 Colors on 4 Places\n4)Ultra Hard: 5 Rounds with 10 Colors on 4 Places\n5)Hell: 5 Rounds with 10 Colors on 5 Places");
	while (difficulty < 1 || difficulty > 5)
	{
		printf("\nEnter a number from 1 to 5: ");
		scanf("%d", &difficulty);
	}
	printf("You chose level : %d\n", difficulty);
	return(difficulty);
}

void game_parameters(int difficulty, int *number_colours, int *number_places, int *number_rounds)
{
	 if (difficulty <= 3) // Levels 1-3
    {
        if (difficulty == 1)
            *number_rounds = 10;
        else if (difficulty == 2)
            *number_rounds = 7;
        else if (difficulty == 3)
            *number_rounds = 5;
        *number_colours = 8;
        *number_places = 4;
    }
	else if(difficulty == 4) //level ultra
	{
		*number_colours = 10;
		*number_places = 4;
		*number_rounds = 5;
	}
	else  						//level Hell
	{
		*number_colours = 10;
		*number_places = 5;
		*number_rounds = 5;
	}
}

int main(void)
{
	int number_colours, number_places, number_rounds;
	int difficulty,mode;
	char *colours[10]  = {"Red", "Blue", "Green", "Yellow", "Orange", "Brown", "Purple", "Pink",  "White", "Black"};
	
	srand(time(NULL));
	mode = game_mode();
	if (mode == 0)
		return(0);
	difficulty = game_difficulty();
	game_parameters(difficulty, &number_colours, &number_places, &number_rounds);
	printf("Game starting!\nYou have %d rounds to guess %d colours in %d places!\n",number_rounds, number_colours, number_places);
	int colours_to_find[number_places];
	if(mode == 1)
	{
		human_set_colors(colours,colours_to_find,number_colours,number_places);
		printf("Player 2 has to play!");
		player_guessing(colours, colours_to_find,number_colours, number_places, number_rounds);
	}
	else
		PC_setting_colours(colours_to_find, number_colours, number_places);
	if(mode == 2)
		player_guessing(colours, colours_to_find,number_colours, number_places, number_rounds);
	if(mode == 3)
		PC_guessing(colours,colours_to_find, number_colours, number_places, number_rounds);
	return(0);
}
