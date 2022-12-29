#include <iostream>
#include <Kokkos_Core.hpp>
#include "lib.h"
#include "lib2.h"

extern "C" void run()
{
    std::cout << "run\n";
    Kokkos::initialize ();
    run_kernel();
    Kokkos::finalize();
    std::cout << "end run\n";
}
