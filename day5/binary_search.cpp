/*
Implement a C++ program that performs binary search on a sorted array of integers. 
Ask the user for a number to search for and determine if it's present in the array. 
If found, display the index; if not, inform the user that the element is not in the array.
*/

#include <iostream>
#include <algorithm>

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int integer;

    std::cout<<"Enter an integer to search for: ";
    std::cin>>integer;

    int mid = 10 / 2;

    std::sort(array, array + 10);
    int low = 0;
    int high = 9; 

    while(low <= high){
        int mid = (low + high) / 2;

        if(array[mid] == integer){
            std::cout<<"Integer found at index "<<mid<<std::endl;
            return 0;
        } else if(array[mid] < integer){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    std::cout<<"Integer not found."<<std::endl;
    return 0;
}