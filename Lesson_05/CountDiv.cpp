int solution(int A, int B, int K) {
    int Bk = B/K;
    int Ak = A > 0 ? ((A-1)/K) : 0; 
    int result = Bk - Ak;
    
    if(A > 0) return result;
    else return result+1;
}