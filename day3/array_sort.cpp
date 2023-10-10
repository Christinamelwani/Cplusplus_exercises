/*
Create a function that takes a vector of integers as a parameter and sorts it
in ascending order using the sort function from the C++ Standard Library. 
Print the sorted vector.
*/

#include <iostream>
#include <vector>
#include <algorithm>

void sortVector(std::vector<int> &vectorToSort){
    std::sort(vectorToSort.begin(), vectorToSort.end());
}

int main(){
    std::vector<int> myVector = {4,2,3,1,5};

    sortVector(myVector);

    for(auto const element: myVector){
        std::cout<<element<<" ";
    }

    std::cout<<std::endl;
    return 0;
}