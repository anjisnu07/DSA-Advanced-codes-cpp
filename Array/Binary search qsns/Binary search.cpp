#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//Array Must have to be sorted for binary search 
int binarysearch(int arr[],int size,int key){
	int start=0;
	int end=size-1;
//	int mid=(start+end)/2;===>Not optimized approach when both start and end are INT_MAX
int mid=start+(end-start)/2;
	
	while(start<=end){
		
		if(key==arr[mid]){
			return mid;			
		}
		
		else if(key>arr[mid]){
			start=mid+1;	
		}
		else{
			end=mid-1;
		}
	mid=start+(end-start)/2;
	
	}
 return -1;
}
int main(){
	int key;
	int arr[]={1,2,3,4,5,6,7,8};
	int size=8;
	
	cout<<"Enter a no to find:";
	cin >> key;
	
	int k=binarysearch(arr,size,key);
	cout << k;
	
	return 0;
}
