pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int floor_ans = -1, ceil_ans = -1;
	int low = 0, high = n - 1;
	while (low <= high) {
		int mid = low + (high - low) / 2;

		if(a[mid] == x){
			floor_ans = ceil_ans = a[mid];
			break;
		}

		else if (a[mid] < x) {
			floor_ans = a[mid];
			low = mid + 1;
		}

		else {
			ceil_ans = a[mid];
			high = mid - 1;
		}
	}
	return {floor_ans, ceil_ans};
}
