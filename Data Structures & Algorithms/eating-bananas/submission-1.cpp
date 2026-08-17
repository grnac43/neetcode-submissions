class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxBound = 0, minBound = 1;

        for(auto& pile : piles){
            maxBound = std::max(maxBound, pile);
        }

        int ret = maxBound;

        while(minBound<=maxBound){
            int k = (minBound+maxBound)/2;

            int totalTime = 0;
            for(auto& pile : piles){
                totalTime += ceil((double)pile / k);
            }

            if(totalTime<=h){
                ret = k;
                maxBound = k-1;
            }
            else
                minBound = k+1;
        }
        return ret;
    }
};
