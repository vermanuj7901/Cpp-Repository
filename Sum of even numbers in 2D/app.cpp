/*written by anuj*/
#include<iostream>
using namespace std;

void solve(){

}

void printArray(int arr[][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int sumOfEven(int arr[][100], int n, int m){
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]%2==0){
                sum+=arr[i][j]; 
            }
        }
    }
    return sum;
}

int main(){
    int n,m;
    cout<<"Enter rows and coloumns of your matrix: ";
    cin>>n>>m;
    cout<<"Enter your matrix: "<<endl;
    int arr[100][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int num = sumOfEven(arr, n, m);    
    cout<<"\nThe sum of even numbers in your matrix is: "<<num<<endl;
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}