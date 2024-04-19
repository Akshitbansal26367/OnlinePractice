vector<int> reverseArray(vector<int> a) {
    vector<int> answer;
    
    for (int i = 0; i<a.size()/2; i++) {
        int temp = a[i];
        a[i] = a[a.size() - i - 1];
        a[a.size() - i - 1] = temp;
    }
    
    for(int i = 0; i<a.size(); i++) 
        answer.push_back(a[i]);
    return answer;
}
