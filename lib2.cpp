#include <iostream>
#include <Kokkos_Core.hpp>
#include "lib2.h"

void run_kernel()
{
    std::cout << "run_kernel\n";
    Kokkos::parallel_for(
        1,
        KOKKOS_LAMBDA(const int i)
        {
            ;
        });
    std::cout << "end run_kernel\n";
}
