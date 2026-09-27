class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int temp=nums[0];
        // int count=0;
        for(int i=1;i<n;++i){
            if(temp==nums[i]){
                nums.erase(nums.begin() + i);
                i--;
                n--;
                // count++;
            }
            else{
                temp=nums[i];
            }
        }
        return n;
        
    }
};