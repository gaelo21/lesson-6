int solution(vector<int> &A) {
    // Implement your solution here
    sort(A.begin(), A.end());
    vector<int>::iterator it = unique(A.begin(), A.end());
    A.resize(distance(A.begin(), it));

    return A.size();
}
