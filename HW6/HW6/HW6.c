/*
Dieter Steinhauser
3/19/2019
Homework 6 
COP-2220
*/

#define _CRT_SECURE_NO_WARNINGS // used to all scanf to work
#include <stdio.h>  // used for printf and scanf functions
#include <stdlib.h>
#include <time.h>
#define Array_Size 7

// function prototypes
int getRandomInteger();
void guessGame();
void displayArray(int Array[], int length);

int main()
{//--------------------------------------------------------------Start-----------------------------------------------------------
	// Instruction text
	printf("A Program By Dieter Steinhauser. \n");
	
	printf("For this program, we will be playing a guessing game. \n");

	printf("You must try to guess a number betwen 1 and 100 in the least amount of attempts possible. \n");

	printf("There is a maximum of seven attempts. I will tell you if you are too high or low for each attempt. \n");

	printf("Ready? Lets go! \n");


	guessGame(); 
	
	return 0;
}//---------------------------------------------------------------End------------------------------------------------------------


//the guessing game function
void guessGame() 
{
	//Define Variables 
	int userGuesses[Array_Size];
	int randomInt = getRandomInteger();
	int guessCounter = 1;
	int userInput = 0;

		while (guessCounter <= Array_Size)
		{
			printf("enter guess #%d \n", guessCounter);
			scanf(" %d", &userInput);
			userGuesses[guessCounter] = userInput;

			if(userInput < randomInt)
				printf("that guess was too Low! \n");

			if (userInput > randomInt)
				printf("that guess was too High! \n");

			if(userInput == randomInt)
			{	//User guesses the correct number
				printf("Congrats! you guessed the correct number '%d' in %d attempts \n", randomInt, guessCounter);
				break;
			}

			guessCounter++;
		}
		
		//User runs out of attempts
		if(guessCounter > Array_Size)
			printf("You have run out of guesses. the correct number was %d\n", randomInt);

		displayArray(userGuesses, guessCounter);
}

void displayArray(int array[], int length)
{
	int number = 0;
	int index = 1;

	if (Array_Size == length)
		length--;

	printf("Your previous guesses were: \n");

	while (index < length)
	{
		number = array[index];
		printf(" %d",number);
		index++;
	}
}


// getRandomInteger will return a random integer number between 1 and 100
// do not make any changes to this function
int getRandomInteger()
{
	static int initialized = 0;
	if (initialized == 0)	// if the first time through
	{ 
		srand((unsigned)time(0));  
	
		// Initialize random number generator.
		initialized = 1;
	}

	return rand() % 100 + 1;}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

