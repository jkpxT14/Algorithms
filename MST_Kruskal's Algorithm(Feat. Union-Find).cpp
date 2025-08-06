// Baekjoon Online Judge Prob. 1197

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <tuple>
#include <limits>

using namespace std;

using ll=long long;

vector<int> parent(INT_MAX);

int find(int v)
{
    if(v==parent[v]){
        return v;
    }
    return parent[v]=find(parent[v])
}

int union_(int u, int v)
{
    u=find(u);
    v=find(v);
    if(u>v) parent[u]=v;
    else parent[v]=u;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int V, E;
    cin>>V>>E;
    parent.resize(V);
    for(int i=0; i<V; i++){
        parent[i]=i;
    }
    vector<pair<int, pair<int, int>>> edge(E);
    for(int i=0; i<E; i++){
        int A, B, C;
        cin>>A>>B>>C;
        edge[i]=make_pair(C, make_pair(A, B));
    }
    sort(edge.begin(), edge.end());
}