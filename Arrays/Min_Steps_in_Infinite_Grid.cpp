//It has to move in x and y; So in movement b/w two points the minimum of the two can be covered by moving diagonally while also covering the largest one. SO essentially only the largest among the two determines the least steps required.


int abss(int a,int b)
{
    if(a>b)
    return a-b;
    else return b-a;
}
int min(int a,int b)
{
    if(a<b)
    return b;
    else return a;
}
int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int count=0;
    for(int i=0;i<A.size()-1;i++)
    {
        int x=abss(A[i+1],A[i]);
        int y=abss(B[i+1],B[i]);
        count=count+min(x,y);
        
    }
    return count;
}
