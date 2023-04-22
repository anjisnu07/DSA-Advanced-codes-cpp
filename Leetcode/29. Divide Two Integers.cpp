#include<iostream>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
      
       if (dividend == INT_MIN && divisor == -1) {
            cout << INT_MAX;
        }
        
        dividend=dividend/divisor;
        
        cout << dividend;
    }
};

int main(){
	Solution a;
     a.divide(-2147483648,-1);
//     a.divide(23,-1);
}
