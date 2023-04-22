#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        long long int s=0;
        long long int end=x;
        long long int mid=s+(end-s)/2;
        long long int ans;

        while(s<=end){
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                ans=mid;
                s=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=s+(end-s)/2;
        }
        return ans;
    }
   
};
int main(){
	Solution a;
	long long int k=a.mySqrt(16);
	cout << k;
}
