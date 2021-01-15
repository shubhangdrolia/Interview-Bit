int Solution::solve(vector<int> &A) {
    int x = A.size();
    int max = -1000000000,min = 1000000000;
    for(int i = 0; i < x; i++)
    {
        if(A[i] > max)
            max = A[i];
    }
    
    for(int i = 0; i < x; i++)
    {
        if(A[i] < min)
            min = A[i];
    }
    
    int sum = max + min;
    return
}
