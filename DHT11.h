#ifndef _DHT11_H_
#define _DHT11_H_

#include "ZComDef.h"

#if defined( CC2541) || defined( CC2541S )
#include <ioCC2541.h>
#else // CC2540
#include <ioCC2540.h>
#endif // CC2541 || CC2541S


/******************************************************************************
 * CONSTANTS
 */


/******************************************************************************
 * PUBLIC FUNCTIONS
 */
int ReadValue(uint8 *sv);

#endif // _DHT11_H_




