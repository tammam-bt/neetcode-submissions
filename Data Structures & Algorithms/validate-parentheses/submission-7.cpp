class Solution {
public:
    bool isValid(string s) {
        deque<char> q;
        for(int i = 0; i < s.size(); i++) {
            if(s[i]=='(' || s[i] == '{' || s[i] == '[') q.push_back(s[i]);
            else {
                
                if(!q.empty()) {
                    cout <<  q.back() << s[i] << endl;
                    if(s[i] == ')' && q.back() != '(') return false;
                    if(s[i] == ']' && q.back() != '[') return false;
                    if(s[i] == '}' && q.back() != '{') return false;
                    q.pop_back();
                } else {
                    if(s[i]==')' || s[i] == '}' || s[i] == ']') return false;
                }
            }
        }
        return q.empty();
    }
};
