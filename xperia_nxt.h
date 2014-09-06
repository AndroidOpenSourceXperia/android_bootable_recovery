/*
 *
 * Constants For Xperia NXT Series
 *
 */

#ifndef XPERIA_NXT_H
#define XPERIA_NXT_H

#define BATTERY_CAPACITY_FILE "/sys/class/power_supply/ab8500_fg/capacity"
#define BATTERY_CHARGING_STATUS_FILE "/sys/class/power_supply/ab8500_chargalg/status"

#ifdef XPERIA_U
	#define RED_LED_FILE "/sys/devices/platform/nmk-i2c.2/i2c-2/2-0040/leds/pwr-red/brightness"
	#define GREEN_LED_FILE "/sys/devices/platform/nmk-i2c.2/i2c-2/2-0040/leds/pwr-green/brightness"
#endif /* XPERIA_U */
#if (defined XPERIA_GO || defined XPERIA_SOLA)
	#define RED_LED_FILE "/sys/devices/platform/nmk-i2c.2/i2c-2/2-0040/leds/red/brightness"
	#define GREEN_LED_FILE "/sys/devices/platform/nmk-i2c.2/i2c-2/2-0040/leds/green/brightness"
#endif /* XPERIA_GO, XPERIA_SOLA */
#ifdef XPERIA_P
	#define RED_LED_FILE "/sys/devices/platform/nmk-i2c.2/i2c-2/2-0036/leds/red/brightness"
	#define GREEN_LED_FILE "/sys/devices/platform/nmk-i2c.2/i2c-2/2-0036/leds/green/brightness"
#endif /* XPERIA_P */

#endif
