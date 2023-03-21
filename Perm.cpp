#include <string> 
#include <iostream>

void Perm(std::string &a, int l, int r)
{
    // Always need a base class for recursion 
    if (l == r)
    {
        std::cout << a << endl;
    }

    // recurssion 
    else
    {
        for (int i = l; i <= r; i++)
        {
            // Swap the two characters 
            swap(a[l], a[i]);

            // recurssion 
            Perm(a, l + 1, r);

            // go back swap another one
            swap(a[l], a[i]);
        }
    }
}