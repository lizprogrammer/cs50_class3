#include <stdio.h>
#include <cs50.h> 

int main() {
        string name = get_string("Name: ");
        printf("Hello, %s\n!", name);
        return 0;
}
