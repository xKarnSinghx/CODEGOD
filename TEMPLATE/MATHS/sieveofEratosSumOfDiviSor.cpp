ll divs[10000001] = {};
ll ans[10000001] = {};
void sieveofEratosSumOfDiviSor() {
	for (ll i = 1; i <= 10000000; i++) {
		for (ll j = i; j <= 10000000; j += i) {
			divs[j] += i;
		}
	}
	for (ll i = 1; i < 10000001; i++) {
		if (divs[i] <= 10000000 and ans[divs[i]] == 0)
			ans[divs[i]] = i;
	}
}
