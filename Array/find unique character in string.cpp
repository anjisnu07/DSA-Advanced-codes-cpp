#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
using namespace std;

char uniquechar(char *a,int x) {
	char s;
	vector <char> m;
	bool o;
	m.resize(x);
	for(int i=0; i<x; i++) {
		m[i]=a[i];
	}
	sort(m.begin(),m.end());
	for(int i=0; i<x; i++) {
		a[i]=m[i];
	}
	
	for(int i=0; i<x; i++) {
		o=true;
			for(int j=0; j<x; j++) {
	
			if(i !=j &&  a[i] == a[j]){
				o=false;
				return 0;
			}
			
		}
		if(o==true){
			s=a[i];
		}
		
	}
return s;	
}
int main() {
	char a[8]= {'A','B','A','C','C','B','A','B'};

	char k=uniquechar(a,8);
	cout << k;
}
