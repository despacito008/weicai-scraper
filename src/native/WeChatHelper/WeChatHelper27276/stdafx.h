﻿// stdafx.h: 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 项目特定的包含文件
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容
// Windows 头文件
#include <windows.h>
#include "WechatOffset27276.h"



// 在此处引用程序需要的其他标头

// 导出定义
#define DLLAPI _declspec(dllexport)

// 定义微信版本
#define WECHAT_WINDLL_VERSION 27276