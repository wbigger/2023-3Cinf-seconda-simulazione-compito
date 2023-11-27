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
        s = 10.0F;
        t = 2.0F;
        v = calcola_velocita_moto_rett_unif(s,t);
        printf("La velocita' per s=%0.2f m, t=%0.2f s e': %0.2f m/s\n", s,t,v);
        assert(v == 5.0F);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        s = 100.0F;
        t = 0.0F;
        v = calcola_velocita_moto_rett_unif(s,t);
        printf("La velocita' per s=%0.2f m, t=%0.2f s e': %0.2f m/s\n", s,t,v);
        assert(v == INFINITY);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        s = 0.0F;
        t = 10.0F;
        v = calcola_velocita_moto_rett_unif(s,t);
        printf("La velocita' per s=%0.2f m, t=%0.2f s e': %0.2f m/s\n", s,t,v);
        assert(v == 0.0F);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        s = 0.0F;
        t = 0.0F;
        v = calcola_velocita_moto_rett_unif(s,t);
        printf("La velocita' per s=%0.2f m, t=%0.2f s e': %0.2f m/s\n", s,t,v);
        assert(isnan(v));
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        s = -10.0F;
        t = 0.0F;
        v = calcola_velocita_moto_rett_unif(s,t);
        printf("La velocita' per s=%0.2f m, t=%0.2f s e': %0.2f m/s\n", s,t,v);
        assert(v == 0);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        s = 10.0F;
        t = -5.0F;
        v = calcola_velocita_moto_rett_unif(s,t);
        printf("La velocita' per s=%0.2f m, t=%0.2f s e': %0.2f m/s\n", s,t,v);
        assert(v == 0);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");


        // Test
        s = -200.0F;
        t = -50.0F;
        v = calcola_velocita_moto_rett_unif(s,t);
        printf("La velocita' per s=%0.2f m, t=%0.2f s e': %0.2f m/s\n", s,t,v);
        assert(v == 0);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        s = 0.0F;
        t = -50.0F;
        v = calcola_velocita_moto_rett_unif(s,t);
        printf("La velocita' per s=%0.2f m, t=%0.2f s e': %0.2f m/s\n", s,t,v);
        assert(v == 0);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        s = -160.0F;
        t = 0.0F;
        v = calcola_velocita_moto_rett_unif(s,t);
        printf("La velocita' per s=%0.2f m, t=%0.2f s e': %0.2f m/s\n", s,t,v);
        assert(v == 0);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

    }

    /** Test funzione calcola_acc_unif*/
    {
        float acc,v0,t,v;

        // Test
        acc = 10.0F;
        v0 = 0.0F;
        t = 1.0F;
        v = calcola_velocita_moto_unif_acc(acc,v0,t);
        printf("La velocita' per acc=%0.2f m/s2, v0=%0.2f m/s, t = %0.2f s e': %0.2f m/s\n", acc,v0,t,v);
        assert(v == 10.0F);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        acc = 10.0F;
        v0 = 1.0F;
        t = 2.0F;
        v = calcola_velocita_moto_unif_acc(acc,v0,t);
        printf("La velocita' per acc=%0.2f m/s2, v0=%0.2f m/s, t = %0.2f s e': %0.2f m/s\n", acc,v0,t,v);
        assert(v == 21.0F);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

         // Test
        acc = 0.0F;
        v0 = -1.0F;
        t = 1.0F;
        v = calcola_velocita_moto_unif_acc(acc,v0,t);
        printf("La velocita' per acc=%0.2f m/s2, v0=%0.2f m/s, t = %0.2f s e': %0.2f m/s\n", acc,v0,t,v);
        assert(v == -1.0F);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

         // Test
        acc = 3.0F;
        v0 = 8.0F;
        t = 0.0F;
        v = calcola_velocita_moto_unif_acc(acc,v0,t);
        printf("La velocita' per acc=%0.2f m/s2, v0=%0.2f m/s, t = %0.2f s e': %0.2f m/s\n", acc,v0,t,v);
        assert(v == 8.0F);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        acc = 0.0F;
        v0 = 0.0F;
        t = 0.0F;
        v = calcola_velocita_moto_unif_acc(acc,v0,t);
        printf("La velocita' per acc=%0.2f m/s2, v0=%0.2f m/s, t = %0.2f s e': %0.2f m/s\n", acc,v0,t,v);
        assert(v == 0.0F);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        acc = 20;
        v0 = 0;
        t = 10;
        v = calcola_velocita_moto_unif_acc(acc,v0,t);
        printf("La velocita' per acc=%0.2f m/s2, v0=%0.2f m/s, t = %0.2f s e': %0.2f m/s\n", acc,v0,t,v);
        assert(isnan(v));
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");
    }

    /** Test funzione plot */
    // PUNTO BONUS!!!
    plot_velocita_moto_unif_acc(5,1);

    printf("Tutti i test sono andati a buon fine\n");
    printf("Punteggio finale: %d/%d\n", n_punti_test, n_punti_test);
    printf("Per il punto bonus: correzione manuale del professore\n");
    return n_punti_test;
}