class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
     int ans=0;
     for(int i=0;i<nums.size();i++){
         sort(nums[i].begin(),nums[i].end());
     }
     for(int c=0;c<nums[0].size();c++){
     int Max=0;
         for(int r=0;r<nums.size();r++){
             Max=max(Max,nums[r][c]);
         }
         ans+=Max;
     }   
     return ans;
    }
};
