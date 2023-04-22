//Approach there is a bit different
#include <iostream>
#include<math.h>
using namespace std;

int main(){
        int x=123;
        int i,count,sum=0,a,m;
        int k=x;
        while(k!=0){
            k=k/10;
            count++;
        }
            
        for(i=count;i>=1;i--){
            a=x%10;
            
            x=x/10;
            m = a*pow(10,i-1);
           
            sum=sum+m;
           
        }
     cout << sum ;
}

