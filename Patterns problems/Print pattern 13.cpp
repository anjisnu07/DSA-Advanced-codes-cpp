/*  A  B  C
	B  C  D
	C  D  E */
	
#include<iostream>
using namespace std;

int main(){
	char ch='A';
	char a='A';
	for(char i='A';i<'D';i++){
		char k=i;
		for(int j=0;j<3;j++){
				cout << k++ << " ";
				ch++;
				
				
		}
		
		cout << endl;
		
	}
}
