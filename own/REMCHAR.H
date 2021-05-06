int REMCHAR(int a, char b[255]) {
    int i, j, k;

    for(i = 0; i < a; i++) {
        for(j = i + 1; j < a; ) {
            if(b[j] == b[i]) {
                for(k = j; k < a; k++) {
                    b[k] = b[k + 1];
                }
                a--;
            }
            else {
                j++;
            }
        }
    }

    return k;
}