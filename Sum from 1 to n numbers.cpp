#include<iostream>
using namespace std;

int main(){
	int n;
	int sum=0;
	cout << "Enter upto which value you want to add:";
	cin >> n;
	
	for(int i=0;i<=n;i++){
		sum=sum+i;
	}
	cout << "The sum is:" << sum;
}
