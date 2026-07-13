#include <string>
#include <stdexcept>
using namespace std;

string solve(int n, int x)
{
    if (n == 1)
        return "Valley";

    int middle = 1 << (n - 1);

    if (x == middle)
        return "Valley";

    if (x < middle)
        return solve(n - 1, x);

    int mirrored = (1 << n) - x;
    string result = solve(n - 1, mirrored);

    return result == "Valley" ? "Mountain" : "Valley";
}

string get_crease(int n, int x)
{
    int total = (1 << n) - 1;

    if (n < 1 || x < 1 || x > total)
        throw invalid_argument("Invalid input");

    return solve(n, x);
}

string getCrease(int n, int x)
{
    return get_crease(n, x);
}