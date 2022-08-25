/*written by anuj*/
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

int main(){
    int a,b,x,y,z,n,k;
    int min=10000,max;
    cout<<"Enter a value for n: ";
    cin>>n;

    int arr[n];
    cout<<"\nEnter an array of size n: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the value of k: ";
    cin>>k;

    sort(arr,arr+n);
    cout<<"\nThe number is: "<<arr[k-1]<<endl;    

    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}