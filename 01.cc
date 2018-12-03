#include <iostream>

using namespace std;

int main()
{
    long long sum{0};
    long long num{0};
    while (cin >> num) sum += num;
    cout << sum << endl;
    return 0;
}
