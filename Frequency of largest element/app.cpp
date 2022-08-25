/*written by anuj*/
#include<iostream>
using namespace std;

int largestNumber(int arr[], int n){
    int max = 0;
    for(int i=0; i<n; i++){
        if(arr[i] >= max){
            max = arr[i];
        }
    }
    return max;
}

int frequencyOfLargest(int arr[], int n){
    int count = 0;
    int largest = largestNumber(arr, n);
    for(int i=0; i<n; i++){
        if(arr[i]==largest){
            count++;
        }
    }
    return count;
}

int main(){
    int a,x,y,z;
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter an array of size "<<n<<" : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int freq = frequencyOfLargest(arr, n);
    int lar = largestNumber(arr, n);
    cout<<"\nThe largest number "<<lar<<" has occured "<<freq<<" times."<<endl;

    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}