class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void solve(int idx, vector<int>& candidates, int target) {

        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = idx; i < candidates.size(); i++) {

            if (candidates[i] > target)
                break;

            temp.push_back(candidates[i]);

            solve(i, candidates, target - candidates[i]);

            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        solve(0, candidates, target);

        return ans;
    }
};