/* 
 *
 *  COPYRIGHT (c) 2013 Philipp Eppelt.
 *    philipp.eppelt@mailbox.tu-dresden.de
 *
 *  Purpose:   BSP part of the virtualization layer.
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.com/license/LICENSE.
 */

#ifndef RTEMS_VIRT_LAYER_BSP_H
#define RTEMS_VIRT_LAYER_BSP_H

/**
 * \brief Initializes the console.
 *
 */
int
_BSP_Virtual_Console_init(void);

/**
 * \brief Reads a character from the console.
 */
char
_BSP_Virtual_Char_read(void);

/**
 * \brief Writes a character to the console.
 */
void
_BSP_Virtual_Char_write(char* c);

/**
 * \brief Initializes the clock.
 */
int
_BSP_Virtual_Clock_init(void);

/**
 * \brief Reads the clock.
 */
int
_BSP_Virtual_Clock_read(void);

/**
 * \brief Handles faults delivered by the host system.
 *
 * POK will forward occuring faults to this handler.
 */
int
_BSP_Virtual_faulthandler(void);


/* Startup functions 
 */

int 
_BSP_Virtual_getworkspacearea( void );

#endif /* RTEMS_VIRT_LAYER_BSP_H */
