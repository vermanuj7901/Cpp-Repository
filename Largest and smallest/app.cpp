/*written by anuj*/
#include<iostream>
using namespace std;

int main(){
    int a,x,y,z,n;
    cout<<"Enter value of n: ";
    cin>>n;

    int arr[n];
    cout<<"\nEnter array of size n: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max=0, min=10000;
    for(int i=0; i<n; i++){
        if(arr[i]>=max){
            max=arr[i];
        }
        else if(arr[i]<=min){
            min=arr[i];
        }
    }
    cout <<"\nLargest:  |_"<<max<<"_|"<<"\nSmallest: |_"<<min<<"_|"<<endl;

    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}