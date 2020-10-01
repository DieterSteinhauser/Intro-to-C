/*
Dieter Steinhauser
1/23/2019
Homework 1
*/

#define _CRT_SECURE_NO_WARNINGS // used to get all scanf to work
#include <stdio.h>				// used for printf and scanf functions

int main()
{								//start

	// Asks the user how much sleep they got last night
		double hoursOfSleep;

			printf("How many hours of sleep did you get last night?: \n");
			scanf("%lf", &hoursOfSleep);

	// Asks the user how much sleep they wanted to get last night
		double hoursOfSleepWanted;

			printf("How many hours would you like to sleep tonight?: \n");
			scanf("%lf", &hoursOfSleepWanted);

			printf("you got %.2f hours of sleep last night, and want %.2f hours tonight. Right? \n", hoursOfSleep, hoursOfSleepWanted);

	// asks the user what grade they want in the class
		int gradeInClass;
			
			printf("Great! hope you sleep well tonight! \nBy the way, What percentage grade do you want in this programming class? \n");
			scanf("%d", &gradeInClass);

			printf(" I'd really like a %2d too! \n", gradeInClass);


	// displays the number of bytes there are in an interger, character, double, and float
			int x = 5;
			char c='z';
			double g=20.19;
			float f=3.14;

				printf("hey! did you know in this %d there are %d bytes of information! \n",x, sizeof(x));				//interger display

				printf("crazy right? \n");

				printf(" and in this character %c, there is %d bytes of information!\n",c, sizeof(c));					//character display

				printf(" and in the number %.2f there are %d bytes of information!\n",g, sizeof(g));					//double display
				
				printf(" and in pi %.2f, there is %d bytes of information!\n",f, sizeof(f));							//float display

				printf("anyway, I'm Rambling again... see you in the next program!");

	return 0;
}								//end

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
