#include <stdio.h> 
int main() {
    int x = 10;
    int pre_result,post_result;
    //pre increment: ++x increments x before using its value
    pre_result = ++x + 20;
    x=10;
    post_result = x++ + 20;
    printf("using pre-increment (++x): result = %d,x =%d\n",pre_result, x);
    //reset x for clarity
    x = 10;
    post_result = x++ + 20;
    printf("using post - increment (x++): result =%d, x = %d\n",post_result,x);
    
    return 0; 
}