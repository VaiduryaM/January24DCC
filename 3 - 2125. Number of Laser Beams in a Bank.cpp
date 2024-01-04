//2125. Number of Laser Beams in a Bank

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        //brute
        int beams = 0;
        vector<int> devices;
        for(string i: bank){
            int d = 0;
            for(int j=0; j<i.length(); j++){
                if(i[j] == '1')
                    d++;
            }
            if(d!=0)
            devices.push_back(d);
        }

        //3,2,1
        for(int i=1; i<devices.size(); i++){
            beams += devices[i]*devices[i-1];
        }

        return beams;
        

        
    }
};