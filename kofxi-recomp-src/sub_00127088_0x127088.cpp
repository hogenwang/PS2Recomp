#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127088
// Address: 0x127088 - 0x127120
void sub_00127088_0x127088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127088_0x127088");
#endif

    switch (ctx->pc) {
        case 0x1270a0u: goto label_1270a0;
        case 0x1270f0u: goto label_1270f0;
        case 0x127108u: goto label_127108;
        default: break;
    }

    ctx->pc = 0x127088u;

    // 0x127088: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x127088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x12708c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12708Cu;
    {
        const bool branch_taken_0x12708c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12708Cu;
            // 0x127090: 0x851025  or          $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12708c) {
            ctx->pc = 0x1270D4u;
            goto label_1270d4;
        }
    }
    ctx->pc = 0x127094u;
    // 0x127094: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x127094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x127098: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x127098u;
    {
        const bool branch_taken_0x127098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127098) {
            ctx->pc = 0x1270D4u;
            goto label_1270d4;
        }
    }
    ctx->pc = 0x1270A0u;
label_1270a0:
    // 0x1270a0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x1270a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1270a4: 0x2cc70020  sltiu       $a3, $a2, 0x20
    ctx->pc = 0x1270a4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1270a8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1270a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1270ac: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1270acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1270b0: 0x704344c9  pxor        $t0, $v0, $v1
    ctx->pc = 0x1270b0u;
    SET_GPR_VEC(ctx, 8, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1270b4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1270b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1270b8: 0x710753a9  pcpyud      $t2, $t0, $a3
    ctx->pc = 0x1270b8u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x1270bc: 0x1484825  or          $t1, $t2, $t0
    ctx->pc = 0x1270bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x1270c0: 0x49280a  movz        $a1, $v0, $t1
    ctx->pc = 0x1270c0u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1270c4: 0x55200003  bnel        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1270C4u;
    {
        const bool branch_taken_0x1270c4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1270c4) {
            ctx->pc = 0x1270C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1270C4u;
            // 0x1270c8: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1270D4u;
            goto label_1270d4;
        }
    }
    ctx->pc = 0x1270CCu;
    // 0x1270cc: 0x10e0fff4  beqz        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x1270CCu;
    {
        const bool branch_taken_0x1270cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1270D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1270CCu;
            // 0x1270d0: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270cc) {
            ctx->pc = 0x1270A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1270a0;
        }
    }
    ctx->pc = 0x1270D4u;
label_1270d4:
    // 0x1270d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1270d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1270d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1270d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1270dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1270dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1270e0: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1270E0u;
    {
        const bool branch_taken_0x1270e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1270e0) {
            ctx->pc = 0x127114u;
            goto label_127114;
        }
    }
    ctx->pc = 0x1270E8u;
    // 0x1270e8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1270e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x1270ec: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1270ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_1270f0:
    // 0x1270f0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1270f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1270f4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1270f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1270f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1270F8u;
    {
        const bool branch_taken_0x1270f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1270FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1270F8u;
            // 0x1270fc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270f8) {
            ctx->pc = 0x127108u;
            goto label_127108;
        }
    }
    ctx->pc = 0x127100u;
    // 0x127100: 0x3e00008  jr          $ra
    ctx->pc = 0x127100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127100u;
            // 0x127104: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127108u;
label_127108:
    // 0x127108: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x127108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12710c: 0x14c7fff8  bne         $a2, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12710Cu;
    {
        const bool branch_taken_0x12710c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x127110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12710Cu;
            // 0x127110: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12710c) {
            ctx->pc = 0x1270F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1270f0;
        }
    }
    ctx->pc = 0x127114u;
label_127114:
    // 0x127114: 0x3e00008  jr          $ra
    ctx->pc = 0x127114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127114u;
            // 0x127118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12711Cu;
    // 0x12711c: 0x0  nop
    ctx->pc = 0x12711cu;
    // NOP
    ctx->pc = 0x127120u;
}
