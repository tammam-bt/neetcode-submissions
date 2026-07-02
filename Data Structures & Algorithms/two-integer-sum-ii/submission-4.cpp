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
        int i = 0, j = numbers.size()-1, sum;
        while(i<j) {
            sum = numbers[i] + numbers[j];
            if(sum == target) return {i+1,j+1};
            else {
                if(sum < target) i++;
                else j--;
            }
        }
        return res;
    }
};
