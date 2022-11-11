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

    if(d_1->cols != d_2->rows){
        printf("ERROR: Matrix dimension mismatch.\n");
        exit(EXIT_FAILURE);
    }

    start_timer(&start);
    /* TODO: Implement serial Matrix Multiplication */
    stop_timer(&start);
    fprintf(stderr, " (calculating answer)\n");
    
    start_timer(&start);
    /* TODO: Print output */
    stop_timer(&start);
    fprintf(stderr, " (printing output)\n");
    
}
