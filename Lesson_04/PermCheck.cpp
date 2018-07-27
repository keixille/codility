int solution(vector<int> &A) {
    int N = A.size();
    vector<bool> isElementExist(N+1);
    bool isValid = false;
    int count = 0;
    
    for(int i=0; i<N+1; i++) {
        isElementExist.at(i) = false;
    }
    
    for(int i=0; i<N; i++) {
        if(A.at(i) > N || isElementExist.at(A.at(i))) break;
        isElementExist.at(A.at(i)) = true;
        count++;
    }
    if(count == N) isValid = true;
    
    if(isValid) return 1;
    else return 0;
}
