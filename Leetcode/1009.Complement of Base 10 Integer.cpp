
#include <iostream>
#include<math.h>

using namespace std;

void bitwiseComplement( int n) {
        int count=0,m,k,sum=0,arr[100],i=0,a;
        k=n;
    if(n==0){
            sum=1;
        }
    else{
        while(k!=0){
            
            arr[i]=k%2;
            i++;
            k=k/2;
            count++;
            
        }
       
        
// compli
        for(i=0;i<count;i++){
            if(arr[i]==0){
                arr[i]=1;
               
            }
            
            else{
                arr[i]=0;
                
            }
        }
  
        for(i=0;i<count;i++){
            m=arr[i]*pow(2,i);
            sum=sum+m;
           
        }
    }
    cout << sum;
    }

int main()
{
    bitwiseComplement(15);

    return 0;
}
