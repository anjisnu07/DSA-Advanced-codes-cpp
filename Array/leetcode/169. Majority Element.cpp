#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    int count=1;
public:
    int majorityElement(vector<int>& nums){
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
            if(count>nums.size()/2){
                return nums[i];
                break;
            }
        }
    return 0;
    }
};

int main(){
	Solution a;
	vector <int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(1);
	int k=a.majorityElement(nums);
	cout <<k;
}
