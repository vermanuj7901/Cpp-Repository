//written by anuj
#include<bits/stdc++.h>
using namespace std;

void readLine(char *arr){
    int a=0;
    char ch;
    while(ch!='\n'){
        ch = cin.get();
        arr[a] = ch;
        a++;
    }

    for(int i=0; i<a; i++){
        cout<<arr[i];
    }
}

void realLineDelim(char *arr, int len, char delim){
    int count = 0;
    char ch;
    while(true){
        ch = cin.get();
        arr[count] = ch;
        if(ch==delim || count>=len){
            break;
        }
        count++;
        
    }

    for(int i=0; i<count; i++){
        cout<<arr[i];
    }
    cout<<"\n"<<count<<endl;
}

int main(){
    char arr[100];
    
    realLineDelim(arr, 20, '.');
    cout<<arr<<endl;

    return 0;
}