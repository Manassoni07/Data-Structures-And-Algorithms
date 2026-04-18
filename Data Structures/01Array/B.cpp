#include<iostream>
#include<array>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int key = arr[0];
   for (int i = 0; i < 5; i++)
   {
    if (key>arr[i])
    {
        key=arr[i];
    }
    
   }
   
    cout<<key<<endl;

    return 0;
}