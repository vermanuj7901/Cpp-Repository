//written by anuj
#include<bits/stdc++.h>
using namespace std;

int sumOfElement(int arr[][100], int n, int m) {
    int sum = 0;
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            sum+=arr[i][j];
        }
    }
    return sum;
}

int main(){
    int arr[100][100];
    int n, m;
    cout<<"Enter number of rows and coloumns: ";
    cin>>n>>m;
    cout<<"Enter your array: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"\nSum of element(s) below diagonal element(s) is/are: "<<sumOfElement(arr, n, m)<<endl;

    cout<<"\n------Thank You for using the application (Written by ANUJ VERMA)------"<<endl;
    return 0;
}