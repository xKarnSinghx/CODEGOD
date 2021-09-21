graph adj;
int n,s;

queue<ll> q;
vector<bool> used(n);
vll d(n), p(n);

q.push(s);
used[s] = true;
p[s] = -1;
while (!q.empty()) {
    ll v = q.front();
    q.pop();
    for (ll u : adj[v]) {
        if (!used[u]) {
            used[u] = true;
            q.push(u);
            d[u] = d[v] + 1;
            p[u] = v;
        }
    }
}
