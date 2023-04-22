#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

void sort012(int *arr, int n)
{
   int arr1[n];
   int count_a=0,count_b=0,count_c=0;
   //   Write your code here
   for(int i=0;i<n;i++){
      if(arr[i]==0){
         count_a++;
      }
      else if(arr[i]==1){
         count_b++;
      }
      else{
         count_c++;
      }
   }
   for(int i=0;i<count_a;i++){
      arr1[i]=0;
   }
   for(int i=count_a;i<count_a+count_b;i++){
      arr1[i]=1;
   }
   for(int i=count_a+count_b;i<n;i++){
      arr1[i]=2;
   }

    for(int i=0;i<n;i++){
      arr[i]=arr1[i];
   }
 
}
int main(){
   int arr[] = {2, 1, 2, 0, 1};
   int n = sizeof(arr)/sizeof(arr[0]);

   sort012(arr, n);

   for(int i=0;i<n;i++){
      cout << arr[i] << " ";
   }
   cout << endl;
   
   return 0;
}
