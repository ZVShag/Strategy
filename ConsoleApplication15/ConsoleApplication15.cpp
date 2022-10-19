

#include <iostream>
#include <vector>
using namespace std;
class imassiv
{
public:
    virtual void create() = 0;
    virtual void povorot() = 0;
    virtual void max() = 0;
    virtual void min() = 0;
    virtual void print() = 0;
    ~imassiv() {};
};
class massiv_form_keybord : public imassiv
{
    vector <double> mass;
    int vector_size;
public:
    void create()
    {
        cout << "Enter massive size: " << endl;
        int n;
        double k;
        cin >> n;
        this->vector_size = n;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            mass.push_back(k);
        }
    }
    void max()
    {
        double mx = mass[0];
        for (int i = 0; i < vector_size; i++)
        {
            if (mass[i] > mx)
                mx = mass[i];
        }
        cout << "Maximum element: " << mx << endl;
    }

    ~massiv_form_keybord() {};

};

int main()
{
    std::cout << "Hello World!\n";
}


