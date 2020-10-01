/*
Dieter Steinhauser
2/13/2019
Homework 4-COP 2220
*/

#define _CRT_SECURE_NO_WARNINGS // used to all scanf to work
#include <stdio.h>				// used for printf and scanf functions

int main()
{//---------------------------------------------------------------Start-------------------------------------------------------------

	// Print name

	printf("A Program by Dieter Steinhauser \n");

	// Section 1----print a countdown from 5 to 1

	printf("program startup sequence \n");

	int counterA = 5;						// define counter		

	while (counterA > 0)					// Prints sequence of decending numbers starting at 'counterA' and ending at 0
	{
		printf("%d.... ", counterA);		// prints numbers in sequcence
		counterA--;							// subtracts one from the counter number

	}

	printf("\nProgram initiated \n");

	// Section 2----print a count up from 96 to 100

	printf("lets count to 100! Do it with me! \n....");

	int counterB = 96;						// define counter		

	while (counterB <= 100)					// Prints sequence of ascending numbers starting at 'counterB' and ending at 100
	{
		printf("%d.... ", counterB);		// prints numbers in sequcence
		counterB++;							// adds one from the counter number
	}

	printf("\nToo Slow! better luck next time. \n");

	
	
	// section 3----ask the user to enter a character ten seperate times

	printf("For this next excercise, you will enter ten seperate characters.");

	//define Variables

	int counterC = 1, digitChar = 0, letterChar = 0, otherChar = 0;
	char userChar;

	while (counterC <= 10)									// Prints sequence of decending numbers starting at 'counterC' and ending at 10
	{
		printf("\nEnter character #%d \n", counterC);		// prints question ten times with associated counter for each
		scanf(" %c", &userChar);
												


		if (('a' <= userChar && userChar <= 'z') || ('A' <= userChar && userChar <= 'Z')) 
		{
			letterChar++;									// counts inputs of Uppercase and lowercase characters
		}

		else if ('0' <= userChar && userChar <= '9')
		{
			digitChar++;									// counts inputs of digit characters
		}

		else
		{
			otherChar++;									// counts characters that are not digits or letters
		}

		counterC++;											// adds one from the counter number
	}

	// Prints the counted characters 
	printf("\nyou just input: \n");
	printf("%d Letters\n", letterChar);
	printf("%d digits\n", digitChar);
	printf("and %d other characters \n", otherChar);

	
	
	
	// section 4----Ask the user to enter integers or "-999" to stop input

	// Define variables
	int userInt, counterD = -1;
	float average, sum = 0;						

	printf("Great! Now, you will be entering integers, type '-999' to stop\n");

	do
	{
		printf("Please enter an integer:  ");				// repeats entry statement and input until user enters -999
		scanf(" %i", &userInt);

		counterD++;
		sum = sum + userInt;
	}
	while (userInt != -999);

		// math stuff
		sum = sum + 999;									// accounts for the exit code offset
		average = sum / counterD;							// finds average

		
	if ( counterD < 1 )										// prints results, depending on the number of entries
	{
		printf("Zero entries have been made, an average cannot be determined.");
	}
	else
	{
		printf("You entered %d integers with an average of %0.2f \n", counterD, average);
	}

	
	return 0;


}//----------------------------------------------------------------End--------------------------------------------------------------




