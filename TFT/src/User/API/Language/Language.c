#include "Language.h"
#include "includes.h"
#include "language_en.h"
#include "language_cn.h"
#include "language_ru.h"
#include "language_jp.h"
#include "language_de.h"
#include "language_am.h"
#include "language_cz.h"
#include "language_es.h"
#include "language_fr.h"


const char *const en_pack[LABEL_NUM]={
  EN_LANGUAGE,
  EN_HEAT,
  EN_MOVE,
  EN_HOME,
  EN_PRINT,
  EN_EXTRUDE,
  EN_FAN,
  EN_SETTINGS,
  EN_SCREEN_SETTINGS,
  EN_MACHINE_SETTINGS,
  EN_FEATURE_SETTINGS,
  EN_SILENT_ON,
  EN_SILENT_OFF,
  EN_SHUT_DOWN,
  EN_RGB_SETTINGS,
  EN_RGB_RED,
  EN_RGB_GREEN,
  EN_RGB_BLUE,
  EN_RGB_WHITE,
  EN_RGB_OFF,
  EN_GCODE,
  EN_CUSTOM,
  CUSTOM_0_LABEL,
  CUSTOM_1_LABEL,
  CUSTOM_2_LABEL,
  CUSTOM_3_LABEL,
  CUSTOM_4_LABEL,
  CUSTOM_5_LABEL,
  CUSTOM_6_LABEL,
  EN_LEVELING,
  EN_POINT_1,
  EN_POINT_2,
  EN_POINT_3,
  EN_POINT_4,
  EN_ABL,
  EN_BLTOUCH,
  EN_BLTOUCH_TEST,
  EN_BLTOUCH_DEPLOY,
  EN_BLTOUCH_STOW,
  EN_BLTOUCH_REPEAT,
  EN_PROBE_OFFSET,
  EN_EEPROM_SAVE,
  EN_INC,
  EN_DEC,
  EN_NOZZLE,
  EN_BED,
  EN_STOP,
  EN_BACK,
  EN_PAGE_UP,
  EN_PAGE_DOWN,
  EN_PAUSE,
  EN_RESUME,
  EN_LOAD,
  EN_UNLOAD,
  EN_SLOW_SPEED,
  EN_NORMAL_SPEED,
  EN_FAST_SPEED,
  EN_FAN_FULL_SPEED,
  EN_FAN_HALF_SPEED,
  EN_ROTATE_UI,
  EN_TOUCHSCREEN_ADJUST,
  EN_MORE,
  EN_SCREEN_INFO,
  EN_WHITE,
  EN_BLACK,
  EN_BLUE,
  EN_RED,
  EN_GREEN,
  EN_CYAN,
  EN_YELLOW,
  EN_BROWN,
  EN_GRAY,
  EN_DISCONNECT,
  EN_BAUDRATE_115200,
  EN_BAUDRATE_250000,
  EN_RUNOUT_OFF,
  EN_RUNOUT_ON,
  EN_SMART_RUNOUT_ON,
  EN_PERCENTAGE,
  EN_BABYSTEP,
  EN_PERCENTAGE_SPEED,
  EN_PERCENTAGE_FLOW,
  EN_VALUE_ZERO,
  EN_1_DEGREE,
  EN_5_DEGREE,
  EN_10_DEGREE,
  EN_X_INC,
  EN_Y_INC,
  EN_Z_INC,
  EN_X_DEC,
  EN_Y_DEC,
  EN_Z_DEC,
  EN_X_HOME,
  EN_Y_HOME,
  EN_Z_HOME,
  EN_001_MM,
  EN_01_MM,
  EN_1_MM,
  EN_5_MM,
  EN_10_MM,
  EN_1_PERCENT,
  EN_5_PERCENT,
  EN_10_PERCENT,
  EN_READY,
  EN_BUSY,
  EN_UNCONNECTED,
  EN_DISCONNECT_INFO,
  EN_LOADING,
  EN_POWER_FAILED,
  EN_CONTINUE,
  EN_CANNEL,
  EN_ADJUST_TITLE,
  EN_ADJUST_INFO,
  EN_ADJUST_OK,
  EN_ADJUST_FAILED,
  EN_WARNING,
  EN_STOP_PRINT,
  EN_CONFIRM,
  EN_TFTSD,
  EN_READ_TFTSD_ERROR,
  EN_TFTSD_INSERTED,
  EN_TFTSD_REMOVED,
  EN_U_DISK,
  EN_READ_U_DISK_ERROR,
  EN_U_DISK_INSERTED,
  EN_U_DISK_REMOVED,
  EN_ONBOARDSD,
  EN_READ_ONBOARDSD_ERROR,
  EN_FILAMENT_RUNOUT,
  EN_PREHEAT,
  EN_PREHEAT_BOTH,
  EN_PREHEAT_PLA,
  EN_PREHEAT_PETG,
  EN_PREHEAT_ABS,
  EN_PREHEAT_CUSTOM1,
  EN_PREHEAT_CUSTOM2,
  EN_IS_PAUSE,
  EN_AUTO_SHUT_DOWN,
  EN_MANUAL_SHUT_DOWN,
};

const char *const cn_pack[LABEL_NUM]={
  CN_LANGUAGE,
  CN_HEAT,
  CN_MOVE,
  CN_HOME,
  CN_PRINT,
  CN_EXTRUDE,
  CN_FAN,
  CN_SETTINGS,
  CN_SCREEN_SETTINGS,
  CN_MACHINE_SETTINGS,
  CN_FEATURE_SETTINGS,
  CN_SILENT_ON,
  CN_SILENT_OFF,
  CN_SHUT_DOWN,
  CN_RGB_SETTINGS,
  CN_RGB_RED,
  CN_RGB_GREEN,
  CN_RGB_BLUE,
  CN_RGB_WHITE,
  CN_RGB_OFF,
  CN_GCODE,
  CN_CUSTOM,
  CUSTOM_0_LABEL,
  CUSTOM_1_LABEL,
  CUSTOM_2_LABEL,
  CUSTOM_3_LABEL,
  CUSTOM_4_LABEL,
  CUSTOM_5_LABEL,
  CUSTOM_6_LABEL,
  CN_LEVELING,
  CN_POINT_1,
  CN_POINT_2,
  CN_POINT_3,
  CN_POINT_4,
  CN_ABL,
  CN_BLTOUCH,
  CN_BLTOUCH_TEST,
  CN_BLTOUCH_DEPLOY,
  CN_BLTOUCH_STOW,
  CN_BLTOUCH_REPEAT,
  CN_PROBE_OFFSET,
  CN_EEPROM_SAVE,
  CN_INC,
  CN_DEC,
  CN_NOZZLE,
  CN_BED,
  CN_STOP,
  CN_BACK,
  CN_PAGE_UP,
  CN_PAGE_DOWN,
  CN_PAUSE,
  CN_RESUME,
  CN_LOAD,
  CN_UNLOAD,
  CN_SLOW_SPEED,
  CN_NORMAL_SPEED,
  CN_FAST_SPEED,
  CN_FAN_FULL_SPEED,
  CN_FAN_HALF_SPEED,
  CN_ROTATE_UI,
  CN_TOUCHSCREEN_ADJUST,
  CN_MORE,
  CN_SCREEN_INFO,
  CN_WHITE,
  CN_BLACK,
  CN_BLUE,
  CN_RED,
  CN_GREEN,
  CN_CYAN,
  CN_YELLOW,
  CN_BROWN,
  CN_GRAY,
  CN_DISCONNECT,
  CN_BAUDRATE_115200,
  CN_BAUDRATE_250000,
  CN_RUNOUT_OFF,
  CN_RUNOUT_ON,
  CN_SMART_RUNOUT_ON,
  CN_PERCENTAGE,
  CN_BABYSTEP,
  CN_PERCENTAGE_SPEED,
  CN_PERCENTAGE_FLOW,
  CN_VALUE_ZERO,
  CN_1_DEGREE,
  CN_5_DEGREE,
  CN_10_DEGREE,
  CN_X_INC,
  CN_Y_INC,
  CN_Z_INC,
  CN_X_DEC,
  CN_Y_DEC,
  CN_Z_DEC,
  CN_X_HOME,
  CN_Y_HOME,
  CN_Z_HOME,
  CN_001_MM,
  CN_01_MM,
  CN_1_MM,
  CN_5_MM,
  CN_10_MM,
  CN_1_PERCENT,
  CN_5_PERCENT,
  CN_10_PERCENT,
  CN_READY,
  CN_BUSY,
  CN_UNCONNECTED,
  CN_DISCONNECT_INFO,
  CN_LOADING,
  CN_POWER_FAILED,
  CN_CONTINUE,
  CN_CANNEL,
  CN_ADJUST_TITLE,
  CN_ADJUST_INFO,
  CN_ADJUST_OK,
  CN_ADJUST_FAILED,
  CN_WARNING,
  CN_STOP_PRINT,
  CN_CONFIRM,
  CN_TFTSD,
  CN_READ_TFTSD_ERROR,
  CN_TFTSD_INSERTED,
  CN_TFTSD_REMOVED,
  CN_U_DISK,
  CN_READ_U_DISK_ERROR,
  CN_U_DISK_INSERTED,
  CN_U_DISK_REMOVED,
  CN_ONBOARDSD,
  CN_READ_ONBOARDSD_ERROR,
  CN_FILAMENT_RUNOUT,
  CN_PREHEAT,
  CN_PREHEAT_BOTH,
  CN_PREHEAT_PLA,
  CN_PREHEAT_PETG,
  CN_PREHEAT_ABS,
  CN_PREHEAT_CUSTOM1,
  CN_PREHEAT_CUSTOM2,
  CN_IS_PAUSE,
  CN_AUTO_SHUT_DOWN,
  CN_MANUAL_SHUT_DOWN,
};

const char *const ru_pack[LABEL_NUM]={
  RU_LANGUAGE,
  RU_HEAT,
  RU_MOVE,
  RU_HOME,
  RU_PRINT,
  RU_EXTRUDE,
  RU_FAN,
  RU_SETTINGS,
  RU_SCREEN_SETTINGS,
  RU_MACHINE_SETTINGS,
  RU_FEATURE_SETTINGS,
  RU_SILENT_ON,
  RU_SILENT_OFF,
  RU_SHUT_DOWN,
  RU_RGB_SETTINGS,
  RU_RGB_RED,
  RU_RGB_GREEN,
  RU_RGB_BLUE,
  RU_RGB_WHITE,
  RU_RGB_OFF,
  RU_GCODE,
  RU_CUSTOM,
  CUSTOM_0_LABEL,
  CUSTOM_1_LABEL,
  CUSTOM_2_LABEL,
  CUSTOM_3_LABEL,
  CUSTOM_4_LABEL,
  CUSTOM_5_LABEL,
  CUSTOM_6_LABEL,
  RU_LEVELING,
  RU_POINT_1,
  RU_POINT_2,
  RU_POINT_3,
  RU_POINT_4,
  RU_ABL,
  RU_BLTOUCH,
  RU_BLTOUCH_TEST,
  RU_BLTOUCH_DEPLOY,
  RU_BLTOUCH_STOW,
  RU_BLTOUCH_REPEAT,
  RU_PROBE_OFFSET,
  RU_EEPROM_SAVE,
  RU_INC,
  RU_DEC,
  RU_NOZZLE,
  RU_BED,
  RU_STOP,
  RU_BACK,
  RU_PAGE_UP,
  RU_PAGE_DOWN,
  RU_PAUSE,
  RU_RESUME,
  RU_LOAD,
  RU_UNLOAD,
  RU_SLOW_SPEED,
  RU_NORMAL_SPEED,
  RU_FAST_SPEED,
  RU_FAN_FULL_SPEED,
  RU_FAN_HALF_SPEED,
  RU_ROTATE_UI,
  RU_TOUCHSCREEN_ADJUST,
  RU_MORE,
  RU_SCREEN_INFO,
  RU_WHITE,
  RU_BLACK,
  RU_BLUE,
  RU_RED,
  RU_GREEN,
  RU_CYAN,
  RU_YELLOW,
  RU_BROWN,
  RU_GRAY,
  RU_DISCONNECT,
  RU_BAUDRATE_115200,
  RU_BAUDRATE_250000,
  RU_RUNOUT_OFF,
  RU_RUNOUT_ON,
  RU_SMART_RUNOUT_ON,
  RU_PERCENTAGE,
  RU_BABYSTEP,
  RU_PERCENTAGE_SPEED,
  RU_PERCENTAGE_FLOW,
  RU_VALUE_ZERO,
  RU_1_DEGREE,
  RU_5_DEGREE,
  RU_10_DEGREE,
  RU_X_INC,
  RU_Y_INC,
  RU_Z_INC,
  RU_X_DEC,
  RU_Y_DEC,
  RU_Z_DEC,
  RU_X_HOME,
  RU_Y_HOME,
  RU_Z_HOME,
  RU_001_MM,
  RU_01_MM,
  RU_1_MM,
  RU_5_MM,
  RU_10_MM,
  RU_1_PERCENT,
  RU_5_PERCENT,
  RU_10_PERCENT,
  RU_READY,
  RU_BUSY,
  RU_UNCONNECTED,
  RU_DISCONNECT_INFO,
  RU_LOADING,
  RU_POWER_FAILED,
  RU_CONTINUE,
  RU_CANNEL,
  RU_ADJUST_TITLE,
  RU_ADJUST_INFO,
  RU_ADJUST_OK,
  RU_ADJUST_FAILED,
  RU_WARNING,
  RU_STOP_PRINT,
  RU_CONFIRM,
  RU_TFTSD,
  RU_READ_TFTSD_ERROR,
  RU_TFTSD_INSERTED,
  RU_TFTSD_REMOVED,
  RU_U_DISK,
  RU_READ_U_DISK_ERROR,
  RU_U_DISK_INSERTED,
  RU_U_DISK_REMOVED,
  RU_ONBOARDSD,
  RU_READ_ONBOARDSD_ERROR,
  RU_FILAMENT_RUNOUT,
  RU_PREHEAT,
  RU_PREHEAT_BOTH,
  RU_PREHEAT_PLA,
  RU_PREHEAT_PETG,
  RU_PREHEAT_ABS,
  RU_PREHEAT_CUSTOM1,
  RU_PREHEAT_CUSTOM2,
  RU_IS_PAUSE,
  RU_AUTO_SHUT_DOWN,
  RU_MANUAL_SHUT_DOWN,
};

const char *const jp_pack[LABEL_NUM]={
  JP_LANGUAGE,
  JP_HEAT,
  JP_MOVE,
  JP_HOME,
  JP_PRINT,
  JP_EXTRUDE,
  JP_FAN,
  JP_SETTINGS,
  JP_SCREEN_SETTINGS,
  JP_MACHINE_SETTINGS,
  JP_FEATURE_SETTINGS,
  JP_SILENT_ON,
  JP_SILENT_OFF,
  JP_SHUT_DOWN,
  JP_RGB_SETTINGS,
  JP_RGB_RED,
  JP_RGB_GREEN,
  JP_RGB_BLUE,
  JP_RGB_WHITE,
  JP_RGB_OFF,
  JP_GCODE,
  JP_CUSTOM,
  CUSTOM_0_LABEL,
  CUSTOM_1_LABEL,
  CUSTOM_2_LABEL,
  CUSTOM_3_LABEL,
  CUSTOM_4_LABEL,
  CUSTOM_5_LABEL,
  CUSTOM_6_LABEL,
  JP_LEVELING,
  JP_POINT_1,
  JP_POINT_2,
  JP_POINT_3,
  JP_POINT_4,
  JP_ABL,
  JP_BLTOUCH,
  JP_BLTOUCH_TEST,
  JP_BLTOUCH_DEPLOY,
  JP_BLTOUCH_STOW,
  JP_BLTOUCH_REPEAT,
  JP_PROBE_OFFSET,
  JP_EEPROM_SAVE,
  JP_INC,
  JP_DEC,
  JP_NOZZLE,
  JP_BED,
  JP_STOP,
  JP_BACK,
  JP_PAGE_UP,
  JP_PAGE_DOWN,
  JP_PAUSE,
  JP_RESUME,
  JP_LOAD,
  JP_UNLOAD,
  JP_SLOW_SPEED,
  JP_NORMAL_SPEED,
  JP_FAST_SPEED,
  JP_FAN_FULL_SPEED,
  JP_FAN_HALF_SPEED,
  JP_ROTATE_UI,
  JP_TOUCHSCREEN_ADJUST,
  JP_MORE,
  JP_SCREEN_INFO,
  JP_WHITE,
  JP_BLACK,
  JP_BLUE,
  JP_RED,
  JP_GREEN,
  JP_CYAN,
  JP_YELLOW,
  JP_BROWN,
  JP_GRAY,
  JP_DISCONNECT,
  JP_BAUDRATE_115200,
  JP_BAUDRATE_250000,
  JP_RUNOUT_OFF,
  JP_RUNOUT_ON,
  JP_SMART_RUNOUT_ON,
  JP_PERCENTAGE,
  JP_BABYSTEP,
  JP_PERCENTAGE_SPEED,
  JP_PERCENTAGE_FLOW,
  JP_VALUE_ZERO,
  JP_1_DEGREE,
  JP_5_DEGREE,
  JP_10_DEGREE,
  JP_X_INC,
  JP_Y_INC,
  JP_Z_INC,
  JP_X_DEC,
  JP_Y_DEC,
  JP_Z_DEC,
  JP_X_HOME,
  JP_Y_HOME,
  JP_Z_HOME,
  JP_001_MM,
  JP_01_MM,
  JP_1_MM,
  JP_5_MM,
  JP_10_MM,
  JP_1_PERCENT,
  JP_5_PERCENT,
  JP_10_PERCENT,
  JP_READY,
  JP_BUSY,
  JP_UNCONNECTED,
  JP_DISCONNECT_INFO,
  JP_LOADING,
  JP_POWER_FAILED,
  JP_CONTINUE,
  JP_CANNEL,
  JP_ADJUST_TITLE,
  JP_ADJUST_INFO,
  JP_ADJUST_OK,
  JP_ADJUST_FAILED,
  JP_WARNING,
  JP_STOP_PRINT,
  JP_CONFIRM,
  JP_TFTSD,
  JP_READ_TFTSD_ERROR,
  JP_TFTSD_INSERTED,
  JP_TFTSD_REMOVED,
  JP_U_DISK,
  JP_READ_U_DISK_ERROR,
  JP_U_DISK_INSERTED,
  JP_U_DISK_REMOVED,
  JP_ONBOARDSD,
  JP_READ_ONBOARDSD_ERROR,
  JP_FILAMENT_RUNOUT,
  JP_PREHEAT,
  JP_PREHEAT_BOTH,
  JP_PREHEAT_PLA,
  JP_PREHEAT_PETG,
  JP_PREHEAT_ABS,
  JP_PREHEAT_CUSTOM1,
  JP_PREHEAT_CUSTOM2,
  JP_IS_PAUSE,
  JP_AUTO_SHUT_DOWN,
  JP_MANUAL_SHUT_DOWN,
};

const char *const am_pack[LABEL_NUM]={
  AM_LANGUAGE,
  AM_HEAT,
  AM_MOVE,
  AM_HOME,
  AM_PRINT,
  AM_EXTRUDE,
  AM_FAN,
  AM_SETTINGS,
  AM_SCREEN_SETTINGS,
  AM_MACHINE_SETTINGS,
  AM_FEATURE_SETTINGS,
  AM_SILENT_ON,
  AM_SILENT_OFF,
  AM_SHUT_DOWN,
  AM_RGB_SETTINGS,
  AM_RGB_RED,
  AM_RGB_GREEN,
  AM_RGB_BLUE,
  AM_RGB_WHITE,
  AM_RGB_OFF,
  AM_LEVELING,
  AM_POINT_1,
  AM_POINT_2,
  AM_POINT_3,
  AM_POINT_4,
  AM_ABL,
  AM_BLTOUCH,
  AM_BLTOUCH_TEST,
  AM_BLTOUCH_DEPLOY,
  AM_BLTOUCH_STOW,
  AM_BLTOUCH_REPEAT,
  AM_PROBE_OFFSET,
  AM_EEPROM_SAVE,
  AM_INC,
  AM_DEC,
  AM_NOZZLE,
  AM_BED,
  AM_STOP,
  AM_BACK,
  AM_PAGE_UP,
  AM_PAGE_DOWN,
  AM_PAUSE,
  AM_RESUME,
  AM_LOAD,
  AM_UNLOAD,
  AM_SLOW_SPEED,
  AM_NORMAL_SPEED,
  AM_FAST_SPEED,
  AM_FAN_FULL_SPEED,
  AM_FAN_HALF_SPEED,
  AM_ROTATE_UI,
  AM_TOUCHSCREEN_ADJUST,
  AM_MORE,
  AM_SCREEN_INFO,
  AM_WHITE,
  AM_BLACK,
  AM_BLUE,
  AM_RED,
  AM_GREEN,
  AM_CYAN,
  AM_YELLOW,
  AM_BROWN,
  AM_GRAY,
  AM_DISCONNECT,
  AM_BAUDRATE_115200,
  AM_BAUDRATE_250000,
  AM_RUNOUT_OFF,
  AM_GCODE,
  AM_CUSTOM,
  CUSTOM_0_LABEL,
  CUSTOM_1_LABEL,
  CUSTOM_2_LABEL,
  CUSTOM_3_LABEL,
  CUSTOM_4_LABEL,
  CUSTOM_5_LABEL,
  CUSTOM_6_LABEL,
  AM_RUNOUT_ON,
  AM_SMART_RUNOUT_ON,
  AM_PERCENTAGE,
  AM_BABYSTEP,
  AM_PERCENTAGE_SPEED,
  AM_PERCENTAGE_FLOW,
  AM_VALUE_ZERO,
  AM_1_DEGREE,
  AM_5_DEGREE,
  AM_10_DEGREE,
  AM_X_INC,
  AM_Y_INC,
  AM_Z_INC,
  AM_X_DEC,
  AM_Y_DEC,
  AM_Z_DEC,
  AM_X_HOME,
  AM_Y_HOME,
  AM_Z_HOME,
  AM_001_MM,
  AM_01_MM,
  AM_1_MM,
  AM_5_MM,
  AM_10_MM,
  AM_1_PERCENT,
  AM_5_PERCENT,
  AM_10_PERCENT,
  AM_READY,
  AM_BUSY,
  AM_UNCONNECTED,
  AM_DISCONNECT_INFO,
  AM_LOADING,
  AM_POWER_FAILED,
  AM_CONTINUE,
  AM_CANNEL,
  AM_ADJUST_TITLE,
  AM_ADJUST_INFO,
  AM_ADJUST_OK,
  AM_ADJUST_FAILED,
  AM_WARNING,
  AM_STOP_PRINT,
  AM_CONFIRM,
  AM_TFTSD,
  AM_READ_TFTSD_ERROR,
  AM_TFTSD_INSERTED,
  AM_TFTSD_REMOVED,
  AM_U_DISK,
  AM_READ_U_DISK_ERROR,
  AM_U_DISK_INSERTED,
  AM_U_DISK_REMOVED,
  AM_ONBOARDSD,
  AM_READ_ONBOARDSD_ERROR,
  AM_FILAMENT_RUNOUT,
  AM_PREHEAT,
  AM_PREHEAT_BOTH,
  AM_PREHEAT_PLA,
  AM_PREHEAT_PETG,
  AM_PREHEAT_ABS,
  AM_PREHEAT_CUSTOM1,
  AM_PREHEAT_CUSTOM2,
  AM_IS_PAUSE,
  AM_AUTO_SHUT_DOWN,
  AM_MANUAL_SHUT_DOWN,
};

const char *const de_pack[LABEL_NUM]={
  DE_LANGUAGE,
  DE_HEAT,
  DE_MOVE,
  DE_HOME,
  DE_PRINT,
  DE_EXTRUDE,
  DE_FAN,
  DE_SETTINGS,
  DE_SCREEN_SETTINGS,
  DE_MACHINE_SETTINGS,
  DE_FEATURE_SETTINGS,
  DE_SILENT_ON,
  DE_SILENT_OFF,
  DE_SHUT_DOWN,
  DE_RGB_SETTINGS,
  DE_RGB_RED,
  DE_RGB_GREEN,
  DE_RGB_BLUE,
  DE_RGB_WHITE,
  DE_RGB_OFF,
  DE_GCODE,  
  DE_CUSTOM,
  CUSTOM_0_LABEL,
  CUSTOM_1_LABEL,
  CUSTOM_2_LABEL,
  CUSTOM_3_LABEL,
  CUSTOM_4_LABEL,
  CUSTOM_5_LABEL,
  CUSTOM_6_LABEL,
  DE_LEVELING,
  DE_POINT_1,
  DE_POINT_2,
  DE_POINT_3,
  DE_POINT_4,
  DE_ABL,
  DE_BLTOUCH,
  DE_BLTOUCH_TEST,
  DE_BLTOUCH_DEPLOY,
  DE_BLTOUCH_STOW,
  DE_BLTOUCH_REPEAT,
  DE_PROBE_OFFSET,
  DE_EEPROM_SAVE,
  DE_INC,
  DE_DEC,
  DE_NOZZLE,
  DE_BED,
  DE_STOP,
  DE_BACK,
  DE_PAGE_UP,
  DE_PAGE_DOWN,
  DE_PAUSE,
  DE_RESUME,
  DE_LOAD,
  DE_UNLOAD,
  DE_SLOW_SPEED,
  DE_NORMAL_SPEED,
  DE_FAST_SPEED,
  DE_FAN_FULL_SPEED,
  DE_FAN_HALF_SPEED,
  DE_ROTATE_UI,
  DE_TOUCHSCREDE_ADJUST,
  DE_MORE,
  DE_SCREDE_INFO,
  DE_WHITE,
  DE_BLACK,
  DE_BLUE,
  DE_RED,
  DE_GREEN,
  DE_CYAN,
  DE_YELLOW,
  DE_BROWN,
  DE_GRAY,
  DE_DISCONNECT,
  DE_BAUDRATE_115200,
  DE_BAUDRATE_250000,
  DE_RUNOUT_OFF,
  DE_RUNOUT_ON,
  DE_SMART_RUNOUT_ON,
  DE_PERCENTAGE,
  DE_BABYSTEP,
  DE_PERCENTAGE_SPEED,
  DE_PERCENTAGE_FLOW,
  DE_VALUE_ZERO,
  DE_1_DEGREE,
  DE_5_DEGREE,
  DE_10_DEGREE,
  DE_X_INC,
  DE_Y_INC,
  DE_Z_INC,
  DE_X_DEC,
  DE_Y_DEC,
  DE_Z_DEC,
  DE_X_HOME,
  DE_Y_HOME,
  DE_Z_HOME,
  DE_001_MM,
  DE_01_MM,
  DE_1_MM,
  DE_5_MM,
  DE_10_MM,
  DE_1_PERCENT,
  DE_5_PERCENT,
  DE_10_PERCENT,
  DE_READY,
  DE_BUSY,
  DE_UNCONNECTED,
  DE_DISCONNECT_INFO,
  DE_LOADING,
  DE_POWER_FAILED,
  DE_CONTINUE,
  DE_CANNEL,
  DE_ADJUST_TITLE,
  DE_ADJUST_INFO,
  DE_ADJUST_OK,
  DE_ADJUST_FAILED,
  DE_WARNING,
  DE_STOP_PRINT,
  DE_CONFIRM,
  DE_TFTSD,
  DE_READ_TFTSD_ERROR,
  DE_TFTSD_INSERTED,
  DE_TFTSD_REMOVED,
  DE_U_DISK,
  DE_READ_U_DISK_ERROR,
  DE_U_DISK_INSERTED,
  DE_U_DISK_REMOVED,
  DE_ONBOARDSD,
  DE_READ_ONBOARDSD_ERROR,
  DE_FILAMENT_RUNOUT,
  DE_PREHEAT,
  DE_PREHEAT_BOTH,
  DE_PREHEAT_PLA,
  DE_PREHEAT_PETG,
  DE_PREHEAT_ABS,
  DE_PREHEAT_CUSTOM1,
  DE_PREHEAT_CUSTOM2,
  DE_IS_PAUSE,
  DE_AUTO_SHUT_DOWN,
  DE_MANUAL_SHUT_DOWN,
};

const char *const cz_pack[LABEL_NUM]={
  CZ_LANGUAGE,
  CZ_HEAT,
  CZ_MOVE,
  CZ_HOME,
  CZ_PRINT,
  CZ_EXTRUDE,
  CZ_FAN,
  CZ_SETTINGS,
  CZ_SCREEN_SETTINGS,
  CZ_MACHINE_SETTINGS,
  CZ_FEATURE_SETTINGS,
  CZ_SILENT_ON,
  CZ_SILENT_OFF,
  CZ_SHUT_DOWN,
  CZ_RGB_SETTINGS,
  CZ_RGB_RED,
  CZ_RGB_GREEN,
  CZ_RGB_BLUE,
  CZ_RGB_WHITE,
  CZ_RGB_OFF,
  CZ_GCODE,
  CZ_CUSTOM,
  CUSTOM_0_LABEL,
  CUSTOM_1_LABEL,
  CUSTOM_2_LABEL,
  CUSTOM_3_LABEL,
  CUSTOM_4_LABEL,
  CUSTOM_5_LABEL,
  CUSTOM_6_LABEL,
  CZ_LEVELING,
  CZ_POINT_1,
  CZ_POINT_2,
  CZ_POINT_3,
  CZ_POINT_4,
  CZ_ABL,
  CZ_BLTOUCH,
  CZ_BLTOUCH_TEST,
  CZ_BLTOUCH_DEPLOY,
  CZ_BLTOUCH_STOW,
  CZ_BLTOUCH_REPEAT,
  CZ_PROBE_OFFSET,
  CZ_EEPROM_SAVE,
  CZ_INC,
  CZ_DEC,
  CZ_NOZZLE,
  CZ_BED,
  CZ_STOP,
  CZ_BACK,
  CZ_PAGE_UP,
  CZ_PAGE_DOWN,
  CZ_PAUSE,
  CZ_RESUME,
  CZ_LOAD,
  CZ_UNLOAD,
  CZ_SLOW_SPEED,
  CZ_NORMAL_SPEED,
  CZ_FAST_SPEED,
  CZ_FAN_FULL_SPEED,
  CZ_FAN_HALF_SPEED,
  CZ_ROTATE_UI,
  CZ_TOUCHSCREEN_ADJUST,
  CZ_MORE,
  CZ_SCREEN_INFO,
  CZ_WHITE,
  CZ_BLACK,
  CZ_BLUE,
  CZ_RED,
  CZ_GREEN,
  CZ_CYAN,
  CZ_YELLOW,
  CZ_BROWN,
  CZ_GRAY,
  CZ_DISCONNECT,
  CZ_BAUDRATE_115200,
  CZ_BAUDRATE_250000,
  CZ_RUNOUT_OFF,
  CZ_RUNOUT_ON,
  CZ_SMART_RUNOUT_ON,
  CZ_PERCENTAGE,
  CZ_BABYSTEP,
  CZ_PERCENTAGE_SPEED,
  CZ_PERCENTAGE_FLOW,
  CZ_VALUE_ZERO,
  CZ_1_DEGREE,
  CZ_5_DEGREE,
  CZ_10_DEGREE,
  CZ_X_INC,
  CZ_Y_INC,
  CZ_Z_INC,
  CZ_X_DEC,
  CZ_Y_DEC,
  CZ_Z_DEC,
  CZ_X_HOME,
  CZ_Y_HOME,
  CZ_Z_HOME,
  CZ_001_MM,
  CZ_01_MM,
  CZ_1_MM,
  CZ_5_MM,
  CZ_10_MM,
  CZ_1_PERCENT,
  CZ_5_PERCENT,
  CZ_10_PERCENT,
  CZ_READY,
  CZ_BUSY,
  CZ_UNCONNECTED,
  CZ_DISCONNECT_INFO,
  CZ_LOADING,
  CZ_POWER_FAILED,
  CZ_CONTINUE,
  CZ_CANNEL,
  CZ_ADJUST_TITLE,
  CZ_ADJUST_INFO,
  CZ_ADJUST_OK,
  CZ_ADJUST_FAILED,
  CZ_WARNING,
  CZ_STOP_PRINT,
  CZ_CONFIRM,
  CZ_TFTSD,
  CZ_READ_TFTSD_ERROR,
  CZ_TFTSD_INSERTED,
  CZ_TFTSD_REMOVED,
  CZ_U_DISK,
  CZ_READ_U_DISK_ERROR,
  CZ_U_DISK_INSERTED,
  CZ_U_DISK_REMOVED,
  CZ_ONBOARDSD,
  CZ_READ_ONBOARDSD_ERROR,
  CZ_FILAMENT_RUNOUT,
  CZ_PREHEAT,
  CZ_PREHEAT_BOTH,
  CZ_PREHEAT_PLA,
  CZ_PREHEAT_PETG,
  CZ_PREHEAT_ABS,
  CZ_PREHEAT_CUSTOM1,
  CZ_PREHEAT_CUSTOM2,
  CZ_IS_PAUSE,
  CZ_AUTO_SHUT_DOWN,
  CZ_MANUAL_SHUT_DOWN,
};

const char *const es_pack[LABEL_NUM]={
  ES_LANGUAGE,
  ES_HEAT,
  ES_MOVE,
  ES_HOME,
  ES_PRINT,
  ES_EXTRUDE,
  ES_FAN,
  ES_SETTINGS,
  ES_SCREEN_SETTINGS,
  ES_MACHINE_SETTINGS,
  ES_FEATURE_SETTINGS,
  ES_SILENT_ON,
  ES_SILENT_OFF,
  ES_SHUT_DOWN,
  ES_RGB_SETTINGS,
  ES_RGB_RED,
  ES_RGB_GREEN,
  ES_RGB_BLUE,
  ES_RGB_WHITE,
  ES_RGB_OFF,
  ES_GCODE,
  ES_CUSTOM,
  CUSTOM_0_LABEL,
  CUSTOM_1_LABEL,
  CUSTOM_2_LABEL,
  CUSTOM_3_LABEL,
  CUSTOM_4_LABEL,
  CUSTOM_5_LABEL,
  CUSTOM_6_LABEL,
  ES_LEVELING,
  ES_POINT_1,
  ES_POINT_2,
  ES_POINT_3,
  ES_POINT_4,
  ES_ABL,
  ES_BLTOUCH,
  ES_BLTOUCH_TEST,
  ES_BLTOUCH_DEPLOY,
  ES_BLTOUCH_STOW,
  ES_BLTOUCH_REPEAT,
  ES_PROBE_OFFSET,
  ES_EEPROM_SAVE,
  ES_INC,
  ES_DEC,
  ES_NOZZLE,
  ES_BED,
  ES_STOP,
  ES_BACK,
  ES_PAGE_UP,
  ES_PAGE_DOWN,
  ES_PAUSE,
  ES_RESUME,
  ES_LOAD,
  ES_UNLOAD,
  ES_SLOW_SPEED,
  ES_NORMAL_SPEED,
  ES_FAST_SPEED,
  ES_FAN_FULL_SPEED,
  ES_FAN_HALF_SPEED,
  ES_ROTATE_UI,
  ES_TOUCHSCREEN_ADJUST,
  ES_MORE,
  ES_SCREEN_INFO,
  ES_WHITE,
  ES_BLACK,
  ES_BLUE,
  ES_RED,
  ES_GREEN,
  ES_CYAN,
  ES_YELLOW,
  ES_BROWN,
  ES_GRAY,
  ES_DISCONNECT,
  ES_BAUDRATE_115200,
  ES_BAUDRATE_250000,
  ES_RUNOUT_OFF,
  ES_RUNOUT_ON,
  ES_SMART_RUNOUT_ON,
  ES_PERCENTAGE,
  ES_BABYSTEP,
  ES_PERCENTAGE_SPEED,
  ES_PERCENTAGE_FLOW,
  ES_VALUE_ZERO,
  ES_1_DEGREE,
  ES_5_DEGREE,
  ES_10_DEGREE,
  ES_X_INC,
  ES_Y_INC,
  ES_Z_INC,
  ES_X_DEC,
  ES_Y_DEC,
  ES_Z_DEC,
  ES_X_HOME,
  ES_Y_HOME,
  ES_Z_HOME,
  ES_001_MM,
  ES_01_MM,
  ES_1_MM,
  ES_5_MM,
  ES_10_MM,
  ES_1_PERCENT,
  ES_5_PERCENT,
  ES_10_PERCENT,
  ES_READY,
  ES_BUSY,
  ES_UNCONNECTED,
  ES_DISCONNECT_INFO,
  ES_LOADING,
  ES_POWER_FAILED,
  ES_CONTINUE,
  ES_CANNEL,
  ES_ADJUST_TITLE,
  ES_ADJUST_INFO,
  ES_ADJUST_OK,
  ES_ADJUST_FAILED,
  ES_WARNING,
  ES_STOP_PRINT,
  ES_CONFIRM,
  ES_TFTSD,
  ES_READ_TFTSD_ERROR,
  ES_TFTSD_INSERTED,
  ES_TFTSD_REMOVED,
  ES_U_DISK,
  ES_READ_U_DISK_ERROR,
  ES_U_DISK_INSERTED,
  ES_U_DISK_REMOVED,
  ES_ONBOARDSD,
  ES_READ_ONBOARDSD_ERROR,
  ES_FILAMENT_RUNOUT,
  ES_PREHEAT,
  ES_PREHEAT_BOTH,
  ES_PREHEAT_PLA,
  ES_PREHEAT_PETG,
  ES_PREHEAT_ABS,
  ES_PREHEAT_CUSTOM1,
  ES_PREHEAT_CUSTOM2,
  ES_IS_PAUSE,
  ES_AUTO_SHUT_DOWN,
  ES_MANUAL_SHUT_DOWN,
};

const char *const fr_pack[LABEL_NUM]={
  FR_LANGUAGE,
  FR_HEAT,
  FR_MOVE,
  FR_HOME,
  FR_PRINT,
  FR_EXTRUDE,
  FR_FAN,
  FR_SETTINGS,
  FR_SCREEN_SETTINGS,
  FR_MACHINE_SETTINGS,
  FR_FEATURE_SETTINGS,
  FR_SILENT_ON,
  FR_SILENT_OFF,
  FR_SHUT_DOWN,
  FR_RGB_SETTINGS,
  FR_RGB_RED,
  FR_RGB_GREEN,
  FR_RGB_BLUE,
  FR_RGB_WHITE,
  FR_RGB_OFF,
  FR_GCODE,
  FR_CUSTOM,
  CUSTOM_0_LABEL,
  CUSTOM_1_LABEL,
  CUSTOM_2_LABEL,
  CUSTOM_3_LABEL,
  CUSTOM_4_LABEL,
  CUSTOM_5_LABEL,
  CUSTOM_6_LABEL,
  FR_LEVELING,
  FR_POINT_1,
  FR_POINT_2,
  FR_POINT_3,
  FR_POINT_4,
  FR_ABL,
  FR_BLTOUCH,
  FR_BLTOUCH_TEST,
  FR_BLTOUCH_DEPLOY,
  FR_BLTOUCH_STOW,
  FR_BLTOUCH_REPEAT,
  FR_PROBE_OFFSET,
  FR_EEPROM_SAVE,
  FR_INC,
  FR_DEC,
  FR_NOZZLE,
  FR_BED,
  FR_STOP,
  FR_BACK,
  FR_PAGE_UP,
  FR_PAGE_DOWN,
  FR_PAUSE,
  FR_RESUME,
  FR_LOAD,
  FR_UNLOAD,
  FR_SLOW_SPEED,
  FR_NORMAL_SPEED,
  FR_FAST_SPEED,
  FR_FAN_FULL_SPEED,
  FR_FAN_HALF_SPEED,
  FR_ROTATE_UI,
  FR_TOUCHSCREFR_ADJUST,
  FR_MORE,
  FR_SCREFR_INFO,
  FR_WHITE,
  FR_BLACK,
  FR_BLUE,
  FR_RED,
  FR_GREEN,
  FR_CYAN,
  FR_YELLOW,
  FR_BROWN,
  FR_GRAY,
  FR_DISCONNECT,
  FR_BAUDRATE_115200,
  FR_BAUDRATE_250000,
  FR_RUNOUT_OFF,
  FR_RUNOUT_ON,
  FR_SMART_RUNOUT_ON,
  FR_PERCENTAGE,
  FR_BABYSTEP,
  FR_PERCENTAGE_SPEED,
  FR_PERCENTAGE_FLOW,
  FR_VALUE_ZERO,
  FR_1_DEGREE,
  FR_5_DEGREE,
  FR_10_DEGREE,
  FR_X_INC,
  FR_Y_INC,
  FR_Z_INC,
  FR_X_DEC,
  FR_Y_DEC,
  FR_Z_DEC,
  FR_X_HOME,
  FR_Y_HOME,
  FR_Z_HOME,
  FR_001_MM,
  FR_01_MM,
  FR_1_MM,
  FR_5_MM,
  FR_10_MM,
  FR_1_PERCENT,
  FR_5_PERCENT,
  FR_10_PERCENT,
  FR_READY,
  FR_BUSY,
  FR_UNCONNECTED,
  FR_DISCONNECT_INFO,
  FR_LOADING,
  FR_POWER_FAILED,
  FR_CONTINUE,
  FR_CANNEL,
  FR_ADJUST_TITLE,
  FR_ADJUST_INFO,
  FR_ADJUST_OK,
  FR_ADJUST_FAILED,
  FR_WARNING,
  FR_STOP_PRINT,
  FR_CONFIRM,
  FR_TFTSD,
  FR_READ_TFTSD_ERROR,
  FR_TFTSD_INSERTED,
  FR_TFTSD_REMOVED,
  FR_U_DISK,
  FR_READ_U_DISK_ERROR,
  FR_U_DISK_INSERTED,
  FR_U_DISK_REMOVED,
  FR_ONBOARDSD,
  FR_READ_ONBOARDSD_ERROR,
  FR_FILAMENT_RUNOUT,
  FR_PREHEAT,
  FR_PREHEAT_BOTH,
  FR_PREHEAT_PLA,
  FR_PREHEAT_PETG,
  FR_PREHEAT_ABS,
  FR_PREHEAT_CUSTOM1,
  FR_PREHEAT_CUSTOM2,
  FR_IS_PAUSE,
  FR_AUTO_SHUT_DOWN,
  FR_MANUAL_SHUT_DOWN,
};

u8 * textSelect(u8 sel)
{
  switch(infoSettings.language)
  {
    case ENGLISH:   return (u8 *)en_pack[sel];
    case CHINESE:   return (u8 *)cn_pack[sel];
    case RUSSIAN:   return (u8 *)ru_pack[sel];
    case JAPANESE:  return (u8 *)jp_pack[sel];
    case ARMENIAN:  return (u8 *)am_pack[sel];
    case GERMAN:    return (u8 *)de_pack[sel];
    case CZECH:     return (u8 *)cz_pack[sel];
    case SPAIN:     return (u8 *)es_pack[sel];
    case FRENCH:    return (u8 *)fr_pack[sel];

    default:        return NULL;
  }
}
