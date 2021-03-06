#ifndef _KD_CAMERA_HW_H_
#define _KD_CAMERA_HW_H_
 

#include <mach/mt_gpio.h>
#include <mach/mt_pm_ldo.h>
#include "pmic_drv.h"

//main camera power config.
//Analog 
#define CAMERA_POWER_VCAM_A MT6331_POWER_LDO_VCAMA
//Digital 
#define CAMERA_POWER_VCAM_D MT6331_POWER_LDO_VCAM_IO 
//AF 
#define CAMERA_POWER_AF    MT6331_POWER_LDO_VCAM_AF 

//sub camera power config 
#define CAMERA_POWER_VCAM_A2 MT6331_POWER_LDO_VCAMA
//digital io
#define CAMERA_POWER_VCAM_D2 MT6331_POWER_LDO_VCAM_IO
//digital core 
#define CAMERA_POWER_VCAM_DC2 MT6331_POWER_LDO_VGP3

#ifdef GPIO_CAMERA_MAIN_DVDD_ENADBLE_PIN
#define CAMERA_POWER_VCAM_IO_LDO_EN GPIO_CAMERA_MAIN_DVDD_ENADBLE_PIN
#endif
//FIXME, should defined in DCT tool 
//Main sensor
#define CAMERA_CMRST_PIN            GPIO_CAMERA_INVALID 
#define CAMERA_CMRST_PIN_M_GPIO     GPIO_CAMERA_CMRST_PIN_M_GPIO

#define CAMERA_CMPDN_PIN            (GPIO10|0x80000000) 
#define CAMERA_CMPDN_PIN_M_GPIO     GPIO_MODE_00 
#define CAMERA_CMPDN_PIN_ON	    GPIO_OUT_ONE
#define CAMERA_CMPDN_PIN_OFF	    GPIO_OUT_ZERO

//FRONT sensor
#define CAMERA_CMRST1_PIN           GPIO_CAMERA_INVALID 
#define CAMERA_CMRST1_PIN_M_GPIO    GPIO_CAMERA_CMRST1_PIN_M_GPIO 

#define CAMERA_CMPDN1_PIN           (GPIO15|0x80000000)
#define CAMERA_CMPDN1_PIN_M_GPIO    GPIO_MODE_00
#define CAMERA_CMPDN1_PIN_ON	    GPIO_OUT_ONE
#define CAMERA_CMPDN1_PIN_OFF	    GPIO_OUT_ZERO

//Main2 sensor
#define CAMERA_CMRST2_PIN           GPIO_CAMERA_CMRST_PIN 
#define CAMERA_CMRST2_PIN_M_GPIO    GPIO_CAMERA_CMRST_PIN_M_GPIO

#define CAMERA_CMPDN2_PIN           GPIO_CAMERA_CMPDN_PIN 
#define CAMERA_CMPDN2_PIN_M_GPIO    GPIO_CAMERA_CMPDN_PIN_M_GPIO 

#endif 
