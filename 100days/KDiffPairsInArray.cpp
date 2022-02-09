/*Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

0 <= i < j < nums.length
|nums[i] - nums[j]| == k
Notice that |val| denotes the absolute value of val.
*/
//leetcode 532
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        int size=nums.size();
        int i=0,j=1;
        vector<int>x;
        vector<int>y;
        int count=0;
        int index=0;
        sort(nums.begin(),nums.end());
        for(i=0;i<size;i++){
           
            for(j=0;j<size;j++){
                 
                if(i<j && abs(nums[i]-nums[j]) == k){
                    
                    if(x.size()>0){
                        if(x[x.size()-1]==nums[i]){
                            continue;
                        }
                    }
                    if(y.size()>0){
                        if(y[y.size()-1]==nums[j]){
                            continue;
                        }
                    }
                    x.push_back(nums[i]);
                    y.push_back(nums[j]);
                    count++;
                    
                }
            }
            
        }
        
        
        return count;
    }
};