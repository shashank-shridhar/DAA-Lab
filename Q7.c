/* Write a program to display an array of n integers (n>1), where at every index
of the array should contain the product of all elements in the array except the
element at the given index. Solve this problem by taking single loop and
without an additional array.*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,j,k,*a,*b;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                b[i]*=a[j];
            }
        }
    }
    printf("The array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
}