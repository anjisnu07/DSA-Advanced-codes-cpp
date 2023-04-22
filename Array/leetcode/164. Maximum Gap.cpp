#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    int e=0;
public:
    int maximumGap(vector<int>& nums) {
        
        if(nums.size()==2){
            return (nums[1]-nums[0]);
        }
        else{
            sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size()-1;i++){
                
                e=max(e,nums[i+1]-nums[i]);
            }
            return e;
        }
    return 0;
    }
};
int main(){
	Solution a;
	vector<int> nums;
	nums.push_back(3);
	nums.push_back(9);
	nums.push_back(1);
	nums.push_back(9);
	nums.push_back(25);
	nums.push_back(9);
	nums.push_back(254);
	int b=a.maximumGap(nums);
	cout << b;
	
}
