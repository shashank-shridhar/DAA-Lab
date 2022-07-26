#include<iostream>
using namespace std;

int n; // Length of the matrix

void input(){
    cout<<"Enter the length of the matrix: "<<endl;
    cin>>n;
}

int nonZero(int **A)
{
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(A[i][j]!=0){
                    count++;
                }
            }
        }
        cout<<"The nonZero elements in the array:-"<<count;
        return 0;
}


int leadingSum(int **A){
    int sum=0;
    for(int i=1;i<n;i++){
        for(int j=n-1;j>1;j--){
            sum = sum+A[i][j];
        }
    }
    return sum;
}

int diagonalProduct(int **A){
    int prod=1;
    for(int i=0;i<n;i++){
        for(int j=0;j>n;j++){
            if(i==j){
                prod=prod*A[i][j];
            }
        }

    }
    return prod;
        
}

int minorDisplay(int **A){

    for(int i=n;i>1;i--){
        cout<<"the elements below the minor diagonal are:-"<<A[i][i-1];
    }
    return 0;
}

int main()
{
    int** arr;
    arr = new int*[n];

    cout<<"Enter the value of N:-"<<endl;
    cin>>n;

    cout<<"Enter the values of the array:-"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    nonZero(arr);
    leadingSum(arr);
    minorDisplay(arr);
    diagonalProduct(arr);

    return 0;

}