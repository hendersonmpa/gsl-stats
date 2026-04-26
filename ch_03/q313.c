#include <apop.h>

/*
gcc -g -Wall -Werror -std=gnu99  wbtodata.c -L/usr/local/lib/ -lapophenia -lgsl -o wbtodata
this works too!
gcc -g -Wall -Werror -std=gnu99  q313.c  -lapophenia -lgsl -o q313
*/

int main(){
    apop_db_open("data-climate.db");
    apop_data *anova_tab = apop_db_to_crosstab("anovatab", "year", "month", "mean");
    apop_data_print(anova_tab, "temp_output", .output_type='f');
}
