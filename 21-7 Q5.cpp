#include<iostream>
using namespace std;

// Code for sorting an array using (using selection sort)

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sortArray(int A[], int len){

    for(int i=0;i<len-1;i++){
        int min = i;
        for(int j=i+1;j<len;j++){
            if(A[j]<A[min]){
                min = j;
            }
        }
        swap(&A[min],&A[i]);
    }
}

void sortDescending(int A[], int len){
    for(int i=0;i<len-1;i++){
        int max = i;
        for(int j=i+1;j<len;j++){
            if(A[j]>A[max]){
                max = j;
            }
        }
        swap(&A[max],&A[i]);
    }
}

// Home assignment
/* Suppose an array has n distinct elements. Write a program to sort array till 'k' in increasing order and the rest in decreasing order. */

void sorthalf(int A[],int k,int n){

    for(int i=0;i<k;i++){
        int min = i;
        for(int j=i+1;j<k;j++){
            if(A[j]<A[min]){
                min = j;
            }
        swap(&A[min],&A[i]);   
    }
    }
    
    for(int j=k+1;j<n;j++){
        int max = j;
        for(int j=k+1;j<n;j++){
            if(A[j]>A[max]){
                max = j;
            }
        }
        swap(&A[max],&A[j]);
    }
}

int main()
{
    int A[] = {2,3,4,7,8,5,10,12,13,14};
    int len = sizeof(A)/sizeof(A[0]);
    sorthalf(A,5,len);
    return 0;
}


