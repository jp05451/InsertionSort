#include <iostream>

template <class T>
void insertionSort(T arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        T temp = arr[i];
        int j = i - 1;
        while (temp <= arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}