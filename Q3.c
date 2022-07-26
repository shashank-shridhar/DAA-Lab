#include<stdio.h>
#include<stdlib.h>

int len; //Length of the array
int *arr; //Array of integers
int *even; //Array of even integers
int *odd; //Array of odd integers

int even,odd; // Variables to count the number of even numbers and odd numbers

void main()
{
    printf("\nEnter the length of the array:(<10)) ");
    scanf("%d",&len);
    for(int i=0;i<len;i++)
    {
        printf("\nEnter the element at index %d: ",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<len;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
            even[i]=arr[i];
        }
        else
        {
            odd++;
            odd[i]=arr[i];
        }
    }

    printf("\nThe even numbers are: ");
    for(int i=0;i<even;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\nThe odd numbers are: ");
    for(int i=0;i<odd;i++)
    {
        printf("%d ",odd[i]);
    }

}