#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int getSum(int a, int b) {
        a=a+b;
        if(a+b>2000){
            return 2000;
        }
        else if(a+b<-2000){
            return -2000;
        }
        else{
        return a;
        }
    }
};
int main(){
	Solution a;

	a.getSum(14,567);

}
