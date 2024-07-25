class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> res;
        for(int i=0; i<matrix.size(); ++i){
            int x=*min_element(matrix[i].begin(), matrix[i].end());
            int indx=find(matrix[i].begin(), matrix[i].end(), x)-matrix[i].begin();
            if(ismax(matrix,x,indx)){res.push_back(x);}
        }
        return res;
    }
    bool ismax(vector<vector<int>>& matrix,int x, int indx ){
        int max=-100000;
        for(int i=0;i<matrix.size();++i){
            if(max<matrix[i][indx]){max=matrix[i][indx];}
        }
        if(max==x){return true;}
        return false;
    }
};
