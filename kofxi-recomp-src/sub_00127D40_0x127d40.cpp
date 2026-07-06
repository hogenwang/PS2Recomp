#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127D40
// Address: 0x127d40 - 0x127da8
void sub_00127D40_0x127d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127D40_0x127d40");
#endif

    switch (ctx->pc) {
        case 0x127d6cu: goto label_127d6c;
        default: break;
    }

    ctx->pc = 0x127d40u;

    // 0x127d40: 0x8c8f0010  lw          $t7, 0x10($a0)
    ctx->pc = 0x127d40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x127d44: 0x8cae0010  lw          $t6, 0x10($a1)
    ctx->pc = 0x127d44u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x127d48: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x127d48u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x127d4c: 0x15e00013  bnez        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x127D4Cu;
    {
        const bool branch_taken_0x127d4c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x127D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127D4Cu;
            // 0x127d50: 0x1e0102d  daddu       $v0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d4c) {
            ctx->pc = 0x127D9Cu;
            goto label_127d9c;
        }
    }
    ctx->pc = 0x127D54u;
    // 0x127d54: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x127d54u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x127d58: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x127d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x127d5c: 0x24af0014  addiu       $t7, $a1, 0x14
    ctx->pc = 0x127d5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x127d60: 0x8e5821  addu        $t3, $a0, $t6
    ctx->pc = 0x127d60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x127d64: 0x1ee2821  addu        $a1, $t7, $t6
    ctx->pc = 0x127d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x127d68: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x127d68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
label_127d6c:
    // 0x127d6c: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x127d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x127d70: 0x8d6c0000  lw          $t4, 0x0($t3)
    ctx->pc = 0x127d70u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x127d74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x127d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127d78: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x127d78u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x127d7c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x127d7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127d80: 0x8b502b  sltu        $t2, $a0, $t3
    ctx->pc = 0x127d80u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x127d84: 0x18d702b  sltu        $t6, $t4, $t5
    ctx->pc = 0x127d84u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x127d88: 0x158d0004  bne         $t4, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x127D88u;
    {
        const bool branch_taken_0x127d88 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        ctx->pc = 0x127D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127D88u;
            // 0x127d8c: 0x1ee100a  movz        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d88) {
            ctx->pc = 0x127D9Cu;
            goto label_127d9c;
        }
    }
    ctx->pc = 0x127D90u;
    // 0x127d90: 0x5540fff6  bnel        $t2, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x127D90u;
    {
        const bool branch_taken_0x127d90 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x127d90) {
            ctx->pc = 0x127D94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127D90u;
            // 0x127d94: 0x256bfffc  addiu       $t3, $t3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127D6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127d6c;
        }
    }
    ctx->pc = 0x127D98u;
    // 0x127d98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127d9c:
    // 0x127d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x127D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127DA4u;
    // 0x127da4: 0x0  nop
    ctx->pc = 0x127da4u;
    // NOP
    ctx->pc = 0x127da8u;
}
