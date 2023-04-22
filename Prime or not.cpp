#include<iostream>
using namespace std;

int main(){

int i,n,s=0;


cout << "Enter the no to find prime or not: \n";
cin >> n;

for(i=2;i<n;i++){


if( n % i==0 ){
	
	s++;
	
	}

}

if(s==0){
	cout << "It's a prime no";
}
else {
	cout << "It's not prime";
}
}
