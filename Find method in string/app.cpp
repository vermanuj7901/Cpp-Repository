//written by anuj
#include<bits/stdc++.h>
using namespace std;

void solve(string para, string word){
    int index = para.find(word);
    cout<<"Position of your word in your para is/are: "<<endl;
    while(index<=(para.length())){
        cout<<index<<endl;
        index = para.find(word, index+1);
    }
}

int main(){
    string para;
    cout<<"Enter your para: ";
    getline(cin, para);
    
    string word;
    cout<<"Enter your word: ";
    getline(cin, word);

    solve(para, word);
    
    cout<<"\n------Thank You for using the application (Written by ANUJ VERMA)------"<<endl;
    return 0;
}