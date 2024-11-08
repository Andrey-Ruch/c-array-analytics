# Statistics Analysis Functions


## Description
This repository contains a set of C functions for analyzing an array of unsigned char data items. The functions include:

1. `print_statistics()`: Prints the minimum, maximum, mean, and median of the data set.
2. `print_array()`: Prints the elements of the data array.
3. `find_median()`: Finds the median value of the data set.
4. `find_mean()`: Finds the mean value of the data set.
5. `find_maximum()`: Finds the maximum value of the data set.
6. `find_minimum()`: Finds the minimum value of the data set.
7. `sort_array()`: Sorts the data set in ascending order.

The main entry point for the program is the `main()` function, which sets up a test array of 40 unsigned char data items and calls the necessary functions to analyze the data and print the results.

## Usage
To use the statistics analysis functions, follow these steps:

1. Clone the repository:
```bash
git clone https://github.com/johndoe/statistics-analysis.git
```
2. Compile the `stats.c` file:
```bash
gcc -o stats stats.c
```
3. Run the program:
```bash
./stats
```

The program will print the statistics of the test data array, as well as the sorted array.
```bash
Original Array:
34 201 190 154 8 194 2 6 114 88 45 76 123 87 25 23 200 122 150 90 92 87 177 244 201 6 12 60 8 2 5 67 7 87 250 230 99 3 100 90 

Statistics:
Minimum: 2
Maximum: 250
Mean: 93
Median: 91

Sorted Array:
2 2 3 5 6 6 7 8 8 12 23 25 34 45 60 67 76 87 87 87 88 90 90 92 99 100 114 122 123 150 154 177 190 194 200 201 201 230 244 250 
```