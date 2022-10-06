//written by anuj
#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int max = INT_MIN;
    for(int i:arr){
        if(i>=max){
            max = i;
        }
    }
    return max;  
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
    cout<<"\nThe largest element in your array is: "<<largestElement(arr)<<endl;
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)."<<endl;
}