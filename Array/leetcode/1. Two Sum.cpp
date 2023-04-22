#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>&nums, int target) {
        vector <int> a;
        for(int i=0;i<nums.size();i++){
            int data=target-nums[i];
            for(int j=i+1;j<nums.size();j++)
                if(data==nums[j]){

                a.push_back(i);
                a.push_back(j);
            }
        }
        return a;
    }
};

int main(){
	Solution b;
	vector<int> a;
	a.push_back(2);
	a.push_back(11);
	a.push_back(7);
	a.push_back(15); 

	 vector<int> result = b.twoSum(a, 9);
	  for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

