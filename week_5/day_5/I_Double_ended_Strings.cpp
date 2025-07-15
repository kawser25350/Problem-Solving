#include <iostream>
#include <string>
#include <cstring>

using namespace std;

pair<int, string> LCS_length(const string& X, const string& Y, int m, int n) {
    int maxlen = 0;
    int endingIndex = m;
    int lookup[m + 1][n + 1];
    memset(lookup, 0, sizeof(lookup));
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1]) {
                lookup[i][j] = lookup[i - 1][j - 1] + 1;
                if (lookup[i][j] > maxlen) {
                    maxlen = lookup[i][j];
                    endingIndex = i;
                }
            }
        }
    }
    return make_pair(maxlen, X.substr(endingIndex - maxlen, maxlen));
}

pair<int, string> min_operations(const string& X, const string& Y) {
    int m = X.size(), n = Y.size();
    auto result = LCS_length(X, Y, m, n);
    int lcs_len = result.first;
    string lcs_substr = result.second;
    int c = (m - lcs_len) + (n - lcs_len);
    return make_pair(c, lcs_substr);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string X, Y;
        cin >> X >> Y;
        auto result = min_operations(X, Y);
        int min_ops = result.first;
        string lcs_substr = result.second;
        cout << min_ops << "\n";
        cout << "Matched Substring: " << lcs_substr << "\n";
    }
    return 0;
}
