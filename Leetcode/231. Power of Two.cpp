/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;
void isPowerOfTwo (int n) {
    
        long k,l,m,count=0;
        bool o;
        k=n;
        while(k!=0){
            l=k%2;
            k=k/2;
            count++;
        }

        for(int i=0;i<count;i++){
            m=pow(2,i);
            if(n==m){
               o=true;
            }
            else{
               o=false;
            }
        }
        cout << o;
}
    
int main()
{
     isPowerOfTwo(16);

}
