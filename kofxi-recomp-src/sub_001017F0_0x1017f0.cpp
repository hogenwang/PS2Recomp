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

// Function: sub_001017F0
// Address: 0x1017f0 - 0x101970
void sub_001017F0_0x1017f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001017F0_0x1017f0");
#endif

    switch (ctx->pc) {
        case 0x101828u: goto label_101828;
        case 0x1018c0u: goto label_1018c0;
        case 0x101930u: goto label_101930;
        default: break;
    }

    ctx->pc = 0x1017f0u;

    // 0x1017f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1017f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1017f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1017f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1017f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1017f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1017fc: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1017fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x101800: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x101800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101804: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x101804u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101808: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10180c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10180cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x101810: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x101810u;
    {
        const bool branch_taken_0x101810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101810u;
        // 0x101814: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101810) {
            ctx->pc = 0x101844u;
            goto label_101844;
        }
    }
    ctx->pc = 0x101818u;
    // 0x101818: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10181c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x10181cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x101820: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x101820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x101824: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x101824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_101828:
    // 0x101828: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x101828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10182c: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x10182Cu;
    {
        const bool branch_taken_0x10182c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10182Cu;
        // 0x101830: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10182c) {
            ctx->pc = 0x101924u;
            goto label_101924;
        }
    }
    ctx->pc = 0x101834u;
    // 0x101834: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101838: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x101838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10183c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10183Cu;
    {
        const bool branch_taken_0x10183c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10183Cu;
        // 0x101840: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10183c) {
            ctx->pc = 0x101828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101828;
        }
    }
    ctx->pc = 0x101844u;
label_101844:
    // 0x101844: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101848: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x101848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10184c: 0x3442a020  ori         $v0, $v0, 0xA020
    ctx->pc = 0x10184cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40992);
    // 0x101850: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x101850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x101854: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x101854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x101858: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x101858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x10185c: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10185Cu;
    {
        const bool branch_taken_0x10185c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x101860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10185Cu;
        // 0x101860: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10185c) {
            ctx->pc = 0x101880u;
            goto label_101880;
        }
    }
    ctx->pc = 0x101864u;
    // 0x101864: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101868: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x101868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10186c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10186cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x101870: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x101870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x101874: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x101874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x101878: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x101878u;
    {
        const bool branch_taken_0x101878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101878u;
        // 0x10187c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101878) {
            ctx->pc = 0x101890u;
            goto label_101890;
        }
    }
    ctx->pc = 0x101880u;
label_101880:
    // 0x101880: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101884: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x101884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x101888: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x101888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x10188c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x10188cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_101890:
    // 0x101890: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x101890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x101894: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101898: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x101898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10189c: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x10189cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x1018a0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1018a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1018a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1018a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1018a8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1018a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1018ac: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1018ACu;
    {
        const bool branch_taken_0x1018ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1018B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018ACu;
        // 0x1018b0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018ac) {
            ctx->pc = 0x1018DCu;
            goto label_1018dc;
        }
    }
    ctx->pc = 0x1018B4u;
    // 0x1018b4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1018b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1018b8: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1018b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x1018bc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1018bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1018c0:
    // 0x1018c0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1018c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1018c4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1018C4u;
    {
        const bool branch_taken_0x1018c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1018C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018C4u;
        // 0x1018c8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018c4) {
            ctx->pc = 0x101924u;
            goto label_101924;
        }
    }
    ctx->pc = 0x1018CCu;
    // 0x1018cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1018ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1018d0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1018d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1018d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1018D4u;
    {
        const bool branch_taken_0x1018d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1018D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018D4u;
        // 0x1018d8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018d4) {
            ctx->pc = 0x1018C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1018c0;
        }
    }
    ctx->pc = 0x1018DCu;
label_1018dc:
    // 0x1018dc: 0xdce20050  ld          $v0, 0x50($a3)
    ctx->pc = 0x1018dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x1018e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1018e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1018e4: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x1018e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x1018e8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1018e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1018ec: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1018ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1018f0: 0x1052024  and         $a0, $t0, $a1
    ctx->pc = 0x1018f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x1018f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1018f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1018f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1018f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1018fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1018fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x101900: 0x1485000d  bne         $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x101900u;
    {
        const bool branch_taken_0x101900 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x101904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101900u;
        // 0x101904: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101900) {
            ctx->pc = 0x101938u;
            goto label_101938;
        }
    }
    ctx->pc = 0x101908u;
    // 0x101908: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10190c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10190cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x101910: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x101910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x101914: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x101914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x101918: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x101918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x10191c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10191Cu;
    {
        const bool branch_taken_0x10191c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10191Cu;
        // 0x101920: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10191c) {
            ctx->pc = 0x101948u;
            goto label_101948;
        }
    }
    ctx->pc = 0x101924u;
label_101924:
    // 0x101924: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x101924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x101928: 0xc043e52  jal         func_10F948
    ctx->pc = 0x101928u;
    SET_GPR_U32(ctx, 31, 0x101930u);
    ctx->pc = 0x10192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101928u;
    // 0x10192c: 0x24849cb0  addiu       $a0, $a0, -0x6350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x101928u, 0x101930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101930u;
label_101930:
    // 0x101930: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x101930u;
    {
        const bool branch_taken_0x101930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101930u;
        // 0x101934: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101930) {
            ctx->pc = 0x101960u;
            goto label_101960;
        }
    }
    ctx->pc = 0x101938u;
label_101938:
    // 0x101938: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10193c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10193cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x101940: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x101940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x101944: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x101944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_101948:
    // 0x101948: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x101948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10194c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10194cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101950: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x101950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x101954: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x101954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x101958: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10195c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10195cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_101960:
    // 0x101960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101964: 0x3e00008  jr          $ra
    ctx->pc = 0x101964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101964u;
        // 0x101968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10196Cu;
    // 0x10196c: 0x0  nop
    ctx->pc = 0x10196cu;
    // NOP
}
