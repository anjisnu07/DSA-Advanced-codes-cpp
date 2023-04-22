#include<iostream>
using namespace std;

int power(){
int a,b;

cout << "Enter the digit:\n";
cin >> a;

cout << "Enter its power:\n";
cin >>b;

int p=1;
	for(int i=1;i<=b;i++){
		p=p*a;
	}
	cout << "The value of power is:"<<p<<"\n";
}
int main(){
	int a,b;
	char n;
	power();
}
