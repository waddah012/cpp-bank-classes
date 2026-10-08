# Bank classes

This is a small banking project I wrote in C++. I split it into Customer, Account, Transaction, and Bank classes so each part has its own job.

The example creates an account, deposits 500, and withdraws 200. It then tries to withdraw another 400, which gets rejected because there is not enough money left. At the end, it prints the account details and transactions.

The balance uses a double, and the amount checks are still basic.

To build and run it, you need a C++17 compiler and Make. Open a terminal in this folder and run:

```sh
make
make run
```

You can also run `make check` to check the sample output. That needs Python 3. Use `make clean` if you want to remove the compiled program.
