
#include <iostream>

using namespace std;
    bool isPalindrome(int x) {
        int k,l,sum=0; 
        bool o;
        k=x;
        while(x!=0){
            l=x%10;
            x=x/10;
            sum=sum*10+l;
        }
        
        if(k >=0 && k==sum){
            o=true;
        }
        else{
            o=false;
        }
       cout << o;
       
    }
int main()
{
   isPalindrome(-121);

    return 0;
}
