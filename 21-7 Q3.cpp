#include<iostream>
using namespace std;


void compute(int arr[], int len){
    for(int i=0;i<len;i++){
        if(arr[i]+1 != arr[i+1] && arr[i] != arr[i+1]){
            cout<<"The missing number is "<<arr[i]+1<<endl;
            break;
        }
    }
}
int main(){
    int arr[] = {1,2,4,5,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    compute(arr,len);
    return 0;
}
