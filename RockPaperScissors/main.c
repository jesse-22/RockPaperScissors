#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


////////////Game Implementation/////////////
int gamePlay(char player, char computer){

	//Player is the same as computer
	//Tied game
	if (player == computer)
		return -1;

	//Player is scissors and computer as paper
	//The player wins the game
	if (player =='s' && computer == 'p')
		return 1;

	//Player is rock, computer is scissors
	//The player wins the game
	if (player =='r' && computer == 's')
		return 1;

	//Player is paper, and computer is rock
	//The player wins the game
	if (player == 'p' && computer == 'r')
		return 1;

	//Player is scissors and computer is rock
	//Player loses the game
	if (player == 's' && computer == 'r')
		return 0;

	//Player is paper, and computer is scissors
	//Player loses the game
	if (player == 'p' && computer == 's')
		return 0;

	//Player is rock, and computer is paper
	//The player loses the game
	if (player == 'r' && computer == 'p')
		return 0;

return 0;
}
		/////////Driver Coder/////////
int main(){

	//Variables to store player choice
	char player, computer, result;

	//	Variable to store random number for computer
	int n;

	//Choose a random number every time
	srand(time(NULL));

	// Make the random number less than 100
	n = rand() % 100;

	//Set computer equal to the random number
	computer = n;

	//If n is less than 33, computer is rock
	if(n < 33){
		computer = 'r';
	}

	//If n is between 33 and 66, computer is paper
	if (n > 33 && n < 66){
		computer = 'p';
	}

	//If not previous constraints, then computer is scissors
	else{
		computer = 's';
	}

	//Welcome statement for game
	printf("Rock, Paper, Scissors\n");
	printf("r for Rock\n");
	printf("p for Paper\n");
	printf("s for Scissors\n");

	//Store the player's choice
	scanf("%c", &player);

	//Display what the players choice was
	if (player == 'r')
		printf("You chose: Rock\n");
	if (player == 'p')
		printf("You chose: Paper\n");
	if (player == 's')
		printf("You chose: scissors\n");

	//Call the gamePlay function
	result = gamePlay(player, computer);

	if (result == 0)
		printf("You lose, try again!");

	if (result == 1)
		printf("You win the game!");

	if (result == -1)
		printf("It's a tie!");
}
