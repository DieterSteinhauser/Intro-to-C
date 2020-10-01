/* 
Dieter Steinhauser
2/20/2019
Homework 5 COP-2220
*/

#define _CRT_SECURE_NO_WARNINGS // used to all scanf to work
#include <stdio.h>  // used for printf and scanf functions

// Function Prototypes
char toSmall(char userChar);
double absValue(double userNum);
void printLine(char charOne, char charTwo, int myint);
void displayRect(int intOne, int intTwo);


int main()
{//----------------------------------------------------------Start---------------------------------------------------------


	printf("A Program by Dieter Steinhauser \n");

	// Section 1 
		char newChar;
		
	// using the toSmall function
		newChar = toSmall('B');
			printf("with initial input 'B', the converted character is '%c' \n", newChar);	 // test 1  'B'

		newChar = toSmall('c');
			printf("with initial input 'c',the unconverted character is '%c' \n", newChar); // test 2	'c'

		newChar = toSmall('9');
			printf("with initial input '9',the unconverted character is '%c' \n", newChar); // test 3	'9'



	// Section 2
		double newNum;
		

	// using the absValue function
		newNum = absValue(-7.11);
			printf("the absolute value of (|-7.11|) is '%.2f' \n", newNum);				// negative test

		newNum = absValue(20.19);
			printf("the absolute value of (|20.19|) is '%.2f' \n", newNum);				// positive test




	// Section 3 -- using the printLine Function

			printLine(' ', '_', 10);		// test 1

			printLine('|', ' ', 10);		// test 2
		
			printf("\n");
	// Extra Credit test

			// input dimensions of the rectangle
			int width = 12;
			int height = 7;

			displayRect(width, height);

			printf("\n");
			printf("\n");


	return 0;
}//-----------------------------------------------------------End----------------------------------------------------------

// Definition of toSmall function
char toSmall(char userChar)
{
	char newChar;

	if (userChar >= 'A' && userChar <= 'Z')
	{
		newChar = userChar + 32;				// Transfers uppercase letters to lowercase
	}

	else
		newChar = userChar;						// leaves all other characters the same

	return(newChar);
}

// Definition of absValue function



double absValue(double userNum)
{
	double newNum;

	//outputs positive numbers from positive and negative inputs 

	if (userNum >= 0)							
		newNum = userNum;		//positive input

	else
		newNum = -userNum;		//negative input
	

	return (newNum);

}

// Definition of printLine function
void printLine(char charOne, char charTwo, int myInt)
{
	//extra variables
	int counter = 0 ;
	
	printf("\n		%c", charOne);

	do
	{
		printf("%c", charTwo);
		counter++;
	
	}
	while (counter <= myInt);
	

	printf("%c", charOne);
}

// Definition of displayRect function
void displayRect(int width, int height)
{
	int counterB = 2;	// accounts for the height added by top and bottom line

	printLine(' ', '_', width); // top line

	// rectangle body repeater
		do
		{
			printLine('|', ' ', width);
			counterB++;
		} 
		while (counterB <= height);


	printLine('|', '_', width); // bottom line
}
