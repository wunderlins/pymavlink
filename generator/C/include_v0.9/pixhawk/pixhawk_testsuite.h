/** @file
 *	@brief MAVLink comm protocol testsuite generated from pixhawk.xml
 *	@see http://qgroundcontrol.org/mavlink/
 *	Generated on Fri Aug 26 09:46:50 2011
 */
#ifndef PIXHAWK_TESTSUITE_H
#define PIXHAWK_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif


static void mavlink_test_set_cam_shutter(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_set_cam_shutter_t packet2, packet1 = {
		.cam_no = 5,
	.cam_mode = 72,
	.trigger_pin = 139,
	.interval = 17391,
	.exposure = 17495,
	.gain = 66.0,
	};
	mavlink_msg_set_cam_shutter_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_set_cam_shutter_decode(&msg, &packet2);
	mavlink_msg_set_cam_shutter_pack(system_id, component_id, &msg , packet1.cam_no , packet1.cam_mode , packet1.trigger_pin , packet1.interval , packet1.exposure , packet1.gain );
	mavlink_msg_set_cam_shutter_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cam_no , packet1.cam_mode , packet1.trigger_pin , packet1.interval , packet1.exposure , packet1.gain );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_set_cam_shutter_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.cam_no , packet1.cam_mode , packet1.trigger_pin , packet1.interval , packet1.exposure , packet1.gain );
	mavlink_msg_set_cam_shutter_send(MAVLINK_COMM_2 , packet1.cam_no , packet1.cam_mode , packet1.trigger_pin , packet1.interval , packet1.exposure , packet1.gain );
}

static void mavlink_test_image_triggered(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_image_triggered_t packet2, packet1 = {
		.timestamp = 9223372036854775807LL,
	.seq = 963497880,
	.roll = 101.0,
	.pitch = 129.0,
	.yaw = 157.0,
	.local_z = 185.0,
	.lat = 213.0,
	.lon = 241.0,
	.alt = 269.0,
	.ground_x = 297.0,
	.ground_y = 325.0,
	.ground_z = 353.0,
	};
	mavlink_msg_image_triggered_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_image_triggered_decode(&msg, &packet2);
	mavlink_msg_image_triggered_pack(system_id, component_id, &msg , packet1.timestamp , packet1.seq , packet1.roll , packet1.pitch , packet1.yaw , packet1.local_z , packet1.lat , packet1.lon , packet1.alt , packet1.ground_x , packet1.ground_y , packet1.ground_z );
	mavlink_msg_image_triggered_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.seq , packet1.roll , packet1.pitch , packet1.yaw , packet1.local_z , packet1.lat , packet1.lon , packet1.alt , packet1.ground_x , packet1.ground_y , packet1.ground_z );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_image_triggered_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.timestamp , packet1.seq , packet1.roll , packet1.pitch , packet1.yaw , packet1.local_z , packet1.lat , packet1.lon , packet1.alt , packet1.ground_x , packet1.ground_y , packet1.ground_z );
	mavlink_msg_image_triggered_send(MAVLINK_COMM_2 , packet1.timestamp , packet1.seq , packet1.roll , packet1.pitch , packet1.yaw , packet1.local_z , packet1.lat , packet1.lon , packet1.alt , packet1.ground_x , packet1.ground_y , packet1.ground_z );
}

static void mavlink_test_image_trigger_control(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_image_trigger_control_t packet2, packet1 = {
		.enable = 5,
	};
	mavlink_msg_image_trigger_control_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_image_trigger_control_decode(&msg, &packet2);
	mavlink_msg_image_trigger_control_pack(system_id, component_id, &msg , packet1.enable );
	mavlink_msg_image_trigger_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.enable );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_image_trigger_control_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.enable );
	mavlink_msg_image_trigger_control_send(MAVLINK_COMM_2 , packet1.enable );
}

static void mavlink_test_image_available(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_image_available_t packet2, packet1 = {
		.cam_id = 9223372036854775807LL,
	.cam_no = 29,
	.timestamp = 9223372036854776374LL,
	.valid_until = 9223372036854776878LL,
	.img_seq = 963498764,
	.img_buf_index = 963498972,
	.width = 18951,
	.height = 19055,
	.depth = 19159,
	.channels = 58,
	.key = 963499544,
	.exposure = 963499752,
	.gain = 353.0,
	.roll = 381.0,
	.pitch = 409.0,
	.yaw = 437.0,
	.local_z = 465.0,
	.lat = 493.0,
	.lon = 521.0,
	.alt = 549.0,
	.ground_x = 577.0,
	.ground_y = 605.0,
	.ground_z = 633.0,
	};
	mavlink_msg_image_available_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_image_available_decode(&msg, &packet2);
	mavlink_msg_image_available_pack(system_id, component_id, &msg , packet1.cam_id , packet1.cam_no , packet1.timestamp , packet1.valid_until , packet1.img_seq , packet1.img_buf_index , packet1.width , packet1.height , packet1.depth , packet1.channels , packet1.key , packet1.exposure , packet1.gain , packet1.roll , packet1.pitch , packet1.yaw , packet1.local_z , packet1.lat , packet1.lon , packet1.alt , packet1.ground_x , packet1.ground_y , packet1.ground_z );
	mavlink_msg_image_available_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cam_id , packet1.cam_no , packet1.timestamp , packet1.valid_until , packet1.img_seq , packet1.img_buf_index , packet1.width , packet1.height , packet1.depth , packet1.channels , packet1.key , packet1.exposure , packet1.gain , packet1.roll , packet1.pitch , packet1.yaw , packet1.local_z , packet1.lat , packet1.lon , packet1.alt , packet1.ground_x , packet1.ground_y , packet1.ground_z );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_image_available_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.cam_id , packet1.cam_no , packet1.timestamp , packet1.valid_until , packet1.img_seq , packet1.img_buf_index , packet1.width , packet1.height , packet1.depth , packet1.channels , packet1.key , packet1.exposure , packet1.gain , packet1.roll , packet1.pitch , packet1.yaw , packet1.local_z , packet1.lat , packet1.lon , packet1.alt , packet1.ground_x , packet1.ground_y , packet1.ground_z );
	mavlink_msg_image_available_send(MAVLINK_COMM_2 , packet1.cam_id , packet1.cam_no , packet1.timestamp , packet1.valid_until , packet1.img_seq , packet1.img_buf_index , packet1.width , packet1.height , packet1.depth , packet1.channels , packet1.key , packet1.exposure , packet1.gain , packet1.roll , packet1.pitch , packet1.yaw , packet1.local_z , packet1.lat , packet1.lon , packet1.alt , packet1.ground_x , packet1.ground_y , packet1.ground_z );
}

static void mavlink_test_vision_position_estimate(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_vision_position_estimate_t packet2, packet1 = {
		.usec = 9223372036854775807LL,
	.x = 73.0,
	.y = 101.0,
	.z = 129.0,
	.roll = 157.0,
	.pitch = 185.0,
	.yaw = 213.0,
	};
	mavlink_msg_vision_position_estimate_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_vision_position_estimate_decode(&msg, &packet2);
	mavlink_msg_vision_position_estimate_pack(system_id, component_id, &msg , packet1.usec , packet1.x , packet1.y , packet1.z , packet1.roll , packet1.pitch , packet1.yaw );
	mavlink_msg_vision_position_estimate_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.usec , packet1.x , packet1.y , packet1.z , packet1.roll , packet1.pitch , packet1.yaw );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_vision_position_estimate_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.usec , packet1.x , packet1.y , packet1.z , packet1.roll , packet1.pitch , packet1.yaw );
	mavlink_msg_vision_position_estimate_send(MAVLINK_COMM_2 , packet1.usec , packet1.x , packet1.y , packet1.z , packet1.roll , packet1.pitch , packet1.yaw );
}

static void mavlink_test_vicon_position_estimate(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_vicon_position_estimate_t packet2, packet1 = {
		.usec = 9223372036854775807LL,
	.x = 73.0,
	.y = 101.0,
	.z = 129.0,
	.roll = 157.0,
	.pitch = 185.0,
	.yaw = 213.0,
	};
	mavlink_msg_vicon_position_estimate_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_vicon_position_estimate_decode(&msg, &packet2);
	mavlink_msg_vicon_position_estimate_pack(system_id, component_id, &msg , packet1.usec , packet1.x , packet1.y , packet1.z , packet1.roll , packet1.pitch , packet1.yaw );
	mavlink_msg_vicon_position_estimate_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.usec , packet1.x , packet1.y , packet1.z , packet1.roll , packet1.pitch , packet1.yaw );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_vicon_position_estimate_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.usec , packet1.x , packet1.y , packet1.z , packet1.roll , packet1.pitch , packet1.yaw );
	mavlink_msg_vicon_position_estimate_send(MAVLINK_COMM_2 , packet1.usec , packet1.x , packet1.y , packet1.z , packet1.roll , packet1.pitch , packet1.yaw );
}

static void mavlink_test_vision_speed_estimate(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_vision_speed_estimate_t packet2, packet1 = {
		.usec = 9223372036854775807LL,
	.x = 73.0,
	.y = 101.0,
	.z = 129.0,
	};
	mavlink_msg_vision_speed_estimate_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_vision_speed_estimate_decode(&msg, &packet2);
	mavlink_msg_vision_speed_estimate_pack(system_id, component_id, &msg , packet1.usec , packet1.x , packet1.y , packet1.z );
	mavlink_msg_vision_speed_estimate_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.usec , packet1.x , packet1.y , packet1.z );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_vision_speed_estimate_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.usec , packet1.x , packet1.y , packet1.z );
	mavlink_msg_vision_speed_estimate_send(MAVLINK_COMM_2 , packet1.usec , packet1.x , packet1.y , packet1.z );
}

static void mavlink_test_position_control_setpoint_set(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_position_control_setpoint_set_t packet2, packet1 = {
		.target_system = 5,
	.target_component = 72,
	.id = 17339,
	.x = 45.0,
	.y = 73.0,
	.z = 101.0,
	.yaw = 129.0,
	};
	mavlink_msg_position_control_setpoint_set_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_position_control_setpoint_set_decode(&msg, &packet2);
	mavlink_msg_position_control_setpoint_set_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.id , packet1.x , packet1.y , packet1.z , packet1.yaw );
	mavlink_msg_position_control_setpoint_set_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.id , packet1.x , packet1.y , packet1.z , packet1.yaw );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_position_control_setpoint_set_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.target_system , packet1.target_component , packet1.id , packet1.x , packet1.y , packet1.z , packet1.yaw );
	mavlink_msg_position_control_setpoint_set_send(MAVLINK_COMM_2 , packet1.target_system , packet1.target_component , packet1.id , packet1.x , packet1.y , packet1.z , packet1.yaw );
}

static void mavlink_test_position_control_offset_set(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_position_control_offset_set_t packet2, packet1 = {
		.target_system = 5,
	.target_component = 72,
	.x = 31.0,
	.y = 59.0,
	.z = 87.0,
	.yaw = 115.0,
	};
	mavlink_msg_position_control_offset_set_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_position_control_offset_set_decode(&msg, &packet2);
	mavlink_msg_position_control_offset_set_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.x , packet1.y , packet1.z , packet1.yaw );
	mavlink_msg_position_control_offset_set_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.x , packet1.y , packet1.z , packet1.yaw );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_position_control_offset_set_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.target_system , packet1.target_component , packet1.x , packet1.y , packet1.z , packet1.yaw );
	mavlink_msg_position_control_offset_set_send(MAVLINK_COMM_2 , packet1.target_system , packet1.target_component , packet1.x , packet1.y , packet1.z , packet1.yaw );
}

static void mavlink_test_position_control_setpoint(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_position_control_setpoint_t packet2, packet1 = {
		.id = 17235,
	.x = 31.0,
	.y = 59.0,
	.z = 87.0,
	.yaw = 115.0,
	};
	mavlink_msg_position_control_setpoint_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_position_control_setpoint_decode(&msg, &packet2);
	mavlink_msg_position_control_setpoint_pack(system_id, component_id, &msg , packet1.id , packet1.x , packet1.y , packet1.z , packet1.yaw );
	mavlink_msg_position_control_setpoint_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.id , packet1.x , packet1.y , packet1.z , packet1.yaw );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_position_control_setpoint_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.id , packet1.x , packet1.y , packet1.z , packet1.yaw );
	mavlink_msg_position_control_setpoint_send(MAVLINK_COMM_2 , packet1.id , packet1.x , packet1.y , packet1.z , packet1.yaw );
}

static void mavlink_test_marker(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_marker_t packet2, packet1 = {
		.id = 17235,
	.x = 31.0,
	.y = 59.0,
	.z = 87.0,
	.roll = 115.0,
	.pitch = 143.0,
	.yaw = 171.0,
	};
	mavlink_msg_marker_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_marker_decode(&msg, &packet2);
	mavlink_msg_marker_pack(system_id, component_id, &msg , packet1.id , packet1.x , packet1.y , packet1.z , packet1.roll , packet1.pitch , packet1.yaw );
	mavlink_msg_marker_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.id , packet1.x , packet1.y , packet1.z , packet1.roll , packet1.pitch , packet1.yaw );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_marker_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.id , packet1.x , packet1.y , packet1.z , packet1.roll , packet1.pitch , packet1.yaw );
	mavlink_msg_marker_send(MAVLINK_COMM_2 , packet1.id , packet1.x , packet1.y , packet1.z , packet1.roll , packet1.pitch , packet1.yaw );
}

static void mavlink_test_raw_aux(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_raw_aux_t packet2, packet1 = {
		.adc1 = 17235,
	.adc2 = 17339,
	.adc3 = 17443,
	.adc4 = 17547,
	.vbat = 17651,
	.temp = 17755,
	.baro = 963498088,
	};
	mavlink_msg_raw_aux_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_raw_aux_decode(&msg, &packet2);
	mavlink_msg_raw_aux_pack(system_id, component_id, &msg , packet1.adc1 , packet1.adc2 , packet1.adc3 , packet1.adc4 , packet1.vbat , packet1.temp , packet1.baro );
	mavlink_msg_raw_aux_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.adc1 , packet1.adc2 , packet1.adc3 , packet1.adc4 , packet1.vbat , packet1.temp , packet1.baro );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_raw_aux_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.adc1 , packet1.adc2 , packet1.adc3 , packet1.adc4 , packet1.vbat , packet1.temp , packet1.baro );
	mavlink_msg_raw_aux_send(MAVLINK_COMM_2 , packet1.adc1 , packet1.adc2 , packet1.adc3 , packet1.adc4 , packet1.vbat , packet1.temp , packet1.baro );
}

static void mavlink_test_watchdog_heartbeat(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_watchdog_heartbeat_t packet2, packet1 = {
		.watchdog_id = 17235,
	.process_count = 17339,
	};
	mavlink_msg_watchdog_heartbeat_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_watchdog_heartbeat_decode(&msg, &packet2);
	mavlink_msg_watchdog_heartbeat_pack(system_id, component_id, &msg , packet1.watchdog_id , packet1.process_count );
	mavlink_msg_watchdog_heartbeat_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.watchdog_id , packet1.process_count );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_watchdog_heartbeat_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.watchdog_id , packet1.process_count );
	mavlink_msg_watchdog_heartbeat_send(MAVLINK_COMM_2 , packet1.watchdog_id , packet1.process_count );
}

static void mavlink_test_watchdog_process_info(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_watchdog_process_info_t packet2, packet1 = {
		.watchdog_id = 17235,
	.process_id = 17339,
	.name = "AHOVCJQXELSZGNUBIPWDKRYFMTAHOVCJQXELSZGNUBIPWDKRYFMTAHOVCJQXELSZGNUBIPWDKRYFMTAHOVCJQXELSZGNUBIPWDKR",
	.arguments = "ARIZQHYPGXOFWNEVMDULCTKBSJARIZQHYPGXOFWNEVMDULCTKBSJARIZQHYPGXOFWNEVMDULCTKBSJARIZQHYPGXOFWNEVMDULCTKBSJARIZQHYPGXOFWNEVMDULCTKBSJARIZQHYPGXOFWNEVM",
	.timeout = 963510516,
	};
	mavlink_msg_watchdog_process_info_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_watchdog_process_info_decode(&msg, &packet2);
	mavlink_msg_watchdog_process_info_pack(system_id, component_id, &msg , packet1.watchdog_id , packet1.process_id , packet1.name , packet1.arguments , packet1.timeout );
	mavlink_msg_watchdog_process_info_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.watchdog_id , packet1.process_id , packet1.name , packet1.arguments , packet1.timeout );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_watchdog_process_info_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.watchdog_id , packet1.process_id , packet1.name , packet1.arguments , packet1.timeout );
	mavlink_msg_watchdog_process_info_send(MAVLINK_COMM_2 , packet1.watchdog_id , packet1.process_id , packet1.name , packet1.arguments , packet1.timeout );
}

static void mavlink_test_watchdog_process_status(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_watchdog_process_status_t packet2, packet1 = {
		.watchdog_id = 17235,
	.process_id = 17339,
	.state = 17,
	.muted = 84,
	.pid = 963497776,
	.crashes = 17755,
	};
	mavlink_msg_watchdog_process_status_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_watchdog_process_status_decode(&msg, &packet2);
	mavlink_msg_watchdog_process_status_pack(system_id, component_id, &msg , packet1.watchdog_id , packet1.process_id , packet1.state , packet1.muted , packet1.pid , packet1.crashes );
	mavlink_msg_watchdog_process_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.watchdog_id , packet1.process_id , packet1.state , packet1.muted , packet1.pid , packet1.crashes );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_watchdog_process_status_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.watchdog_id , packet1.process_id , packet1.state , packet1.muted , packet1.pid , packet1.crashes );
	mavlink_msg_watchdog_process_status_send(MAVLINK_COMM_2 , packet1.watchdog_id , packet1.process_id , packet1.state , packet1.muted , packet1.pid , packet1.crashes );
}

static void mavlink_test_watchdog_command(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_watchdog_command_t packet2, packet1 = {
		.target_system_id = 5,
	.watchdog_id = 17287,
	.process_id = 17391,
	.command_id = 84,
	};
	mavlink_msg_watchdog_command_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_watchdog_command_decode(&msg, &packet2);
	mavlink_msg_watchdog_command_pack(system_id, component_id, &msg , packet1.target_system_id , packet1.watchdog_id , packet1.process_id , packet1.command_id );
	mavlink_msg_watchdog_command_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system_id , packet1.watchdog_id , packet1.process_id , packet1.command_id );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_watchdog_command_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.target_system_id , packet1.watchdog_id , packet1.process_id , packet1.command_id );
	mavlink_msg_watchdog_command_send(MAVLINK_COMM_2 , packet1.target_system_id , packet1.watchdog_id , packet1.process_id , packet1.command_id );
}

static void mavlink_test_pattern_detected(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_pattern_detected_t packet2, packet1 = {
		.type = 5,
	.confidence = 24.0,
	.file = "AYWUSQOMKIGECAYWUSQOMKIGECAYWUSQOMKIGECAYWUSQOMKIGECAYWUSQOMKIGECAYWUSQOMKIGECAYWUSQOMKIGECAYWUSQOMK",
	.detected = 128,
	};
	mavlink_msg_pattern_detected_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_pattern_detected_decode(&msg, &packet2);
	mavlink_msg_pattern_detected_pack(system_id, component_id, &msg , packet1.type , packet1.confidence , packet1.file , packet1.detected );
	mavlink_msg_pattern_detected_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.type , packet1.confidence , packet1.file , packet1.detected );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_pattern_detected_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.type , packet1.confidence , packet1.file , packet1.detected );
	mavlink_msg_pattern_detected_send(MAVLINK_COMM_2 , packet1.type , packet1.confidence , packet1.file , packet1.detected );
}

static void mavlink_test_point_of_interest(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_point_of_interest_t packet2, packet1 = {
		.type = 5,
	.color = 72,
	.coordinate_system = 139,
	.timeout = 17391,
	.x = 52.0,
	.y = 80.0,
	.z = 108.0,
	.name = "AUOICWQKEYSMGAUOICWQKEYSMG",
	};
	mavlink_msg_point_of_interest_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_point_of_interest_decode(&msg, &packet2);
	mavlink_msg_point_of_interest_pack(system_id, component_id, &msg , packet1.type , packet1.color , packet1.coordinate_system , packet1.timeout , packet1.x , packet1.y , packet1.z , packet1.name );
	mavlink_msg_point_of_interest_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.type , packet1.color , packet1.coordinate_system , packet1.timeout , packet1.x , packet1.y , packet1.z , packet1.name );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_point_of_interest_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.type , packet1.color , packet1.coordinate_system , packet1.timeout , packet1.x , packet1.y , packet1.z , packet1.name );
	mavlink_msg_point_of_interest_send(MAVLINK_COMM_2 , packet1.type , packet1.color , packet1.coordinate_system , packet1.timeout , packet1.x , packet1.y , packet1.z , packet1.name );
}

static void mavlink_test_point_of_interest_connection(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_point_of_interest_connection_t packet2, packet1 = {
		.type = 5,
	.color = 72,
	.coordinate_system = 139,
	.timeout = 17391,
	.xp1 = 52.0,
	.yp1 = 80.0,
	.zp1 = 108.0,
	.xp2 = 136.0,
	.yp2 = 164.0,
	.zp2 = 192.0,
	.name = "AQGWMCSIYOEUKAQGWMCSIYOEUK",
	};
	mavlink_msg_point_of_interest_connection_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_point_of_interest_connection_decode(&msg, &packet2);
	mavlink_msg_point_of_interest_connection_pack(system_id, component_id, &msg , packet1.type , packet1.color , packet1.coordinate_system , packet1.timeout , packet1.xp1 , packet1.yp1 , packet1.zp1 , packet1.xp2 , packet1.yp2 , packet1.zp2 , packet1.name );
	mavlink_msg_point_of_interest_connection_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.type , packet1.color , packet1.coordinate_system , packet1.timeout , packet1.xp1 , packet1.yp1 , packet1.zp1 , packet1.xp2 , packet1.yp2 , packet1.zp2 , packet1.name );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_point_of_interest_connection_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.type , packet1.color , packet1.coordinate_system , packet1.timeout , packet1.xp1 , packet1.yp1 , packet1.zp1 , packet1.xp2 , packet1.yp2 , packet1.zp2 , packet1.name );
	mavlink_msg_point_of_interest_connection_send(MAVLINK_COMM_2 , packet1.type , packet1.color , packet1.coordinate_system , packet1.timeout , packet1.xp1 , packet1.yp1 , packet1.zp1 , packet1.xp2 , packet1.yp2 , packet1.zp2 , packet1.name );
}

static void mavlink_test_data_transmission_handshake(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_data_transmission_handshake_t packet2, packet1 = {
		.type = 5,
	.size = 963497516,
	.packets = 84,
	.payload = 151,
	.jpg_quality = 218,
	};
	mavlink_msg_data_transmission_handshake_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_data_transmission_handshake_decode(&msg, &packet2);
	mavlink_msg_data_transmission_handshake_pack(system_id, component_id, &msg , packet1.type , packet1.size , packet1.packets , packet1.payload , packet1.jpg_quality );
	mavlink_msg_data_transmission_handshake_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.type , packet1.size , packet1.packets , packet1.payload , packet1.jpg_quality );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_data_transmission_handshake_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.type , packet1.size , packet1.packets , packet1.payload , packet1.jpg_quality );
	mavlink_msg_data_transmission_handshake_send(MAVLINK_COMM_2 , packet1.type , packet1.size , packet1.packets , packet1.payload , packet1.jpg_quality );
}

static void mavlink_test_encapsulated_data(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_encapsulated_data_t packet2, packet1 = {
		.seqnr = 17235,
	.data = "139",
	};
	mavlink_msg_encapsulated_data_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_encapsulated_data_decode(&msg, &packet2);
	mavlink_msg_encapsulated_data_pack(system_id, component_id, &msg , packet1.seqnr , packet1.data );
	mavlink_msg_encapsulated_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.seqnr , packet1.data );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_encapsulated_data_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.seqnr , packet1.data );
	mavlink_msg_encapsulated_data_send(MAVLINK_COMM_2 , packet1.seqnr , packet1.data );
}

static void mavlink_test_brief_feature(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_brief_feature_t packet2, packet1 = {
		.x = 17.0,
	.y = 45.0,
	.z = 73.0,
	.orientation_assignment = 41,
	.size = 17911,
	.orientation = 18015,
	.descriptor = "120",
	.response = 360.0,
	};
	mavlink_msg_brief_feature_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_brief_feature_decode(&msg, &packet2);
	mavlink_msg_brief_feature_pack(system_id, component_id, &msg , packet1.x , packet1.y , packet1.z , packet1.orientation_assignment , packet1.size , packet1.orientation , packet1.descriptor , packet1.response );
	mavlink_msg_brief_feature_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.x , packet1.y , packet1.z , packet1.orientation_assignment , packet1.size , packet1.orientation , packet1.descriptor , packet1.response );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_brief_feature_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.x , packet1.y , packet1.z , packet1.orientation_assignment , packet1.size , packet1.orientation , packet1.descriptor , packet1.response );
	mavlink_msg_brief_feature_send(MAVLINK_COMM_2 , packet1.x , packet1.y , packet1.z , packet1.orientation_assignment , packet1.size , packet1.orientation , packet1.descriptor , packet1.response );
}

static void mavlink_test_attitude_control(uint8_t system_id, uint8_t component_id)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        int i;
	mavlink_attitude_control_t packet2, packet1 = {
		.target = 5,
	.roll = 24.0,
	.pitch = 52.0,
	.yaw = 80.0,
	.thrust = 108.0,
	.roll_manual = 120,
	.pitch_manual = 187,
	.yaw_manual = 254,
	.thrust_manual = 65,
	};
	mavlink_msg_attitude_control_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_attitude_control_decode(&msg, &packet2);
	mavlink_msg_attitude_control_pack(system_id, component_id, &msg , packet1.target , packet1.roll , packet1.pitch , packet1.yaw , packet1.thrust , packet1.roll_manual , packet1.pitch_manual , packet1.yaw_manual , packet1.thrust_manual );
	mavlink_msg_attitude_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target , packet1.roll , packet1.pitch , packet1.yaw , packet1.thrust , packet1.roll_manual , packet1.pitch_manual , packet1.yaw_manual , packet1.thrust_manual );
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_attitude_control_pack_chan_send(MAVLINK_COMM_1, &msg , packet1.target , packet1.roll , packet1.pitch , packet1.yaw , packet1.thrust , packet1.roll_manual , packet1.pitch_manual , packet1.yaw_manual , packet1.thrust_manual );
	mavlink_msg_attitude_control_send(MAVLINK_COMM_2 , packet1.target , packet1.roll , packet1.pitch , packet1.yaw , packet1.thrust , packet1.roll_manual , packet1.pitch_manual , packet1.yaw_manual , packet1.thrust_manual );
}

static void mavlink_test_all(uint8_t system_id, uint8_t component_id)
{
	mavlink_test_set_cam_shutter(system_id, component_id);
	mavlink_test_image_triggered(system_id, component_id);
	mavlink_test_image_trigger_control(system_id, component_id);
	mavlink_test_image_available(system_id, component_id);
	mavlink_test_vision_position_estimate(system_id, component_id);
	mavlink_test_vicon_position_estimate(system_id, component_id);
	mavlink_test_vision_speed_estimate(system_id, component_id);
	mavlink_test_position_control_setpoint_set(system_id, component_id);
	mavlink_test_position_control_offset_set(system_id, component_id);
	mavlink_test_position_control_setpoint(system_id, component_id);
	mavlink_test_marker(system_id, component_id);
	mavlink_test_raw_aux(system_id, component_id);
	mavlink_test_watchdog_heartbeat(system_id, component_id);
	mavlink_test_watchdog_process_info(system_id, component_id);
	mavlink_test_watchdog_process_status(system_id, component_id);
	mavlink_test_watchdog_command(system_id, component_id);
	mavlink_test_pattern_detected(system_id, component_id);
	mavlink_test_point_of_interest(system_id, component_id);
	mavlink_test_point_of_interest_connection(system_id, component_id);
	mavlink_test_data_transmission_handshake(system_id, component_id);
	mavlink_test_encapsulated_data(system_id, component_id);
	mavlink_test_brief_feature(system_id, component_id);
	mavlink_test_attitude_control(system_id, component_id);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // PIXHAWK_TESTSUITE_H
