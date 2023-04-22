#include<iostream>
using namespace std;

int main(){

int i,n;
int s=0;

cout << "Enter the no to find the sum of even no's in between: \n";
cin >> n;

for(i=1;i<=n;i++){
	if(i%2==0){
		s=s+i;
	}
}
cout << "The sum of all even nos are:" << s <<endl;


}
