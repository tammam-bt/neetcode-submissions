class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0, r = nums.size()-1, i, min,nl,ni,nr;
        while(l<=r) {
            i = (l+r)/2;
            nl = nums[l]; ni = nums[i]; nr = nums[r];
            cout << l << " " << i << " " << r << " " << nl << " " << ni << " " << nr << " " << endl;
            if(i > 0 && ni < nums[i-1]) return nums[i];
            if(i < nums.size() - 1 && ni > nums[i+1]) return nums[i+1];
            if(nl > ni) r = i;
            else {
                if(ni > nr) l = i;
                else return nums[0];
            }
        }
    }
};
