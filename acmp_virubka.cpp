#include <iostream>
 
using namespace std;
 
int main(){
    unsigned long long d,a,k,b,m,x,l=0,r=50000000000000000000;
    cin >> a >> k >> b >> m >> x;
    while (r-l>1){
        d= (r+l)/2;
        if((a*(d-d/k)+b*(d-d/m))>=x){
            r=d;
        }
        else{l=d;}
    }
    cout << r;
    return 0;
}
