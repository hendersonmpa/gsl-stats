#include <apop.h>

/*
gcc -g -Wall -Werror -std=gnu99  wbtodata.c -L/usr/local/lib/ -lapophenia -lgsl -o wbtodata
this works too!
gcc -g -Wall -Werror -std=gnu99  wbtodata.c  -lapophenia -lgsl -o wbtodata 
*/

void percap(gsl_vector *in){
    double gdp_per_cap  = gsl_vector_get(in, 1)/gsl_vector_get(in, 0);
    gsl_vector_set(in, 2, gdp_per_cap); //column 2 is gdp_per_cap.
}

int main(){
    apop_db_open("data-wb.db");
    apop_opts.db_name_column = "country";
    apop_data *d   = apop_query_to_data("select pop.country as country, \
        pop.population as pop, gdp.GDP as GDP, 1 as GDP_per_cap\
        from pop, gdp \
        where pop.country == gdp.country");
    apop_matrix_apply(d->matrix, percap);
    apop_data_show(d);
    apop_data_print(d, "wbtodata_output", .output_type='d');
}
