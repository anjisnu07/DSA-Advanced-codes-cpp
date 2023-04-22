/*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20

*/


#include<iostream>
using namespace std;

int k=1;

int main(){
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cout << k++ <<" ";
		}
		cout << endl;
	} 
}
