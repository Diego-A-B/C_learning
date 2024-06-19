#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

struct Date {
    enum Month month;
    int day;
};

const int daysInMonth[] = {
    0, // to align array index with month number
    31, // January
    28, // February
    31, // March
    30, // April
    31, // May
    30, // June
    31, // July
    31, // August
    30, // September
    31, // October
    30, // November
    31  // December
};

void printDate(struct Date date) {
    const char *monthNames[] = {
        "Invalid", // Index 0, not used
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    printf("Today is %s %d\n", monthNames[date.month], date.day);
}
void printNextDate(struct Date date) {
    const char *monthNames[] = {
        "Invalid", // Index 0, not used
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    printf("Tomorrow is %s %d\n", monthNames[date.month], date.day);
}

struct Date nextDay(struct Date date) {
    if (date.day < daysInMonth[date.month]) {
        date.day++;
    } else {
        date.day = 1;
        if (date.month < DECEMBER) {
            date.month++;
        } else {
            date.month = JANUARY;
        }
    }
    return date;
}

int main() {
   
    struct Date today1 = {FEBRUARY, 28};
    printDate(today1);

    struct Date tomorrow1 = nextDay(today1);
    printNextDate(tomorrow1);

    struct Date today2 = {MARCH, 14};
    printDate(today2);

    struct Date tomorrow2 = nextDay(today2);
    printNextDate(tomorrow2);

    struct Date today3 = {OCTOBER, 31};
    printDate(today3);

    struct Date tomorrow3 = nextDay(today3);
    printNextDate(tomorrow3);

    struct Date today4 = {DECEMBER, 31};
    printDate(today4);

    struct Date tomorrow4 = nextDay(today4);
    printNextDate(tomorrow4);


    return 0;
}
