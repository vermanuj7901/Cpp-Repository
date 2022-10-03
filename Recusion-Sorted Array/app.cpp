//written by anuj
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    if(n<=1){
        return true;
    }
    if(arr[0]<arr[1] && isSorted(arr+1, n-1)){
        return true;
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int arr[n];
    cout<<"Now enter your array of size "<<n<<": "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(isSorted(arr, n)){
        cout<<"Array is sorted."<<endl;
    }
    else{
        cout<<"Array is not sorted."<<endl;
    }
    cout<<"\nThank You for using the application (Written by ANUJ VERMA) "<<endl;
}
