class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int last=nums.size()-1;
        for(int i=0;i<=last;++i){
            if(nums[i]==val){
                if(nums[last]!=val){
                std::swap(nums[i--],nums[last--]);
                }
                else{
                    --last;
                    --i;
                }

            }
        }
        return last+1;
    }
};
