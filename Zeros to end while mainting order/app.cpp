#include<bits/stdc++.h>
using namespace std;

void suboptimal(int arr[], int n){ //suboptimal: O(nxn)
    int i=0, j=1;
    while(i<n || j<n){
        while(arr[i] != 0) i++;
        j = i+1;
        while(arr[j] == 0) j++;
        if(j>n-1) break;
        swap(arr[i], arr[j]);
        i++;
        j++;
        if(j>n-1) break;
    }
}

void optimal(int arr[], int n){  //optimal: O(n)
    int k = 0;
    while(k<n){
        if(arr[k]==0) break;
        else k++;
    }
    int i = k, j = k+1;
    while(i<n && j<n){
        if(arr[i]==0 && arr[j]!=0){
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }
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
    optimal(arr, n);
    cout<<"\nYour array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}