

//UVA - 10611
//Binary Search Related Problem


#include <iostream>
#include<vector>
using namespace std;

int lowBound(vector<int>&A,int y){

    int low = 0, high = A.size();
    int mid ;
   while(low<high){

        mid = (low+high)/2;


   if(y<=A[mid]){
    high = mid;

   }

   else if(y>A[mid]){
    low = mid+1;
   }


   }

   return high;
}

int upperBound(vector<int>&A,int y){

    int low = 0, high = A.size();
    int mid ;
   while(low<high){

        mid = (low+high)/2;


   if(y<A[mid]){
    high = mid;

   }

   else if(y>=A[mid]){
    low = mid+1;
   }


   }

   return high;
}

main(){


    int n;
    cin>>n;
    int x;
    vector<int>numbers;

    for(int i = 0; i<n;i++){
            cin>>x;
        numbers.push_back(x);
    }

    int t;
    cin>>t;

    for (int i = 0;i<t;i++){
        int a;
        cin>>a;


        int l = lowBound(numbers, a)-1;
        int h = upperBound(numbers,a);

        if(l>=0){
            cout<<numbers[l]<<" ";
        }
        else{
            cout<<"X"<<" ";
        }

        if(h<n){
            cout<<numbers[h]<<endl;
        }
        else{
             cout<<"X"<<endl;
        }
    }

/*
    int i,j,n,q,k;
    int x = 0;
     int y = 0;
   vector<int>numbers;
   vector<int>h;
   cin>>n;

   for( i = 0;i<n;i++){

    cin>>x;
    numbers.push_back(x);

   }

   cin>>q;

   for(j = 0;j<q;j++){

    cin>>y;
   int l = lowBound(numbers,y);
   int m = upperBound(numbers,y);

   cout<<endl;


   if(l == -1){
    cout<<"X";
   }
   else{
    cout<<l;
   }

   if(m == -1){
    cout<<" "<<"X";
   }
   else{
        cout<<" "<<m;

   }





   }

   */









   }



