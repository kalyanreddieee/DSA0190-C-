#include<iostream>

using namespace std;
int main()
{
  int m[3][3]; 
  float d = 0;
  std::cout<<"Enter elements of the matrix:\n";
  for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++)
           std::cin>>m[i][j];
  for(int i = 0; i < 3; i++)
    d = d + (m[0][i] * (m[1][(i+1)%3] * m[2][(i+2)%3] - m[1][(i+2)%3] * m[2][(i+1)%3]));
  if(d>0)      
  {
      std::cout<<"\nInverse of the matrix is: \n";
      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
          std::cout<<((m[(j+1)%3][(i+1)%3] * m[(j+2)%3][(i+2)%3]) - (m[(j+1)%3][(i+2)%3] * m[(j+2)%3][(i+1)%3]))/ d<<"\t";
        std::cout<<"\n";
     }
  }
  else std::cout<<"Inverse does'nt exist for this matrix";
     return 0;
}
