class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        else {
            map<char,int> m;
            for(int i = 0; i < s.length(); i++) {
                m[s[i]]++;
            }
            for(int i = 0; i < t.length(); i++) {
                m[t[i]]--;
            }
            for(auto e:m) {
                cout << e.first << e.second << endl;
                if(e.second != 0) return false;
            }
            return true;
        }
    }
    map<char,int> occurence_map(string s) {
        map<char,int> m;
        for(int i = 0; i < s.length(); i++) {
            m[s[i]]++;
        }
        return m;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size()==1) return {strs};
        else {
            map<map<char,int>,vector<string>> maps;
            vector<vector<string>> result;
            for(int i = 0; i<strs.size(); i++) {
                bool found = false;
                map<char,int> m = occurence_map(strs[i]);
                for(auto e:maps) {
                    if(m == e.first) {
                        maps[m].push_back(strs[i]); 
                        found = true;
                        break;
                    }    
                }  
                if(!found) maps[m] = {strs[i]};
            }
            for(auto e:maps) {
                result.push_back(e.second);
            }
            return result;
        }
    }
};
