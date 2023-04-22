#include<iostream>
#include<algorithm>
using namespace std;
int pivotelement(int* arr,int n){
	
//Pivot element means minimum element in rotated sorted array

	int start=0;
	int end=n-1;
	int mid= start+ (end-start)/2;
	
	while(start<end){
		if(arr[mid]>=arr[0]){
			start=mid+1;
		}
		else{
			end=mid;
		}
		mid= start+ (end-start)/2;
	 
	}
	return start;
}
int main(){
	int arr[]={100,-2, 6, 10, 11};
	int k=pivotelement(arr,5);
	cout << k;
}
