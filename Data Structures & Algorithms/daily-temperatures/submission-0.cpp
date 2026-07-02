class Solution {
public:
    void printStackRecursive(std::stack<int>& s) {
        if (s.empty()) {
            return;
        }

        int topElement = s.top(); // Store the top element
        s.pop();                 // Remove it

        printStackRecursive(s);  // Recurse for the remaining stack

        std::cout << topElement << " "; // Print the element on the way back (bottom to top)
        s.push(topElement);             // Push it back to restore the stack's state
    }
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size());
        stack<pair<int,int>> s;
        for(int j = 0; j < temperatures.size(); j++) {
            int temp = temperatures[j];
            while(!empty(s) && temp > s.top().second) {
                cout << j << s.size() << endl;
                res[s.top().first] = j-s.top().first;
                s.pop();
            }
            s.push(make_pair(j,temp));
        }
        return res;
    }
};
