#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector < vector<int> > g(n+1);
    n--;
    int a,b;
    while (n--){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for (int i=1;i<g.size();i++){
            cout << i << " : ";
        for (int j = 0;j<g[i].size();j++){
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

