/* 
 * File:   DHT11.h
 * Author: PC
 *
 * Created on 11 de marzo de 2022, 08:46 AM
 */

#ifndef DHT11_H
#define	DHT11_H

#ifdef	__cplusplus
extern "C" {
#endif

void DHT11_Start();
void DHT11_CheckResponse();
char DHT11_ReadData();


#ifdef	__cplusplus
}
#endif

#endif	/* DHT11_H */
