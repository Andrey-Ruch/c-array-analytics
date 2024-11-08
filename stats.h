/**
 * @file stats.h
 * @author Andrey Ruch
 * @brief Header file for data analysis functions.
 *
 * This file contains declarations for functions that perform various
 * statistical analyses on an array of unsigned char data items,
 * including calculating the maximum, minimum, mean, median, and
 * sorting the array in descending order.
 */


#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Prints the statistics of an array: minimum, maximum, mean, and median
 *
 * @param data Pointer to an array of unsigned char data
 * @param size Number of elements in the data array
 */
void print_statistics(unsigned char *data, int size);


/**
 * @brief Prints an array of unsigned char data to the screen
 *
 * @param data Pointer to an array of unsigned char data
 * @param size Number of elements in the data array
 */
void print_array(unsigned char *data, int size);


/**
 * @brief Calculates and returns the median of an array of unsigned char data
 *
 * @param data Pointer to an array of unsigned char data
 * @param size Number of elements in the data array
 * @return The median value of the data array
 */
unsigned char find_median(unsigned char *data, int size);


/**
 * @brief Calculates and returns the mean of an array of unsigned char data
 *
 * @param data Pointer to an array of unsigned char data
 * @param size Number of elements in the data array
 * @return The mean value of the data array
 */
unsigned char find_mean(unsigned char *data, int size);


/**
 * @brief Finds and returns the maximum value in an array of unsigned char data
 *
 * @param data Pointer to an array of unsigned char data
 * @param size Number of elements in the data array
 * @return The maximum value in the data array
 */
unsigned char find_maximum(unsigned char *data, int size);


/**
 * @brief Finds and returns the minimum value in an array of unsigned char data
 *
 * @param data Pointer to an array of unsigned char data
 * @param size Number of elements in the data array
 * @return The minimum value in the data array
 */
unsigned char find_minimum(unsigned char *data, int size);


/**
 * @brief Sorts an array of unsigned char data in ascending order
 *
 * @param data Pointer to an array of unsigned char data
 * @param size Number of elements in the data array
 */
void sort_array(unsigned char *data, int size);


#endif /* __STATS_H__ */