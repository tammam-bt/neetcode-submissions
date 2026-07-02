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
        if(r == 0) {
            if(m[key][0].second <= timestamp) return m[key][0].first;
            else return "";
        }
        else {
            while(l<=r) {
                i = (l + r) / 2;
                if(m[key][i].second == timestamp) return m[key][i].first;
                if(m[key][l].second == timestamp) return m[key][l].first;
                if(m[key][r].second == timestamp) return m[key][r].first;
                if(m[key][i].second < timestamp) {
                    if(i == m[key].size() - 1 || r == i + 1 && m[key][r].second > timestamp) return m[key][i].first;
                    else l = i+1;   
                } else {
                    if(i == 0) {
                        if(m[key][0].second > timestamp) return "";
                        else return m[key][0].first;
                    }
                    if(i == 0 || l == i-1 && m[key][l].second < timestamp) return m[key][0].first;
                    else r = i-1;
                }
            }
            
        }
        return "";
    }
};
// ... 