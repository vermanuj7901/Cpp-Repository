#include<bits/stdc++.h>
using namespace std;

int suboptimal(int A[], int N){  //suboptimal: O(n/2)
    int flag = 0, i = 0;
    while(flag == 0){
        if(A[i] != A[i+1]) flag=1;
        i+=2;
    }
    return A[i-2];
}

int xorApproach(int A[], int n){  //O(n)
    int xorr = 0;
    for(int i=0; i<n; i++){
        xorr = xorr ^ A[i];
    }
    return xorr;
}

int optimal(int A[], int N){  //optimal: O(log n)
    int low = 0, high = N-1;
	if(N == 1) return A[0];
    if(A[0] != A[1]) return A[0];
    if(A[N-1] != A[N-2]) return A[N-1];
	    
    while(low <= high){
        int mid = (low + high)/2;
        if(A[mid] != A[mid+1] && A[mid] != A[mid-1]) return A[mid];
	        
        else if(A[mid] == A[mid-1]){
            int lc = mid-low+1;
            if(lc % 2 == 0) low = mid+1;
            else high = mid-2;
        }
	        
        else if(A[mid] == A[mid-1]){
            int rc = high-mid+1;
            if(rc % 2 == 0) high = mid-1;
            else low = mid+2;
        }
    }
    return -1;
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
    cout<<"Number occuring once is: |_"<<optimal(arr, n)<<"_|"<<endl;
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}
