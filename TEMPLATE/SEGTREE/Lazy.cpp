const ll N = 600001;
ll  n, m;
struct sgt {
	ll mn, delta;
} tr[4 * N];

struct poi {
	ll l, r, w;
} p[N];

void addone(ll x, ll delta) {
	tr[x].mn += delta;
	tr[x].delta += delta;
}

void up(ll x) {
	tr[x].mn = min(tr[x << 1].mn, tr[x << 1 | 1].mn);
}

void down(ll x) {
	if (tr[x].delta)
		addone(x << 1, tr[x].delta), addone(x << 1 | 1, tr[x].delta);
	tr[x].delta = 0;
}


//update
void update(ll x, ll l, ll r, ll cl, ll cr, ll delta) {
	if (cl <= l and r <= cr)
		return addone(x, delta);

	down(x);
	ll mid = (l + r) / 2;
	if (cl <= mid)
		update(x << 1, l, mid, cl, cr, delta);
	if (cr > mid)
		update(x << 1 | 1, mid + 1, r, cl, cr, delta);
	up(x);
}


//add
void add(ll x, ll delta) {
	update(1, 1, m - 1, p[x].l, p[x].r - 1, delta);
}

//comparator function 
bool comp1(poi a, poi b) {
	return a.w < b.w;
}
