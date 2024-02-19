int isSorted(int n, vector<int> a) {
    int flag = 1;
    for (int i = 0; i<n - 1; i++) {
        if(a[i] > a[i + 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        return 1;
    
    else
        return 0;
}
