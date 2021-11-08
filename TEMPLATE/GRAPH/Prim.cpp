struct Edge {
    ll w = MOD, to = -1;
    bool operator<(Edge const& other) const {
        return make_pair(w, to) < make_pair(other.w, other.to);
    }
};
ll n;
vector<vector<Edge>> g;
void prim() {
    ll total_weight = 0;
    vector<Edge> min_e(n);
    min_e[0].w = 0;
    set<Edge> q;
    q.insert({0, 0});
    vector<bool> selected(n, false);
    foi(n) {
        if (q.empty()) {
            cout << "No MST!";
            return;
        }
        ll v = q.begin()->to;
        selected[v] = true;
        total_weight += q.begin()->w;
        q.erase(q.begin());
        if (min_e[v].to != -1)
            cout << v << " " << min_e[v].to << endl;
        for (Edge e : adj[v]) {
            if (!selected[e.to] && e.w < min_e[e.to].w) {
                q.erase({min_e[e.to].w, e.to});
                min_e[e.to] = {e.w, v};
                q.insert({e.w, e.to});
            }
        }
    }
    cout << total_weight << endl;
}
