class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        int res = n + 1;
        int sum = 0, i = 0;

        vector<int> dp(n + 1, n);

        for (int j = 0; j < n; j++) {
            sum += arr[j];

            while (sum > target) {
                sum -= arr[i++];
            }

            // No valid subarray ending at j
            dp[j + 1] = dp[j];

            if (sum == target) {
                int len = j - i + 1;

                // Previous non-overlapping subarray
                res = min(res, len + dp[i]);

                // Best subarray ending at or before j
                dp[j + 1] = min(dp[j], len);
            }
        }

        return res == n + 1 ? -1 : res;
    }
};