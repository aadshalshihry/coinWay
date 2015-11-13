/*
 * =============================================================================
 *
 *       Filename:  coinWay.c
 *
 *    Description:  Develop a recursive method to determine the number of 
 *                  distinct ways in which a given amount of money in cents
 *                  can be changed into quarters, dimes, nickels, and pennies
 *
 *        Version:  1.0
 *        Created:  11/07/2015 21:51:45
 *       Compiler:  gcc
 *
 *         Author:  Roman - Abdulrahman Alshehri, aalshehri@umassd.edu
 *
 * =============================================================================
 */
#include "coinWay.h"

int coins(int d)
{

    switch ( d ) {
        case 1:	
            return 1;

        case 2:
            return 5;

        case 3:	
            return 10;

        
        case 4:	
            return 25;
    }				/* -----  end switch  ----- */
    return 0;
}


int way(int m, int n)
{
    static int a = 0;
    if(n == 1 || m == 0) return 1;
    if(m < 0) return 0;
    return way(m, n-1) + way(m - coins(n), n);
  
}