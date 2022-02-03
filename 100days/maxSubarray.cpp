/*Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.
*/
//leetcode 53
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum=nums[0];
        
        int size=nums.size();
        int i=0;
        int j=0;
        int tempMax=nums[0];
        for(i=1;i<size;i++){
            tempMax= max(tempMax+nums[i],nums[i]);
            maximum = max(maximum,tempMax);
        }
        return maximum;
        
    }
};