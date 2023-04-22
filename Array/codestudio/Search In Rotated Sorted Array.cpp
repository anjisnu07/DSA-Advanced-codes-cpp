#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
int search(int* arr, int n, int key) {
    // Write your code here.
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>=arr[s]){
            if(key<=arr[mid] && key>=arr[s]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{
             if(key>=arr[mid] && key<=arr[e]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
	int arr[]={100,-2, 6, 10, 11};
	int k=search(arr, 5, 11);
	cout << k;
}
