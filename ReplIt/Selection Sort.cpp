#include <iostream>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
int main() {
  int arr[10], temp;
  cout<<"Enter 5 values : "<<endl;
  for(int i=0;i<5;i++){
    cin>>arr[i];
  }
  for(int i=0;i<5;i++){
    cout<<arr[i]<< " ";
  }

  for(int i=0;i<4;i++){
    for(int j = i+1;j<5;j++){
      if(arr[j]<arr[i]){
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }


  for(int i=0;i<5;i++){
    cout<<arr[i]<< " ";
  }
}