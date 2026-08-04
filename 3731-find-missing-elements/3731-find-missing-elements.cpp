class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        sort(nums.begin(), nums.end());

int left = 0;
int right = 1;

while(right < nums.size())
{
    if(nums[right] - nums[left] == 1)
    {
        left++;
        right++;
    }
    else
    {

        int x = nums[left] + 1;

        while(x < nums[right]) {
            ans.push_back(x);
            x++;
        }

        left++;
        right++;
        
  }
}
return ans;
    }
};