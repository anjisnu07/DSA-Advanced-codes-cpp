#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
     
     vector<double> newArr(2);
     int a[2];
       double Kelvin = celsius + 273.15;
       newArr[0]=Kelvin;
     
       double Fahrenheit = celsius * 1.80 + 32.00;
       newArr[1]=Fahrenheit;
       
       return newArr;
    }
};
int main(){
	Solution a;
	vector<double> k;
	k=a.convertTemperature(100);
	for (int i = 0; i < k.size(); i++) {
        cout << k[i] << " ";
    }
    cout << endl;
    return 0;
}
