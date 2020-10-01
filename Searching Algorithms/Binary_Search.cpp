#include <bits/stdc++.h>

using namespace std;

void binarySearch(int arr[] , int x , int size)
{
  int left =0;
  int right = size-1;
  int temp = -1;
  int mid;
  while(left<=right)
  {
     mid = (left+right)/2;
    if(arr[mid]==x)
    {
      temp=0;
      cout<<"Found";
      break;
    }
    else if(arr[mid]>x)
    {
      right=mid-1;
    }
    else
    {
      left = mid + 1;
    }
    
  }
  if(temp==-1)
  cout<<"Not found";
}

int main()
{
      int n;
      cin>>n;
      int arr[n];
      for(int i=0 ; i<n; i++)
      {
        cin>>arr[i];
      }
      int f;
      cout<<"Enter the number to be found";
      cin>>f;
      binarySearch(arr,f,n);
      return 0;
}
