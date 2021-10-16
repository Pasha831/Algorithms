#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cmath>
using namespace std;

vector<int> fill_array(int size)
{
    vector<int> a = {1, 3, 5, 14, 18, 21, 33, 50, 76, 88, 143, 255, 1001};
//    for (int i = 0; i < size; i++)
//    {
//        int temp = i + 1;//rand() % 19 + 1;
//        a.push_back(temp);
//    }
    return a;
}
void print_array(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int bin_search(vector<int> a, int number)
{
    int left = 0, right = a.size() - 1, mid = 0;
    while (left < right)
    {
        mid = (left + right) / 2;
        if (a[mid] < number)
        {
            left = mid + 1;
        }
        else
            right = mid;
    }
    return left + 1;
}
int exp_search(vector<int> a, int number)
{
    int left = 0, right = 0, count = 0;
    while (a[right] < number)
    {
        left = right;
        right = pow(2, count++);
    }

    vector<int> b;
    for (int i = left; i <= right; i++)
    {
        b.push_back(a[i]);
    }

    return bin_search(b, number) + left;
}

int main()
{
    srand(time(nullptr));

    vector<int> a;
    int size = 10;

    a = fill_array(size);

    sort(a.begin(), a.end());
    cout << exp_search(a, 76);
}
