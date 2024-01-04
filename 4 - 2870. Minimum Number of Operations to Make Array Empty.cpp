//2870. Minimum Number of Operations to Make Array Empty

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ops=0;
        unordered_map<int,int> freq;

        for(int i:nums){
            //if(freq.find(i) == freq.end()) freq[i] = 1;
            //else
             freq[i]++;
            /*
            if(freq[i] % 2==0) 
            {
                ops += (freq[i]/2);
                freq[i] = 0;

            }
            else if(freq[i] % 3==0){
                ops += (freq[i]/3);
                freq[i] = 0;
            }
            else continue;*/
        }

        for(unordered_map<int,int>::iterator it = freq.begin(); it!=freq.end(); it++){
            
            if(it->second == 1) return -1;
            //ops += ceil((double)it->second/3);
            ops += it->second/3;
            if(it->second % 3) ops++;
        }
        
        return ops;                
    }
};