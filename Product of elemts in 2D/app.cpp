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

int productOfElements(int arr[][100], int n, int m){
    int pro = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            pro*=arr[i][j];
        }
    }
    return pro;
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

    int num = productOfElements(arr, n, m);    
    
    if(num>=0){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    cout<<"Here 1 means that the product is non negative and 0 means product is negative."<<endl;
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}