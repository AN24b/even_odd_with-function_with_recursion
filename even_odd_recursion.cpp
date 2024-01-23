#include <iostream>
using namespace std;

void separateEven(int arr[], int size, int index) 
{
    if (index == size) 
    {
        return;
    }
    
    if (arr[index] % 2 == 0) 
    {
        cout << arr[index] << "\t";
    }
    
    separateEven(arr, size, index + 1);
}

void separateOdd(int arr[], int size, int index)
 {
    if (index == size) {
        return;
    }
    
    if (arr[index] % 2 != 0) {
        cout << arr[index] << "\t";
    }
    
    separateOdd(arr, size, index + 1);
}

int main() 
{
    int arr[100], i, num;

    cout << "Enter the size of the array you want\n";
    cin >> num;

    cout << "Enter the elements of the array\n";
    for (i = 0; i < num; i++) 
    {
        cin >> arr[i];
    }

    cout << "\nEven numbers of the array are \n";
    separateEven(arr, num, 0);

    cout << "\nOdd numbers of the array are \n";
    separateOdd(arr, num, 0);

   return 0;
}