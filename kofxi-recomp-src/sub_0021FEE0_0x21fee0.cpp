#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FEE0
// Address: 0x21fee0 - 0x21ff70
void sub_0021FEE0_0x21fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FEE0_0x21fee0");
#endif

    switch (ctx->pc) {
        case 0x21ff18u: goto label_21ff18;
        case 0x21ff50u: goto label_21ff50;
        default: break;
    }

    ctx->pc = 0x21fee0u;

    // 0x21fee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21fee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21fee4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x21fee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x21fee8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x21fee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x21feec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21feecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fef0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21fef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21fef4: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x21fef4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x21fef8: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x21fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x21fefc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x21fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x21ff00: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x21ff00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x21ff04: 0x8e22ca18  lw          $v0, -0x35E8($s1)
    ctx->pc = 0x21ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953496)));
    // 0x21ff08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FF08u;
    {
        const bool branch_taken_0x21ff08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ff08) {
            ctx->pc = 0x21FF1Cu;
            goto label_21ff1c;
        }
    }
    ctx->pc = 0x21FF10u;
    // 0x21ff10: 0xc043318  jal         func_10CC60
    ctx->pc = 0x21FF10u;
    SET_GPR_U32(ctx, 31, 0x21FF18u);
    ctx->pc = 0x21FF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FF10u;
            // 0x21ff14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FF18u; }
        if (ctx->pc != 0x21FF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FF18u; }
        if (ctx->pc != 0x21FF18u) { return; }
    }
    ctx->pc = 0x21FF18u;
label_21ff18:
    // 0x21ff18: 0xae22ca18  sw          $v0, -0x35E8($s1)
    ctx->pc = 0x21ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953496), GPR_U32(ctx, 2));
label_21ff1c:
    // 0x21ff1c: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21FF1Cu;
    {
        const bool branch_taken_0x21ff1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21FF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FF1Cu;
            // 0x21ff20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff1c) {
            ctx->pc = 0x21FF58u;
            goto label_21ff58;
        }
    }
    ctx->pc = 0x21FF24u;
    // 0x21ff24: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21ff24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21ff28: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21ff28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21ff2c: 0x8de9ca14  lw          $t1, -0x35EC($t7)
    ctx->pc = 0x21ff2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953492)));
    // 0x21ff30: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x21ff30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x21ff34: 0x2405007a  addiu       $a1, $zero, 0x7A
    ctx->pc = 0x21ff34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x21ff38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21ff38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff3c: 0x2407d8e6  addiu       $a3, $zero, -0x271A
    ctx->pc = 0x21ff3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
    // 0x21ff40: 0x248422c8  addiu       $a0, $a0, 0x22C8
    ctx->pc = 0x21ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8904));
    // 0x21ff44: 0x250822b8  addiu       $t0, $t0, 0x22B8
    ctx->pc = 0x21ff44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8888));
    // 0x21ff48: 0xc089794  jal         func_225E50
    ctx->pc = 0x21FF48u;
    SET_GPR_U32(ctx, 31, 0x21FF50u);
    ctx->pc = 0x21FF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FF48u;
            // 0x21ff4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FF50u; }
        if (ctx->pc != 0x21FF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FF50u; }
        if (ctx->pc != 0x21FF50u) { return; }
    }
    ctx->pc = 0x21FF50u;
label_21ff50:
    // 0x21ff50: 0xae20ca18  sw          $zero, -0x35E8($s1)
    ctx->pc = 0x21ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953496), GPR_U32(ctx, 0));
    // 0x21ff54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21ff54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21ff58:
    // 0x21ff58: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x21ff58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21ff5c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x21ff5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ff60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21ff60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ff64: 0x3e00008  jr          $ra
    ctx->pc = 0x21FF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FF64u;
            // 0x21ff68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FF6Cu;
    // 0x21ff6c: 0x0  nop
    ctx->pc = 0x21ff6cu;
    // NOP
    ctx->pc = 0x21ff70u;
}
