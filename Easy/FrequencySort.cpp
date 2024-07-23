class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> mine;
        vector<int> res;
        mine.resize(201);
        for(int i=0;i<nums.size();++i){
            ++mine[nums[i]+100];
        }
        for(int i=1;i<101;++i){
            for(int j=200;j>=0;--j){
                if(mine[j]==i){
                    int k=i;
                    while(k>0){
                    res.push_back(j-100);
                    --k;}
                    }
            }
        }
        return res;
    }
};
