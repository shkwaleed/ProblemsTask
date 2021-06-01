#include <iostream>
using namespace std;


void candyStore(int N, int K,int candies[]){
    int temp=0;
    for(int i=0;i<N;i++){   // Sort array
        for(int j=i+1;j<N;j++){
            if(candies[i]>candies[j]){
                temp=candies[i];
                candies[i]=candies[j];
                candies[j]=temp;
            }
        }
    }
    int minimum=0;
   for(int i=0;i<(N-K);i++){
       minimum=minimum+candies[i];
   }
    int maximum=0;
   for(int i=K;i<N;i++){
       maximum=maximum+candies[i];
   }
   cout<<minimum<<" "<<maximum;
}

int main() {
    
  int  N = 4;
  int  K = 2;
  int candies[] = {3, 2 ,1, 4};
  candyStore(N,K,candies);
return 0;
}