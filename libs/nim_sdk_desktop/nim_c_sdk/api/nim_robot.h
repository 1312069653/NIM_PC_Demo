/** @file nim_robot.h
  * @brief NIM SDK�ṩ��robot�ӿ�
  * @copyright (c) 2015-2017, NetEase Inc. All rights reserved
  * @author Oleg
  * @date 2017/06/24
  */

#ifndef NIM_SDK_DLL_API_NIM_ROBOT_H_
#define NIM_SDK_DLL_API_NIM_ROBOT_H_

#include "nim_sdk_dll.h"
#include "nim_robot_def.h"
#include "util/stdbool.h"

#ifdef __cplusplus
extern"C"
{
#endif
#if NIMAPI_UNDER_WIN_DESKTOP_ONLY

/** @fn void nim_robot_reg_changed_callback(const char *json_extension, nim_robot_change_cb_func cb, const void *user_data)
  * ע������˱���㲥֪ͨ
  * @param[in] json_extension json��չ���������ã�Ŀǰ����Ҫ��
  * @param[in] cb			nim_robot_change_cb_func�ص����������nim_robot_def.h
  * @param[in] user_data	APP���Զ����û����ݣ�SDKֻ���𴫻ظ��ص�����cb�������κδ���
  * @return void �޷���ֵ
  */
NIM_SDK_DLL_API void nim_robot_reg_changed_callback(const char *json_extension, nim_robot_change_cb_func cb, const void *user_data);

/** @fn char *nim_robot_query_all_robots_block(const char *json_extension)
  * ��ȡȫ����������Ϣ(ͬ���ӿڣ�����NIM�ڲ��߳�)
  * @param[in] json_extension json��չ���������ã�Ŀǰ����Ҫ��
  * @return char ��������Ϣ json string array
  */
NIM_SDK_DLL_API char *nim_robot_query_all_robots_block(const char *json_extension);

/** @fn char *nim_robot_query_robot_by_accid_block(const char *accid, const char *json_extension)
  * ��ȡָ����������Ϣ(ͬ���ӿڣ�����NIM�ڲ��߳�)
  * @param[in] accid ������accid
  * @param[in] json_extension json��չ���������ã�Ŀǰ����Ҫ��
  * @return char ��������Ϣ json string
  */
NIM_SDK_DLL_API char *nim_robot_query_robot_by_accid_block(const char *accid, const char *json_extension);
#endif
#ifdef __cplusplus
}
#endif

#endif //NIM_SDK_DLL_API_NIM_ROBOT_H_