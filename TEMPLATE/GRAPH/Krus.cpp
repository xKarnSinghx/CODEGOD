struct Edge {
    ll u, v, weight;
    bool operator<(Edge const& other) {
        return weight < other.weight;
    }
};
ll n,cost = 0;
vector<Edge> edges;
vll tree_id(n);
vector<Edge> result;
foi(n)
    tree_id[i] = i;

sort(all(edges));
for (Edge e : edges) {
    if (tree_id[e.u] != tree_id[e.v]) {
        cost += e.weight;
        result.push_back(e);
        ll old_id = tree_id[e.u], new_id = tree_id[e.v];
        foi(n) {
            if (tree_id[i] == old_id)
                tree_id[i] = new_id;
        }
    }
}
