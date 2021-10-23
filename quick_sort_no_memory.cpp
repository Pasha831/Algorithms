#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

void show_array(int *a, int low, int high)
{
    for (int i = low; i <= high; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int partition(int *a, int low, int high)
{
    int pivot = a[high];
    int i = low;
    show_array(a, low, high);
    for (int j = low; j < high; j++)
    {
        if (a[j] <= pivot)
        {
            cout << "Swap: " << a[i] << " " << a[j] << endl;
            swap(a[i], a[j]);
            i++;
        }
    }
    cout << "Swap: " << a[i] << " " << a[high] << endl;
    swap(a[i], a[high]);
    show_array(a, low, high);
    cout << endl;
    return i;
}
void quick_sort(int *a, int low, int high)
{
    if (low < high)
    {
        int p = partition(a, low, high);
        quick_sort(a, low, p - 1);
        quick_sort(a, p + 1, high);
    }
}
void fill_array(int* a, int size)
{
//    a[0] = 3;
//    a[1] = 7;
//    a[2] = 8;
//    a[3] = 5;
//    a[4] = 2;
//    a[5] = 1;
//    a[6] = 9;
//    a[7] = 5;
//    a[8] = 4;
    for (int i = 0; i < size; i++)
    {
        a[i] = 1 + rand() % 10;
    }
}

int main()
{
    srand(time(0));
    int size = 9;
    int *pp = (int *)calloc(sizeof (int), size);

    fill_array(pp, size);

    quick_sort(pp, 0, size - 1);
    show_array(pp, 0, size - 1);
}