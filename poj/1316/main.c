#include <stdio.h>

#define N 10000

unsigned g[N];

unsigned sum_of_digits(unsigned n)
{
    if (n < 10) 
        return n;
    else 
        return (n%10) + sum_of_digits(n / 10);
}


void generate_sequence(unsigned n)
{
    while (n < N) {

        unsigned next = n + sum_of_digits(n);

        if (next >= N || g[next] != next) 
            return;
        g[next] = n;
        n = next;
    }
}

void main()
{
    //FILE *out; 
    unsigned n;

    for (n = 1; n < N; ++n)
        g[n] = n; 

    for (n = 1; n < N; ++n)
        generate_sequence(n);

    //out = fopen("self.out", "w");
    for (n = 1; n < N; ++n)
        if (g[n] == n)
            fprintf(stdout, "%u\n", n);

}
