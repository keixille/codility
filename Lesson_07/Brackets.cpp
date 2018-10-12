int solution(string &S) {
    int N = S.length();
    char stack[200000];
    int nStack = 0;
    
    for(int i=0; i<N; i++) {
		// Insert opening parenthesis to stack
        if(S[i] == '(') {
            stack[nStack] = '(';
            nStack++;
        } else if(S[i] == '{') {
            stack[nStack] = '{';
            nStack++;
        } else if(S[i] == '[') {
            stack[nStack] = '[';
            nStack++;
        }
        
		// If closing parenthesis is not match with latest stack value, return
        if(S[i] == ')' || S[i] == '}' || S[i] == ']') {
            if(S[i] == ')' && stack[nStack-1] != '(') return 0; 
            else if(S[i] == '}' && stack[nStack-1] != '{') return 0;
            else if(S[i] == ']' && stack[nStack-1] != '[') return 0;
            nStack--;
        }
    }
    
    if(nStack == 0) return 1;
    else return 0;
}