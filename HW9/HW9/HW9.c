/*
Dieter Steinhauser
Homework 9
4/17/19
COP-2220
*/

#define _CRT_SECURE_NO_WARNINGS // used to all scanf to work
#include <stdio.h>  // used for printf and scanf functions

#define COLOR_SIZE 50
#define PLANT_ARRAY_SIZE 3
// struct definition called Plant goes here
// The first member variable is an integer called plantID which represents the ID of the plant.
// The second member variable is an double called price which represents the price of the plant.
// The third member variable is a character array called color which will be the size of COLOR_SIZE
// which is already defined above. The color character array represents the perdominent color of the plant.

typedef struct Plant
{
	int PlantID;
	double price;
	char color[COLOR_SIZE]
;
}Plant;

// function prototypes go here
void initializePlant(Plant *x);
void displayPlant(Plant*x);
int findCheapestPlant(Plant x[], int length);

int main()
{//-------------------------------------------------------------------------------------------------------------
	printf("Homework 9 by Dieter Steinhauser\n");

	// create an array of Plant structs called totalPlants of size PLANT_ARRAY_SIZE here.
	// PLANT_ARRAY_SIZE is already defined above
	Plant totalPlants[PLANT_ARRAY_SIZE];

	// Create a loop that traverses the totalPlants array. Each element of the totalPlants array
	// will be initialized by the user. Call the function initializePlant() for each element of the
	// totalPlants array to initial each element of the totalPlants array.
	for (int i = 0; i < PLANT_ARRAY_SIZE; i++)
	{
		printf("Enter the information for plant %d\n", (i + 1));
		initializePlant(&totalPlants[i]);
	}

	// find the index (element number) of the cheapest plant in the totalPlants array
	// using the findCheapestPlant function.
	 int cheapestPlant = findCheapestPlant(totalPlants, PLANT_ARRAY_SIZE);

	// display the cheapest plant that was found using the displayPlant() function.
	displayPlant(&totalPlants[cheapestPlant]);


	return 0;

}//-------------------------------------------------------------------------------------------------------------

// The function initializePlant() has 1 input paramter.// 1) input parameter named x is a pointer to the struct Plant.
// The function initializePlant() does not return a value (void).
// The function initializePlant() will separately query the user to enter each element
// of the struct that is pointed to by x. Each user entry will be saved in the
// struct that is pointed to by x.
void initializePlant(Plant* x)
{
	printf("Enter plant ID as an integer:\n");
	scanf("%d", &(x->PlantID));

	printf("Enter the plants price as a correct to the nearest cent:\n");
	scanf("%lf", &(x->price)); 

	printf("Enter the plants color:\n");
	scanf("%s", &(x->color)); 

}



// The function displayPlant() has 1 input paramter.// 1) input parameter named x is a pointer to the struct Plant.
// The function displayPlant() does not return a value (void).
// The function displayPlant() will display to the user the contents of the struct
// that is pointed to by x. The format should be the Plant ID followed by the price
// of the plant followed by the color of the plant.

void displayPlant(Plant * x)
{
	printf("The Cheapest plant has a plantID of %d, a price of %.2f, and color %s. \n", (x)->PlantID, (x)->price, (x)->color);
}

// The function findCheapestPlant() has 2 input parameters.
// 1) the input parameter named x is an array of Plant structs.
// 2) the input parameter named length is the length of the array x.
// The function findCheapestPlant() will return an integer.
// The function findCheapestPlant() will find the Plant struct element that
// has the cheapest price. The index to the cheapest plant is the return value.
// If the length is 0 or lower then a -1 is returned as the index.

int findCheapestPlant(Plant x[], int length)
{
	int cheapestPlant = 0;
	if (length > 0)
	{
		for (int i = 0; i < length; i++)
		{
			if (x[i].price < x[(i - 1)].price)
			cheapestPlant = i;
		}
		return cheapestPlant;
	}
	else return -1;
}
