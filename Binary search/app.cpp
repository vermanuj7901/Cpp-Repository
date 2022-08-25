#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter an array of size "<<n<<" : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element that you want to search for: "<<endl;
    cin>>key;

    int index = binary_search(arr, n, key);

    if(index != -1){
        cout<<"\nThe element "<<key<<" is present at "<<index<<"th location."<<endl;
    }
    else{
        cout<<"\n******ERROR******"<<endl;
        cout<<"The element is not present."<<endl;
    }

    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}