#include<iostream>
using namespace std;

class Solution {
    int s=0,o,m=1,sub,cp,count=0;
public:
    void subtractProductAndSum(int n) {
        cp=n;
        while(cp!=0){
            cp=cp/10;
            count++;
        }
          cout << o;
         for(int i=1;i<=count;i++){
            o=n%10;
           
            n=n/10;
            s=s+o;
            m=m*o;
            
            
        }
       
        cout << m <<endl;
        cout << s <<endl;
        sub=m-s;
        cout << sub<<endl;
    }
};
int main(){
    Solution a;
     a.subtractProductAndSum( 989);
}
