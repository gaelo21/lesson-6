int solution(vector<int> &A) {
    // Implement your solution here
    vector<int> min_neg(2, 0);
    vector<int> max_num(3, -10000);
    int N = A.size();
    // alimentation 
    for(int i = 0; i < N; ++i){
        if(A[i] < min_neg[0]){
            min_neg[1] = min_neg[0];
            min_neg[0] = A[i];
        }
        else if(A[i] < min_neg[1])
            min_neg[1] = A[i];

        if(A[i] > max_num[0]){
            max_num[2] = max_num[1];
            max_num[1] = max_num[0];
            max_num[0] = A[i];
        }
        else if(A[i] > max_num[1]){
            max_num[2] = max_num[1];
            max_num[1] = A[i];
        }
        else if(A[i] > max_num[2]){
            max_num[2] = A[i];
        }
    }

    // Calcul
    int product1 = max_num[0] * min_neg[0] * min_neg[1];
    int product2 = max_num[0] * max_num[1] * max_num[2];

    return max(product2, product1);
}
