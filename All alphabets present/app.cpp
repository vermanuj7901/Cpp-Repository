//written by anuj
#include<bits/stdc++.h>
using namespace std;

int allAlphabetsPresentOrNot(string s) {
    int arr[26] = {0};
    for(int i=0; i<s.length(); i++){
        int pos = s[i] - 97;
        arr[pos]++;
    }
    for(int i=0; i<26; i++){
        if(arr[i]==0){
            return 0;
        }
    }
    return 1; 
}

int main(){
    string s;
    cout<<"Enter your string : "<<endl;
    getline(cin, s);
    
    int ans = allAlphabetsPresentOrNot(s);
    if(ans == 1){
        cout<<"All alphabets are present."<<endl;
    }
    else{
        cout<<"All alphabets are not present."<<endl;
    }
    
    cout<<"\n------Thank You for using the application (Written by ANUJ VERMA)------"<<endl;
    return 0;
}