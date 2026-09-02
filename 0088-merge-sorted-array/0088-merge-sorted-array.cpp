class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nums(m+n);
        int i=0;
        int j=0;
        for(int k=0;k<m+n;k++){
            if(i<m && (j>=n || nums1[i]<=nums2[j])){
                nums[k]=nums1[i];
                i++;
            }
            else{
                nums[k]=nums2[j];
                j++;
            }
        }
        nums1=nums;
    }
};