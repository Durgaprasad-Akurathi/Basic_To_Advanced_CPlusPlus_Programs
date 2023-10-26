#include "bits/stdc++.h"
using namespace std;

template <typename a>
a mymax(a x, a y)
{
    return (x>y)?x:y;
}

int main()
{
    cout<<mymax<int>(2,3)<<"\n";
    cout<<mymax<char>('a','d');
}
