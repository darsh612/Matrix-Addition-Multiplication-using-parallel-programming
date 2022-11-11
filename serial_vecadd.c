#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "data.h"
#include "timer.h"

int main(int argc, char **argv)
{
    if(argc != 3){
        printf("ERROR: Please specify only 2 files.\n");
        exit(EXIT_FAILURE);
    }

    struct timespec start;
    start_timer(&start);

    data_struct *d_1 = get_data_struct(argv[1]);
    data_struct *d_2 = get_data_struct(argv[2]);
    
    stop_timer(&start);
    fprintf(stderr, " (reading input)\n");

    //Vector is of size (nx1), it will always return coloumn =1
    if(d_1->cols != 1 || d_2->cols !=1){
        printf("ERROR: The dimiension of vector is not correct\n");
        exit(EXIT_FAILURE);
    }

    start_timer(&start);
    /* TODO: Implement serial Vector Addition */
    stop_timer(&start);
    fprintf(stderr, " (calculating answer)\n");
    
    start_timer(&start);
    /* TODO: Print output */
    stop_timer(&start);
    fprintf(stderr, " (printing output)\n");
    
}
