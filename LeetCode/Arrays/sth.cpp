#include <iostream>  

using namespace std; 

int main (){ 

    cout<<"enter the elements of 1st matrix "<<endl; 

    int m[3][3]; 

    for (int i=1;i<=3;i++){ 

        for (int j=1;j<=3;j++){ 

            cout<<"enter "<<i<<j<<" element "<<" "; 

            cin>>m[i][j]; 

        } 

    } 

    cout<<"1st matrix is : "<<endl; 

        for (int i=1;i<=3;i++){ 

        for (int j=1;j<=3;j++){ 

            cout<<m[i][j]<<" "; 

        } 

        cout<<endl; 

    } 

     

    cout<<"enter the elements of 2nd matrix "<<endl; 

    int n[3][3]; 

        for (int i=1;i<=3;i++){ 

        for (int j=1;j<=3;j++){ 

            cout<<"enter "<<i<<j<<" element "<<" "; 

            cin>>n[i][j]; 

        } 

    } 

    cout<<"2nd matrix is : "<<endl; 

        for (int i=1;i<=3;i++){ 

        for (int j=1;j<=3;j++){ 

            cout<<n[i][j]<<" "; 

        } 

        cout<<endl; 

    } 

        cout<<"sum = "<<endl; 

    int p[3][3]; 

        for (int i=1;i<=3;i++){
		 

        for (int j=1;j<=3;j++)
		{ 

          ; 

            cout<< m[i][j] + n[i][j]<<" "; 

        } 

        cout<<endl; 
		} 

  

  

return 0; 

} 
