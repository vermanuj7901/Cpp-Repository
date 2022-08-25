#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int arr1[n];
    for(int i=1; i<=n; i++){
        arr1[i-1]=i;
    }
    int arr[n-1];
    cout<<"\nNow Enter your array of size n-1"<<endl;
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n; j++){
            if(arr1[j]==arr[i]){
                arr1[j]=0;
            }
        }
    }

    cout<<"\nMissing number is: |_";
    for(int i=0; i<n; i++){
        if(arr1[i]!=0){
            cout<<arr1[i];
        }
    }
    cout<<"_|"<<endl;

    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}