#include "hardware_config.h"
#include "control_logic.h"
#include "drv_timer.h"
#include "math.h"
#include "ins.h"
#include "bmi088.h"
/**
  * @brief  ��ʱ���жϻص�
  */


void TIM1_Task(void)
{
	tim1.ClockTime++;

	INS_attitude = INS_GetAttitude(IMU_data);

}








