const ll N = 200010;
ull f[N];
foi(N) {
		if (i == 0) {
			f[i] = 1;
			continue;
		}
		f[i] = (f[i - 1] * i) % modx;
	}
