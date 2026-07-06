#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B74C0
// Address: 0x2b74c0 - 0x2b7530
void sub_002B74C0_0x2b74c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B74C0_0x2b74c0");
#endif

    switch (ctx->pc) {
        case 0x2b74e8u: goto label_2b74e8;
        case 0x2b74f8u: goto label_2b74f8;
        default: break;
    }

    ctx->pc = 0x2b74c0u;

    // 0x2b74c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b74c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b74c4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2b74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2b74c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b74c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b74cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b74ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b74d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b74d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b74d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b74d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b74d8: 0x24517608  addiu       $s1, $v0, 0x7608
    ctx->pc = 0x2b74d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 30216));
    // 0x2b74dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b74dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b74e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b74e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b74e4: 0x0  nop
    ctx->pc = 0x2b74e4u;
    // NOP
label_2b74e8:
    // 0x2b74e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b74e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b74ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b74ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b74f0: 0xc049c22  jal         func_127088
    ctx->pc = 0x2B74F0u;
    SET_GPR_U32(ctx, 31, 0x2B74F8u);
    ctx->pc = 0x2B74F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74F0u;
            // 0x2b74f4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74F8u; }
        if (ctx->pc != 0x2B74F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74F8u; }
        if (ctx->pc != 0x2B74F8u) { return; }
    }
    ctx->pc = 0x2B74F8u;
label_2b74f8:
    // 0x2b74f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B74F8u;
    {
        const bool branch_taken_0x2b74f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B74FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74F8u;
            // 0x2b74fc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74f8) {
            ctx->pc = 0x2B7508u;
            goto label_2b7508;
        }
    }
    ctx->pc = 0x2B7500u;
    // 0x2b7500: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7500u;
    {
        const bool branch_taken_0x2b7500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7500u;
            // 0x2b7504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7500) {
            ctx->pc = 0x2B7518u;
            goto label_2b7518;
        }
    }
    ctx->pc = 0x2B7508u;
label_2b7508:
    // 0x2b7508: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x2b7508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2b750c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B750Cu;
    {
        const bool branch_taken_0x2b750c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B750Cu;
            // 0x2b7510: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b750c) {
            ctx->pc = 0x2B74E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b74e8;
        }
    }
    ctx->pc = 0x2B7514u;
    // 0x2b7514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7518:
    // 0x2b7518: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b7518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b751c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b751cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7520: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b7520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7528: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B752Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7528u;
            // 0x2b752c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B7530u;
    ctx->pc = 0x2b7530u;
}
