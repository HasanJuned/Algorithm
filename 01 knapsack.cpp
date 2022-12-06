#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>>m>>n;

    int profit[n];
    int weight[n];

    for(int i=0; i<n; i++)
    {
        cin>>profit[i];
        cin>>weight[i];
    }

    int v[n+1][m+1];

    for(int i=0; i<n+1; i++)
	{
		v[i][0] = 0;
	}

	for(int j=0; j<m+1; j++)
	{
		v[0][j] = 0;
	}

    for(int i=1;i<n+1; i++)
    {
        for(int w=1; w<m+1; w++) // w==j
        {
//            if(i==0 || w==0)
//            {
//                v[i][w] = 0;
//            }

			if(weight[i-1] > w)
            {
                v[i][w] = v[i-1][w];
            }

            else
            {
                v[i][w] = max(v[i-1][w], v[i-1][w-weight[i-1]] + profit[i-1]); // main line
            }
        }
    }

    cout<<v[n][m]<<endl;


}
