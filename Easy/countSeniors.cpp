class Solution {
public:
    int countSeniors(vector<string>& details) {
        size_t cnt=0;
        for(int i=0;i<details.size();++i){
            if((details[i][11]-'0')*10+(details[i][12]-'0')>60){
                ++cnt;
            }
        }
        return cnt;
    }
};
