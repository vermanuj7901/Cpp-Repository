#include<bits/stdc++.h>
using namespace std;

int maximizeOnes(int arr[], int n, int m){  //optimal: O(n)
    int i = 0, j = 0, ans = 0, flip = 0;
    while(i<n){
        if(arr[i] == 0) flip++;
        while(flip > m){
            if(arr[j] == 0) flip--;
            j++;
        }
        ans = max(ans, i-j+1);
        i++;
    }
    return ans; 
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
    int m;  
    cout<<"Enter maximum allowed flips: ";
    cin>>m;
    cout<<"Maximum number of continous ones are: |_"<<maximizeOnes(arr, n, m)<<"_|"<<endl;
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}