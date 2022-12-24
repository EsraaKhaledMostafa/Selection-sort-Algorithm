#include <iostream>
using namespace std;

void Swap(int &n1, int &n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}


void SearchSortAlgorithm(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            Swap(arr[min_index], arr[i]);
        }
    }
    
}

void Display(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}



int main()
{
    int array[] = { 4,2,5,6,1,3 };
    Display(array, 6);

    SearchSortAlgorithm(array, 6);
    Display(array, 6);
}
