//written by anuj
#include<bits/stdc++.h>
using namespace std;

int uniqueChar(char c[], int n){
    int curr = n;
    for(int i=0; i<n; i++){
        if(c[i]==' '){
            continue;
        }
        int count = 0;
        for(int j=0; j<n; j++){
            if(c[i]==' '){
                continue;
            }
            if(c[i]==c[j]){
                count++;
            }
        }
        if(count>1){
            curr-=(count-1);
        }
    }
    return curr;
}

int main(){
    char ch[100];
    cout<<"Enter your character array: "<<endl;
    cin.getline(ch, 100);
    int n = strlen(ch);
    cout<<"\nThe number of different characters are: "<<uniqueChar(ch, n)<<endl;
    
    cout<<"\n------Thank You for using the application (Written by ANUJ VERMA)------"<<endl;
    return 0;
}