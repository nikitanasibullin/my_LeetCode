class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i=0;i<names.size();++i){
            int max_index=i;
            for(int j=i+1;j<names.size();++j){
                if(heights[j]>=heights[max_index]){
                    max_index=j;
                }
            }
            if(i!=max_index){
                swap(names[i], names[max_index]);
                swap(heights[i], heights[max_index]);
            }
        }
        return names;
    }
};
