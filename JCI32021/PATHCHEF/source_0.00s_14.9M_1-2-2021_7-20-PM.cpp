#include <bits/stdc++.h>
using namespace std;

list<int> *adj;

pair<int, int> f(int v, int src)
{
    int dist[v];
    memset(dist, -1, sizeof(dist));
    queue<int> q;
    dist[src] = 0;
    q.push(src);
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for (int d : adj[s])
        {
            if (dist[d] == -1)
            {
                dist[d] = dist[s] + 1;
                q.push(d);
            }
        }
    }
    int len = 0, d = -1;
    for (int i = 0; i < v; i++)
    {
        if (dist[i] > len)
        {
            len = dist[i];
            d = i;
        }
    }
    return {d, len};
}

int main()
{
    // your code goes here
    int v, k;
    cin >> v >> k;
    adj = new list<int>[v];
    for (int i = 0; i < v - 1; i++)
    {
        int s, d;
        cin >> s >> d;
        s--;
        d--;
        adj[s].push_back(d);
        adj[d].push_back(s);
    }
    int one = f(v, 0).first;
    // 	adj=new list<int>[v];
    int len = f(v, one).second;
    cout << (k > len ? 0 : len - k);
    return 0;
}
