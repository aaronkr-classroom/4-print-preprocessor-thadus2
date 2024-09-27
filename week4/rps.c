#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

#define WIN printf("You win!\n")
#define LOSE printf("You lose ¤Ð¤Ð\n")
#define TIE printf("Its a tie~~~\n")

void play_game(int user_choice, int comp_choice);
void print_choice(int choice);

int main(void) {
	int user_choice, comp_choice;

	srand(time(0));

	printf("Welcome to RPS!\n");
	printf("Choose your move:\n");
	printf("1-Rock\n");
	printf("2-Papaer\n");
	printf("3-Scissors\n");

	printf("Choice: >>>");
	scanf_s("%d", &user_choice);

	comp_choice = (rand() % 3) + 1; 

	printf("Your choice: ");
	print_choice(user_choice);
	printf("AI choice: ");
	print_choice(comp_choice);
	play_game(user_choice, comp_choice);

	return 0;
}

void play_game(int user_choice, int comp_choice) {
	if (user_choice == comp_choice) {
		TIE; 
	}
	else if (
		(user_choice == ROCK && comp_choice == SCISSORS) ||
		(user_choice == PAPER && comp_choice == ROCK) ||
		(user_choice == SCISSORS && comp_choice == PAPER)
		) {
		WIN;
	}
	else {
		LOSE;
	}
}


void print_choice(int choice) { 
	if (choice == ROCK) {
		printf("Rock\n");

	}
	else if (choice == PAPER) { 
		printf("Papaer\n");
	}
	else if (choice == SCISSORS) { 
		printf("Scissors\n");
	}
	else {
		printf("Error: Incorrect choice!");
	}
}