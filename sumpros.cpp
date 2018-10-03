#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <conio.h>
using namespace std;

int foo (int a,int s){
    int ans=0;
    for (int i = 0;i<s;i++){
        ans+=a%10;
        a/=10;
    }
}

int main(){
    int s,maxi,mini,n=0;
    cin >> s;
    mini = pow(10,s);
    cout << mini << ' ';
    maxi = (pow(10,s+1));
    cout << maxi << ' ';
    for (int i =mini;i!=maxi;i++){
        n+=foo(i,s);
    }
    cout<< n;
    return 0;
}
