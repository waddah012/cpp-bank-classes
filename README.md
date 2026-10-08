# Banking Classes

Customer, Account, Transaction, and Bank classes with deposits, withdrawals, and transaction history.

An educational C++ example developed from coursework, organized as a standalone project.

## Build and run

Requires a C++17 compiler and Make. Smoke checks also require Python 3.

```sh
make
make run
make check
```

To choose a compiler: `make CXX=clang++` or `make CXX=g++`. Run `make clean` to remove build outputs.

## Example

A console demonstration of object-oriented composition. The sample account starts at zero, deposits 500, withdraws 200, and rejects a withdrawal of 400.

## Structure

- `src/`: source code and headers.
- `tests/smoke.py`: representative console checks with execution timeouts.
- `Makefile`: builds the source files together into `build/example`.

## Scope

Amounts use floating-point numbers and the original exercise has limited input validation.

The source retains the original exercise logic and explanatory comments. Build outputs, submission documents, and course materials are not part of this repository.
