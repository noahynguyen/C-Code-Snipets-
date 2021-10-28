// reverse_intarr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ReverseArray(int* arr, int size);
void ArrayFlip(int arr[], int length);
void ArrayFlipTwo(int* arr, int size);

int main()
{
    int arr[4] = { 4,5,6,7 };
    //ArrayFlip(arr, 4);
    //ArrayFlipTwo(arr, 4);
    ReverseArray(arr, 4);

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;  
}

void ReverseArray(int* arr, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + (size - i - 1));
        *(arr + (size - i - 1)) = temp;
    }
}

void ArrayFlip(int arr[], int length)
{
    for (int i = 0; i < length / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - i - 1] = temp;

    }
}

void ArrayFlipTwo(int* arr, int length)
{
    int* begin = arr;
    int* end = arr + length - 1;
    for (int i = 0; i < length / 2; i++)
    {
        int temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}