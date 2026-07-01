class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high = *max_element(piles.begin(), piles.end());

        while (low<high){
            int mid = low + (high-low)/2;
            long long hrs=0;
            for (int x : piles)
                hrs += (x + mid -1 )/mid;

                if(hrs<=h) 
                    high =mid;
                else low =mid+1;           
        }
        return low;
    }
};