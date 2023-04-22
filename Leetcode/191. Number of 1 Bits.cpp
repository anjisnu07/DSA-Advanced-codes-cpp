#include<iostream>
using namespace std;

class Solution {
    int m,count=1,c=0;
    uint32_t cp;
public:
    void hammingWeight(uint32_t n) {
        
        while(n!=0){
           if(n&1){  //   Checking last bit..i.e n=1 and 1 (both true) then c++
               c++;
              
           }
          n= n>>1;   //   right shift by 1
            }
    cout << c;
    }
};
int main(){
    Solution a;
     a.hammingWeight(0000000000000000000000000101011);
}
