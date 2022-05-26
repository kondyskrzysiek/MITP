#include <iostream>
#include <vector>

using namespace std;

void print_container(const vector<int> &c)
{
    cout << endl
         << "size = " << c.size() << endl;
    cout << "vector = ";
    for (int i : c)
    {
        cout << i << " ";
    }
    cout << endl;
}

void max_len_vector(vector<int> &vector, int max_len)
{
    if (vector.size() > max_len)
    {
        cout << "max value exceeded the exceeding element has been removed" << endl;
        vector.pop_back();
        cout << vector.size() << endl;
    }
}

int main()
{
    int max_len = 10;

    vector<int> vec;
    for (int i = 1; i <= 12; ++i)
    {
        vec.push_back(i);
        max_len_vector(vec, max_len);
    }

    print_container(vec);

    for (int i = 0; i < 5; ++i)
    {
        vec.pop_back();
    }

    print_container(vec);

    return 0;
}