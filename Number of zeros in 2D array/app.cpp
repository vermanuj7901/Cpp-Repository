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

int numberOfZeros(int a[][100], int n, int m){
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]==0){
                count++;
            }
        }
    }
    return count;
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

    int num = numberOfZeros(arr, n, m);    
    cout<<"\nThe number of zero(s) in your matrix is/are: "<<num<<endl;
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}