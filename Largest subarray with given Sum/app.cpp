//written by anuj
#include<bits/stdc++.h>
using namespace std;

int largestSubarray(int arr[], int n, int k){
    int maxlength = 0;
    int sum = 0;
    int i=0; 
    int j;
    while(i<n){
        sum = 0;
        j = i+1;
        sum += arr[i];
        while(sum<k && j<n){
            sum += arr[j];
            j++;
            
        }
        if(sum == k) maxlength = max((j-i), maxlength);
        i++;
    } 
    return maxlength;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Now enter the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the required sum: ";
    cin>>k;
    
    cout<<"Maximum length of subarray possible is: "<<largestSubarray(arr, n, k)<<endl;
    
    cout<<"\nThank You for using th application (Written by ANUJ VERMA)."<<endl;
    return 0;
}