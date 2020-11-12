//COnverting to number will not work as the array can be large
//instead try the other way
//there will be teo cases....
//1-Last digit is not nine----easy
//2-Last digit is nine---Then 

vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size();
    for(int i=n-1;i>=0;i--)
    {
        if(A[i]!=9)
        {
            A[i]=A[i]+1;
            break;
        }
        else if(A[i]==9)
        {if(i==0)
        {
            A[i]=0;
            A.insert(A.begin(), 1);
        }
        else
            A[i]=0;
            
        }
    }
    n=A.size();
    int j=0;
    while(A[j]==0&&j<n)
    {
        j++;
    }
    vector<int>B;
    for(int k=j;k<n;k++)
    {
        B.push_back(A[k]);
    }
    return B;
}
