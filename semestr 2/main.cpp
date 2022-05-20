#include <iostream>
#include <vector>

using namespace std;

void print_container(const vector<int> &c)
{
    
    cout << endl << "size = " << c.size() << endl;
    cout << "vector = ";
    for (int i : c)
    {
        cout << i << " ";
    }
    cout << '\n';
}

int main()
{
    vector<int> vec;

    for (int i = 0; i < 10; ++i)
    {
        vec.push_back(i);
    }

    print_container(vec);

    vec.erase(vec.begin() + 3, vec.begin() + 8);

    print_container(vec);

    vec.erase(vec.end()-1);

    print_container(vec);

    vec.insert(vec.begin(),102);

    print_container(vec);

    vec.insert(vec.end(),  110011);

    print_container(vec);

    return 0;
}