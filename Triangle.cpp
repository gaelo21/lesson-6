int solution(vector<int> &A) {
    // Implement your solution here
    int N = A.size(), res = 0;
    if(N < 3)
        return res;

    sort(A.begin(), A.end());
    for(int i = 2; i < N; ++i){
        if(A[i - 2] > A[i] - A[i - 1]){
            res = 1;
            break;
        }       
    }

    return res;
}
