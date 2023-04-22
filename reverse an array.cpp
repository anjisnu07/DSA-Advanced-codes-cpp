#include<iostream>
using namespace std;

int main(){
	int n,k;
	int arr[n];
	cout << "Enter no of elements of an array:\n";
	cin >> n;
	cout << "Enter array elements:\n";
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	

	for(int i=0;i<n/2;i++){
		k=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=k;
	}
	for(int i=0;i<n;i++){
		cout << arr[i] <<" ";
	}
}
