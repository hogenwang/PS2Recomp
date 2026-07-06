#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002485B8
// Address: 0x2485b8 - 0x248620
void sub_002485B8_0x2485b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002485B8_0x2485b8");
#endif

    switch (ctx->pc) {
        case 0x2485c8u: goto label_2485c8;
        case 0x2485e8u: goto label_2485e8;
        case 0x248604u: goto label_248604;
        default: break;
    }

    ctx->pc = 0x2485b8u;

    // 0x2485b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2485b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2485bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2485bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2485c0: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2485C0u;
    SET_GPR_U32(ctx, 31, 0x2485C8u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2485C8u; }
        if (ctx->pc != 0x2485C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2485C8u; }
        if (ctx->pc != 0x2485C8u) { return; }
    }
    ctx->pc = 0x2485C8u;
label_2485c8:
    // 0x2485c8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2485c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2485cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2485ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2485d0: 0x8c620140  lw          $v0, 0x140($v1)
    ctx->pc = 0x2485d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x2485d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2485d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2485d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2485d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2485dc: 0x0  nop
    ctx->pc = 0x2485dcu;
    // NOP
    // 0x2485e0: 0x808c698  j           func_231A60
    ctx->pc = 0x2485E0u;
    ctx->pc = 0x2485E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2485E0u;
            // 0x2485e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2485E8u;
label_2485e8:
    // 0x2485e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2485e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2485ec: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2485ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2485f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2485f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2485f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2485f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2485f8: 0x24840148  addiu       $a0, $a0, 0x148
    ctx->pc = 0x2485f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 328));
    // 0x2485fc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2485FCu;
    SET_GPR_U32(ctx, 31, 0x248604u);
    ctx->pc = 0x248600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2485FCu;
            // 0x248600: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248604u; }
        if (ctx->pc != 0x248604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248604u; }
        if (ctx->pc != 0x248604u) { return; }
    }
    ctx->pc = 0x248604u;
label_248604:
    // 0x248604: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x248604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x248608: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x248608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x24860c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24860cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248610: 0xac600190  sw          $zero, 0x190($v1)
    ctx->pc = 0x248610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 400), GPR_U32(ctx, 0));
    // 0x248614: 0xac40ae48  sw          $zero, -0x51B8($v0)
    ctx->pc = 0x248614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946376), GPR_U32(ctx, 0));
    // 0x248618: 0x3e00008  jr          $ra
    ctx->pc = 0x248618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24861Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248618u;
            // 0x24861c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x248620u;
    ctx->pc = 0x248620u;
}
