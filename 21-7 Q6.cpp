#include<iostream>
using namespace std;

int count=0; // The number of inversions in the array

void countInversion(int *A,int len){
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(A[i]>A[j] && i<j){

            }
            
        }
        count++;
    }
    cout<<"The number of inversions is:-"<<count;
}

int main(){
    int A[] = {3,2,1,4,5,3,6,3,1,2};
    countInversion(A,10);

}