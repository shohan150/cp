#include <bits/stdc++.h>
using namespace std;

int main() {
    int S;
    int T;
    if (!(cin >> S >> T)) return 0;
    
    int ans = 0;
    for (int a = 0; a <= S; ++a) {
        for (int b = 0; b <= S - a; ++b) {
            int maxBySum = S - a - b;
            if (a == 0 || b == 0) {
                // product a*b*c == 0 for any c, so only sum constraint matters
                if (maxBySum >= 0) ans += maxBySum + 1;
            } else {
                int ab =  a * b;
                // maximum c allowed by product constraint
                int maxByProd = T / ab; // integer floor
                int cmax = min(maxBySum, maxByProd);
                // cout << a << " " << b << " " << cmax << endl;
                if (cmax >= 0) ans += cmax + 1;
            }
        }
    }
    
    cout << ans << '\n';
    return 0;
}
