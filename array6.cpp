/*Ques.- What is shorting in Arrays?
Ans.-Shorting in Arrays is nothing but ordering of the elements in arrays in ascending
or descending.*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n],temp;
       for (int i=0;i<n;i++)
       {
         cin>>arr[i];
       }
       for (int i = 0; i < n-1; i++)
       {
        for (int j =i+1; j<n; j++)
        {
            if (arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            
        }
        
    }
       for (int i = 0; i < n; i++)
       {
        cout<<arr[i]<<" ";
       }
       cout<<endl; 
       return 0; 
}