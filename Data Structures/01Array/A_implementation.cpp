#include<iostream>

using namespace std;

int main(){

    // array decleration 
    /*
        data_type array_name[size];
        int arr[20];
    */
   // array initialization
   /*
        int arr[] = {1,2,3,3,4,4,5,52,2,2};
        or int arr[5] = {1,2,3,4,5};
   */
    cout <<"First way for loop"<<endl;


   int arr[5] = {1,2,3,4,5};
    // traversing
    for(int i = 0; i < 5; i++){
        cout << arr[i] <<" ";
    }
    cout<<endl;

    cout <<"Other way while loop"<<endl;

    int x = 0;
    while (x < 5)
    {
        cout<<arr[x]<<" ";
        x++;
    }
    cout<<endl;


    cout <<"Other way for each loop"<<endl;

    for(int num : arr){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}