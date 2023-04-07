#include <stdio.h>

#define DISKS_MAX 100

unsigned long long int memo[DISKS_MAX + 1] = {0};

unsigned long long int hanoi(int disks) {
    if (disks == 1) {
        return 1;
    } else if (memo[disks] != 0) {
        return memo[disks];
    } else {
        memo[disks] = 2 * hanoi(disks - 1) + 1;
        return memo[disks];
    }
}

int main() {
    int disks;

    scanf("%d", &disks);

    printf("%llu\n", hanoi(disks));

    return 0;
}