#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    int s=0;
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            s=s+nums[i];
            nums[i]=s;
        }
    return nums;
    }
};
int main(){
	Solution a;
	vector<int> nums;
	nums.push_back(3);
	nums.push_back(9);
	nums.push_back(1);

	vector <int> b =a.runningSum(nums);
	for(int i=0;i<b.size();i++){
		cout << b[i]<<" ";
	}
	
}
