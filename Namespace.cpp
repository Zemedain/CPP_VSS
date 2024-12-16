#include <iostream>

namespace diff_name
{
    short x = 25;
    short y = 75;
    short z = x + y;
}

int main(){
    using std::cout;

    short x = 10;
    short y = 85;
    short z = x + y;

    cout << "\n" << z << "\n";
    cout << diff_name::z;

    return 0;

}