#include <iostream>
using namespace std;
void greet()
{
    cout << "Hey! Wasim" << endl;
    greet();
}
int main()
{
    greet();
}