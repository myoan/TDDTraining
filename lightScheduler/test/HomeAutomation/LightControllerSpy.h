#include <LightController.h>

enum {
	LIGHT_ID_UNKNOWN = -1,
	LIGHT_STATE_UNKNOWN = -1,
	LIGHT_OFF = 0,
	LIGHT_ON = 1
};

extern int LightControllerSpy_GetLastId();
extern int LightControllerSpy_GetLastState();

extern void LightController_Create();
extern void LightController_Destroy();
extern void LightController_On(int id);
extern void LightController_Off(int id);
