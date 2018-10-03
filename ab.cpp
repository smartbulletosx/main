#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <conio.h>
using namespace std;

int toInt(string s){
    int ans = 0, r = 1;
    for(int i = s.size()-1; i>= 0; i--){
        ans += (s[i] - '0') * r;
        r *= 10;
    }
    return ans;
}

int main(){
    string s, s1 = "", s2 = "";
    vector<int> v1,v2,ost,digit;
    int t,p=0,m,d,j;
    set<int> osts;
    cin >> s;
    for (int i = 0;i<s.size();i++){
        while(s[i] != '/'){
            s1+=s[i];
            i++;
        }
        i++;
        while(i < s.size()){
            s2 += s[i];
            i++;
        }
    }
    int a = toInt(s1), b = toInt(s2);
    j=a;
    if (a%b==0){cout << a/b ;return 0;}

    int pos = 0;
    a=a%b;

    int l = 10,r=0,h=0;
    while (true){
        a*=10;
        for (int i = 0;i<ost.size();i++){
            if (a==ost[i]){r=1;l=i;}
        }
        if (r==1){break;}
        ost.push_back(a);
        digit.push_back(a / b);
        a = a % b;

    }
    cout << j/b << '.';
    for (int i = 0; i<l;i++){
        cout << digit[i];
    }

    for (int i = l;i<digit.size();i++){
        if (digit[i]==0){h++;}
    }

    if (h==(digit.size()-l)){return 0;}
    cout << '(';
    for (int i = l;i<digit.size();i++){
        cout << digit[i];
    }
    cout<< ')';
    return 0;
}

