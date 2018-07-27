vector<int> solution(int N, vector<int> &A) {
    int M = A.size();
    vector<int> counters(N);
    int maxCounter = 0;
    int maxCounterOccured = 0; 
    
    for(int i=0; i<N; i++) {
        counters.at(i) = 0;
    }
    
    for(int i=0; i<M; i++) {
        if(A.at(i) == N+1) {
            maxCounterOccured = maxCounter;
            continue;
        }
        if(counters.at(A.at(i)-1) < maxCounterOccured) counters.at(A.at(i)-1) = maxCounterOccured;
        counters.at(A.at(i)-1)++;
        if(maxCounter < counters.at(A.at(i)-1)) maxCounter = counters.at(A.at(i)-1);
    }
    
    for(int i=0; i<N; i++) {
        if(counters.at(i) < maxCounterOccured) counters.at(i) = maxCounterOccured;
    }
    
    return counters;
}