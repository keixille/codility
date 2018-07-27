int solution(int N) {
    int countZeroMax = 0, countZero = 0;
    bool isAnotherOneExist = false;
    
    while(N > 0) {
        if(N % 2 == 1) {
            if(isAnotherOneExist) {
                if(countZeroMax < countZero) {
                    countZeroMax = countZero;
                }
            }
            isAnotherOneExist = true;
            countZero = 0;
        } else {
            countZero++;
        }
        N /= 2;
    }
    return countMax;
}
