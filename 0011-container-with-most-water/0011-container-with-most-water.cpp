class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int right=height.size()-1;
        int left=0;
        while(left<right){
            int x=min(height[right],height[left]);
            int width=right-left;
            int temp=x*width;
            if(area<temp){
                area=temp;
            }
            if(height[right]<height[left]){
                right--;
            }
            else{
                left++;
            }
        }
        return area;
    }
};