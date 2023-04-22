#include <bits/stdc++.h> 
//Not working in DEV C++ only;NOT OPTIMIZED one
#include<stdio.h>
#include<vector>
using namespace std;
void findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int element;
	vector <int> a;
	// Write your code here.
	for(int i=0;i<arr1.size();i++){
		 element=arr1[i];
		for(int j=0;j<arr2.size();j++){
			if(element==arr2[j]){
				a.push_back(element);
				arr2[j]=-2345;
				break;
			}
		}
	}
	for(int i=0;i<a.size();i++){
		cout << a[i];
	}
}
int main(){
	vector <int> a  {1,2,3,4,6};
	vector <int> b {1,2,3,4,5,6};
	int n,m;
	findArrayIntersection(a,n,b,m);
}
