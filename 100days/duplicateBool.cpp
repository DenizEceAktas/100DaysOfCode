/*Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/
//leetcode 217
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int i=0;
        
        for(i=0;i<size-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
            
        }
        return false;
        
        
        
    }
};