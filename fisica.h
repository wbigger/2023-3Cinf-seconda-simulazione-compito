#ifndef _FISICA_H_
#define _FISICA_H_

#include <stdbool.h>

/** @brief Calcola la velocità in moto rettilineo uniforme
 Calcola la velocità di un corpo dato lo spazio percorso in un intervallo di tempo,
 considerando un moto rettilineo uniforme
 @return la velocità del corpo
*/
float calcola_velocita_moto_rett_unif(float s, float t);

/** @brief Calcola la velocità in moto uniformemente accelerato
 Calcola la velocità di un corpo in un moto uniformemente accelerato,
 data l'accelerazione (costante), la velocità iniziale ed il tempo trascorso
 @return la velocità del corpo
*/
float calcola_accelerazione_moto_unif_acc(float acc, float v0, float t);

#endif  /* _FISICA_H_ */