#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int LongestSumIncreasingSubsequence(vector<int> &vec)
    {
        vector<int> lis(vec.size());
        int maxLis = INT_MIN;
        for (int i = 0; i < vec.size(); i++)
        {
            lis[i] = vec[i];
            maxLis = max(maxLis, lis[i]);
        }

        for (int i = 1; i < vec.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (vec[j] < vec[i]) 
                {
                    lis[i] = max(lis[i], lis[j] + vec[i]);
                }
            }
            maxLis = max(maxLis, lis[i]);
        }

        return maxLis;
    }
};

int main()
{
    vector<int> vec = {10, 22, 9, 33, 21, 50, 41, 60};

    return 0;
}