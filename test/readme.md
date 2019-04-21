

=============================== 

## Pre-conditions for running test set

* Linux environment
* python (2/3) installed
* g++ with omp support
* x10 environment ready
* add x10 scripts to `$PATH` and set them executable. 

(You may need to `export PATH=$PATH:/home/...../x10/bin`, for example)

## Usage

```
make
```

This will recompile all the programs and then run test.

```
make test_only
```

This command will run the test set based on the compiled program now.
