#include <bits/stdc++.h> 
#include<vector>
using namespace std;
bool ispossible(int n, int m, vector<int> time,long long mid){

	long long days=1;
	long long chapter=0;
	for(int i=0;i<m;i++){
		if(chapter + time[i] <=mid){
			chapter=chapter+time[i];
		}
		else{
			days++;
			if(days > n || time[i] > mid){
				return false;
			}
		chapter=time[i];
		}
	}
	return true;
}


long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
	long long s=0;
	long long sum=0;
	for(int i=0;i<m;i++){
		sum+=time[i];
	}
	long long e=sum;
	long long mid=s+(e-s)/2;
	long long ans;
	while(s<=e){
		if(ispossible(n,m,time,mid)){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
int main(){
	vector<int> time;
	time.push_back(2);
	time.push_back(2);
	time.push_back(3);
	time.push_back(3);
	time.push_back(4);
	time.push_back(4);
	time.push_back(1);
long long k;	
	
	k=ayushGivesNinjatest(4,7,time);
	cout << k;
}
