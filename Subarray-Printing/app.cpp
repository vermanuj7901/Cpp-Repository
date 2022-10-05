//written by anuj
#include<bits/stdc++.h>
using namespace std;

void printingSubarray(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Now enter an array of size "<<n<<": "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"All possible subarrays are: "<<endl;
    printingSubarray(arr, n);
    cout<<"\nThank You for using th application (Written by ANUJ VERMA)."<<endl;
}