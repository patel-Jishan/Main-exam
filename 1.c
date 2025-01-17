/*Write a C program find the third angle of a triangle if two angles are given.*/

#include<stdio.h>
int main(){
	int angle1,angle2 ,angle3=180 ;
	printf("Enter the angle1: ");
	scanf("%d",&angle1);
	printf("Enter the angle2:");
	scanf("%d",&angle2);
	
	angle3=180-(angle1+angle2);
	printf(" 3 angle is :%d",angle3);
	}
