int sLargest (vector <int> &a, int n) {
    int largest = a[0];
    int secondLargest = -1;

    for (int i = 1; i<n; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];   
        }

        else if (a[i] < largest && a[i] > secondLargest)
            secondLargest = a[i];
    }

    return secondLargest;
}

int sSmallest (vector <int> &a, int n) {
    int min = a[0];
    int secondmin = INT_MAX;

    for (int i = 1; i<n; i++) {
        if (a[i] < min) {
            secondmin = min;
            min = a[i];
        }

        else if (a[i] > min && a[i] < secondmin)
            secondmin = a[i];
    }

    return secondmin;
}



vector<int> getSecondOrderElements(int n, vector<int> a) {
    int secondLargest = sLargest(a,n);
    int secondSmallest = sSmallest(a,n);
    return {secondLargest,secondSmallest};
}
