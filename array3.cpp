//Ques.-Program to get maximum and minimum number form the list of array ? 
#include<iostream>
#include<climits>     //this headerfile is using for INT_MiN and INT_MAX !
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>maxNo)     //you can use 'maxNo=max(maxNo,arr[i]);' 
        {
            maxNo = arr[i];
        }
        if (arr[i]<minNo)     //you can use 'minNo=min(minNo,arr[i]);' 
        {
            minNo = arr[i];
        }
        
    }
    cout<<maxNo<<" "<<minNo<<endl;

return 0;  
}