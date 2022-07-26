// 3 numbers should be inputted and you should rotate the numbers clockwise. Use the swap(x,y) function. 

#include<stdio.h>
#include<stdlib.h>

int num1,num2,num3; // The 3 numbers to be rotated

void swap(int x,int y) // Function to swap two numbers
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

void main()
{
    printf("\nEnter the three numbers:-");
    scanf("%d %d %d",&num1,&num2,&num3);

    //Printing the initial values of the 3 numbers
    printf("Initial Values of the numbers:-");
    printf("%d %d %d",num1,num2,num3);
    
    // Rotating the numbers

    


}
