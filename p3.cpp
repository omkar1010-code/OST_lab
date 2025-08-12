// omkar ramesh karande
// 241080031

#include<iostream>
using namespace std;


int main(){


  int arr[]= {1,3,5,6};
  int n=4;
  int i=0;
  int j=n-1;
  int temp;
  
  while(i<=j){
  
  temp= arr[i];
  arr[i]= arr[j];
  arr[j]= temp;
  i++;
  j--;
  }
      cout<<" elements of the reversed array are :";
     for(int i=0;i<n;i++){
     
     cout<<arr[i]<<endl;
     
     }
     
     return 0;
     
     
     }
