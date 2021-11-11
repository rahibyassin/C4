#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv){
    
    float M;

    printf("Distance mile : \n");
    scanf("%f", &M);

    M /= 1.609;

    printf("Distance km : %f\n", M);

    return 0;
}
