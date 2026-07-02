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
};
