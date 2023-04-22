//link:-  https://www.codingninjas.com/codestudio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0


#include<iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    int data;
    //Write your code here
    for(int i=0;i<size;i++){
        data^=arr[i]; // ^ operator for xor operation
        
    }
    cout << data;
}
int main(){

	int arr[]={5,4,2,4,5};
	findUnique(arr,5);
}
