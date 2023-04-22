#include<iostream>
using namespace std;

int main(){
	int a=0,b=1,i,c=1,d,e;
	int n;
	
	cout << "Enter no upto which you wanna get the series:\n";
	cin >> n;
	cout << a << " "<< b <<" ";
	for(i=1;i<n;i++){
		
		
		c=a+b;
		a=b;
		b=c;
	
	

		cout << c <<" ";
		
	}
}
