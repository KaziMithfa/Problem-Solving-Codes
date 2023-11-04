#include<iostream>
#include<vector>

using namespace std;


bool isPrime(int number){

    if(number<2){
        return true;
    }

    else{


            for(int i = 2;i<number;i++){

                if(number % i == 0){
                    return false;
                }

                else{
                    return true;
                }


            }

    }



}



main(){

    vector<int>primes;
    for(int i = 2;i<=100;i++){

            if(isPrime(i)){
                primes.push_back(i);
            }


    }

    int T;
    cin>>T;

    for(int t = 1;t<=T;t++){


        int num;
        cin>>num;

        vector<int>count(101,0);

        for(int j = 2;j<=num;j++){

            int temp = j;


            for(int x : primes){

                    int cnt = 0;

            while(temp % x == 0){
                    temp = temp/x;
                     cnt++;
               count[x]+=cnt;
            }



            }
        }

        cout<<"Case "<<t<<": "<<num<<" = ";
        bool a = false;

        for(int x : primes){

            if(count[x]){
                    if(a){
                        cout<<" * "<<x<<" ("<<count[x]<<")";
                    }
                    else{
                        a = true;
                        cout<<x<<" ("<<count[x]<<")";
                    }

            }
        }

        cout<<endl;




    }





}

