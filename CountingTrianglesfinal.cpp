
// LightOJ - 1307

#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

int lowerBound(vector<int>&A,int x){

    int low = 0;
    int high = A.size();



    while(low<high){
             int mid = (low + high) /2;

            if(A[mid]<x){

                low = mid + 1;

    }
     else {
        high = mid;



    }

}
return high;

}



main(){
   int T;
   cin>>T;


   for(int t= 1;t<= T;t++){
          int count = 0;
           int p;
           cin>>p;


        vector<int>sticks;

        for(int i = 0;i<p;i++){
                int z;
                cin>>z;

                sticks.push_back(z);

        }

        sort(sticks.begin(),sticks.end());




        for(int i = 0;i<p;i++){
                for(int j= i+1;j<p;j++){


                        int x = lowerBound(sticks,sticks[i]+sticks[j]);

                           count += x-j-1;


        }



   }

   cout<<"Case "<<t<<": "<<count<<endl;

   }

}

