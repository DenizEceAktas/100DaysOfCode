//leetcode 27
class Solution {
public:
    void slide(vector<int>& nums,int i){
        
        int temp=nums[i];
        while(i<nums.size()-1){
            nums[i]=nums[i+1];
            i++;
        }
        nums[nums.size()-1]=temp;
        
    }
    int removeElement(vector<int>& nums, int val) {
        
        int i=0;
        int size=nums.size();
        
        for(i=0;i<nums.size();i++){
            if(nums[i]==val){
                slide(nums,i);
                nums.erase(nums.end()-1);
                i--;
            }
            
            
        }
        
        return nums.size();
        
    }
};