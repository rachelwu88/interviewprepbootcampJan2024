class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        int sum = 0;
        vector<int> answer;
        while(left < right){
            sum = numbers[left] + numbers[right];
            if(sum == target){
                answer.push_back(left + 1);
                answer.push_back(right + 1);
                return answer;
            }
            else if(sum > target){
                right--;
            }
            else{
                left++;
            }
        }
        return answer;
    }
};