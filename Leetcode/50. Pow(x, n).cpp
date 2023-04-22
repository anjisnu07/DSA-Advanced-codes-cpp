#include<iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {

        x=pow(x,n);
        if(x>INT_MAX){
           cout << INT_MAX;
        }
        else{
        cout << x;
        }
        return 0;
    }
};

int main(){
	Solution a;
	a.myPow(2,2);
}
