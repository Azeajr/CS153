#include <stdio.h>

typedef enum {Jan, Feb, Mar, Apr, May, Jun,
              Jul, Aug, Sep, Oct, Nov, Dec} monthname;

typedef enum {Mon, Tue, Wed, Thu, Fri, Sat} dayname;
                
typedef struct{
    monthname month ;
    dayname day;
    int number;
} Date;

void printDate(Date *date){
    char *monthstrings[] = {"January", "February", "March", "April",
                            "May", "June", "July", "August",
                            "September", "October", "November", "December"};
    
    char *daystrings[] = {"Monday", "Tuesday", "Wednesday",
                          "Thursday", "Friday"};
    
    printf("%s, %s %2d\n", daystrings[date->day],monthstrings[date->month], date->number);
}

void setDate(Date *date, int number, dayname day, monthname month){
    if(number >= 1 && number <= 31){
        date->day = day;
        date->month = month;
        date->number = number;
    }
}

int main(int argc, char *argv[]){
    Date birthday, duedate;
    
    setDate(&birthday, 22, Wed, Feb);
    setDate(&duedate, 13, Fri, Aug);
    
    printDate(&birthday);
    printDate(&duedate);
    
    return 0;
}