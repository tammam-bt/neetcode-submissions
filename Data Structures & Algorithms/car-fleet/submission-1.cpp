class Solution {
public:

    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int res = 1;
        float time;
        vector<pair<int,int>> v(position.size());
        stack<float> s;
        for(int i = 0; i < position.size(); i++) {
            v[i] = {position[i],speed[i]};
        }
        sort(v.begin(),v.end(),[](pair<int,int> a, pair<int,int> b) {
            return a.first>b.first;
        });
        for(int i = 0; i < v.size(); i++) {
            time = float((target - v[i].first)) / v[i].second;
            cout << time << endl;
            if(empty(s)) s.push(time);
            else {
                if(time > s.top()) s.push(time);
            }
        }
        res = s.size();
        // for(int i = 0; i < position.size(); i++) {
        //     cout << v[i].first << " " << v[i].second << endl;
        // }
        return res;
    }
};
