/** Kerrighed Checkpoint-Library Interface
 *  @file libkrgcheckpoint.h
 *
 *  @author Matthieu Fertré
 */

#ifndef LIBKRGCHECKPOINT_H
#define LIBKRGCHECKPOINT_H

int cr_disable(void);
int cr_enable(void);

typedef int (*cr_mm_excl_callback_t)(void *);

int cr_exclude_on(void *data, size_t datasize,
		  cr_mm_excl_callback_t func, void *arg);

int cr_exclude_off(void *data);

#endif // LIBKRGCHECKPOINT_H
