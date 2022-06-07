#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("SOUOC.INP", "r", stdin);
    freopen("SOUOC.OUT", "w", stdout);
    long c = 0, n, i;
    cin >> n;
    if (n % 2 != 0) c++;
    long lm = ceil(n/2);
    for (i = 1; i <= lm; i += 2)
        if (n % i == 0 && i % 2 != 0) c++;
    cout << c;
    return 0;
}