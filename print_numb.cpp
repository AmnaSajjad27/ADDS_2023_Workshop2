// Write head_recursive, Tail recursive and iterative functions to print the first number encountered in a string 

/*

while (string[i] != backslash n)
{
    if (isdigit(string[i]) == true)
    {
        print the string[i];
        return;
    }
}

*/

int firstIndex(int input[], int size, int x, int currIndex){
    if(size==currIndex){
        return -1;
    }

    if(input[currIndex] == x){
        return currIndex;
    }

    return firstIndex(input,size,x,currIndex+1);
    
}