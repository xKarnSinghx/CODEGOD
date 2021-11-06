foi(n) {
    foj(n) {
        fok(n) {
            if (d[j][i] < INF and d[i][k] < INF)
                d[j][k] = min(d[j][k], d[j][i] + d[i][k]); 
        }
    }
}
