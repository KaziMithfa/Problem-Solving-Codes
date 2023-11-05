#include <bits/stdc++.h>
#include<vector>

using namespace std;

int lowerBound(vector<int>&A,int x){

int low = 0,high = A.size();

while(low<high){
    int mid = (low+high)/2;

    if(x<=A[mid]){

       high = mid;

       }

    else if(x>A[mid]){
        low = mid + 1;
    }


}

return high;


}


int upperBound(vector<int>&A,int x){

int low = 0,high = A.size();

while(low<high){
    int mid = (low+high)/2;

    if(x<A[mid]){

       high = mid;

       }

    else if(x>=A[mid]){
        low = mid + 1;
    }


}

return high;


}

main(){

    vector<int>A = {10,20,30,30,30,40,50,60,70,70,70,80,90};

    int x = 45;
    int a = 60;
    int y = lowerBound(A,x);
    int z = upperBound(A,a);

   cout<<y<<endl;
   cout<<z<<endl;


}

