#include<iostream>
using namespace std;

main(){
    int temp;
    int n;

    cout<<"Enter the number of elements you want to enter for sorting : ";
    cin>>n;
    int num[n];

    cout<<"Enter the numbers for sorting :  " <<endl;

    for (int i = 0;i<n;i++){
            cin>>num[i];

    }

    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(num[j]>num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    cout<<"The sorted array is :";

    for (int i = 0;i<n;i++){
        cout<<" ";
            cout<<num[i];

    }






}
