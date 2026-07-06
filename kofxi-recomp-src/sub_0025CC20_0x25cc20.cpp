#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025CC20
// Address: 0x25cc20 - 0x25cc58
void sub_0025CC20_0x25cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CC20_0x25cc20");
#endif

    switch (ctx->pc) {
        case 0x25cc30u: goto label_25cc30;
        case 0x25cc38u: goto label_25cc38;
        default: break;
    }

    ctx->pc = 0x25cc20u;

    // 0x25cc20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25cc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25cc24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25cc28: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x25CC28u;
    SET_GPR_U32(ctx, 31, 0x25CC30u);
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC30u; }
        if (ctx->pc != 0x25CC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC30u; }
        if (ctx->pc != 0x25CC30u) { return; }
    }
    ctx->pc = 0x25CC30u;
label_25cc30:
    // 0x25cc30: 0xc097242  jal         func_25C908
    ctx->pc = 0x25CC30u;
    SET_GPR_U32(ctx, 31, 0x25CC38u);
    ctx->pc = 0x25CC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CC30u;
            // 0x25cc34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C908u;
    if (runtime->hasFunction(0x25C908u)) {
        auto targetFn = runtime->lookupFunction(0x25C908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC38u; }
        if (ctx->pc != 0x25CC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025C908_0x25c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC38u; }
        if (ctx->pc != 0x25CC38u) { return; }
    }
    ctx->pc = 0x25CC38u;
label_25cc38:
    // 0x25cc38: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CC38u;
    {
        const bool branch_taken_0x25cc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cc38) {
            ctx->pc = 0x25CC3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25CC38u;
            // 0x25cc3c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25CC48u;
            goto label_25cc48;
        }
    }
    ctx->pc = 0x25CC40u;
    // 0x25cc40: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25cc44: 0x24421758  addiu       $v0, $v0, 0x1758
    ctx->pc = 0x25cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5976));
label_25cc48:
    // 0x25cc48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x25CC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CC4Cu;
            // 0x25cc50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CC54u;
    // 0x25cc54: 0x0  nop
    ctx->pc = 0x25cc54u;
    // NOP
    ctx->pc = 0x25cc58u;
}
