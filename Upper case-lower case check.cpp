#include<iostream>
using namespace std;

int main(){
	char  ch;
	cout << "Enter the character:";
	cin >>ch;
	
	if(ch>='a' && ch<='z'){
		cout <<"Lower case";
		
	}
	else if(ch>='A' && ch<='Z'){
		cout <<"Upper case";
		
	}
	else{
		cout << "It's a number:";
	}
}
