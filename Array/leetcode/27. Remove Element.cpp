#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    int count=1;
public:
    int removeElement(vector<int>& nums, int val) {
       
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());

        return nums.size();
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
	int b=a.removeElement(nums,9);
	
	for(int i=0;i<b;i++){
		cout << nums[i]<<" ";
	}
}
