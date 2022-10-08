//written by anuj
#include<bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag){
    if(flag){
        sort(a.begin(), a.end());
    }
    else{
        sort(a.begin(), a.end(), greater<int>());
    }
    return a;
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
    int z;
    cout<<"\n-------MENU-------\n1.Increasing\n2.Decreasing\n3.Exit"<<endl;
    cout<<"Enter your option: ";
    cin>>z;
    switch(z){
        case 1:
        a = sortingWithComparator(a, 1);
        cout<<"|_ ";
        for(int i:a){
            cout<<i<<" ";
        }
        cout<<"_|"<<endl;
        break;

        case 2:
        a = sortingWithComparator(a, 0);
        cout<<"|_ ";
        for(int i:a){
            cout<<i<<" ";
        }
        cout<<"_|"<<endl;
        cout<<endl;
        break;

        case 3:
        exit(0);

        default:
        cout<<"\n******ERROR******"<<endl;
        cout<<"Enter a valid choice"<<endl;
        break;
    }

    cout<<"\nThank You for using the application (Written by ANUJ VERMA)."<<endl;
}