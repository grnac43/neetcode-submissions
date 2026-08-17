class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;

        stack<pair<int,int>> sstack;
        for(int i = 0; i < heights.size(); i++){
            int j = i;
            while(!sstack.empty() && heights[i] < sstack.top().second){
                pair<int,int> temp = sstack.top();
                maxArea = std::max((temp.second*(i-temp.first)), maxArea);
                j=temp.first;
                sstack.pop();
            }
            sstack.push({j, heights[i]});
        }

        while(!sstack.empty()){
            pair<int,int> temp = sstack.top();
            maxArea = std::max((temp.second*((int)heights.size()-temp.first)), maxArea);
            sstack.pop();
        }

        return maxArea;
    }
};
