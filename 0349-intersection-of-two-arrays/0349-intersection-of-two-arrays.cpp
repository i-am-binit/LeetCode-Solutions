class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int x:nums1){
            for(int y:nums2){
                if(x==y){
                    if(find(ans.begin(),ans.end(),x)==ans.end())
                    ans.push_back(x);
                }
            }
        }
        return ans;
    }
};