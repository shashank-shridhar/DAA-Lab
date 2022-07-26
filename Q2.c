// WAP to find the total number of duplicate elements in the array.

#include<stdio.h>
#include<stdlib.h>

int arr[10]; //Array of integers used
int count=0; // Number of duplicate elements in the array
int g; 
void main()
{
    printf("\nEnter the elements of the array:-");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }

    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=0;
            }
        }
    }

    if(count>g)
    {
        g = count;
    }
    count = 0;
    printf("\nThe most repeated element is: %d",g);
}


