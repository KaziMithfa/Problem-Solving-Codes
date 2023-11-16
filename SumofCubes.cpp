
//CodeForces - 1490C

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

/* int lowBound(vector<long long int>&A,long long int x){

int low = 0, high = A.size();
while(low<high){
    int mid = (low + high)/2;

    if(A[mid]<x){
        low = mid + 1;
    }
    else{
        high = mid;
    }
}

return high;




} */

bool binarySearch(vector<long long int>&A,long long int x){

    bool b = false;

    int low = 0, high = A.size();

    while(low<high){

        int mid = (low + high)/2;

        if(x>A[mid]){
            low = mid + 1;
        }

        else if(x<A[mid]){
            high = mid;
        }
        else if(x == A[mid]){
            b = true;
            break;
        }

    }

    return b;




}


main(){

    vector<long long int>cubes;

    for(long long int i = 1;i<= 10000;i++){
        long long int z = i * i * i;
        cubes.push_back(z);
    }

    int T;
    cin>>T;

    int size = cubes.size();

    for(int t = 0;t<T;t++){
             int count = 0;


            long long int x;
            cin>>x;

           long long int i = 0;


                 while(x>cubes[i]){
                         long long int a = x - cubes[i];
                if(binarySearch(cubes,a)){
                    cout<<"YES"<<endl;
                    count++;
                    break;
                }
                else{
                    i++;
                }

                 }





            if(count == 0){
                cout<<"NO"<<endl;
            }
    }





}

