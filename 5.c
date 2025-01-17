/*Write a C Program to print total number of days in a month using switch case.*/

#include<stdio.h>
int main(){
	int month;
	printf("Enter the month:");
	scanf("%d",&month);
	
	switch (month){
	case 1:
		printf("January 31days");
	break;	
	
	case 2:
		printf("February 28days or 29days");
	break;
	case 3:
		printf("March 31days");
	break;
	case 4:
		printf("April 30days");
	break;
	case 5:
		printf("May 31days");
	break;
	case 6:
		printf("June 30days");
	break;
	case 7:
		printf("July 31days");
	break;
	case 8:
		printf("August 31days");
	break;
	case 9:
		printf("September 30days");
	break;
	case 10:
		printf("october 31days");
	break;
	case 11:
		printf("November 30days");
	break;
	case 12:
		printf("December 31days");
	break;
}
}

