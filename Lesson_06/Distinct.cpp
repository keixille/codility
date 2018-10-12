void merge(vector<int> &arr, int left, int mid, int right) {
    int totalLeft = mid-left+1;
    int totalRight = right-mid;
    vector<int> arrLeft(totalLeft);
    vector<int> arrRight(totalRight);
    
    for(int i=0; i<totalLeft; i++) {
        arrLeft[i] = arr[left+i];
    }
    for(int j=0; j<totalRight; j++) {
        arrRight[j] = arr[mid+j+1];
    }
    
    int nLeft = 0;
    int nRight = 0;
    int count = left;
    while(nLeft < totalLeft && nRight < totalRight) {
        if(arrLeft[nLeft] <= arrRight[nRight]) {
            arr[count++] = arrLeft[nLeft++];
        } else {
            arr[count++] = arrRight[nRight++];
        }
    }
    while(nLeft < totalLeft) {
        arr[count++] = arrLeft[nLeft++];
    }
    while(nRight < totalRight) {
        arr[count++] = arrRight[nRight++];
    }
}

void mergeSort(vector<int> &arr, int left, int right) {
    if(left < right) {
        int mid = (left+right)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int solution(vector<int> &A) {
    int N = A.size();
    int count, curElement;
    
    if(N > 0) {
        mergeSort(A, 0, N-1);
        curElement = A[0];
        count = 1;
		
        for(int i=1; i<N; i++) {
            if(curElement != A[i]) {
                curElement = A[i];
                count++;
            }
        }
		
        return count;
    } else {
        return 0;
    }
}