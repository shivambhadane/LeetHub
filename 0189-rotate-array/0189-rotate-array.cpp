class Solution {
public:
  void rotate(vector<int>& nums, int k) {
    int n = nums.size();

    if(n == 0) return;

    k = k % n;

    vector<int> temp(k);

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
}
    

};