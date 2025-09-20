#include <bits/stdc++.h>
using namespace std;

int main() {
 int a, b, c;
    cin >> a >> b >> c;

    // Early-out optimization: if both even but c is odd -> impossible
    if ((a % 2 == 0) && (b % 2 == 0) && (c % 2 == 1)) {
        cout << "NO\n";
        return 0;
    }

    int g = gcd(a, b);
    if (c % g != 0) { // gcd must divide c
        cout << "NO\n";
        return 0;
    }

    // Now check for non-negative solution
    for (int x = 0; x <= c / a; x++) {
        // cout << x << " " << c-a*x << endl;
        int remaining = c - a * x;
        if (remaining % b == 0) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}
