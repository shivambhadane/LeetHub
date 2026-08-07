class Solution {
public:
    bool isSorted(vector<int>& nums) {
    int n = nums.size();

    for(int i = 1; i < n; i++) {
        if(nums[i] < nums[i - 1])
            return false;
    }

    return true;
}

bool check(vector<int>& nums) {
    int n = nums.size();

    for(int k = 0; k < n; k++) {

        vector<int> rotated;

        for(int i = 0; i < n; i++) {
            rotated.push_back(nums[(i + k) % n]);
        }

        if(isSorted(rotated))
            return true;
    }

    return false;
}
};