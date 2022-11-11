#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "data.h"
#include <omp.h>
#include "timer.h"

int main(int argc, char **argv)
{
    if(argc != 4){
        printf("Usage: <num_thread> <vec_a> <vec_b>.\n");
        exit(EXIT_FAILURE);
    }

    // int numThreads = omp_get_max_threads();
    // convinient for use in partitioning
    int numThreads = atoi(argv[1]);
    omp_set_num_threads(numThreads);
        
    struct timespec start;
    start_timer(&start);

    data_struct *d_1 = get_data_struct(argv[2]);
    data_struct *d_2 = get_data_struct(argv[3]);

    stop_timer(&start);
    fprintf(stderr, " (reading input)\n");

    if(m_1->cols != m_2->cols || m_1->rows != m_2->rows){
        printf("ERROR: The number of columns/rows of matrix A must match the number of columns/rows of matrix B.\n");
        printf("num rows %d num cols %d", m_1->rows, m_1->cols);
        exit(EXIT_FAILURE);
    }

    start_timer(&start);
    /* TODO: Implement Matrix Addition openMP here */
    stop_timer(&start);
    fprintf(stderr, " (calculating answer)\n");

    start_timer(&start);
    /* TODO: Print output */
    stop_timer(&start);
    fprintf(stderr, " (printing output)\n");
}
