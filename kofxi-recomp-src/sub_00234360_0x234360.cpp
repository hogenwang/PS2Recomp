#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234360
// Address: 0x234360 - 0x2343e8
void sub_00234360_0x234360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234360_0x234360");
#endif

    switch (ctx->pc) {
        case 0x234394u: goto label_234394;
        case 0x2343a0u: goto label_2343a0;
        case 0x2343b0u: goto label_2343b0;
        case 0x2343b8u: goto label_2343b8;
        case 0x2343c0u: goto label_2343c0;
        case 0x2343c8u: goto label_2343c8;
        case 0x2343d0u: goto label_2343d0;
        case 0x2343d8u: goto label_2343d8;
        case 0x2343e0u: goto label_2343e0;
        default: break;
    }

    ctx->pc = 0x234360u;

    // 0x234360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x234364: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x234364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x234368: 0xac60fcbc  sw          $zero, -0x344($v1)
    ctx->pc = 0x234368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966460), GPR_U32(ctx, 0));
    // 0x23436c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23436cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234370: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x234370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x234374: 0xac40fcb8  sw          $zero, -0x348($v0)
    ctx->pc = 0x234374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966456), GPR_U32(ctx, 0));
    // 0x234378: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x234378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x23437c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x23437cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x234380: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x234380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x234384: 0xac60fcf8  sw          $zero, -0x308($v1)
    ctx->pc = 0x234384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966520), GPR_U32(ctx, 0));
    // 0x234388: 0x0  nop
    ctx->pc = 0x234388u;
    // NOP
    // 0x23438c: 0xc08e482  jal         func_239208
    ctx->pc = 0x23438Cu;
    SET_GPR_U32(ctx, 31, 0x234394u);
    ctx->pc = 0x234390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23438Cu;
            // 0x234390: 0xac80fcc0  sw          $zero, -0x340($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294966464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239208u;
    if (runtime->hasFunction(0x239208u)) {
        auto targetFn = runtime->lookupFunction(0x239208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234394u; }
        if (ctx->pc != 0x234394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239208_0x239208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234394u; }
        if (ctx->pc != 0x234394u) { return; }
    }
    ctx->pc = 0x234394u;
label_234394:
    // 0x234394: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x234394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x234398: 0xc08a054  jal         func_228150
    ctx->pc = 0x234398u;
    SET_GPR_U32(ctx, 31, 0x2343A0u);
    ctx->pc = 0x23439Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234398u;
            // 0x23439c: 0x2484fcd8  addiu       $a0, $a0, -0x328 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228150u;
    if (runtime->hasFunction(0x228150u)) {
        auto targetFn = runtime->lookupFunction(0x228150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2343A0u; }
        if (ctx->pc != 0x2343A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228150_0x228150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2343A0u; }
        if (ctx->pc != 0x2343A0u) { return; }
    }
    ctx->pc = 0x2343A0u;
label_2343a0:
    // 0x2343a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2343a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2343a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2343a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2343a8: 0x808d51e  j           func_235478
    ctx->pc = 0x2343A8u;
    ctx->pc = 0x2343ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2343A8u;
            // 0x2343ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235478u;
    {
        auto targetFn = runtime->lookupFunction(0x235478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2343B0u;
label_2343b0:
    // 0x2343b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2343B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2343B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2343B0u;
            // 0x2343b4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2343B8u;
label_2343b8:
    // 0x2343b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2343B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2343C0u;
label_2343c0:
    // 0x2343c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2343C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2343C8u;
label_2343c8:
    // 0x2343c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2343C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2343CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2343C8u;
            // 0x2343cc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2343D0u;
label_2343d0:
    // 0x2343d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2343D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2343D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2343D0u;
            // 0x2343d4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2343D8u;
label_2343d8:
    // 0x2343d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2343D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2343E0u;
label_2343e0:
    // 0x2343e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2343E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2343E8u;
    ctx->pc = 0x2343e8u;
}
