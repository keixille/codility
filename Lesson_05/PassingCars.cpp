int solution(vector<int> &A) {
    int N = A.size();
    int nWest = 0, totalPairs = 0;
    
    for(int i=0; i<N; i++) {
        nWest += A.at(i);
    }
    
    for(int i=0; i<N; i++) {
        if(totalPairs > 1000000000) return -1;
        if(A.at(i) == 0) totalPairs += nWest;
        else nWest--;
    }
    
    return totalPairs;
}