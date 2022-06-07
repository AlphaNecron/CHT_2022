#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("COUNT.INP", "r", stdin);
    freopen("COUNT.OUT", "w", stdout);
    long n, x, q, tx = 0, i, j;
    cin >> n >> x >> q;
    vector<long> a(n);
    for (long &z : a) {
        cin >> z;
        if (z < x && z > 0) tx++;
    }
    for (i = 0; i < q; i++) {
        long l, r, ctx = 0;
        cin >> l >> r;
        for (j = 0; j < l-1; j++)
            if (a[j] < x && a[j] > 0) ctx++;
        for (j = r; j < n; j++)
            if (a[j] < x && a[j] > 0) ctx++;
        cout << tx-ctx << endl;
    }
    return 0;
}
