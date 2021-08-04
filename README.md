# Trality Cpp Challenge

Welcome to the Trality C++ Challenge! Your task is to modify `src/main.cpp` in order to print the contents of `target.ts` (Typescript). A basic skeleton is prepared for you in that file,
showing you a possible approach on how to achieve your goal.

[CMake](https://cmake.org/) is used in order to compile the project. You can run the following commands to compile and
run the executable:

```shell
$ mkdir build && cd build
$ cmake ..
$ make
$ ./challenge
```

The output of these commands need to be matching the contents of `target.ts` line by line. You are not allowed to use any external dependencies. You are allowed and encouraged to use features
provided by C++17.

## Hints

* There is an object registry prepared for you that you can utilize to register classes
* You are allowed to statically handle all types available in the structs at compile time, so your code doesn't necessarily need to work with other types not used in the project
* In the target, we use camel case instead of snake case (see property `isBuy`)

## Optional goals

- [ ] Integrate [Catch2](https://github.com/catchorg/Catch2) unit tests into the project and CMake build to compare your output against that of `target.ts`
- [ ] Simplify the binding behaviour using macros, e.g. `BIND_CLASS(Order) { ... }`

## Deliverables

1. `challenge.zip` containing your code
2. Your code must build and run
3. A (very) short description of how you approached the task

E-mail the file to christopher@trality.com within 1 week of having given access to this repository. Note that if you fork the repository, other candidates might see your fork as this
repository is public.