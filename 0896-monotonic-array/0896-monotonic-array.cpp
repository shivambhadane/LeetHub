class Solution {
public:
    
     bool isDecreasing(vector<int>& arr) {
            for (int i = 0; i < arr.size() - 1; i++) {
                 if (arr[i] < arr[i + 1])
               return false;
             }
            return true;
         }
         bool isSorted(vector<int>& arr) {
             for (int i = 0; i < arr.size() - 1; i++) {
                  if (arr[i] > arr[i + 1])
               return false;
          }
        return true;
        }   
        bool isMonotonic(vector<int>& arr) {
       
        if(isDecreasing(arr) ==true || isSorted(arr)==true){
            return true;
        }
        else{
            return false;
        }
    }
};