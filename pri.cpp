# include <iostream>

void recursive_print(int n)
{
    if (n == 1)
    {
        std::cout << "1";
        return;

    }

    std::cout << n;
    recursive_print(n-1);
    std::cout << n;
}

int main()
{
    recursive_print(9);
}