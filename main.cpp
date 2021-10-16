#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
using namespace std;

vector<int> fill_array(int size)
{
    vector<int> a = {1, 2, 33, 66, 143};
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

int main()
{
    srand(time(nullptr));

    vector<int> a;
    int size = 10;

    a = fill_array(size);
    sort(a.begin(), a.end());
    cout << "Position: " << bin_search(a, 66) << endl;
}