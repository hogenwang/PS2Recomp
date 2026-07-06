#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E63A8
// Address: 0x1e63a8 - 0x1e6408
void sub_001E63A8_0x1e63a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E63A8_0x1e63a8");
#endif

    switch (ctx->pc) {
        case 0x1e63a8u: goto label_1e63a8;
        case 0x1e63acu: goto label_1e63ac;
        case 0x1e63b0u: goto label_1e63b0;
        case 0x1e63b4u: goto label_1e63b4;
        case 0x1e63b8u: goto label_1e63b8;
        case 0x1e63bcu: goto label_1e63bc;
        case 0x1e63c0u: goto label_1e63c0;
        case 0x1e63c4u: goto label_1e63c4;
        case 0x1e63c8u: goto label_1e63c8;
        case 0x1e63ccu: goto label_1e63cc;
        case 0x1e63d0u: goto label_1e63d0;
        case 0x1e63d4u: goto label_1e63d4;
        case 0x1e63d8u: goto label_1e63d8;
        case 0x1e63dcu: goto label_1e63dc;
        case 0x1e63e0u: goto label_1e63e0;
        case 0x1e63e4u: goto label_1e63e4;
        case 0x1e63e8u: goto label_1e63e8;
        case 0x1e63ecu: goto label_1e63ec;
        case 0x1e63f0u: goto label_1e63f0;
        case 0x1e63f4u: goto label_1e63f4;
        case 0x1e63f8u: goto label_1e63f8;
        case 0x1e63fcu: goto label_1e63fc;
        case 0x1e6400u: goto label_1e6400;
        case 0x1e6404u: goto label_1e6404;
        default: break;
    }

    ctx->pc = 0x1e63a8u;

label_1e63a8:
    // 0x1e63a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e63a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e63ac:
    // 0x1e63ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e63acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e63b0:
    // 0x1e63b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e63b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e63b4:
    // 0x1e63b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e63b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e63b8:
    // 0x1e63b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e63b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e63bc:
    // 0x1e63bc: 0xc079a08  jal         func_1E6820
label_1e63c0:
    if (ctx->pc == 0x1E63C0u) {
        ctx->pc = 0x1E63C0u;
            // 0x1e63c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E63C4u;
        goto label_1e63c4;
    }
    ctx->pc = 0x1E63BCu;
    SET_GPR_U32(ctx, 31, 0x1E63C4u);
    ctx->pc = 0x1E63C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63BCu;
            // 0x1e63c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6820u;
    if (runtime->hasFunction(0x1E6820u)) {
        auto targetFn = runtime->lookupFunction(0x1E6820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63C4u; }
        if (ctx->pc != 0x1E63C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6820_0x1e6820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63C4u; }
        if (ctx->pc != 0x1E63C4u) { return; }
    }
    ctx->pc = 0x1E63C4u;
label_1e63c4:
    // 0x1e63c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e63c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e63c8:
    // 0x1e63c8: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_1e63cc:
    if (ctx->pc == 0x1E63CCu) {
        ctx->pc = 0x1E63CCu;
            // 0x1e63cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1E63D0u;
        goto label_1e63d0;
    }
    ctx->pc = 0x1E63C8u;
    {
        const bool branch_taken_0x1e63c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e63c8) {
            ctx->pc = 0x1E63CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63C8u;
            // 0x1e63cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E63F4u;
            goto label_1e63f4;
        }
    }
    ctx->pc = 0x1E63D0u;
label_1e63d0:
    // 0x1e63d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e63d4:
    // 0x1e63d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e63d8:
    if (ctx->pc == 0x1E63D8u) {
        ctx->pc = 0x1E63D8u;
            // 0x1e63d8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x1E63DCu;
        goto label_1e63dc;
    }
    ctx->pc = 0x1E63D4u;
    {
        const bool branch_taken_0x1e63d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E63D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63D4u;
            // 0x1e63d8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63d4) {
            ctx->pc = 0x1E63F0u;
            goto label_1e63f0;
        }
    }
    ctx->pc = 0x1E63DCu;
label_1e63dc:
    // 0x1e63dc: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1e63dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1e63e0:
    // 0x1e63e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1e63e4:
    if (ctx->pc == 0x1E63E4u) {
        ctx->pc = 0x1E63E4u;
            // 0x1e63e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1E63E8u;
        goto label_1e63e8;
    }
    ctx->pc = 0x1E63E0u;
    {
        const bool branch_taken_0x1e63e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e63e0) {
            ctx->pc = 0x1E63E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63E0u;
            // 0x1e63e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E63F4u;
            goto label_1e63f4;
        }
    }
    ctx->pc = 0x1E63E8u;
label_1e63e8:
    // 0x1e63e8: 0x40f809  jalr        $v0
label_1e63ec:
    if (ctx->pc == 0x1E63ECu) {
        ctx->pc = 0x1E63ECu;
            // 0x1e63ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E63F0u;
        goto label_1e63f0;
    }
    ctx->pc = 0x1E63E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E63F0u);
        ctx->pc = 0x1E63ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63E8u;
            // 0x1e63ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E63F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E63F0u; }
            if (ctx->pc != 0x1E63F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E63F0u;
label_1e63f0:
    // 0x1e63f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e63f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e63f4:
    // 0x1e63f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e63f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e63f8:
    // 0x1e63f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e63f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e63fc:
    // 0x1e63fc: 0x3e00008  jr          $ra
label_1e6400:
    if (ctx->pc == 0x1E6400u) {
        ctx->pc = 0x1E6400u;
            // 0x1e6400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E6404u;
        goto label_1e6404;
    }
    ctx->pc = 0x1E63FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63FCu;
            // 0x1e6400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6404u;
label_1e6404:
    // 0x1e6404: 0x0  nop
    ctx->pc = 0x1e6404u;
    // NOP
    ctx->pc = 0x1e6408u;
}
