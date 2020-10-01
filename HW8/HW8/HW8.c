/*
Dieter Steinhauser
COP-2220
Homework 8
4/10/2019
*/

#define _CRT_SECURE_NO_WARNINGS // used to all scanf to work
#include <stdio.h>  // used for printf and scanf functions

//Function prototypes
void passwordCheck(char a1[], int *valid, int *capitalLetter, int *smallLetter, int *digits);
void findNumberCount(int a[], int length, int *even, int *odd, int *others);

int main()
{
	printf("A Program by Dieter Steinhauser \n");

	// Password check
	int pwResult;  // holds the result of the password check
	int capitalCount, smallCount, digitCount; // holds the counts
	char pw1[] = "15desZ9#";  // good password

	// you must call passwordCheck() here using the pw1 array, pwResult, capitalCount, smallCount, and digitCount
	passwordCheck( pw1, &pwResult, &capitalCount, &smallCount, &digitCount);

	printf("The password of %s has %d capital letters, %d small letters, %d digits\n", pw1, capitalCount, smallCount, digitCount);
	printf("The password of %s is %s\n\n", pw1, (pwResult ?"valid":"invalid"));
	
	char pw2[] = "abdesg9#"; // no Caps
	// you must call passwordCheck() here using the pw1 array, pwResult, capitalCount, smallCount, and digitCount
	passwordCheck(pw2, &pwResult, &capitalCount, &smallCount, &digitCount);

	printf("The password of %s has %d capital letters, %d small letters, %d digits\n", pw2, capitalCount, smallCount, digitCount);
	printf("The password of %s is %s\n\n", pw2, (pwResult ? "valid" : "invalid"));
	
	char pw3[] = "Abdesg@#"; // no digits
	// you must call passwordCheck() here using the pw1 array, pwResult, capitalCount, smallCount, and digitCount
	passwordCheck(pw3, &pwResult, &capitalCount, &smallCount, &digitCount);

	printf("The password of %s has %d capital letters, %d small letters, %d digits\n", pw3, capitalCount, smallCount, digitCount);
	printf("The password of %s is %s\n\n", pw3, (pwResult ? "valid" : "invalid"));
	
	char pw4[] = "15129Z9#"; // no small letters
	 // you must call passwordCheck() here using the pw4 array, pwResult, capitalCount, smallCount, and digitCount
	passwordCheck(pw4, &pwResult, &capitalCount, &smallCount, &digitCount);

	printf("The password of %s has %d capital letters, %d small letters, %d digits\n", pw4, capitalCount, smallCount, digitCount);
	printf("The password of %s is %s\n\n", pw4, (pwResult ? "valid" : "invalid")); 
	
	char pw5[] = "15aAr$z"; // too short
	// you must call passwordCheck() here using the pw1 array, pwResult, capitalCount, smallCount, and digitCount
	passwordCheck(pw5, &pwResult, &capitalCount, &smallCount, &digitCount);

	printf("The password of %s has %d capital letters, %d small letters, %d digits\n", pw5, capitalCount, smallCount, digitCount);
	printf("The password of %s is %s\n\n", pw5, (pwResult ? "valid" : "invalid"));

	// test the findNumberCount function
	int testArray[] = { -2, 1, 11, 3, 8, 10, 4, 9 };
	int arrayLength = 8;
	int odd, even, others;
	
	// you must call findNumberCount() function here using the testArray array, arrayLength, odd, even, and others
	
	findNumberCount(testArray, arrayLength, &even, &odd, &others);



	printf("The following array ");
	for (int i = 0; i < arrayLength; i++)
	{ // display the array numbers
		printf("%d ", testArray[i]);
	}
	printf("has %d single digit positive even numbers, %d single digit positive odd numbers, and %d other numbers", even, odd, others);
	
	return 0;
}

// The function passwordCheck() has 5 input parameters.
// 1) input parameter named a1 is a null terminated character array.
// 2) input parameter named valid is a pointer to an integer.
// 3) input parameter named capitalLetter is a pointer to an integer.
// 4) input parameter named smallLetter is a pointer to an integer.
// 5) input parameter named digits is a pointer to an integer.
// The function passwordCheck() does not return a value (void).
// The function passwordCheck() will check the character array for the following criteria. 
//There must be at least 1 small letter AND at least 1 capital letter, AND at least 1 digit, AND must be a minimum of 8 characters long. 
//If the character array meets the stated criteria then a 1 is set to the "valid" input parameter. Otherwise a 0 is set to the "valid" input parameter.
// The number of capital letters, small letters, and digits is saved in the input variables
// capitalLetter, smallLetter, and digits, respectively.

void passwordCheck(char a1[], int *valid, int *capitalLetter, int *smallLetter, int *digits)
{
	int index = 0; 
	*capitalLetter = *smallLetter = *digits = 0;

	
	for (; a1[index] != '\0'; index++)
	{
		if ('a' <= a1[index] && a1[index] <= 'z') 
			*smallLetter = *smallLetter + 1;

		if ('A' <= a1[index] && a1[index] <= 'Z')
			*capitalLetter= *capitalLetter + 1;

		if ('0' <= a1[index] && a1[index] <= '9')
			*digits= *digits + 1;

	}
	// password is valid if it contains:
	// at least one lowercase letter
	// at least one uppercase letter
	// at least one digit
	// at least eight characters not including null terminator

	if (*smallLetter > 0 && *capitalLetter > 0 && index >= 8 && *digits > 0)
		*valid = 1;
	else
		*valid = 0;

	
}


// The function findNumberCount() has 5 input parameters.
// 1) input parameter named a is an integer array.
// 2) input parameter named length is the length of the array.
// 3) input parameter named odd is a pointer to an integer.
// 4) input parameter named even is a pointer to an integer.
// 5) input parameter named others is a pointer to an integer.
// The function findNumberCount() does not return a value (void).
// The function findNumberCount() will count the numbers in the array that fall into 3 different catagories. 
//The first category is single digit positive odd numbers (which include 1,3,5,7,9) and the count of these numbers is kept in the integer pointed to by odd. 
//The second category is single digit positive even numbers (which include 0,2,4,6,8) and the count of these numbers is kept in the integer pointed to by even. 
//The third category is all other numbers that do not fall into the 1st and 2nd caetegory and the count of these numbers is kept in the integer pointed to by others. 
//You must use a switch statement to count the numbers in these 3 categories. 
//You do not need to create labels for these constants.

void findNumberCount(int a[], int length, int *even, int *odd, int *others)
{
	*even = *odd = *others = 0;

	for (int i = 0; i < length; i++)
	{
		if (a[i] < 0 || a[i] >= 10)	*others = *others + 1;

		else
		{

			switch (a[i] % 2)
			{
			case 0: *even = *even + 1; break;

			case 1: *odd = *odd + 1; break;

			}

		}
		
	}
}