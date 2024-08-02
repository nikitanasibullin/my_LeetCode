class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> res(101);
        for(int i=0;i<nums.size();++i){
            ++res[nums[i]];
        }
        int fres=0;
        int maxi=*max_element(res.begin(), res.end());
        for(int i=0;i<res.size();++i){
            if(res[i]==maxi){fres+=maxi;}
        }
        return fres;
    }
};
