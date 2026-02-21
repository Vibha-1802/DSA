class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ones;
        vector <int> prime={2,3,5,7,11,13,17,19};
        int counter=0;
        for(int i=left;i<=right;i++)
        {
            ones=__builtin_popcount(i);
            if(count(prime.begin(),prime.end(),ones)) counter++;
        }
        return counter;
    }
};