ll power(ll n, ll x,ll m) {
	ll ans = 1;
	foi(n) {
		ans *= x;
		ans %= m;
	}
	return ans;
}
