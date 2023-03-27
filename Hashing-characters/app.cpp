/*written by anuj*/
#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter your string: ";
    cin>>s;

    //precomputation
    int hash[26] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }

    int q;
    cout<<"Enter your number of queries: ";
    cin>>q;
    while(q--){
        char ch;
        cout<<"\n\nEnter the value: ";
        cin>>ch;
        //fetching
        cout<<"The frequency of "<<ch<<" is: |_"<<hash[ch - 'a']<<"_|";
    }
    cout<<endl;
    cout<<"\nThank You for using the application written by Anuj Verma."<<endl; 
    return 0;
}