/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
*/
//leetcode 4
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        double median=0;
        int m=nums1.size();
        int n=nums2.size();
        int i=0;
        vector<int> merge;
        int mid=0;
        for(i=0;i<m;i++){
            merge.push_back(nums1[i]);
        }
        for(i=0;i<n;i++){
            merge.push_back(nums2[i]);
        }
        sort(merge.begin(),merge.end());
        
        if((m+n)%2== 1){
            mid=(m+n)/2;
            median=merge[mid];
        }
        else{
            mid=(m+n)/2;
            median=(double)(merge[mid] + merge[mid-1])/2;
        }
        
        
        return median;
    }
};