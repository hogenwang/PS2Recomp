#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00122380
// Address: 0x122380 - 0x122438
void sub_00122380_0x122380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122380_0x122380");
#endif

    switch (ctx->pc) {
        case 0x1223ccu: goto label_1223cc;
        case 0x122418u: goto label_122418;
        default: break;
    }

    ctx->pc = 0x122380u;

    // 0x122380: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x122380u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122384: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x122384u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122388: 0x8c8d000c  lw          $t5, 0xC($a0)
    ctx->pc = 0x122388u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12238c: 0x2dcf0002  sltiu       $t7, $t6, 0x2
    ctx->pc = 0x12238cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x122390: 0x15e00024  bnez        $t7, . + 4 + (0x24 << 2)
    ctx->pc = 0x122390u;
    {
        const bool branch_taken_0x122390 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122390u;
            // 0x122394: 0x8c8a0004  lw          $t2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122390) {
            ctx->pc = 0x122424u;
            goto label_122424;
        }
    }
    ctx->pc = 0x122398u;
    // 0x122398: 0x39cf0004  xori        $t7, $t6, 0x4
    ctx->pc = 0x122398u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
    // 0x12239c: 0x51e00022  beql        $t7, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x12239Cu;
    {
        const bool branch_taken_0x12239c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12239c) {
            ctx->pc = 0x1223A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12239Cu;
            // 0x1223a0: 0x3c0d007f  lui         $t5, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x122428u;
            goto label_122428;
        }
    }
    ctx->pc = 0x1223A4u;
    // 0x1223a4: 0x39cf0002  xori        $t7, $t6, 0x2
    ctx->pc = 0x1223a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
    // 0x1223a8: 0x51e00008  beql        $t7, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1223A8u;
    {
        const bool branch_taken_0x1223a8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1223a8) {
            ctx->pc = 0x1223ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1223A8u;
            // 0x1223ac: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1223CCu;
            goto label_1223cc;
        }
    }
    ctx->pc = 0x1223B0u;
    // 0x1223b0: 0x11a00007  beqz        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1223B0u;
    {
        const bool branch_taken_0x1223b0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1223B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1223B0u;
            // 0x1223b4: 0x3c0e007f  lui         $t6, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1223b0) {
            ctx->pc = 0x1223D0u;
            goto label_1223d0;
        }
    }
    ctx->pc = 0x1223B8u;
    // 0x1223b8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1223b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1223bc: 0x288fff82  slti        $t7, $a0, -0x7E
    ctx->pc = 0x1223bcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x1223c0: 0x51e00015  beql        $t7, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1223C0u;
    {
        const bool branch_taken_0x1223c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1223c0) {
            ctx->pc = 0x1223C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1223C0u;
            // 0x1223c4: 0x248b007f  addiu       $t3, $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
        ctx->in_delay_slot = false;
            ctx->pc = 0x122418u;
            goto label_122418;
        }
    }
    ctx->pc = 0x1223C8u;
    // 0x1223c8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1223c8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1223cc:
    // 0x1223cc: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x1223ccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
label_1223d0:
    // 0x1223d0: 0x3c0fff80  lui         $t7, 0xFF80
    ctx->pc = 0x1223d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65408 << 16));
    // 0x1223d4: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x1223d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x1223d8: 0x18f6024  and         $t4, $t4, $t7
    ctx->pc = 0x1223d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x1223dc: 0x1ae7024  and         $t6, $t5, $t6
    ctx->pc = 0x1223dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
    // 0x1223e0: 0x316f00ff  andi        $t7, $t3, 0xFF
    ctx->pc = 0x1223e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x1223e4: 0x3c0d807f  lui         $t5, 0x807F
    ctx->pc = 0x1223e4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32895 << 16));
    // 0x1223e8: 0x18e6025  or          $t4, $t4, $t6
    ctx->pc = 0x1223e8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 14));
    // 0x1223ec: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x1223ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x1223f0: 0xf7dc0  sll         $t7, $t7, 23
    ctx->pc = 0x1223f0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 23));
    // 0x1223f4: 0x18d6024  and         $t4, $t4, $t5
    ctx->pc = 0x1223f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 13));
    // 0x1223f8: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x1223f8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x1223fc: 0x18f6025  or          $t4, $t4, $t7
    ctx->pc = 0x1223fcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 15));
    // 0x122400: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x122400u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x122404: 0xa6fc0  sll         $t5, $t2, 31
    ctx->pc = 0x122404u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 10), 31));
    // 0x122408: 0x18e6024  and         $t4, $t4, $t6
    ctx->pc = 0x122408u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
    // 0x12240c: 0x18d7825  or          $t7, $t4, $t5
    ctx->pc = 0x12240cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x122410: 0x3e00008  jr          $ra
    ctx->pc = 0x122410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122410u;
            // 0x122414: 0x448f0000  mtc1        $t7, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x122418u;
label_122418:
    // 0x122418: 0x296f0100  slti        $t7, $t3, 0x100
    ctx->pc = 0x122418u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x12241c: 0x15e0ffeb  bnez        $t7, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12241Cu;
    {
        const bool branch_taken_0x12241c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12241Cu;
            // 0x122420: 0xd69c2  srl         $t5, $t5, 7 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12241c) {
            ctx->pc = 0x1223CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1223cc;
        }
    }
    ctx->pc = 0x122424u;
label_122424:
    // 0x122424: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x122424u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
label_122428:
    // 0x122428: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x122428u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12242c: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x12242Cu;
    {
        const bool branch_taken_0x12242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12242Cu;
            // 0x122430: 0x35adffff  ori         $t5, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12242c) {
            ctx->pc = 0x1223CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1223cc;
        }
    }
    ctx->pc = 0x122434u;
    // 0x122434: 0x0  nop
    ctx->pc = 0x122434u;
    // NOP
    ctx->pc = 0x122438u;
}
