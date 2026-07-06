#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DBC88
// Address: 0x1dbc88 - 0x1dbcd0
void sub_001DBC88_0x1dbc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBC88_0x1dbc88");
#endif

    switch (ctx->pc) {
        case 0x1dbcc0u: goto label_1dbcc0;
        default: break;
    }

    ctx->pc = 0x1dbc88u;

    // 0x1dbc88: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1dbc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1dbc8c: 0x3c035a5a  lui         $v1, 0x5A5A
    ctx->pc = 0x1dbc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23130 << 16));
    // 0x1dbc90: 0x8c44c300  lw          $a0, -0x3D00($v0)
    ctx->pc = 0x1dbc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951680)));
    // 0x1dbc94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbc94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbc98: 0x34635a5a  ori         $v1, $v1, 0x5A5A
    ctx->pc = 0x1dbc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23130);
    // 0x1dbc9c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBC9Cu;
    {
        const bool branch_taken_0x1dbc9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DBCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC9Cu;
            // 0x1dbca0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc9c) {
            ctx->pc = 0x1DBCC0u;
            goto label_1dbcc0;
        }
    }
    ctx->pc = 0x1DBCA4u;
    // 0x1dbca4: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1dbca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1dbca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbcac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dbcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcb0: 0x34a5ff02  ori         $a1, $a1, 0xFF02
    ctx->pc = 0x1dbcb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65282);
    // 0x1dbcb4: 0x8076688  j           func_1D9A20
    ctx->pc = 0x1DBCB4u;
    ctx->pc = 0x1DBCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBCB4u;
            // 0x1dbcb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    if (runtime->hasFunction(0x1D9A20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9A20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001D9A20_0x1d9a20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1DBCBCu;
    // 0x1dbcbc: 0x0  nop
    ctx->pc = 0x1dbcbcu;
    // NOP
label_1dbcc0:
    // 0x1dbcc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbcc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dbcc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBCC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBCC8u;
            // 0x1dbccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DBCD0u;
    ctx->pc = 0x1dbcd0u;
}
