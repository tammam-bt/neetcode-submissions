class Solution {
public:
    static string alphanumeric(string s) {
        string res = "";
        for(int i = 0; i < s.length(); i++) {
            if(isalnum(s[i])) res += s[i];
        }
        cout << res << endl;
        return res;
    }

    bool isPalindrome(string s) {
        s = alphanumeric(s);
        int j;
        for(int i = 0; i< s.length(); i++) {
            j = s.length() - 1 - i;
            if(toupper(s[i]) != toupper(s[j])) {
                cout << s[i] << s[j] << endl;
                return false;
            }    
        }
        return true;
    }
};
