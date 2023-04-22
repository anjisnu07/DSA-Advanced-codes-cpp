#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter a no to check if it's power of 2:";
	cin >>n;
	bool o;
	while(n!=1){
		if(n%2==0){
			o=true;	
		}
		else{
			o=false;
		
		}
		n=n/2;
	}
	if(o==1){
		cout << "True";
	}
	else{
		cout << "false";
	}
}
