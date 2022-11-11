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

    if(m_1->cols != m_2->cols || m_1->rows != m_2->rows){
        printf("ERROR: The number of columns/rows of matrix A must match the number of columns/rows of matrix B.\n");
        printf("num rows %d num cols %d", m_1->rows, m_1->cols);
        exit(EXIT_FAILURE);
    }
    
    start_timer(&start);
    /* TODO: Implement serial Matrix addition */
    stop_timer(&start);
    fprintf(stderr, " (calculating answer)\n");
    
    start_timer(&start);
    /* TODO: Print output */
    stop_timer(&start);
    fprintf(stderr, " (printing output)\n");
    
}
