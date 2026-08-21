#include <iostream>
int main()
{
    // declare an array of 5 integers

    int arr[5] = {1, 3, 6, 2, 8};

    //-------------------------------------------

    // implement your logic to find max and min of the array and print them

    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    std::cout << "Min: " << min << '\n'
              << "Max: " << max;

    //--------------------------------------------
}