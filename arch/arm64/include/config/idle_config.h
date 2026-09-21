/* CPU Idle State Configuration for SM8250 */
#ifndef __CONFIG_IDLE_H
#define __CONFIG_IDLE_H

/* Idle state thresholds (in microseconds) */
#define IDLE_THRESHOLD_STANDBY    1000    /* 1ms - shallow idle */
#define IDLE_THRESHOLD_MEMSCALE   5000    /* 5ms - memory save */
#define IDLE_THRESHOLD_POWERDOWN  50000   /* 50ms - deep idle */

/* Idle governor selection */
#define IDLE_GOVERNOR            "cpuidle"

/* Power optimization flags */
#define IDLE_POWER_OPTIMIZATION  1
#define IDLE_PERFORMANCE_OPTIMIZATION 0

/* SM8250 specific settings */
#define QCOM_MAX_IDLE_STATES      3
#define ARM_BIG_LITTLE_IDLE_SYNCH 1

#endif /* __CONFIG_IDLE_H */
