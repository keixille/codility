int solution(vector<int> &A) {
    int unpaired = 0;
    int N = A.size();
    
    for(int i=0; i<N; i++) {
        unpaired ^= A.at(i);
    }
    return unpaired;
}
