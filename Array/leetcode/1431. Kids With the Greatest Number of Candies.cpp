#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
vector<bool> a;
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<int> candiess=candies;
        sort(candiess.begin(),candiess.end());
        int b=candiess[candiess.size()-1];
    for(int i=0;i<candies.size();i++){
        if(candies[i]+extraCandies>=b){
           a.push_back(true);
            
        }
        else{
            a.push_back(false);
        }
    }
    return a;
    }
};
int main(){
	Solution a;
	vector <int> m;
	vector <bool> k;
	m.push_back(2);
	m.push_back(3);
	m.push_back(1);
	m.push_back(5);
	m.push_back(0);
	k=a.kidsWithCandies(m,3);
	for(int i=0;i<k.size();i++){
		cout << k[i]<<endl;
	}
}
