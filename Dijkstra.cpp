#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll=long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int V, E, K;
    vector<vector<int>> weight(20001, vector<int> (20001, -1));
    vector<int> dist(20001, -1);
    vector<bool> visit(20001, false);
    cin>>V>>E;
    cin>>K;
    for(int i=1; i<=E; i++){
        int u, v, w;
        cin>>u>>v>>w;
        weight[u][v]=w;
        weight[v][u]=w;
    }
}