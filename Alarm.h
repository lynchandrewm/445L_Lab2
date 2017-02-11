/*Alarm.h - this file contains the functions for module Alarm*/

#ifndef _ALARM
#define _ALARM

typedef struct alarm{
	uint8_t hours;
	uint8_t minutes;
	uint8_t valid;
} alarm;

void Alarm_DeleteAlarm(uint8_t hour, uint8_t minute);

/****************setNewAlarm***************
 If possible, set an alarm to the hour and minute specified. 
 If sucessful return 1, else if not sucessful or no alarm available return 0
 Inputs:  unsined 8-bit integer hours and unsined 8-bit integer minutes 
 Outputs: 1 if successful, 0 if not 
 */ 
uint8_t Alarm_SetNewAlarm(uint8_t hours, uint8_t minutes);

/****************alarmTriggered***************
 Checks to see if any alarms are triggered. If so, return 1 and 
 remove triggered alarm. If not, do nothing and return 0;
 Inputs:  none
 Outputs: 1 if an alarm triggered, 0 if not
 */ 
uint8_t Alarm_AlarmTriggered(void);

/****************alarmsEnabled***************
 Checks to see if any alarms are enabled. If so, return the number enabled 
 If not, do nothing and return 0;
 Inputs:  none
 Outputs: number of alarms if alarms enabled, 0 if not
 */ 
uint8_t Alarm_AlarmsEnabled(void);

/****************viewActiveAlarms***************
 Makes array of enabled alarms. Copys enabled alarms into 
 user giver array.
 Inputs:  Pointer to array for copying alarms
 Outputs: none
 */ 
void Alarm_GetAlarms(alarm* alarmsCopy);

#endif
