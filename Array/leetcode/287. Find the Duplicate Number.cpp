//Code is not working only in dev c compiler
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    int a;
public:
    void findDuplicate(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      for(int i=0;i<nums.size();i++){
          if(nums[i]==nums[i+1]){
              cout << nums[i];
          }
      }
      
    }
};

int main(){
	vector <int> nums {1,15,154,2,9,7,13,154}; 
	Solution a;
	a.findDuplicate(nums);
}
