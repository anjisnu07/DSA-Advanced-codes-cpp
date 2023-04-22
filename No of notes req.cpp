#include<iostream>
using namespace std;

int main(){
	int a,b;
	int m;
	cout << "Enter total amount: ";
	cin >> a;
	
		m=a/100;
		cout << "no of 100 rs notes:\n" <<m<<"\n";
		b=m*100;
		a=a-b;
		
		m=a/50;
		cout << "no of 50 rs notes:\n" <<m<<"\n";
		b=m*50;
		a=a-b;
		
		m=a/20;
		cout << "no of 20 rs notes:\n" <<m<<"\n";
		b=m*20;
		a=a-b;
		
		m=a/10;
		cout << "no of 10 rs notes:\n" <<m<<"\n";
		b=m*10;
		a=a-b;
		
		m=a/1;
		cout << "no of 1 rs notes:\n" <<m<<"\n";
		b=m*1;
		a=a-b;

	

}
