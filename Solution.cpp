class Solution {
public:
    int numTilings(int n) {
        const int MOD = 1e9 + 7; // Modulo to prevent integer overflow
        vector<long long> dp(n + 1, 0); // dp[i] will store number of ways to tile 2 x i board

        // Base cases:
        if (n == 1) return 1; // Only 1 vertical domino possible
        if (n == 2) return 2; // Two options: two vertical dominoes or two horizontal

        dp[1] = 1; // 2x1 board → 1 way
        dp[2] = 2; // 2x2 board → 2 ways
        dp[3] = 5; // Precomputed for 2x3 board:
                   // (a) 3 vertical dominos
                   // (b) 1 horizontal + 1 vertical on top/bottom (2 ways)
                   // (c) 1 tromino (L-shape), which has 2 configurations

        // General case:
        for (int i = 4; i <= n; i++) {
            // Recurrence relation:
            // dp[i] = 2 * dp[i-1] + dp[i-3]
            // - 2 * dp[i-1]: for adding a vertical domino or placing a tromino
            // - dp[i-3]: new unique combinations introduced by L-shaped placements
            dp[i] = (2 * dp[i - 1] % MOD + dp[i - 3]) % MOD;
        }

        return dp[n]; // Final result: number of ways to tile 2 x n board
    }
};
