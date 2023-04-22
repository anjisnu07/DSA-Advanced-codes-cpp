#include<iostream>
using namespace std;

int main(){
	int k;
	int rows=5;
	 for ( int i =1; i <= rows; i++)  
    {  
        for ( int j = 1; j <= rows - i; j++)  
        {  
            cout << "  ";   
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            cout << "* "; 
        }  
        cout<<"\n";  
    }  
	
	}

