/** @file
 *	@brief MAVLink comm protocol generated from ualberta.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef UALBERTA_H
#define UALBERTA_H

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {8, 23, 12, 8, 14, 28, 3, 32, 0, 0, 0, 2, 2, 2, 0, 0, 0, 0, 0, 0, 20, 2, 25, 23, 0, 30, 26, 101, 26, 16, 32, 32, 38, 32, 0, 17, 17, 16, 18, 36, 4, 4, 2, 2, 4, 2, 2, 3, 14, 12, 18, 16, 14, 27, 25, 18, 18, 20, 20, 0, 0, 0, 26, 16, 36, 0, 6, 4, 0, 21, 18, 0, 0, 20, 20, 20, 32, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 42, 33, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 42, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 30, 14, 14, 51, 5}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {153, 114, 143, 191, 105, 217, 104, 119, 0, 0, 0, 186, 194, 8, 0, 0, 0, 0, 0, 0, 214, 159, 220, 168, 0, 185, 222, 23, 179, 136, 66, 126, 198, 147, 0, 252, 162, 215, 229, 205, 51, 80, 101, 213, 8, 229, 21, 214, 170, 14, 73, 50, 142, 15, 3, 100, 24, 141, 148, 0, 0, 0, 183, 126, 130, 0, 148, 21, 0, 52, 124, 0, 0, 241, 20, 160, 168, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 250, 156, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 71, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 15, 248, 63, 83, 127}
#endif

#ifndef MAVLINK_MESSAGE_INFO
#define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_SYS_STATUS, MAVLINK_MESSAGE_INFO_SYSTEM_TIME, MAVLINK_MESSAGE_INFO_SYSTEM_TIME_UTC, MAVLINK_MESSAGE_INFO_PING, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL_ACK, MAVLINK_MESSAGE_INFO_AUTH_KEY, {}, {}, {}, MAVLINK_MESSAGE_INFO_SET_MODE, MAVLINK_MESSAGE_INFO_SET_FLIGHT_MODE, MAVLINK_MESSAGE_INFO_SET_SAFETY_MODE, {}, {}, {}, {}, {}, {}, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_READ, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_LIST, MAVLINK_MESSAGE_INFO_PARAM_VALUE, MAVLINK_MESSAGE_INFO_PARAM_SET, {}, MAVLINK_MESSAGE_INFO_GPS_RAW_INT, MAVLINK_MESSAGE_INFO_SCALED_IMU, MAVLINK_MESSAGE_INFO_GPS_STATUS, MAVLINK_MESSAGE_INFO_RAW_IMU, MAVLINK_MESSAGE_INFO_RAW_PRESSURE, MAVLINK_MESSAGE_INFO_ATTITUDE, MAVLINK_MESSAGE_INFO_LOCAL_POSITION, MAVLINK_MESSAGE_INFO_GPS_RAW, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION, {}, MAVLINK_MESSAGE_INFO_RC_CHANNELS_RAW, MAVLINK_MESSAGE_INFO_RC_CHANNELS_SCALED, MAVLINK_MESSAGE_INFO_SERVO_OUTPUT_RAW, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE, MAVLINK_MESSAGE_INFO_WAYPOINT, MAVLINK_MESSAGE_INFO_WAYPOINT_REQUEST, MAVLINK_MESSAGE_INFO_WAYPOINT_SET_CURRENT, MAVLINK_MESSAGE_INFO_WAYPOINT_CURRENT, MAVLINK_MESSAGE_INFO_WAYPOINT_REQUEST_LIST, MAVLINK_MESSAGE_INFO_WAYPOINT_COUNT, MAVLINK_MESSAGE_INFO_WAYPOINT_CLEAR_ALL, MAVLINK_MESSAGE_INFO_WAYPOINT_REACHED, MAVLINK_MESSAGE_INFO_WAYPOINT_ACK, MAVLINK_MESSAGE_INFO_GPS_SET_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_GPS_LOCAL_ORIGIN_SET, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_SETPOINT_SET, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_SETPOINT, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_SETPOINT_INT, MAVLINK_MESSAGE_INFO_SAFETY_SET_ALLOWED_AREA, MAVLINK_MESSAGE_INFO_SAFETY_ALLOWED_AREA, MAVLINK_MESSAGE_INFO_SET_ROLL_PITCH_YAW_THRUST, MAVLINK_MESSAGE_INFO_SET_ROLL_PITCH_YAW_SPEED_THRUST, MAVLINK_MESSAGE_INFO_ROLL_PITCH_YAW_THRUST_SETPOINT, MAVLINK_MESSAGE_INFO_ROLL_PITCH_YAW_SPEED_THRUST_SETPOINT, {}, {}, {}, MAVLINK_MESSAGE_INFO_NAV_CONTROLLER_OUTPUT, MAVLINK_MESSAGE_INFO_POSITION_TARGET, MAVLINK_MESSAGE_INFO_STATE_CORRECTION, {}, MAVLINK_MESSAGE_INFO_REQUEST_DATA_STREAM, MAVLINK_MESSAGE_INFO_DATA_STREAM, {}, MAVLINK_MESSAGE_INFO_MANUAL_CONTROL, MAVLINK_MESSAGE_INFO_RC_CHANNELS_OVERRIDE, {}, {}, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT, MAVLINK_MESSAGE_INFO_VFR_HUD, MAVLINK_MESSAGE_INFO_COMMAND_SHORT, MAVLINK_MESSAGE_INFO_COMMAND_LONG, MAVLINK_MESSAGE_INFO_COMMAND_ACK, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, MAVLINK_MESSAGE_INFO_HIL_STATE, MAVLINK_MESSAGE_INFO_HIL_CONTROLS, MAVLINK_MESSAGE_INFO_HIL_RC_INPUTS_RAW, {}, {}, {}, {}, {}, {}, {}, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, MAVLINK_MESSAGE_INFO_NAV_FILTER_BIAS, MAVLINK_MESSAGE_INFO_RADIO_CALIBRATION, MAVLINK_MESSAGE_INFO_UALBERTA_SYS_STATUS, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, MAVLINK_MESSAGE_INFO_MEMORY_VECT, MAVLINK_MESSAGE_INFO_DEBUG_VECT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_FLOAT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_INT, MAVLINK_MESSAGE_INFO_STATUSTEXT, MAVLINK_MESSAGE_INFO_DEBUG}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_UALBERTA

#include "../common/common.h"

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// ENUM DEFINITIONS


/** @brief Available autopilot modes for ualberta uav */
enum UALBERTA_AUTOPILOT_MODE
{
	MODE_MANUAL_DIRECT=0, /*  | */
	MODE_MANUAL_SCALED=1, /*  | */
	MODE_AUTO_PID_ATT=2, /*  | */
	MODE_AUTO_PID_VEL=3, /*  | */
	MODE_AUTO_PID_POS=4, /*  | */
};

/** @brief Navigation filter mode */
enum UALBERTA_NAV_MODE
{
	NAV_AHRS_INIT=0, /*  | */
	NAV_AHRS=1, /*  | */
	NAV_INS_GPS_INIT=2, /*  | */
	NAV_INS_GPS=3, /*  | */
};

/** @brief Mode currently commanded by pilot */
enum UALBERTA_PILOT_MODE
{
	PILOT_MANUAL=0, /*  | */
	PILOT_AUTO=1, /*  | */
	PILOT_ROTO=2, /*  | */
};

// MESSAGE DEFINITIONS
#include "./mavlink_msg_nav_filter_bias.h"
#include "./mavlink_msg_radio_calibration.h"
#include "./mavlink_msg_ualberta_sys_status.h"

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // UALBERTA_H
