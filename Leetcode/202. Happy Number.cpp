#include<iostream>
using namespace std;
 bool isHappy(int n) {
        int k,i,l,o,q,sum=0,count=0,count2=0;
        k=n;
        
        while(k!=0){
            k=k/10;
            count++;
        }
   
    
        for(i=0;i<count;i++){
            l=n%10;
            n=n/10;
            sum=sum+l*l;
        }
        q=sum;
           while(q!=0){
            q=q/10;
            count2++;
        }
        if(count2==1){    
        
            if(sum==1 || sum==7){
               o = true;
            }
            else{
              o = false;
            }
            cout << o;
        }
        else{
        isHappy(sum);
    }
    return 0;    
    }
        
        
int main()
{
   isHappy(1111111);

    return 0;
}
