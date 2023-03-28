/*written by anuj*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of your array: ";
    cin>>n;
    cout<<"Now enter your array: "<<endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //precomputation
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    int q;
    cout<<"Enter your number of queries: ";
    cin>>q;
    while(q--){
        int number;
        cout<<"\n\nEnter the value: ";
        cin>>number;
        //fetching
        cout<<"The frequency of "<<number<<" is: |_"<<mpp[number]<<"_|";
    }
    cout<<endl;
    cout<<"\nThank You for using the application written by Anuj Verma."<<endl; 
    return 0;
}