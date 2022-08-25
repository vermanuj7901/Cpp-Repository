/*written by Anuj*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int n){
    for(int times=1; times<=n-1; times++){
        for(int j=0; j<=n-times-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

void selection_sort(int a[], int n){
    for(int pos=0; pos<=n-2; pos++){
        int min_pos=pos;
        int current = a[pos];
        for(int j = pos; j<n; j++){
            if(a[j]<a[min_pos]){
                min_pos = j;
            }
        }
        swap(a[min_pos],a[pos]);
    }
}

void insertion_sort(int a[], int n){
    for(int i=1; i<=n; i++){
        int current = a[i];
        int prev = i-1;
        while(prev>=0 && a[prev]>current){
            a[prev+1] = a[prev];
            prev = prev-1;
        }
        a[prev+1] = current;
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
    int z;
    cout<<"-------MENU------- \n1.Bubble Sort \n2.Selection Sort \n3.Insertion Sort \n4.Exit"<<endl;
    cout<<"Enter your option: ";
    cin>>z;
    switch(z){
        case 1:
                cout<<"\nThe sorted array (via bubble sort) is: "<<endl;
                bubble_sort(arr,n);
                for(int i=0; i<n; i++){
                    cout<<"|_"<<arr[i]<<"_|"<<endl;
                }
                break;

                case 2:
                cout<<"\nThe sorted array (via selection sort) is: "<<endl;
                selection_sort(arr,n);
                for(int i=0; i<n; i++){
                    cout<<"|_"<<arr[i]<<"_|"<<endl;
                }
                break;

                case 3:
                cout<<"\nThe sorted array (via insertion sort) is: "<<endl;
                insertion_sort(arr,n);
                for(int i=0; i<n; i++){
                    cout<<"|_"<<arr[i]<<"_|"<<endl;
                }
                break;

                case 4:
                exit(0);

                default:
                cout<<"******ERROR******"<<endl;
                cout<<"Enter a valid choice"<<endl;
            }
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}