/*written by Anuj*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int hole = *a;
    *a = *b;
    *b = hole;
}

void insert(int arr[], int i){
    if(i==1){
        if(arr[1]<arr[0]) swap(arr[1], arr[0]);
    }
    else{
        if(arr[i]<arr[i-1]) swap(arr[i], arr[i-1]);
        insert(arr, i-1);
    }
}

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        insert(arr, i);
    }
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
    insertionSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<"|_"<<arr[i]<<"_|"<<endl;
    }
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}