/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/
//leetcode 88
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if(m==0 && n!= 0){
            nums1=nums2;
            return;
        }
        if(n==0 && m!=0){
            return;
        }
        if(n==0 && m==0){
            nums1.clear();
            return ;
        }
        vector<int> temp;
        int i=0;
        int count=0;
        while(i<m){
            
           
            if(count>=n){
                temp.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]<nums2[count]){
                temp.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]==nums2[count]){
                temp.push_back(nums1[i]);
                temp.push_back(nums2[count]);
                count++;
                i++;
            }
            else{
                temp.push_back(nums2[count]);
                count++;
            }
        }
        for(i=count;i<n;i++){
            temp.push_back(nums2[i]);
        }
        nums1=temp;
        
        
    }
};