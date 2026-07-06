#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00339E90
// Address: 0x339e90 - 0x339f20
void sub_00339E90_0x339e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339E90_0x339e90");
#endif

    switch (ctx->pc) {
        case 0x339ebcu: goto label_339ebc;
        case 0x339ed4u: goto label_339ed4;
        case 0x339eecu: goto label_339eec;
        case 0x339f04u: goto label_339f04;
        default: break;
    }

    ctx->pc = 0x339e90u;

    // 0x339e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x339e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x339e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x339e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x339e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x339e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x339e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339ea0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x339ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ea4: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x339EA4u;
    {
        const bool branch_taken_0x339ea4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x339EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339EA4u;
            // 0x339ea8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ea4) {
            ctx->pc = 0x339EDCu;
            goto label_339edc;
        }
    }
    ctx->pc = 0x339EACu;
    // 0x339eac: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x339eacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x339eb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x339eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339eb4: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x339EB4u;
    SET_GPR_U32(ctx, 31, 0x339EBCu);
    ctx->pc = 0x339EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339EB4u;
            // 0x339eb8: 0x24c64d68  addiu       $a2, $a2, 0x4D68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (runtime->hasFunction(0x3396F0u)) {
        auto targetFn = runtime->lookupFunction(0x3396F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339EBCu; }
        if (ctx->pc != 0x339EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003396F0_0x3396f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339EBCu; }
        if (ctx->pc != 0x339EBCu) { return; }
    }
    ctx->pc = 0x339EBCu;
label_339ebc:
    // 0x339ebc: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x339ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x339ec0: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x339ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x339ec4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x339ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ec8: 0x24c64d70  addiu       $a2, $a2, 0x4D70
    ctx->pc = 0x339ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19824));
    // 0x339ecc: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x339ECCu;
    SET_GPR_U32(ctx, 31, 0x339ED4u);
    ctx->pc = 0x339ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339ECCu;
            // 0x339ed0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (runtime->hasFunction(0x3396F0u)) {
        auto targetFn = runtime->lookupFunction(0x3396F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339ED4u; }
        if (ctx->pc != 0x339ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003396F0_0x3396f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339ED4u; }
        if (ctx->pc != 0x339ED4u) { return; }
    }
    ctx->pc = 0x339ED4u;
label_339ed4:
    // 0x339ed4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x339ED4u;
    {
        const bool branch_taken_0x339ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339ED4u;
            // 0x339ed8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ed4) {
            ctx->pc = 0x339F08u;
            goto label_339f08;
        }
    }
    ctx->pc = 0x339EDCu;
label_339edc:
    // 0x339edc: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x339edcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x339ee0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x339ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339ee4: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x339EE4u;
    SET_GPR_U32(ctx, 31, 0x339EECu);
    ctx->pc = 0x339EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339EE4u;
            // 0x339ee8: 0x24c64d78  addiu       $a2, $a2, 0x4D78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (runtime->hasFunction(0x3396F0u)) {
        auto targetFn = runtime->lookupFunction(0x3396F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339EECu; }
        if (ctx->pc != 0x339EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003396F0_0x3396f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339EECu; }
        if (ctx->pc != 0x339EECu) { return; }
    }
    ctx->pc = 0x339EECu;
label_339eec:
    // 0x339eec: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x339eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x339ef0: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x339ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x339ef4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x339ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ef8: 0x24c64d80  addiu       $a2, $a2, 0x4D80
    ctx->pc = 0x339ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19840));
    // 0x339efc: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x339EFCu;
    SET_GPR_U32(ctx, 31, 0x339F04u);
    ctx->pc = 0x339F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339EFCu;
            // 0x339f00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (runtime->hasFunction(0x3396F0u)) {
        auto targetFn = runtime->lookupFunction(0x3396F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339F04u; }
        if (ctx->pc != 0x339F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003396F0_0x3396f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339F04u; }
        if (ctx->pc != 0x339F04u) { return; }
    }
    ctx->pc = 0x339F04u;
label_339f04:
    // 0x339f04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x339f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_339f08:
    // 0x339f08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x339f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339f0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339f10: 0x3e00008  jr          $ra
    ctx->pc = 0x339F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339F10u;
            // 0x339f14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339F18u;
    // 0x339f18: 0x0  nop
    ctx->pc = 0x339f18u;
    // NOP
    // 0x339f1c: 0x0  nop
    ctx->pc = 0x339f1cu;
    // NOP
    ctx->pc = 0x339f20u;
}
