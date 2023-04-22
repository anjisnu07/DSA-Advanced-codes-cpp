#include<iostream>
#include<vector>
#include<algorithm>
//Not working in dev cpp
using namespace std;
void pairSum(vector<int> &arr, int s){
   vector< vector <int> > a;
   // Write your code here.
   for(int i=0;i<arr.size();i++){
   
      for(int j=i+1;j<arr.size();j++){
         
         if(arr[i]+arr[j]==s){
            vector <int> b;
            b.push_back(min(arr[i],arr[j]));
            b.push_back(max(arr[i],arr[j]));
            a.push_back(b);
         }
      }
      
   }
   sort(a.begin(),a.end());
   for(int i=0;i<a.size();i++){
   	 cout << a[i][0] << " " << a[i][1] << endl;
   }
}

int main(){
   vector<int> a {1,2,3,4,5,6,7,8,9};
   pairSum(a, 10);
   return 0;
}
