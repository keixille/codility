int solution(vector<int> &A) {
    int N = A.size();
    vector<bool> isElementExist(1000001);
    
    for(int i=1; i<=1000000; i++) {
        isElementExist.at(i) = false;
    }
    
    for(int i=0; i<N; i++) {
        if(A.at(i) < 1) continue;
        isElementExist.at(A.at(i)) = true;
    }
    
    for(int i=1; i<=1000000; i++) {
        if(!isElementExist.at(i)) return i;
    }
    
    return 1;
}