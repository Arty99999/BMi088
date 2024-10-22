#include "drv_timer.h"
#include "control_logic.h"
TIM_Object tim1;
TIM_Object tim15;

/*-------------------------------��ʼ��---------------------------------*/
void TIMx_Init(TIM_HandleTypeDef* handle, TIM_ElapsedCallback callback)
{
	if(handle->Instance == TIM1)
	{
	  tim1.Handle = handle;
		tim1.ElapCallback = callback;
	}
	else if(handle->Instance == TIM15)
	{
	  tim15.Handle = handle;
		tim15.ElapCallback = callback;
	}
		
	
}


/*-------------------------------������ʱ������ж�---------------------------------*/
void TIM_Open(TIM_Object* tim)
{
	HAL_TIM_Base_Start_IT(tim->Handle);
}

/*-------------------------------��ʱ������жϻص�---------------------------------*/
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)	
{
	if(htim==(&htim1))
	{
		tim1.ElapCallback();
	}
}