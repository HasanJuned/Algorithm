#include<bits/stdc++.h>
using namespace std;

void minDistance(string word1, string word2)
{
    int n = word1.size();
    int m = word2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    for(int i=0; i<n+1; i++)
    {
        dp[i][0]=i;
    }
    for(int j=1; j<m+1; j++)
    {
        dp[0][j]=j;
    }

    for(int i=1; i<n+1; i++)
    {
        for(int j=1; j<m+1; j++)
        {
            if(word1[i-1]==word2[j-1])
                dp[i][j] = dp[i-1][j-1]; // soman hole diagonal ta vose jave
            else
            {
                int insert = 1 + dp[i][j-1];
                int deleted = 1 + dp[i-1][j];
                int replace = 1 + dp[i-1][j-1];
                dp[i][j] = min(min(insert,deleted),replace);  // eikane minimum ta ber hobe insert delete or replce jekuno ekta
            }
        }
    }
    cout<< dp[n][m]<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string w1,w2;
        cin>>w1>>w2;

        minDistance(w1,w2);
        //cout<<cnt<<endl; //Dist
    }


}

