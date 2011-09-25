#ifndef _CARINPUT_H
#define _CARINPUT_H

namespace CARINPUT
{
enum CARINPUT
{
	//actual car inputs that the car uses
	THROTTLE,
 	BRAKE,
  	HANDBRAKE,
   	CLUTCH,
  	STEER_LEFT,
   	STEER_RIGHT,
 	SHIFT_UP,
  	SHIFT_DOWN,
   	START_ENGINE,
    ABS_TOGGLE,
    TCS_TOGGLE,
    NEUTRAL,
    FIRST_GEAR,
	SECOND_GEAR,
 	THIRD_GEAR,
  	FOURTH_GEAR,
   	FIFTH_GEAR,
    SIXTH_GEAR,
    REVERSE,
	REAR_VIEW,
	ROLLOVER_RECOVER,

    //inputs that are used elsewhere in the game only
    GAME_ONLY_INPUTS_START_HERE,
 	VIEW_PREV,
 	VIEW_NEXT,
    VIEW_HOOD,
    VIEW_INCAR,
    VIEW_CHASERIGID,
    VIEW_CHASE,
	VIEW_ORBIT,
 	VIEW_FREE,
  	PAN_LEFT,
   	PAN_RIGHT,
    PAN_UP,
    PAN_DOWN,
    ZOOM_IN,
    ZOOM_OUT,
	SCREENSHOT,
 	PAUSE,
  	RELOAD_SHADERS,
    RELOAD_GUI,

	INVALID
};
}

#endif