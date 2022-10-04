//written by anuj
#include<bits/stdc++.h>
using namespace std;

int funcP(int n){
	int p=1;
	while(n>0){
		n/=10;
		p*=10;
	}
	return p;
}

int pallindrome(int n){
	int ans = 0;
	if(n<10){
		return n;
	}
	else{
		ans += (n%10)*funcP(n/10) + pallindrome(n/10);
	}
	return ans;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n==pallindrome(n)){
        cout<<"Given number is a pallindrome."<<endl;
    }
    else{
        cout<<"Given number is not a pallindrome."<<endl;
    }
    cout<<"\nThank You for using the application (Written by ANUJ VERMA) "<<endl;
}
