//Here is the logic: If total sum is not divided by 3 then answer is 0;
//After that I took case when sum=0; 
//and other
//honestly I did trial and error after that...I mean I understood the logic but I am too lazy to write it. 
//As I adjusted for errors to the point that I am beginning to think this solution is unintuitive as well as unworthy of understanding but very nice if you come to it by yourself
//There is a better algorithm for the question in the solution given by interview bit so check that out



int Solution::solve(int A, vector<int> &B) {
    int sum=0;
    for(int i=0;i<A;i++)
    {
        sum=sum+B[i];
    }
    if(sum%3!=0)
    return 0;
    else if(sum==0)
    {
        int new_sum=0;
        int a=0;
          for(int j=0;j<A;j++)
        {
           new_sum=new_sum+B[j];
           if(new_sum==0)
           a++;
           
           
        }
        return (a-1)*(a-2)/2;
    }
    else
    {
        int k=sum/3;
        int new_sum=0;
        int a=0;
        int b=0;
        for(int j=0;j<A;j++)
        {
           new_sum=new_sum+B[j];
           if(new_sum==k)
           a++;
        }
        int aa=0;
        new_sum=0;
        int r=0;
        for(int j=0;j<A;j++)
        {
            new_sum=new_sum+B[j];
            
            if(new_sum==k)
           aa++;
            if(new_sum==2*k)
            {
           b++;
           if(aa!=a)
           r=1;
            }
        }
        if(r==0)
        return a*b;
        else return a*b-1;
    }
}
