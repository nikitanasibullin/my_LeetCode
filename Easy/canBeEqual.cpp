class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> copy1 = target;
        sort(copy1.begin(), copy1.end());
        vector<int> copy2 = arr;
        sort(copy2.begin(), copy2.end());
        if(target.size()!=arr.size()){return 0;}
        for(int i=0;i<target.size();++i){
            if(copy1[i]!=copy2[i]){return 0;}
        }
        return 1;
    }
};
