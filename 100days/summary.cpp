class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        int i=0;
        int size=nums.size();
        vector<string> result;
        if(nums.size()==0){
            return result;
        }
        if(nums.size()==1){
            result.push_back(to_string(nums[0]));
            return result;
        }
        int prev=nums[0];
        int x=0;
        int current=nums[0];
        if(nums.size()==2){
            if(nums[0]+1==nums[1]){
                string a=to_string(nums[0]) + "->" +to_string(nums[1]);
                result.push_back(a); 
                return result;
                
            }
            else{
               result.push_back(to_string(nums[0]));
                result.push_back(to_string(nums[1]));
                return result; 
            }
            
        }
        for(i=0;i<size;i++){
           
                while(nums[i+1]==nums[i]+1){
                    current=nums[i+1];
                    i++;
                    x=1;
                }
            
            
            
            if(x==0){
                current=nums[i];
                result.push_back(to_string(current));
            }
            else{
                string a=to_string(prev) + "->" +to_string(current);
               result.push_back(a); 
            }
            x=0;
            
                prev=nums[i+1];
            
            
        }
        
        
        return result;
        
    }
};