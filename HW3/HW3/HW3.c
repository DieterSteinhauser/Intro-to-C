/*
Dieter STeinhauser
2/6/2019
Homework 3 - COP 2220
*/

#define _CRT_SECURE_NO_WARNINGS // used to all scanf to work
#include <stdio.h>  // used for printf and scanf functions

#define SMALL_TO_CAPITAL_OFFSET 32
#define DIGIT_OFFSET 48


int main()
{	// ---------------------------------------------Start-----------------------------------------------


	printf("A Program by Dieter Steinhauser \n");



	// Section 1 - check an integer for even/odd

		// define the variable for Section 1

	int evaluateInt = 0;

	//Ask the user to enter a Positive integer
		while (evaluateInt <= 0){
			evaluateInt = 0;
			printf("Please enter a positive number, I will evaluate if it is even or odd. \n");
			scanf(" %d", &evaluateInt);
	
			if (evaluateInt <= 0)	// if number is less than zero
			{
				printf("that number isn't positive dude. try again \n");

			}

		}
								// if number is greater than or equal to zero

	if (evaluateInt % 2 == 0) {	// checks if number is perfectly divisible by 2 
		printf("%d is an even number.\n", evaluateInt); // TRUE statement produces an even number
	}
	else
{
		printf("%d is an odd number.\n", evaluateInt); // FALSE statement produces an odd number
}


	// Section 2 - Convert a lowercase letter to a capital letter

		 // Define the variables for Section 2

		char userChar;
		char convertedChar;  
		
		
		//Ask the user to enter a lowercase letter from a to z
		printf("Now, Input a lowercase letter. \n");
		scanf(" %c", &userChar);
		if (userChar >= 'a' && userChar <= 'z')											// TRUE if input is between a-z lowercase
		{
			convertedChar = userChar - SMALL_TO_CAPITAL_OFFSET;							// Converts letter to uppercase
			printf("%c is the uppercase character of %c \n", convertedChar, userChar);	// Displays letters
		}
		else;									
		{
			if (userChar < 'a' || userChar > 'z')										// TRUE if input is NOT between a-z lowercase
			{
				printf("%c isn't a lowercase letter. Try again dude. \n", userChar);	// Displays error message
			}
		}
			
			
			
			
	// Section 3 - Convert a character digit to an integer

		// Define the variables of section 3

		char charDigit;					
		int digitInt;
	
		// ask the user to enter a number from [0-9]

		printf("Now, please enter a digit from zero to nine \n");
		scanf(" %c", &charDigit);

		//printf("%c has the ASCII number of %d \n", charDigit, charDigit);             // reference for testing below statement

		if (charDigit >= '0' && charDigit <= '9')										// TRUE if input is between 0-9 inclusive
		{
			digitInt = charDigit - DIGIT_OFFSET;										// Converts character digit into an integer

			printf("%d is the integer variable of the character '%c' \n", digitInt, charDigit);						// Displays integer
		}
		else
		{																				// TRUE if input is NOT between 0-9 inclusive
																						
				printf("%c? these aren't the digits you're looking for. move along..... \n", userChar);	// Displays error message
			
		}


	
	return 0;

}	// ---------------------------------------------End-----------------------------------------------

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

