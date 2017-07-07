/** @file nim_robot_def.h
  * @brief NIM SDK robot��صĶ���
  * @copyright (c) 2015-2017, NetEase Inc. All rights reserved
  * @author Oleg
  * @date 2017/06/24
  */
#ifndef NIM_SDK_DLL_EXPORT_HEADERS_ROBOT_DEF_H_
#define NIM_SDK_DLL_EXPORT_HEADERS_ROBOT_DEF_H_

#ifdef __cplusplus
extern"C"
{
#endif

/** @name ��������Ϣ Json Keys
* ����  { "accid" : "", "create_timetag" : 1430101821372, "icon" : "", "intro":"", "name" : "", "update_timetag" : 1430101821372, "rid":"" }
  * @{
  */
//Э�鶨��
static const char *kNIMRobotInfoKeyAccid	= "accid";	/**< string �ʺ�*/
static const char *kNIMRobotInfoKeyName		= "name";	/**< string ����*/
static const char *kNIMRobotInfoKeyIcon		= "icon";	/**< string ͷ��*/
static const char *kNIMRobotInfoKeyIntro	= "intro";	/**< string ����*/
static const char *kNIMRobotInfoKeyRobotId	= "rid";	/**< string ������ID*/
static const char *kNIMRobotInfoKeyCreateTime	= "create_timetag";	/**< long ����ʱ��� ����*/
static const char *kNIMRobotInfoKeyUpdateTime	= "update_timetag";	/**< long ����ʱ��� ����*/
/** @}*/ //��������Ϣ Json Keys

/** @enum NIMRobotInfoChangeType*/
enum NIMRobotInfoChangeType
{
	kNIMRobotInfoChangeTypeAll      = 0,			/**< ȫ������*/
};

/** @typedef void (*nim_robot_change_cb_func)(int rescode, NIMRobotInfoChangeType type, const char *result, const char *json_extension, const void *user_data)
  * �����˱����֪ͨ��������
  * @param[out] rescode			������,200:һ������
  * @param[out] type			�������� 0��ȫ������
  * @param[out] result			��������Ϣ Json string array
  * @param[out] json_extension	json��չ���ݣ����ã�
  * @param[out] user_data		APP���Զ����û����ݣ�SDKֻ���𴫻ظ��ص������������κδ���
  * @return void �޷���ֵ
  */
typedef void (*nim_robot_change_cb_func)(int rescode, NIMRobotInfoChangeType type, const char *result, const char *json_extension, const void *user_data);

#ifdef __cplusplus
}
#endif

#endif //NIM_SDK_DLL_EXPORT_HEADERS_ROBOT_DEF_H_
