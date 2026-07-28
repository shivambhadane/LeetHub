class Solution {
public:
    
    int lastOccurrence(vector<int>& arr, int index, int target) {
    if (index == arr.size())
        return -1;

    int ans = lastOccurrence(arr, index + 1, target);

    if (ans != -1)
        return ans;

    if (arr[index] == target)
        return index;

    return -1;
}

    int firstOccurrence(vector<int>& arr, int index, int target) {
    if (index == arr.size())
        return -1;

    if (arr[index] == target)
        return index;

    return firstOccurrence(arr, index + 1, target);
}
vector<int> searchRange(vector<int>& arr, int target) {
       int first = firstOccurrence(arr, 0, target);
int last = lastOccurrence(arr, 0, target);

return {first, last};
        
    }

};