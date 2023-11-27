#ifndef _FISICA_H_
#define _FISICA_H_

#include <stdbool.h>

/** @brief Calcola la velocità in moto rettilineo uniforme
 Calcola la velocità di un corpo dato lo spazio percorso in un intervallo di tempo,
 considerando un moto rettilineo uniforme

 Vincoli
 Nel nostro dominio applicativo, spazio e tempo devono essere sempre positivi o uguali a zero.
 Se lo spazio o il tempo sono negativi, ritornare sempre il valore 0.0F
*/
float calcola_velocita_moto_rett_unif(float s, float t);

/** @brief Calcola la velocità in moto uniformemente accelerato
 Calcola la velocità di un corpo in un moto uniformemente accelerato,
 data l'accelerazione (costante), la velocità iniziale ed il tempo trascorso

 Vincoli
 Nel nostro dominio applicativo, l'accelerazione non può essere superiore a 15. Se è superiore, ritornare Not a Number (NAN)
 Nota: la costante NAN si trova dentro la libreria math.h

 @return la velocità del corpo
*/
float calcola_velocita_moto_unif_acc(float acc, float v0, float t);

/** @brief Stampa i valori della velocità dei punti del moto uniformemente accelerato con t che va da 0 a 5 con intervalli di 0.2
 * Attenzione: deve stampare anche i valori i valori estremi dell'intervallo di t
  @return void
 */
void plot_velocita_moto_unif_acc(float acc, float v0);

#endif  /* _FISICA_H_ */