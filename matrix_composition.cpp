/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int n,i,j,min,max,jmin,imax,res=0;
    cout<<"Размерность матрицы=";
    cin>>n;
    srand(unsigned(time(0)));
    int **arr=new int *[n];
    for(i=0; i<n; i++)
    {
        arr[i]=new int[n];
        for(j=0; j<n; j++)
        {
            arr[i][j]=rand()%51;
            cout<<arr[i][j]<<'\t';
        }
    cout<<endl;
    }
    cout<<endl;
    min=max=arr[0][0];
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            if(arr[i][j]<=min)
            {
                min=arr[i][j];
                jmin=j;
            }
        }
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            if(arr[i][j]>=max) 
            {   
                max=arr[i][j];
                imax=i;
            }
        }
        for(i=0,j=0; i<n,j<n; i++,j++)
        {
            
            int(n) = arr[jmin][i]*arr[j][imax];
    
            res += n;
            
        }
    cout<<"Скалярное произведение="<<res<<endl;
 
    cout<<"минимальный член="<<min<<endl;
    cout<<"максимальный член="<<max<<endl;
 
   
 
    
    return 0;
}


