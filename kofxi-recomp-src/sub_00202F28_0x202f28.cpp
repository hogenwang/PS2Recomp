#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00202F28
// Address: 0x202f28 - 0x202f68
void sub_00202F28_0x202f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202F28_0x202f28");
#endif

    switch (ctx->pc) {
        case 0x202f58u: goto label_202f58;
        default: break;
    }

    ctx->pc = 0x202f28u;

    // 0x202f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x202f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202f2c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202F2Cu;
    {
        const bool branch_taken_0x202f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202F2Cu;
            // 0x202f30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f2c) {
            ctx->pc = 0x202F3Cu;
            goto label_202f3c;
        }
    }
    ctx->pc = 0x202F34u;
    // 0x202f34: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x202F34u;
    {
        const bool branch_taken_0x202f34 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x202F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202F34u;
            // 0x202f38: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f34) {
            ctx->pc = 0x202F48u;
            goto label_202f48;
        }
    }
    ctx->pc = 0x202F3Cu;
label_202f3c:
    // 0x202f3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x202F3Cu;
    {
        const bool branch_taken_0x202f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202F3Cu;
            // 0x202f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f3c) {
            ctx->pc = 0x202F5Cu;
            goto label_202f5c;
        }
    }
    ctx->pc = 0x202F44u;
    // 0x202f44: 0x0  nop
    ctx->pc = 0x202f44u;
    // NOP
label_202f48:
    // 0x202f48: 0x24840012  addiu       $a0, $a0, 0x12
    ctx->pc = 0x202f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18));
    // 0x202f4c: 0x24a5f438  addiu       $a1, $a1, -0xBC8
    ctx->pc = 0x202f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964280));
    // 0x202f50: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x202F50u;
    SET_GPR_U32(ctx, 31, 0x202F58u);
    ctx->pc = 0x202F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202F50u;
            // 0x202f54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F58u; }
        if (ctx->pc != 0x202F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F58u; }
        if (ctx->pc != 0x202F58u) { return; }
    }
    ctx->pc = 0x202F58u;
label_202f58:
    // 0x202f58: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x202f58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_202f5c:
    // 0x202f5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202f60: 0x3e00008  jr          $ra
    ctx->pc = 0x202F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202F60u;
            // 0x202f64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202F68u;
    ctx->pc = 0x202f68u;
}
