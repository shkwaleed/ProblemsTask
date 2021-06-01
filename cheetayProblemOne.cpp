#include <iostream>
using namespace std;


void triverse(int R, int C,int matrix[][4]){
   int cRow=0;
   int cColoumn=0;
   int vRow=0;
   int vColoumn=0;
   for(int i=0;i<=(R/2);i++){
   for(;cColoumn<C;cColoumn++){
       cout<<matrix[cRow][cColoumn]<<"  ";
   }
   C--;
   vRow++;
   cColoumn--;
   cRow++;
   for(;cRow<R;cRow++){
       cout<<matrix[cRow][cColoumn]<<"  ";
   }
   R--;
   cColoumn--;
   cRow--;
   for(;cColoumn>=vColoumn;cColoumn--){
       cout<<matrix[cRow][cColoumn]<<"  ";
   }
   vColoumn++;
   cColoumn++;
   cRow--;
   for(;cRow>=vRow;cRow--){
       cout<<matrix[cRow][cColoumn]<<"  ";
   }
   cRow++;
   cColoumn--;
   }
}

int main() {
int R = 4;
int C = 4;
int matrix[4][4] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}};
    triverse(R,C,matrix);
return 0;
}