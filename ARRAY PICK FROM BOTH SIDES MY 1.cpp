int Solution::solve(vector<int> &A, int B) {
    int x = A.size();
    int z = x-1;
    int max = -100000,sum = 0;
    int n = 0, m = B,k,j;
    for(int i = 0; i <= B; i++)
    {
        for(k = 0; k< n; k++)
        {
            sum += A[k];
        }
        
        for(j = z; j>(z-m); j--)
        {
            sum += A[j];
        }
        n++;
        m--;
        
        if(sum > max)
        {
            max = sum;
        }
        sum = 0;
    }
    return max;
}