class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unsigned short int c=0;
        for(int i=0;i<arr.size();++i){
            if(count(arr.begin(), arr.end(),arr[i])==1){
                ++c;
            }
            if(c==k){return arr[i];}

        }
        return ;
    }
};
