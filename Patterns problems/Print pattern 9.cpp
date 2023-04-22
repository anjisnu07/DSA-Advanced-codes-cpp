/*

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

*/

#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<6;i++){
		int k=i;
		for(int j=1;j<6;j++){
			if(i>=j){
			
			cout << k-- << " " ;
		}
		}
		cout<< endl;
	}
}
