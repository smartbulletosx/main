#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <algorithm>

using namespace std;

struct ring{
    int power;
    int pos;
};

struct stick{
    int power;
    int pos;
};

bool cmpU(ring r1, ring r2){
    return r1.power < r2.power;
}

bool cmpD(stick r1, stick r2){
    return r1.power > r2.power;
}

int main(){
    int n;
    cin >> n;
    ring r[n];
    stick s[n];
    for (int i = 0;i<n;i++){
        cin >> r[i].power;
        r[i].pos = i + 1;
    }
    for (int i = 0;i<n;i++){
        cin >> s[i].power;
        s[i].pos = i + 1;
    }
    sort(r, r + n, cmpU);
    sort(s, s + n, cmpD);
    for(auto i : r) cout << i.pos << " ";
    cout << endl;
    for(auto i : s) cout << i.pos << " ";
    return 0;
}
