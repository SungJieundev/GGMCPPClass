//버블

#include<iostream>
using namespace std;

int main() 
{
    int arr[10] = { 1, 9, 8, 5, 4, 6, 7, 3, 2, 10 };

    for (int i = 1; i < 10; i++) 
    {
        for (int j = 0; j < 10 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                // data[j] 와 data[j + 1] 의 위치를 바꾼다
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
    }

    return 0;
}