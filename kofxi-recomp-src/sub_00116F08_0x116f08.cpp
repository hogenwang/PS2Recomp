#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116F08
// Address: 0x116f08 - 0x116f78
void sub_00116F08_0x116f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116F08_0x116f08");
#endif

    switch (ctx->pc) {
        case 0x116f44u: goto label_116f44;
        case 0x116f54u: goto label_116f54;
        case 0x116f68u: goto label_116f68;
        default: break;
    }

    ctx->pc = 0x116f08u;

    // 0x116f08: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x116f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x116f0c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x116f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x116f10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x116f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x116f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x116f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116f18: 0x2442ab30  addiu       $v0, $v0, -0x54D0
    ctx->pc = 0x116f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945584));
    // 0x116f1c: 0x24a5ab40  addiu       $a1, $a1, -0x54C0
    ctx->pc = 0x116f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945600));
    // 0x116f20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x116f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x116f24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f28: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x116f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x116f2c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x116f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x116f30: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x116f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x116f34: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x116f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x116f38: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x116f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x116f3c: 0xc043318  jal         func_10CC60
    ctx->pc = 0x116F3Cu;
    SET_GPR_U32(ctx, 31, 0x116F44u);
    ctx->pc = 0x116F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116F3Cu;
            // 0x116f40: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F44u; }
        if (ctx->pc != 0x116F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F44u; }
        if (ctx->pc != 0x116F44u) { return; }
    }
    ctx->pc = 0x116F44u;
label_116f44:
    // 0x116f44: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x116f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x116f48: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x116f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x116f4c: 0xc043318  jal         func_10CC60
    ctx->pc = 0x116F4Cu;
    SET_GPR_U32(ctx, 31, 0x116F54u);
    ctx->pc = 0x116F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116F4Cu;
            // 0x116f50: 0xac628dd0  sw          $v0, -0x7230($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294938064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F54u; }
        if (ctx->pc != 0x116F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F54u; }
        if (ctx->pc != 0x116F54u) { return; }
    }
    ctx->pc = 0x116F54u;
label_116f54:
    // 0x116f54: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x116f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x116f58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x116f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116f5c: 0xac628dd4  sw          $v0, -0x722C($v1)
    ctx->pc = 0x116f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294938068), GPR_U32(ctx, 2));
    // 0x116f60: 0x3e00008  jr          $ra
    ctx->pc = 0x116F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116F60u;
            // 0x116f64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116F68u;
label_116f68:
    // 0x116f68: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x116f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x116f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x116F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116F6Cu;
            // 0x116f70: 0x8c628dd4  lw          $v0, -0x722C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938068)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116F74u;
    // 0x116f74: 0x0  nop
    ctx->pc = 0x116f74u;
    // NOP
    ctx->pc = 0x116f78u;
}
