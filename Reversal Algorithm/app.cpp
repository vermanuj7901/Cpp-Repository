#include<bits/stdc++.h>
using namespace std;

void reversalAlgorithm(int arr[], int n, int k){
    k%=n;
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter your array of size "<<n<<": "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the rotations: ";
    cin>>k;
    reversalAlgorithm(arr, n, k);
    cout<<"\nYour rotated array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}