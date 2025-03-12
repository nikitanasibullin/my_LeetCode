class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        std::vector<int> copied=nums1;
        int i=0;
        int j=0;
        int k=0;
        while(k<n+m and j<n and i<m){
            if(copied[i]<nums2[j]){
                nums1[k]=copied[i];
                ++i;
            }
            else if(copied[i]>=nums2[j]){
                nums1[k]=nums2[j];
                ++j;
            }
            ++k;
        }
        while (j<n){
            nums1[k++]=nums2[j++];
        }
        while(i<m){
            nums1[k++]=copied[i++];
        }
    }
};
