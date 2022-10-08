//written by anuj
#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    int n = a.size();
    int pos = k;
    vector<int> b;
    if(n==1 || n==k){
        return a;
    }
    else{
        while((n-pos)<n){
            b.push_back(a[n-pos]);
            pos--;
        }
        for(int i=0; i<(n-k); i++){
            b.push_back(a[i]);
        }
        return b;
    }
}

int main(){
    int n;
    cout<<"Enter size of your vector: ";
    cin>>n;
    vector<int> a;
    int value;
    cout<<"Now enter your vector: "<<endl;
    for(int i=0; i<n; i++){
        cin>>value;
        a.push_back(value);
    }
    int k;
    cout<<"Enter the target rotations: ";
    cin>>k;
    vector<int> b = kRotate(a, k);
    for(int i:b){
        cout<<i<<" ";
    }
    return 0;
}