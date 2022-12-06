/// LCS with tabulation

/// ei code er joto jagay minus(-) ase sob jagay plus(+) sign dilei LCS er memoization er code hoye jabe

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    getline(cin,s);
    getline(cin,t);

    int m = s.size();
    int n = t.size();

    int lcs[m][n];

    /// LCS code
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0 || j==0)
                lcs[i][j] = 0;

            else if(s[i]==t[j])
                lcs[i][j] = 1 + lcs[i-1][j-1];

            else
                lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);

        }

    }

    cout<<lca[m][n]<<" ";

}
