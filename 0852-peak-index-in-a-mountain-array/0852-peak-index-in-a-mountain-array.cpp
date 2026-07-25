class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int largest=INT_MIN;
        int index = -1;
        for(int i = 0;i<n;i++){
            if(arr[i]>largest){
                    largest = arr[i];
                    index = i;
            }

        }
        return index;
    }
};