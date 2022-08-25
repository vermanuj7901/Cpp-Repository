//written by anuj
#include<bits/stdc++.h>
using namespace std;

int isSorted(char c[], int size) {
    for(int i=0; i<size; i++){
        if(c[i]==' '){
            continue;
        }
        for(int j=i+1; j<size; j++){
            if(c[j]==' '){
                continue;
            }
            int i_c = c[i], j_c = c[j];
            if(i_c > j_c){
                return 0;
            }
        }
    }  
    return 1;
}

int main(){
    char ch[100];
    cout<<"Enter your character array: ";
    cin.getline(ch, 100);
    int n = strlen(ch);
    
    int val = isSorted(ch, n);
    if(val==1){
        cout<<"\nCharacter is sorted"<<endl;
    }
    else{
        cout<<"\nCHaracter is not sorted"<<endl;
    }

    cout<<"\n------Thank You for using the application (Written by ANUJ VERMA)------"<<endl;
    return 0;
}