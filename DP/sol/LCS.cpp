#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int LCS(const string& s1, const string& s2){
    int dp[100][100];

    for(int i = 0; i < s1.size(); ++i) dp[i][0] = 0;
    for(int i = 0; i < s2.size(); ++i) dp[0][i] = 0;

    for(int i = 1; i <= s1.size(); ++i){
        for(int j = 1; j <= s2.size(); ++j)
            if(s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }
    return dp[s1.size()][s2.size()];
}

int main(){
    string s1, s2;
    cout << "Enter two sequences: "; cin >> s1 >> s2;
    cout << "Length of LCS: " << LCS(s1, s2) << '\n';
    return 0;
}