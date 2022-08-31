//written by anuj
#include<bits/stdc++.h>
using namespace std;

char largestFrequencyCharacter(string s) {
    char ch;
    int max = 0;
    for(int i=0; i<s.length(); i++){
        int count = 0;
        for(int j=0; j<s.length(); j++){
            if(s[i]==s[j]){
                count++;
            }
            if(count>max){
                max = count;
                ch = s[i];
            }
        }
    }
    return ch; 
}

int main(){
    string s;
    cout<<"Enter your string : "<<endl;
    getline(cin, s);
    
    char ch = largestFrequencyCharacter(s);
    cout<<"\nLargest frequency character in your string is: "<<ch;
    
    cout<<endl;
    cout<<"\n------Thank You for using the application (Written by ANUJ VERMA)------"<<endl;
    return 0;
}