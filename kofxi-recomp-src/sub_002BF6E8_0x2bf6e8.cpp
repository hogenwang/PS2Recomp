#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BF6E8
// Address: 0x2bf6e8 - 0x2bf730
void sub_002BF6E8_0x2bf6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF6E8_0x2bf6e8");
#endif

    switch (ctx->pc) {
        case 0x2bf710u: goto label_2bf710;
        default: break;
    }

    ctx->pc = 0x2bf6e8u;

    // 0x2bf6e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bf6ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bf6ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bf6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bf6f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bf6f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bf6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bf6fc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2bf6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf700: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2bf700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf708: 0xc0a02ba  jal         func_280AE8
    ctx->pc = 0x2BF708u;
    SET_GPR_U32(ctx, 31, 0x2BF710u);
    ctx->pc = 0x2BF70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF708u;
            // 0x2bf70c: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280AE8u;
    if (runtime->hasFunction(0x280AE8u)) {
        auto targetFn = runtime->lookupFunction(0x280AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF710u; }
        if (ctx->pc != 0x2BF710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280AE8_0x280ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF710u; }
        if (ctx->pc != 0x2BF710u) { return; }
    }
    ctx->pc = 0x2BF710u;
label_2bf710:
    // 0x2bf710: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x2bf710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x2bf714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bf714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf718: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x2bf718u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2bf71c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bf71cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf724: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF724u;
            // 0x2bf728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BF72Cu;
    // 0x2bf72c: 0x0  nop
    ctx->pc = 0x2bf72cu;
    // NOP
    ctx->pc = 0x2bf730u;
}
