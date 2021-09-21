graph adj; 
ll n;
vector<bool> visited;
void dfs(ll v) {
    visited[v] = true;
    for (ll u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
}
