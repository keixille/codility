int absoluteDifference(int x, int y) {
    if(x > y) return x-y;
    else return y-x;
}

int solution(vector<int> &A) {
    int N = A.size();
    vector<int> halfLeft(N);
    int minDifference = 100000000; // 100*100,000
    int difference = 0;
    
    halfLeft.at(0) = A.at(0);
    for(int i=1; i<N; i++) {
        halfLeft.at(i) = halfLeft.at(i-1) + A.at(i); 
    }
    
    for(int i=0; i<N-1; i++) {
        difference = absoluteDifference(halfLeft.at(i), halfLeft.at(N-1) - halfLeft.at(i));
        if(difference < minDifference) {
            minDifference = difference;
        }
    }
    return minDifference;
}
