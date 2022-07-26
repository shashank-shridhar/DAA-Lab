// WAP to print the third greatest and second smallest number in the array

#include<stdio.h>
#include<stdlib.h>

int n; //Length of the array
int *arr; //Array of integers

int third_largest,second_smallest; //Variables to store the output

void main()
{
    printf("\nEnter the length of the array: ");
    scanf("%d",&n);
    
    printf("\nEnter the elements of the array: ");
    for(int i=0; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<=n; i++)
    {
        
    }
    
    printf("\nThird largest number is: %d",third_largest);
    
    printf("\nSecond smallest number is: %d\n",second_smallest);

}