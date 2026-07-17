class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats = 0;
        sort(people.begin(),people.end());

        int n = people.size();
        int left = 0;
        int right = n-1;
        while(left<=right){
            if((people[left]+people[right])<=limit){
                right--;
                left++;

            }
            else{
                right--;
            }
            boats++;

        }
        return boats;
    }
};