#include<iostream>
using namespace std;

int facto(int n){

int f=1;
for(int i=1;i<=n;i++){
	f=f*i;
}
return f;
}

int ncr(){
	int n,r;
	cout <<"Enter the value of n to find ncr:\n";
	cin >> n;
	cout <<"Enter the value of r to find ncr:\n";
	cin >> r;
	
	n=facto(n)/(facto(r)*facto(n-r));
	
	cout << "Value of ncr is:" << n;
}
int main(){
	ncr();
}
