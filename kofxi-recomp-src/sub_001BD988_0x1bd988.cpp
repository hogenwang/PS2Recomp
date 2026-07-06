#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD988
// Address: 0x1bd988 - 0x1bd9f8
void sub_001BD988_0x1bd988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD988_0x1bd988");
#endif

    switch (ctx->pc) {
        case 0x1bd9d0u: goto label_1bd9d0;
        case 0x1bd9e8u: goto label_1bd9e8;
        default: break;
    }

    ctx->pc = 0x1bd988u;

    // 0x1bd988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bd98c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1bd98cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bd994: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BD994u;
    {
        const bool branch_taken_0x1bd994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD994u;
            // 0x1bd998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd994) {
            ctx->pc = 0x1BD9E8u;
            goto label_1bd9e8;
        }
    }
    ctx->pc = 0x1BD99Cu;
    // 0x1bd99c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bd99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bd9a0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BD9A0u;
    {
        const bool branch_taken_0x1bd9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9A0u;
            // 0x1bd9a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd9a0) {
            ctx->pc = 0x1BD9D8u;
            goto label_1bd9d8;
        }
    }
    ctx->pc = 0x1BD9A8u;
    // 0x1bd9a8: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x1bd9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1bd9ac: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BD9ACu;
    {
        const bool branch_taken_0x1bd9ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9ACu;
            // 0x1bd9b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd9ac) {
            ctx->pc = 0x1BD9E8u;
            goto label_1bd9e8;
        }
    }
    ctx->pc = 0x1BD9B4u;
    // 0x1bd9b4: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1bd9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1bd9b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD9B8u;
    {
        const bool branch_taken_0x1bd9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9B8u;
            // 0x1bd9bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd9b8) {
            ctx->pc = 0x1BD9D0u;
            goto label_1bd9d0;
        }
    }
    ctx->pc = 0x1BD9C0u;
    // 0x1bd9c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd9c4: 0x806e004  j           func_1B8010
    ctx->pc = 0x1BD9C4u;
    ctx->pc = 0x1BD9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9C4u;
            // 0x1bd9c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8010u;
    {
        auto targetFn = runtime->lookupFunction(0x1B8010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BD9CCu;
    // 0x1bd9cc: 0x0  nop
    ctx->pc = 0x1bd9ccu;
    // NOP
label_1bd9d0:
    // 0x1bd9d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD9D0u;
    {
        const bool branch_taken_0x1bd9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9D0u;
            // 0x1bd9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd9d0) {
            ctx->pc = 0x1BD9E8u;
            goto label_1bd9e8;
        }
    }
    ctx->pc = 0x1BD9D8u;
label_1bd9d8:
    // 0x1bd9d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd9dc: 0x806e004  j           func_1B8010
    ctx->pc = 0x1BD9DCu;
    ctx->pc = 0x1BD9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9DCu;
            // 0x1bd9e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8010u;
    {
        auto targetFn = runtime->lookupFunction(0x1B8010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BD9E4u;
    // 0x1bd9e4: 0x0  nop
    ctx->pc = 0x1bd9e4u;
    // NOP
label_1bd9e8:
    // 0x1bd9e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9ECu;
            // 0x1bd9f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD9F4u;
    // 0x1bd9f4: 0x0  nop
    ctx->pc = 0x1bd9f4u;
    // NOP
    ctx->pc = 0x1bd9f8u;
}
