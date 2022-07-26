// WAP to store the numbers into an array of 'n' integers and then find out the smallest and largest number stored in it.

#include<stdio.h>
#include<stdlib.h>

void main()
{


int n; //Length of the array
int *arr; //Array of integers
int largest,smallest; //Variables to store the largest and smallest number


printf("\nEnter the length of the array: ");
scanf("%d",&n);

printf("\nEnter the elements of the array: ");
for(int i=0; i<=n; i++)
{
    scanf("%d",&arr[i]);
}

for(int i=0; i<n; i++)
{
    if(arr[i]>largest)
    {
        largest=arr[i];
    }
    if(arr[i]<smallest)
    {
        smallest=arr[i];
        
    }
}

printf("\nLargest number is: %d",largest);

printf("\nSmallest number is: %d\n",smallest);

}



