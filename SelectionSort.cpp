//Selection Sort Algorithm
//Worst time complexity O(n^2)

#include<iostream>
#include<cstring>
using namespace std;

main(){
    int n;
    cout<<"Enter how many numbers you want to insert into the list : "<<endl;
    cin>>n;


    cout<<"Enter the numbers "<<endl;

    int array[n];

    for (int i = 0;i<n;i++){

        cin>>array[i];
    }

    int low,k ,temp;


    for(int i = 0;i<n-1;i++){

            low = array[i];

    for(int j = i+1;j<n;j++){
        if(array[j]<low){
            low = array[j];
            k = j;
        }
    }

    if(low != array[i]){
        temp = array[i];
        array[i] = low;
        array[k] = temp;

    }



    }

    cout<<"The sorted array is : "<<endl;

    for (int i = 0;i<n;i++){

        cout<<array[i]<<endl;
    }

return 0;

}
