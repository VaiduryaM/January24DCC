//2610. Convert an Array Into a 2D Array With Conditions

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

        vector<int> freq(nums.size()+1);
        vector<vector<int>> ret;

        for(int i:nums){
            if(freq[i] >= ret.size()){
                ret.push_back({});
            }
            ret[freq[i]].push_back(i);
            freq[i]++;
        }

        return ret;
    }
};