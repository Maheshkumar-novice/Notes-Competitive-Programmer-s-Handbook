#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
        CPP style directly computes the modulo
        Whereas Python makes the value to be in the range 0,..m-1
        As far as I read, it is common in Number Theory.
        CPP style is old it seems but it is easy to convert to other type.
        It only affects the negative modulo, positive works fine.
    */

    int a, m;

    a = 7;
    m = 3;
    cout << "CPP style " << a % m << "\n";
    cout << "Python style " << ((a % m) + m) % m << "\n";

    a = 7;
    m = -3;
    cout << "CPP style " << a % m << "\n";
    cout << "Python style " << ((a % m) + m) % m << "\n";

    a = -7;
    m = 3;
    cout << "CPP style " << a % m << "\n";
    cout << "Python style " << ((a % m) + m) % m << "\n";

    /*
      An important property of the remainder is that in addition, subtraction and
      multiplication, the remainder can be taken before the operation:
      (a + b) mod m = (a mod m + b mod m) mod m
      (a − b) mod m = (a mod m − b mod m) mod m
      (a · b) mod m = (a mod m · b mod m) mod m
    */

    long long x = 1;
    for (int i = 2; i <= n; i++) {
      x = (x*i)%m;
    }
    cout << x%m << "\n";
}
