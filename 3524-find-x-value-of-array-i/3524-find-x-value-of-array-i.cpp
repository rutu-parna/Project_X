class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
         vector<long long> result(k, 0), dp(k, 0);

        for (int num : nums) {
            vector<long long> next(k, 0);
            int rem = num % k;

            next[rem]++;

            for (int r = 0; r < k; r++) {
                int newRem = (1LL * r * rem) % k;
                next[newRem] += dp[r];
            }

            for (int r = 0; r < k; r++) {
                result[r] += next[r];
            }

            dp = next;
        }

        return result;
    }
};