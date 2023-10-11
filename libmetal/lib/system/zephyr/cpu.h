/*
 * Copyright (c) 2023 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * @file	cpu.h
 * @brief	Zephyr native test environment CPU specific primitives
 */

#ifndef __METAL_ZEPHYR_CPU__H__
#define __METAL_ZEPHYR_CPU__H__

#include <zephyr/kernel.h>

static inline void metal_cpu_yield(void)
{
	/*
	 * In Zephyr's native test environment let 1 microsecond pass
	 *  to allow other threads to run
	 */
	k_busy_wait(1);
};

#endif /* __METAL_ZEPHYR_CPU__H__ */
