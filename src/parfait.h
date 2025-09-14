#ifndef PARFAIT_H
#define PARFAIT_H

/*
 * The Yorozuya Parfait Management System
 * Help Gintoki manage his parfait addiction and avoid eviction!
 */

// Function 1: Calculate how many parfaits Gintoki can afford
// Returns: Number of whole parfaits he can buy
int calculateParfaitCount(int money, int parfaitCost);

// Function 2: Calculate remaining money after buying parfaits
// Returns: The change left over
int calculateChangeLeft(int money, int parfaitCost);

// Function 3: Check if Gintoki is spending too much
// Returns: 1 if spending more than 80% on parfaits, 0 otherwise
int isDangerZone(int money, int parfaitSpending);

// Function 4: Calculate average parfaits per day for a week
// Takes an array of 7 integers (parfaits eaten each day)
// Returns: Average parfaits per day (integer)
int calculateWeeklyAverage(int dailyParfaits[7]);

// Function 5: Check if it's an even-numbered day (for discounts)
// Returns: 1 if day is even, 0 if odd
int isEvenDay(int dayNumber);

// Function 6: Print a parfait spending report
// Prints formatted output about Gintoki's parfait situation
void printParfaitReport(int money, int parfaitCost, int parfaitCount);

#endif
