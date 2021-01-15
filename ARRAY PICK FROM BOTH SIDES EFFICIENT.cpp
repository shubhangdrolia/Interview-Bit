int Solution::solve(vector<int> &A, int B) {
    int x = A.size();
    int sum = 0;
    int res;
    for(int i = 0;i < B; i++)
    {
        sum += A[i];
    }
    res = sum;
    if(B == x)
        return res;
        
    for(int i = 1;i <= B ; i++)
    {
        sum = sum - A[B-i] + A[x-i];
        res = max(res,sum);
    }
    return res;
}