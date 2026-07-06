#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012F7F0
// Address: 0x12f7f0 - 0x12f960
void sub_0012F7F0_0x12f7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F7F0_0x12f7f0");
#endif

    switch (ctx->pc) {
        case 0x12f7fcu: goto label_12f7fc;
        case 0x12f808u: goto label_12f808;
        case 0x12f84cu: goto label_12f84c;
        case 0x12f894u: goto label_12f894;
        case 0x12f904u: goto label_12f904;
        case 0x12f908u: goto label_12f908;
        default: break;
    }

    ctx->pc = 0x12f7f0u;

    // 0x12f7f0: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x12f7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x12f7f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12f7f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7f8: 0x24a55510  addiu       $a1, $a1, 0x5510
    ctx->pc = 0x12f7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21776));
label_12f7fc:
    // 0x12f7fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12f7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f800: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f804: 0x0  nop
    ctx->pc = 0x12f804u;
    // NOP
label_12f808:
    // 0x12f808: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x12f808u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f80c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12f80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12f810: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x12f810u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f814: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x12f814u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x12f818: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x12f818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x12f81c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F81Cu;
    {
        const bool branch_taken_0x12f81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f81c) {
            ctx->pc = 0x12F808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f808;
        }
    }
    ctx->pc = 0x12F824u;
    // 0x12f824: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x12f824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x12f828: 0x28e30006  slti        $v1, $a3, 0x6
    ctx->pc = 0x12f828u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x12f82c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x12F82Cu;
    {
        const bool branch_taken_0x12f82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F82Cu;
        // 0x12f830: 0x24a50016  addiu       $a1, $a1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f82c) {
            ctx->pc = 0x12F7FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7fc;
        }
    }
    ctx->pc = 0x12F834u;
    // 0x12f834: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x12f834u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x12f838: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x12f838u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x12f83c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f840: 0x24e755b0  addiu       $a3, $a3, 0x55B0
    ctx->pc = 0x12f840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21936));
    // 0x12f844: 0x24c655a0  addiu       $a2, $a2, 0x55A0
    ctx->pc = 0x12f844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21920));
    // 0x12f848: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x12f848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_12f84c:
    // 0x12f84c: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x12f84cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f850: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12f850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12f854: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x12f854u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f858: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x12f858u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12f85c: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x12f85cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f860: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x12f860u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f864: 0xa0e40002  sb          $a0, 0x2($a3)
    ctx->pc = 0x12f864u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f868: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x12f868u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f86c: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x12f86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x12f870: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x12F870u;
    {
        const bool branch_taken_0x12f870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F870u;
        // 0x12f874: 0x24c60003  addiu       $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f870) {
            ctx->pc = 0x12F84Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f84c;
        }
    }
    ctx->pc = 0x12F878u;
    // 0x12f878: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x12f878u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x12f87c: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x12f87cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x12f880: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x12f880u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x12f884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12f884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f888: 0x254adb50  addiu       $t2, $t2, -0x24B0
    ctx->pc = 0x12f888u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957904));
    // 0x12f88c: 0x252955b0  addiu       $t1, $t1, 0x55B0
    ctx->pc = 0x12f88cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21936));
    // 0x12f890: 0x250855a0  addiu       $t0, $t0, 0x55A0
    ctx->pc = 0x12f890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21920));
label_12f894:
    // 0x12f894: 0x9145015c  lbu         $a1, 0x15C($t2)
    ctx->pc = 0x12f894u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 348)));
    // 0x12f898: 0x9144017c  lbu         $a0, 0x17C($t2)
    ctx->pc = 0x12f898u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 380)));
    // 0x12f89c: 0x9143019c  lbu         $v1, 0x19C($t2)
    ctx->pc = 0x12f89cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 412)));
    // 0x12f8a0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x12f8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x12f8a4: 0xe53021  addu        $a2, $a3, $a1
    ctx->pc = 0x12f8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x12f8a8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x12f8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x12f8ac: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x12f8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x12f8b0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x12f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12f8b4: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x12f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x12f8b8: 0xa1260000  sb          $a2, 0x0($t1)
    ctx->pc = 0x12f8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x12f8bc: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x12f8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x12f8c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x12f8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x12f8c4: 0xa1250001  sb          $a1, 0x1($t1)
    ctx->pc = 0x12f8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x12f8c8: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x12f8c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12f8cc: 0xa1050001  sb          $a1, 0x1($t0)
    ctx->pc = 0x12f8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x12f8d0: 0x254a0248  addiu       $t2, $t2, 0x248
    ctx->pc = 0x12f8d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 584));
    // 0x12f8d4: 0xa1240002  sb          $a0, 0x2($t1)
    ctx->pc = 0x12f8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f8d8: 0xa1040002  sb          $a0, 0x2($t0)
    ctx->pc = 0x12f8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f8dc: 0x25290003  addiu       $t1, $t1, 0x3
    ctx->pc = 0x12f8dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x12f8e0: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x12F8E0u;
    {
        const bool branch_taken_0x12f8e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8E0u;
        // 0x12f8e4: 0x25080003  addiu       $t0, $t0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8e0) {
            ctx->pc = 0x12F894u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f894;
        }
    }
    ctx->pc = 0x12F8E8u;
    // 0x12f8e8: 0x3c0a0041  lui         $t2, 0x41
    ctx->pc = 0x12f8e8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65 << 16));
    // 0x12f8ec: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x12f8ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x12f8f0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x12f8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12f8f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12f8f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8f8: 0x254a55b0  addiu       $t2, $t2, 0x55B0
    ctx->pc = 0x12f8f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 21936));
    // 0x12f8fc: 0x252955a0  addiu       $t1, $t1, 0x55A0
    ctx->pc = 0x12f8fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21920));
    // 0x12f900: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x12f900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_12f904:
    // 0x12f904: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12f904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f908:
    // 0x12f908: 0x1472821  addu        $a1, $t2, $a3
    ctx->pc = 0x12f908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x12f90c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x12f90cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f910: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F910u;
    {
        const bool branch_taken_0x12f910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x12f910) {
            ctx->pc = 0x12F928u;
            goto label_12f928;
        }
    }
    ctx->pc = 0x12F918u;
    // 0x12f918: 0x1271821  addu        $v1, $t1, $a3
    ctx->pc = 0x12f918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x12f91c: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x12f91cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x12f920: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x12f920u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x12f924: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12f924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_12f928:
    // 0x12f928: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x12f928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x12f92c: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x12f92cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12f930: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x12F930u;
    {
        const bool branch_taken_0x12f930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f930) {
            ctx->pc = 0x12F908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f908;
        }
    }
    ctx->pc = 0x12F938u;
    // 0x12f938: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x12f938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x12f93c: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x12f93cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x12f940: 0x29030004  slti        $v1, $t0, 0x4
    ctx->pc = 0x12f940u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12f944: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x12F944u;
    {
        const bool branch_taken_0x12f944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F944u;
        // 0x12f948: 0x25290003  addiu       $t1, $t1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f944) {
            ctx->pc = 0x12F904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f904;
        }
    }
    ctx->pc = 0x12F94Cu;
    // 0x12f94c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x12f94cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x12f950: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12f950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12f954: 0xa0805598  sb          $zero, 0x5598($a0)
    ctx->pc = 0x12f954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21912), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f958: 0x3e00008  jr          $ra
    ctx->pc = 0x12F958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F958u;
        // 0x12f95c: 0xa0605508  sb          $zero, 0x5508($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 21768), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F960u;
}
