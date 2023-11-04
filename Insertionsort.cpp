//According to tutorials point




#include<iostream>
using namespace std;

void display(int *array, int size){
    for(int i = 0; i<size; i++){
        cout<< array[i] <<" ";
        cout<<endl;
    }

}

void insertionsort(int *array, int size){

    for(int i = 1 ;i<size;i++){
         int j = i;

        while (j>0 && array[j-1]>array[j]){
                int temp;
                temp = array[j];

                array[j] = array[j-1];
                array[j-1] = temp;

                j = j -1;


        }
    }







//        key = array[i]; //take a value
//
//        j = i;
//
//        while(j>0 && array[j-1]>key){
//
//                array[j] = array[j-1];
//                j--;
//
//        }
//
//        array[j] = key; //Insert in right place
//




}






int main(){

    int n ;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: "<<endl;

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array before sorting: "<<endl;
    display(arr,n);
    insertionsort(arr,n);

    cout<<"Array after sorting: "<<endl;
    display(arr,n);






}
