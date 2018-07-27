vector<int> solution(vector<int> &A, int K) {
    int N = A.size();
    vector<int> rotatedA(N);
    
    for(int i=0; i<N; i++) {
        rotatedA.at((i+K)%N) = A[i];
    }
    return rotatedA;
}
