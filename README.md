# Matrix Multiplication Library

Website can be seen here: https://sisaha9.github.io/matrix_library/

**Table of contents**

- [Matrix Multiplication Library](#matrix-multiplication-library)
  - [What does it do](#what-does-it-do)
  - [Design methodology](#design-methodology)
  - [Build and run](#build-and-run)
  - [If I had more time](#if-i-had-more-time)
## What does it do

Matrix Library capable of supporting the following functions
1. Matrix Multiplication
2. Matrix Transposition
3. Creating a matrix with default values
4. Creating a sequential matrix
5. Checking if a matrix is empty
6. Checking is a vector is empty
7. Printing matrix
8. Checking if 2 matrices are equal
9. Checking if 2 matrices can be multiplied
10. Checking if a matrix is following dimensions or has different sizes for each row

## Design methodology

At the beginning I wanted to write 3 approaches for solving matrix multiplication
1. CPU simple version
2. CPU parallel version leveraging OpenMP
3. GPU parallel version leveraging CUDA

For that purpose I created a utility library that would provide several helper functions for implementing and testing the functions of matrix multiplication and transposition

As of writing this I have been able to implement the CPU simple version. Under `matrix_library` you can see the `cpu_simple` and `utils` libraries. These are tested extensively in `tests` folder under several cases (empty matrices, empty vectors, scalars, vectors and matrices) over 3 types: `int`, `float` and `double`. There are also example usages of each function in each library under the `examples` folder. 

For purposes of documentation I leveraged `doxygen`. In the website [here](https://sisaha9.github.io/matrix_library/) if you click on `Namespaces` in the horizontal navigation bar you will see a view of the library. Clicking on the innermost values in each list will give you a rundown of each function, the code, what it takes, what it returns and some explicit error conditions I have made

Finally, I have also created a GIthub Actions file here monitored by Dependabot for updates to any actions used. It builds and runs all unit tests in the code as well as deploys the live documentation page

## Build and run

First clone this repo

```bash
git clone https://github.com/sisaha9/matrix_library.git
```

To build run
```bash
make
```

To list examples run
```bash
make list-examples
```

To run an example
```bash
make run-example EXAMPLE=<example_name> # Replace <example_name> with your example executable. Ignore the file path and just put the name
```

To list tests
```bash
make list-tests
```

To run a test
```bash
make run-test TEST=<test_name> # Replace <test_name> with your test executable. Ignore the file path and just put the name
```

To run all tests
```bash
make test
```

To create docs
```bash
make docs
```

To clean your build artifacts
```bash
make clean
```

To clean your docs artifacts
```bash
make clean-docs
```

To clean everything
```bash
make purge
```


## If I had more time

I wrote this mostly in half a day. If I had more time I would do the following
1. Add the GPU and CPU parallel versions of the code
2. Add tests for the GPU and CPU parallel versions of the code
3. Add some timing code to benchmark each version
4. Re-implement utilities to make use of the GPU and CPU parallel versions for larger operations
5. Make use of `TYPED_TEST` in `Google Tests` framework to enable testing on multiple data types
6. Write test macros for a bunch of the tests
7. Write tests for the `PrintMatrix` function which I didn't to save time and because it was not critical to the running of the library
8. Add more documentation to the examples and some of the CMake files in this repository
9. Add more documentation on the Github Actions pipeline