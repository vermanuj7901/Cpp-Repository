//written by anuj
#include<bits/stdc++.h>
using namespace std;

char largestFrequencyCharacter (char c[], int size) {
    int ch;
    int max = 0;
    int count;
    for(int i = 0; i<size; i++){
        count = 0;    
        if(c[i]==' '){
            continue;
        }
        for(int j=0; j<size; j++){
            if(c[j]==' '){
                continue;
            }
            if(c[i]==c[j]){
                count++;
                if(count>max){
                    max=count;
                    ch=c[i];
                }
            }                  
        }
    }
    char max_char = ch;
    return max_char;
}

int main(){
    int a,x,y,z;
    char c[100];
    cout<<"Enter your characters: ";
    cin.getline(c, 100);
    int n = strlen(c);
    
    char maxChar = largestFrequencyCharacter(c, n);
    cout<<"\nThe element with largest frequency is: |_"<<maxChar<<"_|"<<endl;

    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}