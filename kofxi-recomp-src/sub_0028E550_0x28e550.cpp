#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028E550
// Address: 0x28e550 - 0x28e598
void sub_0028E550_0x28e550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E550_0x28e550");
#endif

    switch (ctx->pc) {
        case 0x28e550u: goto label_28e550;
        case 0x28e554u: goto label_28e554;
        case 0x28e558u: goto label_28e558;
        case 0x28e55cu: goto label_28e55c;
        case 0x28e560u: goto label_28e560;
        case 0x28e564u: goto label_28e564;
        case 0x28e568u: goto label_28e568;
        case 0x28e56cu: goto label_28e56c;
        case 0x28e570u: goto label_28e570;
        case 0x28e574u: goto label_28e574;
        case 0x28e578u: goto label_28e578;
        case 0x28e57cu: goto label_28e57c;
        case 0x28e580u: goto label_28e580;
        case 0x28e584u: goto label_28e584;
        case 0x28e588u: goto label_28e588;
        case 0x28e58cu: goto label_28e58c;
        case 0x28e590u: goto label_28e590;
        case 0x28e594u: goto label_28e594;
        default: break;
    }

    ctx->pc = 0x28e550u;

label_28e550:
    // 0x28e550: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e554:
    // 0x28e554: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28e558:
    // 0x28e558: 0x8c4245d4  lw          $v0, 0x45D4($v0)
    ctx->pc = 0x28e558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17876)));
label_28e55c:
    // 0x28e55c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e560:
    if (ctx->pc == 0x28E560u) {
        ctx->pc = 0x28E560u;
            // 0x28e560: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28E564u;
        goto label_28e564;
    }
    ctx->pc = 0x28E55Cu;
    {
        const bool branch_taken_0x28e55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E55Cu;
            // 0x28e560: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e55c) {
            ctx->pc = 0x28E584u;
            goto label_28e584;
        }
    }
    ctx->pc = 0x28E564u;
label_28e564:
    // 0x28e564: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e568:
    // 0x28e568: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x28e568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_28e56c:
    // 0x28e56c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e570:
    // 0x28e570: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e574:
    // 0x28e574: 0xc0a5648  jal         func_295920
label_28e578:
    if (ctx->pc == 0x28E578u) {
        ctx->pc = 0x28E578u;
            // 0x28e578: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E57Cu;
        goto label_28e57c;
    }
    ctx->pc = 0x28E574u;
    SET_GPR_U32(ctx, 31, 0x28E57Cu);
    ctx->pc = 0x28E578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E574u;
            // 0x28e578: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E57Cu; }
        if (ctx->pc != 0x28E57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E57Cu; }
        if (ctx->pc != 0x28E57Cu) { return; }
    }
    ctx->pc = 0x28E57Cu;
label_28e57c:
    // 0x28e57c: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e580:
    if (ctx->pc == 0x28E580u) {
        ctx->pc = 0x28E580u;
            // 0x28e580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E584u;
        goto label_28e584;
    }
    ctx->pc = 0x28E57Cu;
    {
        const bool branch_taken_0x28e57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E57Cu;
            // 0x28e580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e57c) {
            ctx->pc = 0x28E58Cu;
            goto label_28e58c;
        }
    }
    ctx->pc = 0x28E584u;
label_28e584:
    // 0x28e584: 0x40f809  jalr        $v0
label_28e588:
    if (ctx->pc == 0x28E588u) {
        ctx->pc = 0x28E58Cu;
        goto label_28e58c;
    }
    ctx->pc = 0x28E584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E58Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28E58Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28E58Cu; }
            if (ctx->pc != 0x28E58Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28E58Cu;
label_28e58c:
    // 0x28e58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e590:
    // 0x28e590: 0x3e00008  jr          $ra
label_28e594:
    if (ctx->pc == 0x28E594u) {
        ctx->pc = 0x28E594u;
            // 0x28e594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28E598u;
        goto label_fallthrough_0x28e590;
    }
    ctx->pc = 0x28E590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E590u;
            // 0x28e594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28e590:
    ctx->pc = 0x28E598u;
    ctx->pc = 0x28e598u;
}
