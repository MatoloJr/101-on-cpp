#include <iostream>
#include <string>

//linear search

int searchIntArray(int array[], int element, int size);
int searchStringArray(std::string array[], std::string element, int size);

int main(){

    std::string foods[] = {"pizza", "pilau", "chicken", "ugali", "chapati"};
    int foodNum = sizeof(foods) / sizeof(foods[0]);
    int ind;
    std::string myFood;

    std::cout << "Enter the food element to search for: ";
    std::getline(std::cin, myFood);

    ind = searchStringArray(foods, myFood, foodNum);

    if (ind != -1){
        std::cout << myFood << " is at index " << ind << '\n';
    }
    else{
        std::cout << myFood << " is not in the array " << ind << '\n';
    }

    

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter the integer element to search for: ";
    std::cin >> myNum;

    index = searchIntArray(numbers, size, myNum);

    if(index != -1){
        std::cout << myNum << " is at index " << index << '\n';
    }
    else{
        std::cout << myNum << " is not in the array " << index << '\n';
    }


    return 0;
}

// Function to search in string array
int searchStringArray(std::string array[], std::string element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}


// Function to search in integer array
int searchIntArray(int array[], int element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}
