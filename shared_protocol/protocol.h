#ifndef __PROTOCOL_H
#define __PROTOCOL_H

#define FRAME_HEAD 0xAA
#define FRAME_TAIL 0x55

// 定义指令
#define CMD_MOTOR  0x01  // 控制电机
#define CMD_LED    0x02  // 控制LED

// 校验宏：包头 ^ 指令 ^ 数据
#define CALC_CHECK(cmd, data) (FRAME_HEAD ^ (cmd) ^ (data))

#endif