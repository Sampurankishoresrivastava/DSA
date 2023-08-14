class Solution {
public:
    int maxSum(vector<int>& nums) {
        int ans = -1;

        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (hasEqualMaxDigits(nums[i], nums[j])) {
                    int sum = nums[i] + nums[j];
                    ans = max(ans, sum);
                }
            }
        }

        return ans;
    }

    bool hasEqualMaxDigits(int a, int b) {
        int maxDigitA = getMaxDigit(a);
        int maxDigitB = getMaxDigit(b);
        return maxDigitA == maxDigitB;
    }

    int getMaxDigit(int num) {
        int maxDigit = 0;
        while (num > 0) {
            int digit = num % 10;
            maxDigit = max(maxDigit, digit);
            num /= 10;
        }
        return maxDigit;
    }
};
