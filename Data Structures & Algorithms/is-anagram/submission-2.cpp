class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        
        std::vector<int> temp1(26, 0);
        std::vector<int> temp2(26, 0);
        for(auto ss: s){
            temp1[std::tolower(ss) - 'a']++;
        }
        for(auto tt: t){
            temp2[std::tolower(tt) - 'a']++;
        }

        return temp1 == temp2;
    }
};
