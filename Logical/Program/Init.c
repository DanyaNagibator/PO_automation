
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	fb_motor1.dt = 0.02;
	fb_motor1.ke = 0.23;
	fb_motor1.Tm = 0.1;
	fb_motor1.u = 0;
	
	fb_motor2.dt = 0.02;
	fb_motor2.ke = 0.23;
	fb_motor2.Tm = 0.1; 
	fb_motor2.u = 0;
	
	

	fb_controller.dt = 0.015;
	fb_controller.k_i = 4.9;
	fb_controller.k_p = 0.46;
	fb_controller.max_abs_value = 24.0;
	

	
	
	speed = 0;
	counter = 0;
	enable = 1;
}
