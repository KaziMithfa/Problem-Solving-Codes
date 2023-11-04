#include<bits/stdc++.h>
using namespace std;

 binarysearch(int low,int high, int data){
     int A[13] = {5,7,9,12,15,20,24,27,33,40,50,65,72};
     int mid;
     if(low>high){
        cout<<"The item is not found"<<endl;
     }
     else{
             mid = (low + high)/2;
             if(A[mid] == data){
                cout<<"The search item is on "<<mid+1<<" position"<<endl;

             }
             else if(data>A[mid]){
                     binarysearch(mid+1,high,data);

             }
             else{
                binarysearch(low,mid,data);
             }


     }








}

main(){
    int left,right,mid,data;
    left = 0;
    right = 13;

    cout<<"enter the data "<<endl;
    cin>>data;

    binarysearch(left,right,data);








}
