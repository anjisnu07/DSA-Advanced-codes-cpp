#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    int count=0;
public:
    void moveZeroes(vector<int>& nums) {
        
        vector <int> a;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            else{
                a.push_back(nums[i]);
            }
        }
        for(int i=0;i<count;i++){
            a.push_back(0);
        }

        for(int i=0;i<a.size();i++){
            nums[i]=a[i];
        }
    }
};
int main(){
	Solution a;
	vector<int> nums;
	nums.push_back(0);
	nums.push_back(9);
	nums.push_back(0);
	nums.push_back(9);
	nums.push_back(1);

	a.moveZeroes(nums);
	for(int i=0;i<nums.size();i++){
		cout << nums[i]<<" ";
	}
	
}
