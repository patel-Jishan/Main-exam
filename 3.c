/*write a program in C to find a cube of any number using user Define Function.*/

#include<stdio.h>
void cube(int x){
 
printf("%d",x*x*x);
}
int main(){
	int num;
printf("enter number:");
scanf(" %d",& num);
cube(num);	
}
