class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(auto s:strs) {
            res += s + char(0);
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string temp = "";
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != 0) temp+=s[i];
            else {
                res.push_back(temp);
                temp = "";
            }
        }
        return res;
    }
};
