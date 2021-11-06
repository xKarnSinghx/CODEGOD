vector<vector<pll>> g;
void dijkstra(ll s, vll & d, vll & p) {
    ll n = g.size();
    d.assign(n, INF);
    p.assign(n, -1);
    vll u(n, f0);
    d[s] = 0;
    foill v = -1;
        foj(n) {
            if (!u[j] and (v == -1 or d[j] < d[v]))
                v = j;
        }
        if (d[v] == INF)
            break;
        u[v] = 1;
        for (auto edge : g[v]) {
            ll to = edge.first,len = edge.second;
            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
            }
        }
    }
}
