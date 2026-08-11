class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map< string, vector<string> > mapa;

        for(const auto& str : strs){
            string key(26,0);

            for(const auto& c : str){
                key[c-'a']++;
            }
            mapa[key].push_back(str);
        }
        vector<vector<string>> ret{};
        for(auto& [first,second] : mapa){
            ret.push_back(second);
        }
        return ret;
    }
};
