//written by anuj
#include<bits/stdc++.h>
using namespace std;

void printingSubarray(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
    }
}

int bruteForce(int arr[], int n){
    int largest_Sum = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int current_Sum = 0;
            for(int k=i; k<=j; k++){
                current_Sum+=arr[k];
            }
            largest_Sum = max(largest_Sum, current_Sum);        
        }
    }
    return largest_Sum;
}

int prefixSum(int arr[], int n){
    int prefix[n]={0};
    prefix[0]=arr[0];
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    int largest_Sum = 0;
    for(int i=0; i<n; i++){
        int current_Sum = 0;
        for(int j=i; j<n; j++){
            if(i==0){
                current_Sum=prefix[j];
            }
            else{
                current_Sum=(prefix[j] - prefix[i-1]);
            }
            largest_Sum = max(largest_Sum, current_Sum);        
        }
    }
    return largest_Sum;
}

int kadanesAlgorithm(int arr[], int n){
    int largest_Sum = 0;
    int current_Sum = 0;
    for(int i=0; i<n; i++){
        current_Sum+=arr[i];
        if(current_Sum<0){
            current_Sum=0;
        }
        largest_Sum = max(largest_Sum, current_Sum);
    }
    return largest_Sum;
}


int main(){
    int n, z;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Now enter an array of size "<<n<<": "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\n-------MENU FOR LARGEST SUM-------\n1.Find the largest sum in O(n^3).\n2.Find the largest sum in O(n^2).\n3.Find the largest sum in O(n).\n4.View all subarrays.\n5.Exit."<<endl;
    cout<<"\nEnter your option: ";
    cin>>z;
    switch(z){
        case 1:
        cout<<"Largest Sum: |_"<<bruteForce(arr, n)<<"_|"<<endl;
        break;

        case 2:
        cout<<"Largest Sum: |_"<<prefixSum(arr, n)<<"_|"<<endl;
        break;

        case 3:
        cout<<"Largest Sum: |_"<<kadanesAlgorithm(arr, n)<<"_|"<<endl;
        break;

        case4:
        printingSubarray(arr, n);
        break;

        case 5:
        exit(0);

        default:
        cout<<"******ERROR******"<<endl;
        cout<<"Enter a valid choice"<<endl;
    }

    cout<<"\nThank You for using th application (Written by ANUJ VERMA)."<<endl;
}