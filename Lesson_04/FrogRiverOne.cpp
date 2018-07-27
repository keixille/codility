int solution(int X, vector<int> &A) {
    int N = A.size();
    vector<int> position(X+1);
    int earliestTime = 0;
    
    for(int i=1; i<=X; i++) {
        position.at(i) = -1;
    }
    
    for(int i=0; i<N; i++) {
        if(position.at(A.at(i)) != -1) continue;
        position.at(A.at(i)) = i;
    }
    for(int i=1; i<=X; i++) {
        if(position.at(i) == -1) return -1;
        if(earliestTime < position.at(i)) earliestTime = position.at(i);
    }
    
    return earliestTime;
}
