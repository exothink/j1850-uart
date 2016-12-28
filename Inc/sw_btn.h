/* btn byte syntax:
* 1st byte: time cnt bits 7&8, eg: 1 to 3
* 2nd byte: ACTION (ACT)
* opt 3rd byte: PRESS, ROTATION POT for VOL
* opt 4rd byte: ROTATION POT for DRV TEMP
* opt 5th byte: ROTATION POT for PGR TEMP
* last byte is CRC
*/

#define HU_PRESS_1 0x21 //00100001 
#define HU_PRESS_2 0x22 //00100010 
#define HU_PRESS_3 0x23 //00100011 
#define HU_PRESS_4 0x24 //00100100
#define HU_PRESS_5 0x25 //00100101
#define HU_PRESS_6 0x26 //00100110

#define HU_ACT_VOL_PRESS 0x32 //00110010 // W/O Release
#define HU_ACT_PRESS 0x34 //00110100
#define HU_ACT_RELEASE 0x37 // 00110111

#define HU_ACT_ROTATION 0x3A //00111010 VOL_ROTATION DRV_ROTATION PGR_ROTATION
#define HU_POT_ROTATION_CW_MASK 0x01 //00111010 00000XXX 00000XXX 00000XXX
#define HU_POT_ROTATION_CCW_MASK 0xF8 //00111010 11111XXX 11111XXX 11111XXX 

#define HU_ACT_DEF_PRESS 0x4C //01001100 // W/O Release

#define HU_PRESS_DRV_TEMP 0x43 //01000011
#define HU_PRESS_PGR_TEMP 0x44 //01000100

#define HU_PRESS_SRC_TV 0x31 //00110001
#define HU_PRESS_SRC_RAD 0x32 //00110010 
#define HU_PRESS_SRC_CHG 0x33 //00110011
#define HU_PRESS_SRC_TAPE 0x34 //00110100

#define HU_PRESS_FLOW_DIR_DRV 0x41 //01000001
#define HU_PRESS_FLOW_DIR_PGR 0x42 //01000010 

#define HU_PRESS_FLOW_DIR_FRONT 0x45 //01000101
#define HU_PRESS_FLOW_SRC_INT 0x46 //01000110 
#define HU_PRESS_FLOW_SRC_EXT 0x47 //01000111  

#define HU_PRESS_FLOW_INC 0x49 //01001001
#define HU_PRESS_FLOW_DEC 0x4A //01001010
#define HU_PRESS_FLOW_ADDICTED 0x4B //01001011 
#define HU_PRESS_OFF 0x4D //01001101

#define HU_PRESS_UP 0x51 //01010001
#define HU_PRESS_DOWN 0x52 //01010010
#define HU_PRESS_ATT 0x53 //01010011
#define HU_PRESS_SOUND 0x54 //01010100 
