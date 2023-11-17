
//LightOJ - 1048
//#include<iostream>
//#include<vector>

#include <bits/stdc++.h>
using namespace std;

int f(vector<int>&numbers,int x){

    int days = 1, distance = 0;

    for(int i = 0;i<numbers.size();i++){

            if(distance+numbers[i]<=x){
                distance+= numbers[i];
            }

            else if(numbers[i]>x){
                return INT_MAX;
            }

            else if(distance+numbers[i]>x){
                distance = numbers[i];
                days++;
            }

    }

    return days;





}







main(){

int T,t;
cin>>t;

for(T = 1;T<=t;T++){

    int camp,night;
    int current;

    cin>>camp>>night;
    night++;
    camp++;

    vector<int>numbers(camp);

    for(int i = 0;i<camp;i++){
        scanf("%d",&numbers[i]);
    }

    int low = 1,high = 10000000;

    int mid;

    while(low<high){


        mid = (low + high)/2;

       current =  f(numbers,mid);

       if(current<= night){
        high = mid;
       }

       else{
        low = mid + 1;
       }


    }

    cout<<"Case "<<T<<": "<<high<<endl;


    int days = 1,distance = 0;

    for(int i = 0;i<camp;i++){
         if(distance+numbers[i]<=high  && night-days <= camp -i -1){
                distance+= numbers[i];
            }

            else{
                cout<<distance<<endl;
                distance = numbers[i];
                days++;
            }
    }

    cout<<distance<<endl;

}





}

