class Solution {
public:

    bool isAnagradm(string& s, string& t){
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s == t;
    }
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
