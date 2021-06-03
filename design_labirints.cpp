#include <bits/stdc++.h>
using namespace std;

int graph[49][49];
bool discovered[49];
int count = 0;

int dfs(int vertex, int v)
{
    int i, count = 0;

    discovered[vertex] = true;

    for (i = 0; i < v; i++) {
        if (graph[vertex][i] && !discovered[i])
        {
            count += dfs(i, v) + 1;
        }
    }
    return count;
}

int main() {
    int t, n, v, a, i, j, from, to;

    cin>>t;

    while (t--)
    {
        cin>>n>>v>>a;

        for (i = 0; i < v; i++)
        {
            for (j = 0; j < v; j++)
            {
                graph[i][j] = 0;
            }
            discovered[i] = false;
        }

        while (a--)
        {
            cin>>from>>to;

            graph[from][to] = 1;
            graph[to][from] = 1;
        }
        cout<<dfs(n,v)*2<<endl;
    }
    return 0;
}
