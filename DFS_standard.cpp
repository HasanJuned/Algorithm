#include<bits/stdc++.h>
using namespace std;

int graph[1000][1000];
int vis[1000];
int n,e;

void dfs(int s)
{
    vis[s]=1; //current node
    cout<<s<<" ";

    for(int i=1; i<=n; i++)
    {
        if(vis[i]==0 && graph[s][i]==1)
        {
            dfs(i);
            vis[i]=1;
        }
    }
}

int main()
{
    cin>>n>>e;
    for(int i=1; i<=e; i++)
    {
        int u,v;
        cin>>u>>v;

        graph[u][v]=1;
        graph[v][u]=1;
    }

    for(int i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
        }
    }
}














/*#include<bits/stdc++.h>
using namespace std;
const int N=10e5+10;

vector<int>g[N];
bool vis[N];

void dfs(int source)
{
    cout<<source<<" ";

    vis[source] = true;

    for(int child:g[source])
    {
        if(vis[child])
            continue;

        dfs(child);
    }
}

int main()
{
    int n,m; /// number of nodes and edges
    cin>>n>>m;

    for(int i=0; i<n-1; ++i)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(0);

}
*/
