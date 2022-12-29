Kokkos Attribute Fail
=====================

Creates an exectuable and two libraries (`lib` and `lib2`). `lib` instantiates Kokkos but the actual kernel is inside `lib2`. Build and execute:

```
mkdir build
cd build
# Add corresponding path to Kokkos to cmake command
cmake ..
make
./attribute_fail
```

Output with latests Kokkos development (compiled for Cuda on Turing75) branch is:

```
main
run
run_kernel
terminate called after throwing an instance of 'std::runtime_error'
  what():  cudaFuncGetAttributes(&attr_tmp, base_t::get_kernel_func()) error( cudaErrorInvalidDeviceFunction): invalid device function /path/to/kokkos/install/include/Cuda/Kokkos_Cuda_KernelLaunch.hpp:625
Aborted (core dumped)
```
