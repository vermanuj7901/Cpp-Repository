#include<bits/stdc++.h>
using namespace std;

int suboptimal(int A[], int N){  //suboptimal: O(unknown), using two pointer approach.
    int miss = 1;
    int i=0, j=0;
    while(i<N-1){
        if(A[i]==N) i++;
        if(A[j] == A[i]+1){
            i++;
            j=0;
        }
        else if(A[j] != A[i]+1){
            if(j == N-1){ 
                miss=A[i]+1;
                break;
            }
            j++;
        }
    } 
    return miss; 
}

int optimal(int A[], int N){  //optimal: O(n)
    int sum = 0;
    for(int i=0; i<N-1; i++){
        sum+=A[i];
    }
    int actualSum = N*(N+1)/2;
    return actualSum - sum;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n-1];
    cout<<"Enter your array of size "<<n<<": "<<endl;
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }  
    cout<<"Missing number is: |_"<<optimal(arr, n)<<"_|"<<endl;
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}