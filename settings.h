//Change settings here instead of in the other library files.

/*
THIS ONE DOESNT WORK YET JUST LEAVE IT AT THE DEFAULT
##LED ORDER OPTIONS## 
Select how many LEDS are in your setup from the list, or leave at _LED_ORDER_FULL for the default 23 LEDS
_LED_ORDER_FULL
_LED_ORDER_NO_MENU
_LED_ORDER_NO_MENU_NO_JOY
*/
#define  _LED_ORDER_FULL true

/*
##LED BRIGHTNESS##
Set your brightness to a value between 0 and 1 (example 0.5 is half bright)
*/
#define _LED_BRIGHTNESS 0.5

/*
##IDLE COLOR##
Set your IDLE color here, this will affect ALL animations that have a single color, you can select from the list or define your own value in the format RRR,GGG,BBB (example 255,255,255 is white)
BLACK  (buttons are OFF)
RED    
GREEN  
YELLOW 
BLUE   
PURPLE 
CYAN   
WHITE  
MAGENTA
ORANGE 
*/
#define _IDLE_COLOR WHITE

/*
##ON PRESS BUTTON COLOR##
Set button color on press, same color options as above. 
Add a // to the begginning of the _COLOR_RANDOM line to use the color on press.
*/
//#define _COLOR_RANDOM

//Change to BLACK to have them remain off.
#define _ON_PRESS_BTN_COLOR BLACK

/*
##START UP ANIMATION##
Define which startup animation should play from the list, or leave at START_DEFAULT_ANIMATION for the default one.
_START_DEFAULT_ANIMATION
_START_WALK_ANIMATION
_START_STAR_ANIMATION
*/
#define _STARTUP_ANIMATION _START_DEFAULT_ANIMATION

/*
##IDLE ANIMATION##
You can select an individual animation here from the list, or leave at _IDLE_DEFAULT for the deafaule animation, remove the // from _IDLE_ALL to be able to cycle through the animations using the HOME button
_IDLE_ALL
_IDLE_DEFAULT
_IDLE_WALK_ANIMATION
_IDLE_STAR_ANIMATION
_IDLE_BREATHE_ANIMATION
_IDLE_BREATHE_MAC_ANIMATION
*/
#define _IDLE_ANIMATION _IDLE_DEFAULT

//#define _IDLE_ALL true

// IDLE BUTTON COLOR
// Color for buttons when they are idle
#define _IDLE_BTN_K1_COLOR RED
#define _IDLE_BTN_K2_COLOR RED
#define _IDLE_BTN_K3_COLOR YELLOW
//#define _IDLE_BTN_K4_COLOR YELLOW
#define _IDLE_BTN_P1_COLOR RED
#define _IDLE_BTN_P2_COLOR RED
#define _IDLE_BTN_P3_COLOR YELLOW
#define _IDLE_BTN_P4_COLOR BLACK

#define _IDLE_BTN_2K1_COLOR BLACK
#define _IDLE_BTN_2K2_COLOR BLACK
#define _IDLE_BTN_2K3_COLOR BLACK
//#define _IDLE_BTN_K4_COLOR YELLOW
#define _IDLE_BTN_2P1_COLOR RED
#define _IDLE_BTN_2P2_COLOR YELLOW
#define _IDLE_BTN_2P3_COLOR GREEN
#define _IDLE_BTN_2P4_COLOR BLUE
