#include <iostream>
#include <algorithm>

using namespace std;

struct point{
    int val;
    int pos;
};


bool cmp(point r1, point r2){
    return r1.val < r2.val;
}

int main(){
    int n;
    long long l =1000000;
    cin >> n;
    point p[n];
    for (int i = 0;i<n;i++){
        cin >> p[i].val;
        p[i].pos=i+1;
    }
    sort (p,p+n,cmp);
    for (int i = 1;i<n;i++){
        if (p[i].val-p[i-1].val<l){l=p[i].val-p[i-1].val;}
    }
    for (int i = 1;i<n;i++){
        if (p[i].val-p[i-1].val==l){cout << l<< endl<<p[i-1].pos<<' '<<p[i].pos;break;}
    }
    return 0;
}
