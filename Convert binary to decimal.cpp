#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a[100],i,sum=0;
	int n,k=0;
	cout << "Enter length of binary no:";
	cin >>n;
	cout << "Enter a binary no:";
	
	for(i=0;i<n;i++){
		cout<<"a["<<i<<"]:";
		cin >> a[i];
	}
	for(i=n-1;i>=0;i--){
		
		a[i]=a[i]*pow(2,k);
		k++;
		
		sum=sum+a[i];
	
	}
		cout <<"The Decimal value is:"<<sum;
}
