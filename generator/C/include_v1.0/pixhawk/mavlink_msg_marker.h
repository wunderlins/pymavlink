// MESSAGE MARKER PACKING

#define MAVLINK_MSG_ID_MARKER 171

typedef struct __mavlink_marker_t
{
 float x; ///< x position
 float y; ///< y position
 float z; ///< z position
 float roll; ///< roll orientation
 float pitch; ///< pitch orientation
 float yaw; ///< yaw orientation
 uint16_t id; ///< ID
} mavlink_marker_t;

#define MAVLINK_MESSAGE_INFO_MARKER { \
	"MARKER", \
	7, \
	{  { "x", MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_marker_t, x) }, \
         { "y", MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_marker_t, y) }, \
         { "z", MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_marker_t, z) }, \
         { "roll", MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_marker_t, roll) }, \
         { "pitch", MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_marker_t, pitch) }, \
         { "yaw", MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_marker_t, yaw) }, \
         { "id", MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_marker_t, id) }, \
         } \
}


/**
 * @brief Pack a marker message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id ID
 * @param x x position
 * @param y y position
 * @param z z position
 * @param roll roll orientation
 * @param pitch pitch orientation
 * @param yaw yaw orientation
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_marker_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t id, float x, float y, float z, float roll, float pitch, float yaw)
{
	msg->msgid = MAVLINK_MSG_ID_MARKER;

	put_float_by_index(msg, 0, x); // x position
	put_float_by_index(msg, 4, y); // y position
	put_float_by_index(msg, 8, z); // z position
	put_float_by_index(msg, 12, roll); // roll orientation
	put_float_by_index(msg, 16, pitch); // pitch orientation
	put_float_by_index(msg, 20, yaw); // yaw orientation
	put_uint16_t_by_index(msg, 24, id); // ID

	return mavlink_finalize_message(msg, system_id, component_id, 26, 249);
}

/**
 * @brief Pack a marker message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param id ID
 * @param x x position
 * @param y y position
 * @param z z position
 * @param roll roll orientation
 * @param pitch pitch orientation
 * @param yaw yaw orientation
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_marker_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t id,float x,float y,float z,float roll,float pitch,float yaw)
{
	msg->msgid = MAVLINK_MSG_ID_MARKER;

	put_float_by_index(msg, 0, x); // x position
	put_float_by_index(msg, 4, y); // y position
	put_float_by_index(msg, 8, z); // z position
	put_float_by_index(msg, 12, roll); // roll orientation
	put_float_by_index(msg, 16, pitch); // pitch orientation
	put_float_by_index(msg, 20, yaw); // yaw orientation
	put_uint16_t_by_index(msg, 24, id); // ID

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 26, 249);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

/**
 * @brief Pack a marker message on a channel and send
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param id ID
 * @param x x position
 * @param y y position
 * @param z z position
 * @param roll roll orientation
 * @param pitch pitch orientation
 * @param yaw yaw orientation
 */
static inline void mavlink_msg_marker_pack_chan_send(mavlink_channel_t chan,
							   mavlink_message_t* msg,
						           uint16_t id,float x,float y,float z,float roll,float pitch,float yaw)
{
	msg->msgid = MAVLINK_MSG_ID_MARKER;

	put_float_by_index(msg, 0, x); // x position
	put_float_by_index(msg, 4, y); // y position
	put_float_by_index(msg, 8, z); // z position
	put_float_by_index(msg, 12, roll); // roll orientation
	put_float_by_index(msg, 16, pitch); // pitch orientation
	put_float_by_index(msg, 20, yaw); // yaw orientation
	put_uint16_t_by_index(msg, 24, id); // ID

	mavlink_finalize_message_chan_send(msg, chan, 26, 249);
}
#endif // MAVLINK_USE_CONVENIENCE_FUNCTIONS


/**
 * @brief Encode a marker struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param marker C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_marker_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_marker_t* marker)
{
	return mavlink_msg_marker_pack(system_id, component_id, msg, marker->id, marker->x, marker->y, marker->z, marker->roll, marker->pitch, marker->yaw);
}

/**
 * @brief Send a marker message
 * @param chan MAVLink channel to send the message
 *
 * @param id ID
 * @param x x position
 * @param y y position
 * @param z z position
 * @param roll roll orientation
 * @param pitch pitch orientation
 * @param yaw yaw orientation
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_marker_send(mavlink_channel_t chan, uint16_t id, float x, float y, float z, float roll, float pitch, float yaw)
{
	MAVLINK_ALIGNED_MESSAGE(msg, 26);
	mavlink_msg_marker_pack_chan_send(chan, msg, id, x, y, z, roll, pitch, yaw);
}

#endif

// MESSAGE MARKER UNPACKING


/**
 * @brief Get field id from marker message
 *
 * @return ID
 */
static inline uint16_t mavlink_msg_marker_get_id(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field x from marker message
 *
 * @return x position
 */
static inline float mavlink_msg_marker_get_x(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from marker message
 *
 * @return y position
 */
static inline float mavlink_msg_marker_get_y(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from marker message
 *
 * @return z position
 */
static inline float mavlink_msg_marker_get_z(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  8);
}

/**
 * @brief Get field roll from marker message
 *
 * @return roll orientation
 */
static inline float mavlink_msg_marker_get_roll(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  12);
}

/**
 * @brief Get field pitch from marker message
 *
 * @return pitch orientation
 */
static inline float mavlink_msg_marker_get_pitch(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  16);
}

/**
 * @brief Get field yaw from marker message
 *
 * @return yaw orientation
 */
static inline float mavlink_msg_marker_get_yaw(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  20);
}

/**
 * @brief Decode a marker message into a struct
 *
 * @param msg The message to decode
 * @param marker C-struct to decode the message contents into
 */
static inline void mavlink_msg_marker_decode(const mavlink_message_t* msg, mavlink_marker_t* marker)
{
#if MAVLINK_NEED_BYTE_SWAP
	marker->x = mavlink_msg_marker_get_x(msg);
	marker->y = mavlink_msg_marker_get_y(msg);
	marker->z = mavlink_msg_marker_get_z(msg);
	marker->roll = mavlink_msg_marker_get_roll(msg);
	marker->pitch = mavlink_msg_marker_get_pitch(msg);
	marker->yaw = mavlink_msg_marker_get_yaw(msg);
	marker->id = mavlink_msg_marker_get_id(msg);
#else
	memcpy(marker, MAVLINK_PAYLOAD(msg), 26);
#endif
}
