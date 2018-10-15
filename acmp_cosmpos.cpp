#include <iostream>

using namespace std;

int main(){
    unsigned long long d,n,a,b,w,h,l=0,r=10000000000000000000;
    cin >> n >> a >> b >> w >> h;
    while(r-l>1){
        d=(r+l)/2;
        if(((w/(a+2*d))*(h/(b+2*d)))>=n||((h/(a+2*d))*(w/(b+2*d)))>=n){l=d;}
        else{r=d;}
    }
    cout << l;
    return 0;
}
