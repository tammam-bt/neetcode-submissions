class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> c;
        for(int i = 0; i < s.size(); i++) {
            c[s[i]]++;
            cout << s[i] << c[s[i]] << endl;
        }
        for(int i = 0; i < t.size(); i++) {
            if(c[t[i]] == 0) {
                return false;
            } else {
                c[t[i]]--;
            }
        }
        for(auto it = c.begin(); it != c.end(); it++) {
            if(it->second > 0) {
                return false;
            }
        }
        return true;
    }
};
