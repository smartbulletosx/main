#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <conio.h>
using namespace std;
 
int main(){
    vector<int> v1,v2,ost,digit;
    int a,b,k,i=0;
    cin >> a >> b >> k;
    int l,r=0,h=0;
    while (i!=k){
        a*=10;
        ost.push_back(a);
        digit.push_back(a / b);
        a = a % b;
        i++;
    }
    cout << digit[digit.size()-1];
 
 
    return 0;
}
