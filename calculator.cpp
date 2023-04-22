#include<iostream>
using namespace std;

int main(){
	int a,b;
	char n;
	cout << "Enter value of a: ";
	cin >> a;
	cout << "Enter value of b: ";
	cin >> b;
	cout << "Choose operator(+,-,*,/):";
	cin >> n;
	
	switch(n){
		case '+': cout <<"Addition result is:"<<a+b;
		break;
		case '*': cout <<"Multiplication result is:"<<a*b;
		break;
		case '-': cout <<"Subtraction result is:"<<a-b;
		break;
		case '/': cout <<"Division result is:"<<a/b;
		break;
	}
}
