//written by anuj
#include<bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    char ch[100];
    cout<<"Type your sentence ending with '$': ";
    cin.getline(ch, 100, '$');
    int n = strlen(ch);
    int alpha = 0, digit = 0, whitesp = 0, spChar = 0;
    for(int i=0; i<n; i++){
        if(ch[i]>='A' && ch[i]<='Z'){
            alpha++;
        }
        else if(ch[i]>='a' && ch[i]<='z'){
        alpha++;
        }
        else if(ch[i]>='0' && ch[i]<='9'){
        digit++;
        }
        else if(ch[i]==' ' || ch[i]=='\n'){
        whitesp++;
        }
        else{
        spChar++;
        }
    }
    cout<<"\nThe sentence contains "<<alpha<<" alphabets, "<<digit<<" digits, "<<whitesp<<" whitespaces and "<<spChar<<" special characters."<<endl;
    cout<<"------Thank You for using the application (Written by ANUJ VERMA)------"<<endl;
    return 0;
}