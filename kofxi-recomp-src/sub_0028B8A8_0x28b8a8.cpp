#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B8A8
// Address: 0x28b8a8 - 0x28b948
void sub_0028B8A8_0x28b8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B8A8_0x28b8a8");
#endif

    switch (ctx->pc) {
        case 0x28b8ecu: goto label_28b8ec;
        case 0x28b908u: goto label_28b908;
        case 0x28b934u: goto label_28b934;
        default: break;
    }

    ctx->pc = 0x28b8a8u;

    // 0x28b8a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28b8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28b8ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28b8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b8b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28b8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28b8b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28b8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b8b8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x28B8B8u;
    {
        const bool branch_taken_0x28b8b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B8B8u;
            // 0x28b8bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8b8) {
            ctx->pc = 0x28B8F8u;
            goto label_28b8f8;
        }
    }
    ctx->pc = 0x28B8C0u;
    // 0x28b8c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x28b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28b8c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28B8C4u;
    {
        const bool branch_taken_0x28b8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B8C4u;
            // 0x28b8c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8c4) {
            ctx->pc = 0x28B8F8u;
            goto label_28b8f8;
        }
    }
    ctx->pc = 0x28B8CCu;
    // 0x28b8cc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x28b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28b8d0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28B8D0u;
    {
        const bool branch_taken_0x28b8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b8d0) {
            ctx->pc = 0x28B8D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28B8D0u;
            // 0x28b8d4: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28B8F4u;
            goto label_28b8f4;
        }
    }
    ctx->pc = 0x28B8D8u;
    // 0x28b8d8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x28b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x28b8dc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B8DCu;
    {
        const bool branch_taken_0x28b8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b8dc) {
            ctx->pc = 0x28B8E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28B8DCu;
            // 0x28b8e0: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28B8F4u;
            goto label_28b8f4;
        }
    }
    ctx->pc = 0x28B8E4u;
    // 0x28b8e4: 0xc049218  jal         func_124860
    ctx->pc = 0x28B8E4u;
    SET_GPR_U32(ctx, 31, 0x28B8ECu);
    ctx->pc = 0x124860u;
    if (runtime->hasFunction(0x124860u)) {
        auto targetFn = runtime->lookupFunction(0x124860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B8ECu; }
        if (ctx->pc != 0x28B8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124860_0x124860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B8ECu; }
        if (ctx->pc != 0x28B8ECu) { return; }
    }
    ctx->pc = 0x28B8ECu;
label_28b8ec:
    // 0x28b8ec: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x28b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x28b8f0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28b8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_28b8f4:
    // 0x28b8f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28b8f8:
    // 0x28b8f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28b8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b8fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28b8fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b900: 0x3e00008  jr          $ra
    ctx->pc = 0x28B900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B900u;
            // 0x28b904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B908u;
label_28b908:
    // 0x28b908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28b908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28b90c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28b90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28b910: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x28b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28b914: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28B914u;
    {
        const bool branch_taken_0x28b914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B914u;
            // 0x28b918: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b914) {
            ctx->pc = 0x28B938u;
            goto label_28b938;
        }
    }
    ctx->pc = 0x28B91Cu;
    // 0x28b91c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B91Cu;
    {
        const bool branch_taken_0x28b91c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B91Cu;
            // 0x28b920: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b91c) {
            ctx->pc = 0x28B93Cu;
            goto label_28b93c;
        }
    }
    ctx->pc = 0x28B924u;
    // 0x28b924: 0x8c870020  lw          $a3, 0x20($a0)
    ctx->pc = 0x28b924u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x28b928: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28b928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b92c: 0xc0493f8  jal         func_124FE0
    ctx->pc = 0x28B92Cu;
    SET_GPR_U32(ctx, 31, 0x28B934u);
    ctx->pc = 0x28B930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B92Cu;
            // 0x28b930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124FE0u;
    if (runtime->hasFunction(0x124FE0u)) {
        auto targetFn = runtime->lookupFunction(0x124FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B934u; }
        if (ctx->pc != 0x28B934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124FE0_0x124fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B934u; }
        if (ctx->pc != 0x28B934u) { return; }
    }
    ctx->pc = 0x28B934u;
label_28b934:
    // 0x28b934: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28b934u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b938:
    // 0x28b938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28b938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28b93c:
    // 0x28b93c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28b93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b940: 0x3e00008  jr          $ra
    ctx->pc = 0x28B940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B940u;
            // 0x28b944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B948u;
    ctx->pc = 0x28b948u;
}
