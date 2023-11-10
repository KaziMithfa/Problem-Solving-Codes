
//LightOJ - 1088
#include<iostream>
#include<vector>
using namespace std;


int upperBound(vector<int>&A,int x){

    int low = 0;
    int high = A.size();



    while(low<high){
            int mid = (low + high) /2;
             if(A[mid]<=x){
            low = mid + 1;
    }

    else {
        high = mid;
    }

    }

    return high;


}

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

   for(int i = 1;i<=T;i++){
        cout<<"Case "<<i<<":"<<endl;
    int p,q;
    int y,z;
    cin>>p>>q;
    vector<int>number;
    int x;


    for(int j = 0;j<p;j++){
        cin>>x;
            number.push_back(x);

    }

    for(int k = 1;k<=q;k++){
            cin>>y>>z;
            int res = upperBound(number,z) - lowerBound(number,y);

            cout<<res<<endl;


    }


   }








}

