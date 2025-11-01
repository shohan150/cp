#include <bits/stdc++.h>
using namespace std;

bool allDistinct(int year) {
    string s = to_string(year);
    set<char> st(s.begin(), s.end());
    return st.size() == s.size(); // if all digits unique
}

int main() {
    int y;
    cin >> y;

    int candidate = y + 1;
    while (true) {
        if (allDistinct(candidate)) {
            cout << candidate << "\n";
            break;
        }
        candidate++;
    }

    return 0;
}
