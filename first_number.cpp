#include <iostream>
#include <string>

// recursive function to print the first number in a given string 

// Head recursive - doesnt really work 

// Tail recursive 

void first_number(std::string string)
{
    // Base case 
    // if we get to the end of the string without finding an int, return
    if (string.length() == 0)
    {
        return;
    }

    // recursive case 
    if (isdigit(string.at(0)))
    {
        // Using built in function isdigit to find an int and print and then return
        std::cout << string.at(0) << std::endl;
        return;
    }
    first_number(string.erase(0,1));
}

// iterative version 
/*
void first_number (std::string string)
{
    for (int i = 0; i < string.length(); i++)
    {
        if (isdigit(string.at(i)))
        {
            std::cout << string.at(i) << std::endl;
            return;
        }
    }
}
*/
// main function 
int main(void)
{
    while (true)
    {
        std::cout << "Enter a string: ";
        std::string string;
        std::cin >> string;
        first_number(string);
    }
}
