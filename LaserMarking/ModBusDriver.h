// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__0575946C_CDF9_417A_83AB_015C80670D41__INCLUDED_)
#define AFX_STDAFX_H__0575946C_CDF9_417A_83AB_015C80670D41__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers

/*�ʺA�P�R�A�ŧi*/
 //#define DLLACT __declspec(dllimport)
// #define DLLACT __declspec(dllexport)

/*�ŧi�w�q */
typedef short I16;
typedef unsigned short U16;
typedef int I32;
typedef unsigned int U32 ;

/*RS-485�@�X�ʸ��J*/
	#include "DMT.h"					// Static load: Step 1/2
	#pragma comment(lib, "DMT.lib")		// Static load: Step 2/2
#define ModbusConType 0 //�s���u����

/*A2���F�����ѼƳ]�w*/

//�X�G�Τ��쪺�Ȧs��
#define GoHome_HSPD1 "050A00020400640000" //��M�s�I�Ҧ��Ĥ@�q�t�׳]�w��}�A�β�#1�աAP5-05 050AH-050BH 16bit DEC 0.1r/min 0-2000
#define GoHome_HSPD2 "050C00020400140000" //��M�s�I�Ҧ��ĤG�q�t�׳]�w��}�A�β�#1�աAP5-06 050CH-050DH 16bit DEC 0.1r/min 0-2000

//�S��Ȧs��
#define INH "023C0005" //��l�]�w�Ȧs�� P2-30�A023CH-203DH �����]�w5�Ҧ��ѼƤ��g�J�ä[�O�s�O����
#define PRCM "050E" //�R�O�U�F�Ȧs�� P5-07�A0=�k�s 1=����w�� 2=�۹�w�� 3=�^���I 4=�t�ץ��� 5=�t�פ��� 6=�t���k0
#define TSL "014800020400140000" //S���u�[��t�`��(�@��) P1-36�A0148H-0149H 16bit DEC ms 0-65500
#define MFPN "05200002" //ENCODE�^�ǭȡA�{�b��m
#define DICF "030C0001" //����INPUT�Ѥ����Υ~������
#define Input_Status "040E0000" //INPUTŪ�g�Ȧs��
#define Output_Status "04120001" //OUTPUTŪ���Ȧs��
//�]�w�Ȧs��
#define POSITION_h_PDEF1 "060400020400320000" //���ﲾ�ʩw��Ҧ��ѼƳ]�w��}�A�β�#1�աAP6-02�A0604H-0605H ABS 32bit (��m)
#define POSITION_i_PDEF2 "060800020400B20000" //�W�q���ʩw��Ҧ��ѼƳ]�w��}�A�β�#2�աAP6-04 INC 32bit HEX ��000(SPD)(DEA)(ACC)B2H  
#define POSITION_a_PDEF3 "060C00020400720000" //���I�_�k�ѼƳ]�w��}�A�β�#3�աAP06-06
#define Constant_speed_p_PDEF4 "061000020400110000" //�t�׼Ҧ�����ѼƳ]�w��}�A�β�#4�աAP6-08�A0610H-0611H
#define Constant_speed_n_PDEF5 "061400020400110000"//�t�׼Ҧ�����ѼƳ]�w��}�A�β�#5�աAP6-10
// #define Constant_speed_0_PDEF6 "0618"//�t�׼Ҧ��t��0�ѼƳ]�w��}�A�β�#6�աAP6-12
#define POSITION_r_PDEF7 "061C00020400320000" //�۹ﲾ�ʩw��Ҧ��ѼƳ]�w��}�A�β�#2�աAP6-04 INC 32bit HEX ��000(SPD)(DEA)(ACC)72H  
//�ܼƭȼȦs��
#define Position_h_CMD_PDAT1 "0606000204" //���ﲾ�ʩw��Ҧ���}�]�w��}�A�β�#1�աAP6-03�A0606H-0607H 32bit (��m) -2147483648 ~ +2147483647
#define Position_i_CMD_PDAT2 "060A000204" //�W�q���ʩw��Ҧ���}�]�w��}�A�β�#2�աAP6-05
#define Position_a_CMD_PDAT3 "060E000204" //���I�_�k��}�]�w��}�A�β�#3�աAP6-07�A060EH-060FH 32bit (��m) -2147483648 ~ +2147483647
#define Traget_Speed_p_PDAT4 "0612000204" //�t�׼Ҧ�����t�צ�}�A�β�#4�աAP6-09
#define Traget_Speed_n_PDAT5 "0616000204" //�t�׼Ҧ�����t�צ�}�A�β�#5�աAP6-12
// #define Traget_Speed_0_PDAT6 "061A000204" //�t�׼Ҧ��t��0��}�A�β�#6�աAP6-13�A061AH-061BH 32bit r/min -2147483648 ~ +2147483647
#define Position_r_CMD_PDAT7 "061E000204" //�۹ﲾ�ʩw��Ҧ���}�]�w��}�A�β�#7�աAP6-05
//�t�סB�[�t�סBS���u�`��
#define ACC00 "0528000204" //�[�t�ɶ���}�AP5-20�A0528H-0529H 16bit DEC ms 1~65500�A�q0�[�t��3000r/min�һݮɶ�
//#define ACC01 "052A000204" //�[�t�ɶ���}�AP5-21
//#define ACC02 "052C000204" //�[�t�ɶ���}�AP5-22
//#define ACC03 "052E000204" //�[�t�ɶ���}�AP5-23
//#define ACC04 "0530000204" //�[�t�ɶ���}�AP5-24
//#define ACC05 "0532000204" //�[�t�ɶ���}�AP5-25
//#define ACC06 "0534000204" //�[�t�ɶ���}�AP5-26
//#define ACC07 "0536000204" //�[�t�ɶ���}�AP5-27
//#define ACC08 "0538000204" //�[�t�ɶ���}�AP5-28
//#define ACC09 "053A000204" //�[�t�ɶ���}�AP5-29
//#define ACC10 "053C000204" //�[�t�ɶ���}�AP5-30
//#define ACC11 "053E000204" //�[�t�ɶ���}�AP5-31
//#define ACC12 "0540000204" //�[�t�ɶ���}�AP5-32
//#define ACC13 "0542000204" //�[�t�ɶ���}�AP5-33
//#define ACC14 "0544000204" //�[�t�ɶ���}�AP5-34
//#define ACC15 "0546000204" //�[�t�ɶ���}�AP5-35

#define POV00 "0578000204" //�t�׳]�w��}�AP5-60�A0578H-0579H 16bit DEC 0.1r/min 1~60000
//#define POV01 "057A000204" //�t�׳]�w��}�AP5-61
//#define POV02 "057C000204" //�t�׳]�w��}�AP5-62
//#define POV03 "057E000204" //�t�׳]�w��}�AP5-63
//#define POV04 "0580000204" //�t�׳]�w��}�AP5-64
//#define POV05 "0582000204" //�t�׳]�w��}�AP5-65
//#define POV06 "0584000204" //�t�׳]�w��}�AP5-66
//#define POV07 "0586000204" //�t�׳]�w��}�AP5-67
//#define POV08 "0588000204" //�t�׳]�w��}�AP5-68
//#define POV09 "058A000204" //�t�׳]�w��}�AP5-69
//#define POV10 "058C000204" //�t�׳]�w��}�AP5-70
//#define POV11 "058E000204" //�t�׳]�w��}�AP5-71
//#define POV12 "0590000204" //�t�׳]�w��}�AP5-72
//#define POV13 "0592000204" //�t�׳]�w��}�AP5-73
//#define POV14 "0594000204" //�t�׳]�w��}�AP5-74
//#define POV15 "0596000204" //�t�׳]�w��}�AP5-75

// TODO: reference additional headers your program requires here

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__0575946C_CDF9_417A_83AB_015C80670D41__INCLUDED_)

/* PLC���� */
#define PLC_WORK "083CFF00" //�u�@�ҰʺX�Ц�m
#define PLC_COMPLETE "083DFF00" //�u�@�����X�Ц�m
#define PLC_DEBUG "0834FF00" //DEBUG�Ҧ��X�Ц�m
#define PLC_NOIN "0835FF00" //DEBUG�Ҧ��X�Ц�m
#define PLC_SandRmode "0836FF00" //S&R�Ҧ��X�Ц�m
#define PLC_NoInto "0835FF00" //�B�q���e�ݾ��x�H���X�Ц�m
#define PLC_Blowers "0837FF00" //����������H���X�Ц�m
#define PLC_ALM2_No_BEE "0838FF00" //�ĤG��ĵ���榸����ĵ���n�X�Ц�m
#define PLC_ALM1_No_BEE "0839FF00" //�Ĥ@��ĵ������ĵ���n�X�Ц�m
#define PLC_EVER_ALM1_No_BEE "0A03FF00" //�}����Ĥ@��ĵ������ĵ���n�X�Ц�m
#define PLC_NOSleep "083EFF00" //����v�Ҧ��X�Ц�m
#define PLC_EVER_NOSleep "0A02FF00" //�}���ᤣ��v�Ҧ��X�Ц�m
#define PLC_Manual "083FFF00" //��ʼҦ��X�Ц�m
#define PLC_Illumination "0840FF00" //�����Ұʦ�m�A����
#define PLC_Illumination2 "0848FF00" //�����Ұʦ�m�A����
#define PLC_TEST "0841FF00" //�X�O�᮳���O�l�Y������ݰ�x�H���Ҧ��X�Ц�m
#define PLC_Queue "0842FF00" //��i��X�Ҧ��X�Ц�m
#define PLC_Reverse "0843FF00" //���x�ϦV�Ҧ��X�Ц�m
#define PLC_EVER_Reverse "0A00FF00" //�}������x�ϦV�X�Ц�m
#define PLC_NG "0844FF00" //NG�H���X�Ц�m
#define PLC_byPASS "0845FF00" //���q���x�H���ǵ��e�q�X�Ц�m
#define PLC_EVER_byPASS "0A01FF00" //�}������q���x�H���ǵ��e�q�X�Ц�m
#define PLC_NoWait "0846FF00" //�����ݫ�q���x�H���X�Ц�m
#define PLC_Status "084C002004" //���x���A�X�Ц�m
#define PLC_ALM "0864002004" //PLC���~ĵ�i�X�Ц�m
#define PLC_PC_ALM_LV1 "0865FF00" //PC�o�ʤ@��ĵ����m
#define PLC_PC_ALM_LV2 "0866FF00" //PC�o�ʤG��ĵ����m
#define PLC_ALM "0864002004" //PLC���~ĵ�i�X�Ц�m
#define PLC_Manual_OUTPUT "0888002004" //��ʿ�X�I�X�Ц�m
#define PLC_IO_OUTPUT "0824001002" //IO��X�I���A�X�Ц�m
#define PLC_IO_INPUT "0800002004" //IO��J�I���A�X�Ц�m
#define PLC_Working_Cycle "1000000102" //�e�@���O�l�@�~�g�L�ɶ���m

#define PLC_Conveyor_Width_VAR "11A5000102" //��e�a�e�׳]�w
#define PLC_Conveyor_Width_ManualVAR "10E5000204" //�Ĥ@��e�a�T�ʲ��ʶZ���]�w
#define PLC_Conveyor_Width_Auto_ADJ_All "083BFF00" //��e�a�۰ʽռe���ǳƫ��O
#define PLC_Conveyor_Width_Auto_ADJ_Start "0862FF00" //��e�a�۰ʽռe���ǳƫ�}�l���O
#define PLC_Conveyor_Width_Auto_ADJ "08CEFF00" //�Ĥ@��e�a�۰ʽռe��
#define PLC_Conveyor_Width_CW_ADJ "08B5FF00" //�Ĥ@��e�a��ʥ���
#define PLC_Conveyor_Width_CCW_ADJ "08B8FF00" //�Ĥ@��e�a��ʤ���
#define PLC_Conveyor_Width_Auto_Correction "11AB000204" //�Ĥ@��e�a�L�նZ��
#define PLC_Conveyor_Width_Speed "11B7000204"	//�Ĥ@��e�a��t�]�w
#define PLC_Conveyor_Width_CCW_Mode "08C80010"	//�Ĥ@��e�a�˰h�Ҧ�(Ū���ռe�����F���A�Ϊ�)
#define PLC_Conveyor_Change_Speed "08C80020"//��e�a�ܧ�t��

#define PLC_Conveyor_Speed "11C3000204"	//��e�a��t�]�w
#define PLC_Conveyor_Move_Locate "11C9000204"	//��e�q�P���쨫��w���I�ݭn���Z��(50pp/�@��)
