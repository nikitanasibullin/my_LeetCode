class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> copy1=nums1;
        vector<int> copy2=nums2;
        sort(copy1.begin(), copy1.end());
        sort(copy2.begin(), copy2.end());
        vector<int> res;
        int i=0;
        int j=0;
        while(i<nums1.size() and j<nums2.size()){
            if(copy1[i]<copy2[j]){++i;}
            else if(copy1[i]>copy2[j]){++j;}
            else{
                if(find(res.begin(), res.end(), copy1[i])==res.end()){
                res.push_back(copy1[i]);}
                ++i;
                ++j;
            }
        }
        return res;
    }
};
