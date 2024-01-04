class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> new_num;
        int left = 0;
        int right = nums.size();

        while(left < right){
            int sum = nums[left] + nums[right];
            if(sum == target){
                new_num.push_back(left);
                new_num.push_back(right);
            }
            else if(sum > target){
                    right--;
            }
            else{
                left++;
            }
        }
        return new_num;
    }
};