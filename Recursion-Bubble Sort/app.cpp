/*written by Anuj*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int n){
    for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1]) swap(a[i],a[i+1]);
    }
    if(n>0) bubble_sort(a, n-1);
}

int main(){
    int n;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter an array of size n: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nThe sorted array (via recursive bubble sort) is: "<<endl;
    bubble_sort(arr,n);
    for(int i=0; i<n; i++){
        cout<<"|_"<<arr[i]<<"_|"<<endl;
    }
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}