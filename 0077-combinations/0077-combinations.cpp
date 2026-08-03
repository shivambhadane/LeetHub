class Solution {
public:
    vector<vector<int>> ans;

    void solve(int start, int n, int k, vector<int>& path) {

        // Base case: combination of size k is formed
        if (path.size() == k) {
            ans.push_back(path);
            return;
        }

        // Try every possible next number
        for (int i = start; i <= n; i++) {

            // Choose
            path.push_back(i);

            // Explore only numbers after i
            solve(i + 1, n, k, path);

            // Undo choice (backtrack)
            path.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> path;

        solve(1, n, k, path);

        return ans;
    }
};