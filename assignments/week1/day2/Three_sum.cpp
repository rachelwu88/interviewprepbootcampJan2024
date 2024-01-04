class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> answer;
        vector<int> n;
        int first = 0;
        int mid = (nums.size()) / 2;
        int end = nums.size();
        int sum = nums[first] + nums[mid] + nums[end];
        if (nums.size() == 3 && sum != 0) {
            return answer;
        }
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (i != j) {
                    for (int k = j + 1; k < nums.size(); k++) {
                        if (j != k) {
                            sum = nums[i] + nums[j] + nums[k];
                            if (sum == 0) {
                                n.push_back(nums[i]);
                                n.push_back(nums[j]);
                                n.push_back(nums[k]);
                                answer.push_back(n);
                            }
                        }
                    }
                }
            }
        }
        return answer;
    }
};