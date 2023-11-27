#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <math.h>

#include "fisica.h"

int main()
{
    /** IMPORTANTE */
    /* NON MODIFICARE IL CONTENUTO DI QUESTO FILE!!! */

    int n_punti_test = 0;

    /** Test funzione calcola_velocita_rett_unif */
    {
        float s,t,v;

        // Test
        s = 100.0F;
        t = 1.0F;
        v = calcola_velocita_moto_rett_unif(s,t);
        printf("La velocità per s=%f m, t=%f s è: %f m/s\n", s,t,v);
        assert(v == 100.0F);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        s = 10.0F;
        t = 2.0F;
        v = calcola_velocita_moto_rett_unif(s,t);
        printf("La velocità per s=%f m, t=%f s è: %f m/s\n", s,t,v);
        assert(v == 5.0F);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        s = 100.0F;
        t = 0.0F;
        v = calcola_velocita_moto_rett_unif(s,t);
        printf("La velocità per s=%f m, t=%f s è: %f m/s\n", s,t,v);
        assert(v == INFINITY);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        s = 0.0F;
        t = 10.0F;
        v = calcola_velocita_moto_rett_unif(s,t);
        printf("La velocità per s=%f m, t=%f s è: %f m/s\n", s,t,v);
        assert(v == 0.0F);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        s = 0.0F;
        t = 0.0F;
        v = calcola_velocita_moto_rett_unif(s,t);
        printf("La velocità per s=%f m, t=%f s è: %f m/s\n", s,t,v);
        assert(isnan(v) == true);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");
    }

    /** Test funzione calcola_acc_unif*/
    {
        float acc,v0,t,v;

        // Test
        acc = 100.0F;
        v0 = 0.0F;
        t = 1.0F;
        v = calcola_accelerazione_moto_unif_acc(acc,v0,t);
        printf("La velocità per acc=%f m/s2, v0=%f m/s, t = %f s è: %f m/s\n", acc,v0,t,v);
        assert(v == 100.0F);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");
    }

    printf("Tutti i test sono andati a buon fine");
    printf("Punteggio finale: %d/%d", n_punti_test, n_punti_test);
    return n_punti_test;
}