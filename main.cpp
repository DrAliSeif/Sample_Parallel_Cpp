//code for ubuntu terminal
//g++ main.cpp -fopenmp
//./a.out



#include <iostream>
#include <omp.h>
#include <stdio.h>
#include <fstream>
using namespace std;

double order_param(float cpl, int N, double ph[]);

int main()
{
    int Number_of_node=100;
    double* a = new double[Number_of_node];                    //@@@Definition Phases_previous         ---
    double* b = new double[Number_of_node];                    //@@@Definition Phases_previous         ---

    for(int i =0; i < 199; i++)
    {
        a[i]=i;
    }
    //omp_set_dynamic(1);
    //omp_set_num_threads(8);
    #pragma omp parallel for
    for(int i =0; i < 199; i++)
    {

        R[i] = order_param(i , 20, a);
        printf("i = %f --> on %d \n", R[i], omp_get_thread_num());
    }

    ofstream out("out.txt");

    for(int i =0; i < 199; i++)
    {

        out << i << "\t" << R[i] << endl;
    }
    out.close();


    return 0;
}


double order_param(float cpl, int N, double ph[])
{
    return N + cpl + ph[9];
}
