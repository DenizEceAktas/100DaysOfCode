
//leetcode 26
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
        int i=0;
        if(nums.size()==0){
            return 0;
        }
        vector<int> number;
        number.push_back(nums[0]);
        int elementNum=1;
        int current=nums[0];
        for(i=1;i<size;i++){
            if(current!= nums[i]){
                elementNum++;
                number.push_back(nums[i]);
                current=nums[i];
            }
        }
        nums=number;
        return elementNum;
        
    }
};