#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <iomanip>
using namespace std;
 
int main()
{   int n;
    double j;
    cin >> n;
    int m[n];
    for (int i = 0;i<n;i++){
        cin >> m[i];
    }
    cin >>  j;
    sort (m,m+n);
    for (int i = 0;i<n;i++){
        if (m[i]>j){j=(j+m[i])/2;}
    }
    cout<<fixed<<setprecision(6)<<j;
    return 0;
}
