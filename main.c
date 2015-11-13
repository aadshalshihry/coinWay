/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Develop a recursive method to determine the number of 
 *                  distinct ways in which a given amount of money in cents
 *                  can be changed into quarters, dimes, nickels, and pennies
 * 
 *
 *
 *        Version:  1.0
 *        Created:  11/07/2015 21:51:45
 *       Compiler:  gcc
 *
 *         Author:  Roman - Abdulrahman Alshehri, aalshehri@umassd.edu
 *
 * =====================================================================================
 */

#include "coinWay.h"


// getting input from stdin
int main(int argc, char *argv[]){
    int input = atoi(argv[1]);
     printf("%d\n",way(input, 4));
    

}
