//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     double waterOverflow(int K, int R, int C) {
    vector<vector<double>> dp(500, vector<double>(500,0.0));
        dp[0][0] = K;
        for (int r = 0; r < R; ++r) {
            for (int c = 0; c <= r; ++c) {
                if (dp[r][c] > 1.0) {
                    double excess = dp[r][c] - 1.0;
                    if (r + 1 < 100) {
                        dp[r + 1][c] += excess / 2.0;
                        dp[r + 1][c + 1] += excess / 2.0;
                    }
                }
            }
        }
        return dp[R -1][C -1] >= 1.0 ? 1.0 : dp[R -1][C -1];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int K,R,C;
        
        cin>>K>>R>>C;

        Solution ob;
        cout << fixed << setprecision(6)<< ob.waterOverflow(K,R,C) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends