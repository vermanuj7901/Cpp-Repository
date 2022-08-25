/*written by anuj*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a,b,x,y,z,n;
    cout<<"Enter a value for n: ";
    cin>>n;

    int arr[n];
    cout<<"\nEnter an array of size n: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"\nMedian is: |_";
    if(n%2==0){
        a=n/2;
        b=a+1;
        float med=(arr[a-1]+arr[b-1])/2.0;
        cout<<fixed;
        cout<<setprecision(1)<<med;
    }
    else{
        x=(n+1)/2;
        cout<<arr[x-1];
    }
    cout<<"_|"<<endl;

    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}