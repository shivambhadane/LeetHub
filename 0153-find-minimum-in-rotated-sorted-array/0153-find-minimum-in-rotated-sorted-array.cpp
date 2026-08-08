class Solution {
public:
    int findMin(vector<int>& nums) {
        int less = INT_MAX;
        int n = nums.size();
        for(int i =0;i<n;i++){
            less = min(less, nums[i]);
        }
        return less;
    }
};