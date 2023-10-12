/*
Create a C++ program that demonstrates two sorting algorithms: selection sort and 
insertion sort. Allow the user to input an array of integers and then provide an 
option to sort the array using either of the two algorithms. Display the sorted array.
*/

void selectionSort(int array[], int s){
    for(int i = 0; i < s; i++){
        int minIndex = i;

        for(int n = i + 1; n < s; n++){
            if(array[n] < array[minIndex]){
                minIndex = n;
            }
        }

        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

void insertionSort(int array[], int s){
    int i, key, j;
    for (i = 1; i < s; i++) {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j -= 1;
        }
        array[j + 1] = key;
    }   
}


#include <iostream>

int main(){
    int s;

    std::cout<<"Enter the size of your array: ";
    std::cin>>s;

    int array[s];

    for(int i = 0; i < s; i++){
        std::cout<<"Enter the "<<i+1<<"-th number in the array: ";
        std::cin>>array[i];
    }

    int sortType = 0;

    std::cout<<"Would you like to sort with:"<<std::endl;
    std::cout<<"1. Selection sort"<<std::endl;
    std::cout<<"2. Insertion sort?"<<std::endl;
    std::cin>>sortType;

    if(sortType == 1){
        selectionSort(array, s);
    } else if (sortType == 2){
        insertionSort(array, s);
    } else {
        std::cout<<"Not a valid sort type"<<std::endl;
        return 1;
    }

    std::cout<<std::endl<<"[";

    for(int i = 0; i < s; i++){    
        std::cout<<array[i]<<" ";
    }

    std::cout<<"]"<<std::endl;

    return 0;
}