#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <algorithm>

using namespace std;

string pos(ans)
{
    string s;
    long num=0;
    int p=1;
    for (int i =s.size()-1;i>=6;i--){
        if (s[i]!='-'){
            num += (int)(s[i]-'0')*p;
            p*=10;
        }
    }
    num++;
    int i =8;
    while(i!=1){
        if (i==6 || i == 4){ans = "-"+ans;}
        ans=(char)(num%10+'0')+ans;
        num/=10;
        i--;
    }
    ans = "7(911)"+ans;
    return ans;
}

int main() {
    int n;
    string ans="7(911)000-00-00";
    cin >> n;
    map<string, vector<string> > m;
    string s;
    getline(cin, s);
    while(n--){
        getline(cin, s);
        m[s].push_back(pos(ans));
    }
    for(auto i : m){
        cout << i.first << " : ";
        for(auto j : i.second){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
