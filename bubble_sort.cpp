#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int n){
    for(int i=0; i<n-1; i++){
        int flag=0;
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
               swap(a[j], a[j+1]);
               flag=1;
            }
        }
        if(flag==0)
          break;
    }
}
int main(){
  int n;
  cout<<"Enter the size of the array:";
  cin>>n;
  int a[n];
  cout<<"Enter the elements of the array:";
  for(int i=0; i<n; i++)
     cin>>a[i];
  bubble_sort(a, n);
  cout<<"The sorted array is:";
  for(int i=0; i<n; i++)
     cout<<a[i]<<" ";
}
