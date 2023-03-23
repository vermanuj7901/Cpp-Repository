//written by anuj
#include<bits/stdc++.h>
using namespace std;

void reversedArray(int arr[], int s, int e){
    if(s<e){
        swap(arr[s], arr[e]);
        reversedArray(arr, s+1, e-1);
    }
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the values: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    reversedArray(arr, 0, n-1);
    
    cout<<"Reversed array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"\nThank You for using the application (Written by ANUJ VERMA) "<<endl;
}