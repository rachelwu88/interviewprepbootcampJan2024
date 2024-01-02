class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // int left = 0;
        // int next = left + 1;
        // int right = aa
        // while(left < nums.size() - 1){
        //     for(int next; next < nums.size(); next++){
        //         if(nums[left] == nums[next]){
        //             return true;
        //         }
        //     }
        //     left++;
        //     next = left + 1;
        // }
        // return false;
        map<int, int> duplicate;
        for (int i : nums) {
            if (duplicate[i] >= 1) {
                return true;
            }
            duplicate[i]++;
        }
        return false;
    }
};