#include <iostream>
#include <vector>
using namespace std;

void insertionsort(vector<int>* array){
for(int j=2; j<array->size(); j++){
    int key=(*array)[j];
    int i = j-1;
    while((*array)[i]>key && i>=0){
        (*array)[i + 1]= (*array)[i];
        i= i-1;
        (*array)[i+1]=key;
    }
}}


void printarr(vector<int>* array){
     for (int i = 0; i < array->size(); i++) {
        cout << (*array)[i]<< " ";
    }
    cout<<endl;
}
int main(){
    vector<int> array{4, 10, 3, 1, 3 , 5, 23, 0};
    vector<int>* arr = &array;
    cout<<"Arreglo sin ordenar"<<endl;
    printarr(arr);
    cout<<"Arreglo ordenado"<<endl;
    insertionsort(arr);
    printarr(arr);

}

