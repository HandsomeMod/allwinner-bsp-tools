/*
**********************************************************************************************************************
*											        eGon
*						           the Embedded GO-ON Bootloader System
*									       eGON arm boot sub-system
*
*						  Copyright(C), 2006-2014, Allwinner Technology Co., Ltd.
*                                           All Rights Reserved
*
* File    :
*
* By      : Jerry
*
* Version : V2.00
*
* Date	  :
*
* Descript:
**********************************************************************************************************************
*/

#ifndef __TOC0__CONST__DEF__H__
#define __TOC0__CONST__DEF__H__


static   u8  TOC0_CONST_TOTAL_SEQUENCE[4]={0x30,0x82,0x00,0x00};
static   u8  TOC0_CONST_MAIN_SEQUENCE[4]={0x30,0x82,0x00,0x00};
static   u8  TOC0_CONST_VERSION[5] = {0xa0,0x03,0x02,0x01,0x02};
static   u8  TOC0_CONST_SERIAL[3]  = {0x2,0x1,0x2};
static   u8  TOC0_CONST_ALGORITHM_OID[15] = {0x30,0x0d,0x06,0x09,0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x01,0x0b,0x05,0x00};

static   u8  TOC0_CONST_ISSUER_NAME[] = {
								0x30,0x2a,			//SEQUENCE 42

								0x31,0x0b,			//SET 11
								0x30,0x09,			//Sequence 9
								0x06,0x03,			//OID
								0x55,0x04,0x06,
								0x13,0x02,
								0x55,0x53,

								0x31,0x0c,			//SET 12
								0x30,0x0a,
								0x06,0x03,
								0x55,0x04,0x0a,
								0x13,0x03,
								0x6,0x6f,0x76,

								0x31,0x0d,			//SET 13
								0x30,0x0b,
								0x06,0x03,
								0x55,0x04,0x0b,
								0x13,0x04,
								0x6e,0x69,0x73,0x74
							};

//------------I_5------------
static  u8  TOC0_CONST_VALIDE_PERIOD[] = {
								0x30,0x1e,			//SQUENCE 30
								0x17,0x0d,
								0x39,0x37,0x30,0x36,	0x33,0x30,0x30,0x30 ,
								0x30,0x30,0x30,0x30,	0x5a,

								0x17,0x0d,
    							0x39,0x37,0x31,0x32,	0x33,0x31,0x30,0x30,
   								0x30,0x30,0x30,0x30,	0x5a
							};

//------------I_6------------
static  u8  TOC0_CONST_SUBJECT_NAME[] =	{
								0x30,0x2a,			//SEQUENCE 42
								0x31,0x0b,			//SET 11
								0x30,0x09,			//Sequence 9
								0x06,0x03,			//OID
								0x55,0x04,0x06,		//	OBJ_countryName
								0x13,0x02,
								0x55,0x53,
								0x31,0x0c,			//SET 12
								0x30,0x0a,
								0x06,0x03,
								0x55,0x04,0x0a,		//	OBJ_organizationName
								0x13,0x03,
								0x6,0x6f,0x76,
								0x31,0x0d,			//SET 13
								0x30,0x0b,
								0x06,0x03,
								0x55,0x04,0x0b,		//	OBJ_organizationalUnitName
								0x13,0x04,
								0x6e,0x69,0x73,0x74
							};
static u8  TOC0_CONST_SUBJECT_PUBLIC_ALGORITHN_OID[15]=
							{
								0x30 ,0x0d,
								0x06 ,0x09,
								0x2a ,0x86 ,0x48 ,0x86 ,0xf7     ,0x0d ,0x01 ,0x01 ,0x01,
								0x05,0x00
							};
static u8  TOC0_CONST_EXTENSION_TOCKEN[]={0xa3,0x24};
static u8  TOC0_CONST_EXTENSION_SEQUENCE[]={0x30,0x22};
static u8  TOC0_CONST_SBROMSW_HASH_TYPE[]={0x02,0x20};
static u8  TOC0_CONST_SIGNATURE_SEQUENCE[]={0x03,0x82,0x01,13 + 4};
static u8  TOC0_CONST_SIGNATURE_OID[13]={
								0x30 ,0x0b,				//SEQUENCE 	9
								0x06 ,0x09,
								0x2a ,0x86 ,0x48 ,0x86 ,0xf7     ,0x0d ,0x01 ,0x01 ,0x0a
								};
static u8  TOC0_CONST_SIGNATURE_VALUE_HEAD[]={0x03,0x82,0x01,0x00};



#endif  //__TOC0__CONST__DEF__H__
