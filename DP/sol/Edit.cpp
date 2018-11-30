#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int edit_distance(const string& s1, const string& s2){
    int dp[100][100];

    for(int i = 0; i <= s1.size(); ++i){
        for(int j = 0; j <= s2.size(); ++j)
            if(i == 0) dp[i][j] = j;
            else if(j == 0) dp[i][j] = i;
            else if(s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1]
            else dp[i][j] = 1 + min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]);
    }
    
    return dp[s1.size()][s2.size()];
}

int main(){
    string s1, s2;
    cout << "Enter two sequences: "; cin >> s1 >> s2;
    cout << "Length of edit distance: " << edit_distance(s1, s2) << '\n';
    return 0;
}