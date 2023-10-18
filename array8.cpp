// Ques.- Given an array a[] of size n. For ever i from 0 to n-1 output max(a[0],a[1],...a[i]).
/*In this question we use max till i concept that means you print maximum element which is
   greater than all previous elements and so on the pattern will perform.*/
#include <iostream>
using namespace std;

int main()
{

  int mx = -1999999;
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    mx = max(mx, arr[i]);
    cout << mx << endl;
  }
  return 0;
}