#include<iostream>
using namespace std;

void find(int A[],int key){
    int i,j,k,n;
    n = sizeof(A)/sizeof(A[0]);

    if(A[0]>key){
        cout<<"The number is not present in the array,Try again"<<endl;
        return;
    }

    for(int i=0,j=i+1,k=j+1;i<n,j<n,k<n;i++,j++,k++){
        if(A[i]+A[j]+A[k]==key){
                cout<<"The Indices which solve the problem are:"<<i<<" "<<j<<" "<<k<<endl;
                return;
        }
    }

}

int main(){
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    int key;
    cout<<"Enter the key to be searched:-"<<endl;
    cin>>key;
    find(A,key);
    return 0;
}