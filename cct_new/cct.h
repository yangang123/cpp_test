#ifndef _CCT_H_
#define _CCT_H_

#include <stdint.h>
#include "manual_ctrl.h"
#define LED_CCT_BASE_NUM_FLOAT  10.0f
#define LED_CCT_BASE_NUM  		10

#define LED_CCT_BASE_MAX  		37
#define LED_CCT_BASE_VALUE 		27

#define LED_CCT_GET_INDEX(VAL) (VAL - LED_CCT_BASE_VALUE)


#define B_PWM(cur_dim,a_pwm) (cur_dim-a_pwm)

#pragma pack(1)
struct ch_attr_desc_s{
	uint8_t dimmer;
	uint8_t cct;
};
#pragma pack ()

typedef struct {
	uint8_t pwm0;
	uint8_t pwm1;
}cct_ch_t;

typedef struct ch_attr_desc_s ch_attr_desc_t;
void pwm_test(void);
void ch_cct_dimmer_to_pwm1(ch_attr_desc_t *ch_attr_priv, led_pwm_t *pwm, uint8_t group);
#endif /* _CCT_H_ */
