/*

A
B C
C D E
D E F G 


*/

#include<iostream>
using namespace std;

int main(){

	for(char i='A';i<='D';i++){
			char k=i;
		for(char j='A';j<='D';j++){
			if(i>=j){
				cout << k++ << " ";
			
			}
		}
		cout <<endl;
	}
}
