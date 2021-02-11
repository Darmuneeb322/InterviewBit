#include<iostream> 

#include<cmath> 

using namespace std; 

float average(float arr[],int size); 

float stdev1(float arr[],float ave,int size); 

int main(){ 

    float array[]={23.5,25.78,24.1,22.32,27.3,24.56,21.22,26.93}; 

    float avg=average(array,8); 

    cout<<avg<<endl; 

    float standd=stdev1(array,avg,8); 

    cout<<standd<<endl; 

    return 0; 

} 

float average(float arr[],int size){ 

    int number=0; 

    for(int i=0;i<size;i++){ 

        number=number+arr[i]; 

    } 

    int result=number/size;  

    return result; 

} 

float stdev1(float arr[],float ave,int size){ 

    float sum1=0; 

    float array2[size]; 

    for(int i=0;i<size;i++){ 

    array2[i]=(arr[i]-ave)*(arr[i]-ave); 

} 

    for(int j=0;j<size;j++){ 

     sum1=array2[j]+sum1; 

} 
float result1=sqrt(sum1/size); 

return result1; 

} 

  

 
