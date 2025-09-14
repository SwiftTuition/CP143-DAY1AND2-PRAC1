#include <stdio.h>
#include "parfait.h"

/*
 * Main testing program for the Yorozuya Parfait Calculator
 * This file tests your implementations
 */

int main() {
    int testsPassed = 0;
    int totalTests = 0;
    
    printf("=== YOROZUYA PARFAIT CALCULATOR TEST ===\n");
    printf("Testing Gintoki's parfait management...\n\n");
    
    // Test 1: Basic parfait count
    totalTests++;
    int count = calculateParfaitCount(1000, 150);
    if (count == 6) {
        printf("✓ Test 1 PASS: Basic parfait count\n");
        testsPassed++;
    } else {
        printf("✗ Test 1 FAIL: Expected 6, got %d\n", count);
    }
    
    // Test 2: Calculate change
    totalTests++;
    int change = calculateChangeLeft(1000, 150);
    if (change == 100) {
        printf("✓ Test 2 PASS: Change calculation\n");
        testsPassed++;
    } else {
        printf("✗ Test 2 FAIL: Expected 100, got %d\n", change);
    }
    
    // Test 3: Danger zone check
    totalTests++;
    int danger = isDangerZone(1000, 850);
    if (danger == 1) {
        printf("✓ Test 3 PASS: Danger zone detection\n");
        testsPassed++;
    } else {
        printf("✗ Test 3 FAIL: Should be in danger zone\n");
    }
    
    // Test 4: Not in danger zone
    totalTests++;
    int safe = isDangerZone(1000, 500);
    if (safe == 0) {
        printf("✓ Test 4 PASS: Safe zone detection\n");
        testsPassed++;
    } else {
        printf("✗ Test 4 FAIL: Should be in safe zone\n");
    }
    
    // Test 5: Weekly average
    totalTests++;
    int week[7] = {2, 3, 1, 4, 2, 3, 6};
    int avg = calculateWeeklyAverage(week);
    if (avg == 3) {
        printf("✓ Test 5 PASS: Weekly average\n");
        testsPassed++;
    } else {
        printf("✗ Test 5 FAIL: Expected 3, got %d\n", avg);
    }
    
    // Test 6: Even day check
    totalTests++;
    if (isEvenDay(4) == 1 && isEvenDay(5) == 0) {
        printf("✓ Test 6 PASS: Even/odd day check\n");
        testsPassed++;
    } else {
        printf("✗ Test 6 FAIL: Even/odd detection error\n");
    }
    
    // Test 7: Zero edge case
    totalTests++;
    if (isEvenDay(0) == 1) {
        printf("✓ Test 7 PASS: Zero is even\n");
        testsPassed++;
    } else {
        printf("✗ Test 7 FAIL: Zero should be even\n");
    }
    
    // Test 8: Division by zero protection
    totalTests++;
    int safeCount = calculateParfaitCount(1000, 0);
    if (safeCount == 0) {
        printf("✓ Test 8 PASS: Division by zero handled\n");
        testsPassed++;
    } else {
        printf("✗ Test 8 FAIL: Should handle zero cost\n");
    }
    
    // Display sample report
    printf("\n=== Sample Report Output ===\n");
    printParfaitReport(1000, 150, 6);
    
    // Final score
    printf("\n=== FINAL RESULTS ===\n");
    printf("Tests passed: %d/%d\n", testsPassed, totalTests);
    double percentage = (testsPassed * 100.0) / totalTests;
    printf("Score: %.1f%%\n", percentage);
    
    if (percentage >= 90) {
        printf("🍓 EXCELLENT! Gintoki can enjoy his parfaits!\n");
    } else if (percentage >= 70) {
        printf("🍰 Good work! But Otose is still watching...\n");
    } else if (percentage >= 50) {
        printf("🏠 Careful! Rent payment is at risk!\n");
    } else {
        printf("💸 Oh no! Eviction notice incoming!\n");
    }
    
    return 0;
}
