#include <iostream> 

using namespace std;

// This one is naturally tail recursive as we dont need further caluclations to get the final answer 

// Tail recursive version 

void print_pattern(int n, int current, bool counting_up) 
{
    if (current == 0) 
    {
        cout << endl;
        return;
    }
    cout << current;
    
    if (current == n)
    counting_up = false;
    int next_value;
    
    if (counting_up == false)
    next_value = current - 1;
    
    else
    next_value = current + 1;
    
    print_pattern(n, next_value, counting_up);
    
}
void print_pattern(int n) {

print_pattern(n, 1, true);

}

// Iterative version

void print_pattern(int n) {
// print going up
for (int i=1; i<=n; i++) 
{
    cout << i;
}
// print going down
for (int i = n - 1; i > 0; i--) 
{
    cout << i;
}
cout << endl;
}

int main(void) 
{
    while(true) 
    {
        cout << "Enter a number: ";
        int n;
        cin >> n;
        print_pattern(n);
    }
}