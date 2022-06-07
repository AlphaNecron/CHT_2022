#include <iostream>
#include <vector>

using namespace std;

int main() {
    freopen("SUMS.INP", "r", stdin);
    freopen("SUMS.OUT", "w", stdout);
    long n,S,i,j,c = 0;
    cin >> n >> S;
    vector<long> a(n);
    for (long &z : a) cin >> z;
    for (i = 0; i < n; i++)
        for (j = i+1; j < n; j++)
            if (a[i] + a[j] == S) c++;
    cout << c;
    return 0;
}