#include <iostream> 
#include <vector>
#include <algorithm>


#include <utility>

using namespace std;
pair<int,int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int a,b;
    // Write your code here
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            a=i;
            break;
        }
        else{
            a=-1;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==k){
            b=i;
            break;
        }
        else{
            b=-1;
        }
    }
    return make_pair(a,b);
}

int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(2);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);
	int n=arr.size();
	int k=2;
	pair<int,int> result = firstAndLastPosition(arr, n, k);
	cout << result.first << " " << result.second << endl;
}
