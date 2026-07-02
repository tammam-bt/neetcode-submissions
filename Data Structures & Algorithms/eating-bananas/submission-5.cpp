class Solution {
public:
    int hours_taken(vector<int>& piles, int k) {
        int sum = 0;
        for(int i = 0; i < piles.size(); i++) {
            sum += (piles[i] / k) + ((piles[i]%k!=0)? 1:0);
        }
        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long max = 0,hours = 0,min = 0;
        for(int i = 0; i < piles.size(); i++) {
            if(max < piles[i]) max = piles[i];
        }
        if(piles.size() == h) return max;
        long long bmin = 1, bmax = max;
        long long h1,h2;
        while(bmin <= bmax) {
            min = (bmin+bmax)/2;
            h1 = hours_taken(piles,min);
            
            // cout << "k = " << min << endl;
            // cout << "Hours taken by k: " << h1 << endl;
            // cout << "Hours taken by k-1: " << h2 << endl;
            if(h1 > h) bmin = min+1;
            else {
                if(min == 1) break; 
                h2 = hours_taken(piles,min-1);
                if(h2 <= h) bmax = min-1;
                else break;
            }
        }

        // for(int k = max; k > 0; k--) {
        //     hours = hours_taken(piles,k);
        //     cout << k << " " << hours << endl;
        //     if(hours <= h) min = k;
        //     else break;
        // }
        return static_cast<int>(min);
    }
};
