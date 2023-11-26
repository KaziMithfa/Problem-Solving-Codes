//LightOj 1240

#include<bits/stdc++.h>
#define sqr(x) ((x) * (x))

using namespace std;

struct point{

double x,y,z;


};

double distance(point A, point B){

    return sqrt(sqr(A.x-B.x)+sqr(A.y-B.y)+sqr(A.z-B.z));



}





main(){

int T;
cin>>T;

for(int t = 1;t<= T;t++){
        point A,B,P;

        cin>>A.x>>A.y>>A.z;
        cin>>B.x>>B.y>>B.z;
        cin>>P.x>>P.y>>P.z;

        point low = A,high = B;

        for(int i = 0;i<50;i++){

            point m1,m2;

            m1 = {low.x + (high.x-low.x)/3,low.y + (high.y-low.y)/3,low.z + (high.z - low.z)/3};
            m2 =  {low.x + 2 * (high.x- low.x)/3,low.y + 2 * (high.y- low.y)/3,low.z + 2 * (high.z- low.z)/3};

            if(distance(P,m1)<distance(P,m2)){
                high = m2;
            }
            else{
                low = m1;
            }



        }

       printf("Case %d:  %.10lf\n",t,distance(P,high));






}




}

