/*

1
2 3
3 4 5
4 5 6 7 
5 6 7 8 9

*/

#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<6;i++){
		int k=i;
		for(int j=1;j<6;j++){
			if(i>=j){
			
			cout << k++ << " " ;
		}
		}
		cout<< endl;
	}
}
