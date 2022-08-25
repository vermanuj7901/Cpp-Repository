/*
Suppose you eant to go to a location, located at (X,Y), starting from origin (0,0). 
Your friend tells you a long way by telling the steps you should walk in each direction (N,W,E or S).
Find the Shortest path. Example: 
Sample Input:
    NNNEEWS
Sample Output: 
    NNE
*/

//written by anuj

#include<bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    int ch;
    int x=0, y=0;
    ch = cin.get();
    while(ch!='\n'){
        if(ch == 'N'){
            y++;
        }
        else if(ch == 'S'){
            y--;
        }
        else if(ch == 'E'){
            x++;
        }
        else if(ch == 'W'){
            x--;
        }
        ch = cin.get();

    }
    if(x>=0 && y>=0){
        for(int i=0; i<y; i++){
            cout<<"N";
        }
        for(int i=0; i<x; i++){
            cout<<"E";
        }
    }
    else if(x<=0 && y>0){
        for(int i=0; i<y; i++){
            cout<<"N";
        }
        x*=(-1);
        for(int i=0; i<x; i++){
            cout<<"W";
        }
    }
    else if(x<0 && y<=0){
        y*=(-1);
        for(int i=0; i<y; i++){
            cout<<"S";
        }
        x*=(-1);
        for(int i=0; i<x; i++){
            cout<<"W";
        }
    }
    else if(x>=0 && y<0){
        y*=(-1);
        for(int i=0; i<y; i++){
            cout<<"S";
        }
        x*=(-1);
        for(int i=0; i<x; i++){
            cout<<"E";
        }
    }
    return 0;
}