void swap(int *x, int *y) {
    int temp;
    
    temp = *x;
    *x = *y;
    *y = temp;
}

int solution(vector<int> &A) {
    int N = A.size();
    int min[2] = {1001, 1002};
    int max[3] = {-1001, -1002, -1003};
    
    for(int i=0; i<N; i++) {
        if(max[2] < A[i]) max[2] = A[i];
        if(max[1] < max[2]) swap(max[2], max[1]);
        if(max[0] < max[1]) swap(max[1], max[0]);
        
        if(min[1] > A[i]) min[1] = A[i];
        if(min[0] > min[1]) swap(min[1], min[0]);
    }

    int negativeProduct = min[0]*min[1]*max[0];
    int positiveProduct = max[0]*max[1]*max[2];
    
    if(positiveProduct > negativeProduct) return positiveProduct;
    else return negativeProduct;
}