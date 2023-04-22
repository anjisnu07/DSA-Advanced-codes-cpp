#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        int mid=start+(end-start)/2;

        while(start<end){
            if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }
            else{
                end=mid;
            }
        mid=start+(end-start)/2;
        }
    return start;
    }
};

int main(){
    Solution a;
		vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);
	arr.push_back(2);
	arr.push_back(1);
	int k=a.peakIndexInMountainArray(arr);
	cout << k;
}
