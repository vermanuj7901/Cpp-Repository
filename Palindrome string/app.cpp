//written by anuj
#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string st) {
    int s = 0;
    int e = st.length()-1;
    while(s<e){
        if(st[s]!=st[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

int main(){
    string s;
    cout<<"Enter your string : "<<endl;
    getline(cin, s);
    
    int ans = isPalindrome(s);
    if(ans==1){
        cout<<"\nGiven string is a palindrome.";
    }
    else{
        cout<<"\nGiven string is not a palindrome.";
    }
    
    cout<<endl;
    cout<<"\n------Thank You for using the application (Written by ANUJ VERMA)------"<<endl;
    return 0;
}