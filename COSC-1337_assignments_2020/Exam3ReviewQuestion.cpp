#include <stdio.h>
#include <string.h>
using namespace std;

int main() {

    char s[100] = "Say hello";
    char end[100] = "Say hello";

    // +# 1st is > ; 0 is == ; -# 2nd is < ;
    if(strcmp(s, end) == 0)
        printf("these are equal\n");
    else
        printf("not same\n");

    return 0;
}
