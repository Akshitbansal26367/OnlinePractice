long long toh(int N, int from, int to, int aux) {
    int count = 0;
    if (N == 1) {
        printf("move disk 1 from rod %d to rod %d\n",from,to);
        return 1;
    }
    
    count = count + toh(N-1,from,aux,to);
    printf("move disk %d from rod %d to rod %d\n",N,from,to);
    ++count;
    count = count + toh(N-1,aux,to,from);
    return count;
}
