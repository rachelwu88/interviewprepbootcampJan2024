class Solution {
public:
//     int maxArea(vector<int>& height) {
//         int index = 0;
//         for(int i = 0; i <= height.size()-1; i++){
//             if(height[i+1] > height [i]){
//                 index = i; 
//             }
//         }
//         int right = 1;
//         int area = 0;
//         int best_area = 0;
//         while(index < height.size() - 1){
//             if(height[index] < height[right]){
//                 area = height[right] * (right - index);
//                 if(area < best_area){
//                     best_area = area;
//                 }
//             }
//             else if(height[index] >= height[right]){
//                 area = height[index] * (right - index);
//                 if(area < best_area){
//                     best_area = area;
//                 }
//             }
//             right++;
//         }
//         return best_area;
//     }
// };
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int h = std::min(height[left], height[right]);
            int w = right - left;
            int area = h * w;
            maxArea = std::max(maxArea, area);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
};
