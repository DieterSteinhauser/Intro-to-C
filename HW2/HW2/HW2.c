/*
Dieter Steinhauser
1/23/2019
homework 2
*/

#define _CRT_SECURE_NO_WARNINGS // used to get all scanf to work
#include <stdio.h>				// used for printf and scanf functions

#define TOTAL_NUMBER_OF_DAYS 3.0  // used for the coffee average
#define SECONDS_PER_MINUTE 60     // used for time converter
#define MINUTES_PER_HOUR 60		  // used for time converter


int main()
{											//start

		// Coffee claculator


		// define the variables for the coffee calculator
	int cupsTwoDayAgo, cupsOneDayAgo, cupsToday;
	double totalCups;
	double averageCups;
		
		// define the variables for the time converter
	int userTime;
	int convertedSeconds, convertedMinutes, convertedHours;

		// 1. Print your name

		printf("Hi! My name is Dieter Steinhauser. I created this program! \n");

		// 2. Ask the user how much coffee they drank two days ago

		printf("This is my coffee calculator. \nHow many cups of coffee did you have two days ago?: \n");
		scanf("%d", &cupsTwoDayAgo);

		// 3. Ask the user how much coffee they had a day ago

		printf("Okay, How many cups of coffee did you have yesterday?: \n");
		scanf("%d", &cupsOneDayAgo);

		// 4. Ask the user how much coffee they had today

		printf("Interesting... How many cups of coffee did you have today?: \n");
		scanf("%d", &cupsToday);

		// 5. Display total cups of coffee

		totalCups = cupsTwoDayAgo + cupsOneDayAgo + cupsToday;
		printf("WOW! you drank %.0f cups of coffee over the last 3 days ",totalCups);

		// 6. Display average cups of coffee

		averageCups = totalCups / TOTAL_NUMBER_OF_DAYS ;
		printf("and drank %.2f cups of coffee on average.\n", averageCups);



	// Time conversion calculator

		// 7. Ask for a time in seconds

		printf("We're done with coffee, this is a time converter program now. \nEnter a time in seconds: \n");
		scanf("%d", &userTime);

		// 8. convert user's time input 
		convertedSeconds = userTime % SECONDS_PER_MINUTE;
		convertedMinutes = userTime / SECONDS_PER_MINUTE;
		convertedHours = convertedMinutes / MINUTES_PER_HOUR;
		// 9. display converted time
		printf("%d seconds is the equivalent to %d hour(s), %d minute(s), and %d seconds", userTime, convertedHours, convertedMinutes, convertedSeconds);

		int  x = 19;
		int  y = 5;
		x && y;;

		printf("%d \n",x);
		return 0;

}											//end

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


