#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int no_even = 0, c = 0, x;
        float sum = 0.0;
        int pos = 0;
        while (1)
        {
            cin >> x;
            if (x == -1)
                break;
            c++;
            if (x > 30)
                no_even++;
            if (x % 2 == 0)
            {
                pos += c;
                sum += x * c;
            }
        }
        cout << no_even << " ";
        printf("%.2f\n", float(sum) / float(pos));
    }
    return 0;
}
