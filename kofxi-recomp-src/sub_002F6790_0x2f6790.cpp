#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F6790
// Address: 0x2f6790 - 0x2f67f8
void sub_002F6790_0x2f6790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6790_0x2f6790");
#endif

    switch (ctx->pc) {
        case 0x2f67a0u: goto label_2f67a0;
        default: break;
    }

    ctx->pc = 0x2f6790u;

    // 0x2f6790: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2f6790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2f6794: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2f6794u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6798: 0x244bb7c8  addiu       $t3, $v0, -0x4838
    ctx->pc = 0x2f6798u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948808));
    // 0x2f679c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2f679cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f67a0:
    // 0x2f67a0: 0x81480000  lb          $t0, 0x0($t2)
    ctx->pc = 0x2f67a0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2f67a4: 0x81270000  lb          $a3, 0x0($t1)
    ctx->pc = 0x2f67a4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2f67a8: 0x10b2021  addu        $a0, $t0, $t3
    ctx->pc = 0x2f67a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x2f67ac: 0x2506ffe0  addiu       $a2, $t0, -0x20
    ctx->pc = 0x2f67acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
    // 0x2f67b0: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x2f67b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x2f67b4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2f67b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f67b8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2f67b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f67bc: 0x24e4ffe0  addiu       $a0, $a3, -0x20
    ctx->pc = 0x2f67bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x2f67c0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2f67c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2f67c4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2f67c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2f67c8: 0x102300a  movz        $a2, $t0, $v0
    ctx->pc = 0x2f67c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    // 0x2f67cc: 0xe3200a  movz        $a0, $a3, $v1
    ctx->pc = 0x2f67ccu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    // 0x2f67d0: 0xc41023  subu        $v0, $a2, $a0
    ctx->pc = 0x2f67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2f67d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F67D4u;
    {
        const bool branch_taken_0x2f67d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f67d4) {
            ctx->pc = 0x2F67F0u;
            goto label_2f67f0;
        }
    }
    ctx->pc = 0x2F67DCu;
    // 0x2f67dc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F67DCu;
    {
        const bool branch_taken_0x2f67dc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F67E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F67DCu;
            // 0x2f67e0: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f67dc) {
            ctx->pc = 0x2F67ECu;
            goto label_2f67ec;
        }
    }
    ctx->pc = 0x2F67E4u;
    // 0x2f67e4: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x2F67E4u;
    {
        const bool branch_taken_0x2f67e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F67E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F67E4u;
            // 0x2f67e8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f67e4) {
            ctx->pc = 0x2F67A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f67a0;
        }
    }
    ctx->pc = 0x2F67ECu;
label_2f67ec:
    // 0x2f67ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f67ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f67f0:
    // 0x2f67f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F67F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F67F8u;
    ctx->pc = 0x2f67f8u;
}
