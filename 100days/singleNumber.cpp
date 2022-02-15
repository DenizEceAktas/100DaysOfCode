//leetcode 136
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int notPair=0;
        for(int i=0;i<nums.size()-1;i=i+2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
            
            
        }
        notPair=nums[nums.size()-1];
        return notPair;
        
    }
};