#include <iostream>
using namespace std;

class Tracer
{
public:
    int id;

    Tracer(int i) : id(i)
    {
        cout << "Constructor #" << id << endl;
    }

    ~Tracer()
    {
        cout << "Destructor #" << id << endl;
    }
};

int main()
{
    cout << "Enter block\n";

    {
        Tracer a(1), b(2);
        cout << "...working...\n";
    }

    cout << "Left block\n";

    return 0;
}