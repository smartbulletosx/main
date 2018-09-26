#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <algorithm>
#include <cmath>

using namespace std;


struct neft{
    long long m;
    string prefix;
    long long ans; // г
    void compute(){
        if (prefix.size() == 1){
            if (prefix=="p"){ans = m*16380;}
            else if(prefix == "t"){ans = m*pow(10,6);}
            else if(prefix == "g"){ans = m;}
        }
        else if (prefix.size()==2){
            if (prefix[0]=='m'){
                                if (prefix=="p"){ans = m*16380*pow(10,-3);}
                                else if(prefix == "t"){ans = m*pow(10,6)*pow(10,-3);}
                                else if(prefix == "g"){ans = m*pow(10,-3);}}
            if (prefix[0]=='k'){
                                if (prefix=="p"){ans = m*16380*pow(10,3);}
                                else if(prefix == "t"){ans = m*pow(10,6)*pow(10,3);}
                                else if(prefix == "g"){ans = m*pow(10,3);}
            }
            if (prefix[0]=='M'){
                                if (prefix=="p"){ans = m*16380*pow(10,6);}
                                else if(prefix == "t"){ans = m*pow(10,6)*pow(10,6);}
                                else if(prefix == "g"){ans = m*pow(10,6);}
            }
            if (prefix[0]=='G'){
                                if (prefix=="p"){ans = m*16380*pow(10,9);}
                                else if(prefix == "t"){ans = m*pow(10,6)*pow(10,9);}
                                else if(prefix == "g"){ans = m*pow(10,9);}
            }
        }
    }
};

bool shkolnik_cmp(neft normal, neft smoker){
    return normal.ans > smoker.ans;
}




int main(){
    int n, t;
    string s, s1;
    cin >> n;
    getline(cin, s);
    neft simple[n];
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        stringstream in(s);
        string tmp;

            in >> t;
            simple[i].m+=t;

            in >> tmp;
            simple[i].prefix = tmp;

        simple[i].compute();
    }
    sort(simple, simple + n, shkolnik_cmp);
    for(auto s : simple){
        cout << s.m << " " << s.prefix;
    return 0;
}
}
