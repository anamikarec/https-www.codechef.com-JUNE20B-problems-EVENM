#include<iostream> 
using namespace std; 

void WW( int M ) 
{ 
  int a[M][M], i, j; 

  for ( i = 0; i < M; i++) 
    for ( j = 0; j < M; j++) 
      a[i][j] = (M*i) + j + 1; 
  
  int R=M,C=M;
    bool leftToRight = true; 
    for (int i=0; i<R; i++) 
    { 
        if (leftToRight) 
        { 
            for (int j=0; j<C; j++) 
            {
                printf("%d ", a[i][j]); 
            }
            cout<<"\n";
        } 
        else
        { 
            for (int j=C-1; j>=0; j--) 
            {
                printf("%d ",a[i][j]);
            }
            cout<<"\n";
        } 
  
        leftToRight = !leftToRight; 
    }
}
  

int main() 
{ 
  int test;
  cin>>test;
  while(test--)
  {
      int M;
      cin>>M;
      WW(M);
  }
    return 0; 
}