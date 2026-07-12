class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();
        int left = 0;
        int sum = 0;
        int minSize = INT_MAX;

        for (int right = 0; right < n; right++) {

            // Expand the window
            sum += nums[right];

            // Shrink the window while it satisfies the condition
            while (sum >= target) {

                // Update the minimum length
                minSize = min(minSize, right - left + 1);

                // Remove the leftmost element
                sum -= nums[left];
                left++;
            }
        }

        return (minSize == INT_MAX) ? 0 : minSize;
    }
};