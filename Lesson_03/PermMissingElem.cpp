int solution(vector<int> &A) {
    int N = A.size();
    // S(N) = 1 + 2 + 3 + ... + N+1
    // St(n) = 0 + 1 + 2 + ... + N-1
    int missingElement = (N+1) + N;
    
    for(int i=0; i<N; i++) {
        missingElement += i-A.at(i);
    }
    return missingElement;
}
