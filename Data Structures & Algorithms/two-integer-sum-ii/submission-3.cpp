class Solution {
public:
    int binary_search(vector<int>& numbers, int start, int finish, int target) {
        int i = (start+finish)/2;
        cout << start << " " << finish << " " << i << endl;
        cout << numbers[start] << " " << numbers[finish] << " " << numbers[i] << endl;
        if(numbers[i] == target) return i;
        else {
            if(start == finish) return -1;
            if(numbers[i]<target) return binary_search(numbers, i+1, finish, target);
            else return binary_search(numbers, start, i-1, target);
        }
    }

    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res(2);
        int minus,j;
        for(int i = 0; i < numbers.size(); i++) {
            minus = target - numbers[i];
            cout << "This is the search for i = " << i << " " << minus << endl;
            j = binary_search(numbers, i, numbers.size()-1, minus);
            if(j != -1 && j != i) {
                return {i+1,j+1};
            }
        }
        return res;
    }
};
