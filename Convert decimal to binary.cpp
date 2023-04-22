//8-bit representation only
#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout <<"Enter decimal number:";
	cin >> n;
	
	int a[100],b[100],i;
	
	while(n !=0 ){
		for(i=1;i<=8;i++){
		
		a[i]=n%2;
		n=n/2;
		}
	}
	cout<<"Binary no is:";
	for(i=8;i>=1;i--){
		cout << a[i] <<" ";
	}

}
