#include <bits/stdc++.h> 
#include<vector>
using namespace std;
bool istrue(vector<int> &boards, int k,int mid){
    int count=0;
    int blockno=1;
     for(int i=0;i<boards.size();i++){
         if(count+boards[i] <=mid){
             count=count+boards[i];
         }
         else{
             blockno++;
             if(blockno > k || boards[i] > mid){
                 return false;
             }
             count=boards[i];
         }
      
     }
        return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int s=0;
    int sum=0;
     for(int i=0;i<boards.size();i++){

         sum=sum+boards[i];
     }
     int e=sum;
     int mid=s+(e-s)/2;
     int ans;

     while(s<=e){
         if(istrue(boards,k,mid)){
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
	time.push_back(20);
	time.push_back(10);
	time.push_back(30);
	time.push_back(40);

int k;	
	
	k=findLargestMinDistance(time,2);
	cout << k;
}
