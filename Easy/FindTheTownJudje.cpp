class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int res=-1;
        if(trust.size()<n-1){
            return res;
        }
        vector<int> x;
        for(int i=0;i<n;++i){
            x.push_back(0);
        }
        for(int i=0;i<trust.size();++i){
            x[(trust[i][1])-1]=x[(trust[i][1])-1]+1;
        }
        for(int i=0;i<n;++i){
            if (x[i]==n-1){
                res=i+1;

            }
        }
        for(int i=0;i<trust.size();++i){
            if(trust[i][0]==res){
                return -1;
            }
        }
        return res;
    }
};
