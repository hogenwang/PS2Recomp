#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00302C50
// Address: 0x302c50 - 0x302cb0
void sub_00302C50_0x302c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302C50_0x302c50");
#endif

    switch (ctx->pc) {
        case 0x302c98u: goto label_302c98;
        default: break;
    }

    ctx->pc = 0x302c50u;

    // 0x302c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x302c54: 0x24c2fff0  addiu       $v0, $a2, -0x10
    ctx->pc = 0x302c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x302c58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x302c5c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x302c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x302c60: 0x94880006  lhu         $t0, 0x6($a0)
    ctx->pc = 0x302c60u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x302c64: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x302c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c68: 0x948b0004  lhu         $t3, 0x4($a0)
    ctx->pc = 0x302c68u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x302c6c: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x302c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x302c70: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x302c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c74: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x302c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x302c78: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x302c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x302c7c: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x302c7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x302c80: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x302c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x302c84: 0x94890000  lhu         $t1, 0x0($a0)
    ctx->pc = 0x302c84u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x302c88: 0x948a0002  lhu         $t2, 0x2($a0)
    ctx->pc = 0x302c88u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x302c8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x302c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c90: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x302C90u;
    SET_GPR_U32(ctx, 31, 0x302C98u);
    ctx->pc = 0x302C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302C90u;
            // 0x302c94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302C98u; }
        if (ctx->pc != 0x302C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302C98u; }
        if (ctx->pc != 0x302C98u) { return; }
    }
    ctx->pc = 0x302C98u;
label_302c98:
    // 0x302c98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x302C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302C9Cu;
            // 0x302ca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302CA4u;
    // 0x302ca4: 0x0  nop
    ctx->pc = 0x302ca4u;
    // NOP
    // 0x302ca8: 0x0  nop
    ctx->pc = 0x302ca8u;
    // NOP
    // 0x302cac: 0x0  nop
    ctx->pc = 0x302cacu;
    // NOP
    ctx->pc = 0x302cb0u;
}
