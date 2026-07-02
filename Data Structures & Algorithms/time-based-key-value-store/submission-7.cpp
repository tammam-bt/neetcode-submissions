class TimeMap {
public:
    map<string,vector<pair<string,int>>> m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        int l = 0, r = m[key].size()-1,i;
        string result = "";
        while(l <= r) {
            i = (l+r)/2;
            if(m[key][i].second <= timestamp) {
                result = m[key][i].first;
                l = i + 1;
            } else {
                r = i - 1;
            }    

        }

        return result;
    }
};
// ... 