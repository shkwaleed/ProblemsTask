#include <iostream>
#include<string>  
using namespace std;


void printLargest(int arr[], int N){
   int temp=0;
   char tmp2=' ';
   int *tmparr=new int [N];
   string *arr2=new string [N];
   int max=0;
   for(int i=0;i<N;i++){            // Create string array from Int array
       arr2[i]=to_string(arr[i]);
        if(arr2[i].length()>max){
           max=arr2[i].length()-1;
       }
   }
   
   for(int i=0;i<N;i++){            // make all elements of string array to have same size
       tmp2=arr2[i].at(arr2[i].length()-1);
       for(int j=(arr2[i].length()-1);j<max;j++){
           arr2[i]=arr2[i]+tmp2;
       }
       tmparr[i]=stoi(arr2[i]);
   }
   
   
   for(int i=0;i<N;i++){         // Sort original array based on new string array
       for(int j=i+1;j<N;j++){
           if(tmparr[i]<tmparr[j]){
               tmp2=tmparr[i];
               tmparr[i]=tmparr[j];
               tmparr[j]=tmp2;
               
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
          cout<<arr[i];
   }
   
}

int main() {
int N = 4;//5

int Arr[] = {54, 546, 548, 60};//{3, 30, 34, 5, 9};

    printLargest(Arr,N);
return 0;
}