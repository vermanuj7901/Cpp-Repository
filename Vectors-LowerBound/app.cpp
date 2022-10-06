//written by anuj
#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    int key = INT_MIN;
    for(int i:A){
        if(i>=key && i<=Val){
            key=i;
        }
    }
    if(key==INT_MIN){
        return -1;
    }
    return key;
    
}

int main(){
    int n;
    cout<<"Enter size of the vector: ";
    cin>>n;
    int value;
    vector<int> arr;
    cout<<"Now enter the vector of size "<<n<<" :"<<endl;
    for(int i=0; i<n; i++){
        cin>>value;
        arr.push_back(value);
    }
    int val;
    cout<<"Enter the value of Val: ";
    cin>>val;
    cout<<"\nThe lower bound of "<<val<<" in your array is: "<<lowerBound(arr, val)<<endl;
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)."<<endl;
}