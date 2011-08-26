// MESSAGE IMAGE_TRIGGERED PACKING

#define MAVLINK_MSG_ID_IMAGE_TRIGGERED 152

typedef struct __mavlink_image_triggered_t
{
 uint64_t timestamp; ///< Timestamp
 uint32_t seq; ///< IMU seq
 float roll; ///< Roll angle in rad
 float pitch; ///< Pitch angle in rad
 float yaw; ///< Yaw angle in rad
 float local_z; ///< Local frame Z coordinate (height over ground)
 float lat; ///< GPS X coordinate
 float lon; ///< GPS Y coordinate
 float alt; ///< Global frame altitude
 float ground_x; ///< Ground truth X
 float ground_y; ///< Ground truth Y
 float ground_z; ///< Ground truth Z
} mavlink_image_triggered_t;

#define MAVLINK_MESSAGE_INFO_IMAGE_TRIGGERED { \
	"IMAGE_TRIGGERED", \
	12, \
	{  { "timestamp", MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_image_triggered_t, timestamp) }, \
         { "seq", MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_image_triggered_t, seq) }, \
         { "roll", MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_image_triggered_t, roll) }, \
         { "pitch", MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_image_triggered_t, pitch) }, \
         { "yaw", MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_image_triggered_t, yaw) }, \
         { "local_z", MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_image_triggered_t, local_z) }, \
         { "lat", MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_image_triggered_t, lat) }, \
         { "lon", MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_image_triggered_t, lon) }, \
         { "alt", MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_image_triggered_t, alt) }, \
         { "ground_x", MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_image_triggered_t, ground_x) }, \
         { "ground_y", MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_image_triggered_t, ground_y) }, \
         { "ground_z", MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_image_triggered_t, ground_z) }, \
         } \
}


/**
 * @brief Pack a image_triggered message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp Timestamp
 * @param seq IMU seq
 * @param roll Roll angle in rad
 * @param pitch Pitch angle in rad
 * @param yaw Yaw angle in rad
 * @param local_z Local frame Z coordinate (height over ground)
 * @param lat GPS X coordinate
 * @param lon GPS Y coordinate
 * @param alt Global frame altitude
 * @param ground_x Ground truth X
 * @param ground_y Ground truth Y
 * @param ground_z Ground truth Z
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_image_triggered_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t timestamp, uint32_t seq, float roll, float pitch, float yaw, float local_z, float lat, float lon, float alt, float ground_x, float ground_y, float ground_z)
{
	msg->msgid = MAVLINK_MSG_ID_IMAGE_TRIGGERED;

	put_uint64_t_by_index(msg, 0, timestamp); // Timestamp
	put_uint32_t_by_index(msg, 8, seq); // IMU seq
	put_float_by_index(msg, 12, roll); // Roll angle in rad
	put_float_by_index(msg, 16, pitch); // Pitch angle in rad
	put_float_by_index(msg, 20, yaw); // Yaw angle in rad
	put_float_by_index(msg, 24, local_z); // Local frame Z coordinate (height over ground)
	put_float_by_index(msg, 28, lat); // GPS X coordinate
	put_float_by_index(msg, 32, lon); // GPS Y coordinate
	put_float_by_index(msg, 36, alt); // Global frame altitude
	put_float_by_index(msg, 40, ground_x); // Ground truth X
	put_float_by_index(msg, 44, ground_y); // Ground truth Y
	put_float_by_index(msg, 48, ground_z); // Ground truth Z

	return mavlink_finalize_message(msg, system_id, component_id, 52, 86);
}

/**
 * @brief Pack a image_triggered message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp Timestamp
 * @param seq IMU seq
 * @param roll Roll angle in rad
 * @param pitch Pitch angle in rad
 * @param yaw Yaw angle in rad
 * @param local_z Local frame Z coordinate (height over ground)
 * @param lat GPS X coordinate
 * @param lon GPS Y coordinate
 * @param alt Global frame altitude
 * @param ground_x Ground truth X
 * @param ground_y Ground truth Y
 * @param ground_z Ground truth Z
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_image_triggered_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t timestamp,uint32_t seq,float roll,float pitch,float yaw,float local_z,float lat,float lon,float alt,float ground_x,float ground_y,float ground_z)
{
	msg->msgid = MAVLINK_MSG_ID_IMAGE_TRIGGERED;

	put_uint64_t_by_index(msg, 0, timestamp); // Timestamp
	put_uint32_t_by_index(msg, 8, seq); // IMU seq
	put_float_by_index(msg, 12, roll); // Roll angle in rad
	put_float_by_index(msg, 16, pitch); // Pitch angle in rad
	put_float_by_index(msg, 20, yaw); // Yaw angle in rad
	put_float_by_index(msg, 24, local_z); // Local frame Z coordinate (height over ground)
	put_float_by_index(msg, 28, lat); // GPS X coordinate
	put_float_by_index(msg, 32, lon); // GPS Y coordinate
	put_float_by_index(msg, 36, alt); // Global frame altitude
	put_float_by_index(msg, 40, ground_x); // Ground truth X
	put_float_by_index(msg, 44, ground_y); // Ground truth Y
	put_float_by_index(msg, 48, ground_z); // Ground truth Z

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 52, 86);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

/**
 * @brief Pack a image_triggered message on a channel and send
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp Timestamp
 * @param seq IMU seq
 * @param roll Roll angle in rad
 * @param pitch Pitch angle in rad
 * @param yaw Yaw angle in rad
 * @param local_z Local frame Z coordinate (height over ground)
 * @param lat GPS X coordinate
 * @param lon GPS Y coordinate
 * @param alt Global frame altitude
 * @param ground_x Ground truth X
 * @param ground_y Ground truth Y
 * @param ground_z Ground truth Z
 */
static inline void mavlink_msg_image_triggered_pack_chan_send(mavlink_channel_t chan,
							   mavlink_message_t* msg,
						           uint64_t timestamp,uint32_t seq,float roll,float pitch,float yaw,float local_z,float lat,float lon,float alt,float ground_x,float ground_y,float ground_z)
{
	msg->msgid = MAVLINK_MSG_ID_IMAGE_TRIGGERED;

	put_uint64_t_by_index(msg, 0, timestamp); // Timestamp
	put_uint32_t_by_index(msg, 8, seq); // IMU seq
	put_float_by_index(msg, 12, roll); // Roll angle in rad
	put_float_by_index(msg, 16, pitch); // Pitch angle in rad
	put_float_by_index(msg, 20, yaw); // Yaw angle in rad
	put_float_by_index(msg, 24, local_z); // Local frame Z coordinate (height over ground)
	put_float_by_index(msg, 28, lat); // GPS X coordinate
	put_float_by_index(msg, 32, lon); // GPS Y coordinate
	put_float_by_index(msg, 36, alt); // Global frame altitude
	put_float_by_index(msg, 40, ground_x); // Ground truth X
	put_float_by_index(msg, 44, ground_y); // Ground truth Y
	put_float_by_index(msg, 48, ground_z); // Ground truth Z

	mavlink_finalize_message_chan_send(msg, chan, 52, 86);
}
#endif // MAVLINK_USE_CONVENIENCE_FUNCTIONS


/**
 * @brief Encode a image_triggered struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param image_triggered C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_image_triggered_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_image_triggered_t* image_triggered)
{
	return mavlink_msg_image_triggered_pack(system_id, component_id, msg, image_triggered->timestamp, image_triggered->seq, image_triggered->roll, image_triggered->pitch, image_triggered->yaw, image_triggered->local_z, image_triggered->lat, image_triggered->lon, image_triggered->alt, image_triggered->ground_x, image_triggered->ground_y, image_triggered->ground_z);
}

/**
 * @brief Send a image_triggered message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp Timestamp
 * @param seq IMU seq
 * @param roll Roll angle in rad
 * @param pitch Pitch angle in rad
 * @param yaw Yaw angle in rad
 * @param local_z Local frame Z coordinate (height over ground)
 * @param lat GPS X coordinate
 * @param lon GPS Y coordinate
 * @param alt Global frame altitude
 * @param ground_x Ground truth X
 * @param ground_y Ground truth Y
 * @param ground_z Ground truth Z
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_image_triggered_send(mavlink_channel_t chan, uint64_t timestamp, uint32_t seq, float roll, float pitch, float yaw, float local_z, float lat, float lon, float alt, float ground_x, float ground_y, float ground_z)
{
	MAVLINK_ALIGNED_MESSAGE(msg, 52);
	mavlink_msg_image_triggered_pack_chan_send(chan, msg, timestamp, seq, roll, pitch, yaw, local_z, lat, lon, alt, ground_x, ground_y, ground_z);
}

#endif

// MESSAGE IMAGE_TRIGGERED UNPACKING


/**
 * @brief Get field timestamp from image_triggered message
 *
 * @return Timestamp
 */
static inline uint64_t mavlink_msg_image_triggered_get_timestamp(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field seq from image_triggered message
 *
 * @return IMU seq
 */
static inline uint32_t mavlink_msg_image_triggered_get_seq(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field roll from image_triggered message
 *
 * @return Roll angle in rad
 */
static inline float mavlink_msg_image_triggered_get_roll(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  12);
}

/**
 * @brief Get field pitch from image_triggered message
 *
 * @return Pitch angle in rad
 */
static inline float mavlink_msg_image_triggered_get_pitch(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  16);
}

/**
 * @brief Get field yaw from image_triggered message
 *
 * @return Yaw angle in rad
 */
static inline float mavlink_msg_image_triggered_get_yaw(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  20);
}

/**
 * @brief Get field local_z from image_triggered message
 *
 * @return Local frame Z coordinate (height over ground)
 */
static inline float mavlink_msg_image_triggered_get_local_z(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  24);
}

/**
 * @brief Get field lat from image_triggered message
 *
 * @return GPS X coordinate
 */
static inline float mavlink_msg_image_triggered_get_lat(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  28);
}

/**
 * @brief Get field lon from image_triggered message
 *
 * @return GPS Y coordinate
 */
static inline float mavlink_msg_image_triggered_get_lon(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  32);
}

/**
 * @brief Get field alt from image_triggered message
 *
 * @return Global frame altitude
 */
static inline float mavlink_msg_image_triggered_get_alt(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  36);
}

/**
 * @brief Get field ground_x from image_triggered message
 *
 * @return Ground truth X
 */
static inline float mavlink_msg_image_triggered_get_ground_x(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  40);
}

/**
 * @brief Get field ground_y from image_triggered message
 *
 * @return Ground truth Y
 */
static inline float mavlink_msg_image_triggered_get_ground_y(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  44);
}

/**
 * @brief Get field ground_z from image_triggered message
 *
 * @return Ground truth Z
 */
static inline float mavlink_msg_image_triggered_get_ground_z(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  48);
}

/**
 * @brief Decode a image_triggered message into a struct
 *
 * @param msg The message to decode
 * @param image_triggered C-struct to decode the message contents into
 */
static inline void mavlink_msg_image_triggered_decode(const mavlink_message_t* msg, mavlink_image_triggered_t* image_triggered)
{
#if MAVLINK_NEED_BYTE_SWAP
	image_triggered->timestamp = mavlink_msg_image_triggered_get_timestamp(msg);
	image_triggered->seq = mavlink_msg_image_triggered_get_seq(msg);
	image_triggered->roll = mavlink_msg_image_triggered_get_roll(msg);
	image_triggered->pitch = mavlink_msg_image_triggered_get_pitch(msg);
	image_triggered->yaw = mavlink_msg_image_triggered_get_yaw(msg);
	image_triggered->local_z = mavlink_msg_image_triggered_get_local_z(msg);
	image_triggered->lat = mavlink_msg_image_triggered_get_lat(msg);
	image_triggered->lon = mavlink_msg_image_triggered_get_lon(msg);
	image_triggered->alt = mavlink_msg_image_triggered_get_alt(msg);
	image_triggered->ground_x = mavlink_msg_image_triggered_get_ground_x(msg);
	image_triggered->ground_y = mavlink_msg_image_triggered_get_ground_y(msg);
	image_triggered->ground_z = mavlink_msg_image_triggered_get_ground_z(msg);
#else
	memcpy(image_triggered, MAVLINK_PAYLOAD(msg), 52);
#endif
}
