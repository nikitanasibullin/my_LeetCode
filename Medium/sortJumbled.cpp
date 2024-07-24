class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>> posl;
        for(int i=0;i<nums.size();++i){
            string now=to_string(nums[i]);
            string res=;
            for(int j=0;j<now.size();++j){
                res=res+to_string(mapping[((now[j]-'0'))]);
            }
            posl.push_back({stoi(res),nums[i]});
        }
        stable_sort(posl.begin(), posl.end(),[](auto a, auto b){ return a.first < b.first; });
        vector<int> res;
        for(int i=0;i<posl.size();++i){
            res.push_back(posl[i].second);
        }
        
        
        return res;
    }
};
