class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret{};

        unordered_map<string, vector<string>> mapa;
        for(auto& s: strs){
            string temp = s;
            sort(s.begin(),s.end());
            mapa[s].push_back(temp);
        }
        for(auto m: mapa){
            ret.push_back(m.second);
        }

        return ret;
    }
};
