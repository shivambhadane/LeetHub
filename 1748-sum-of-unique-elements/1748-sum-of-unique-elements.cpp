class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {

            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            if (i < n - 1 && nums[i] == nums[i + 1]) {
                continue;
            }

            sum += nums[i];
        }

        return sum;
    }
};