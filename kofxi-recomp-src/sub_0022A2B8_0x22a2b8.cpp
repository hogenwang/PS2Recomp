#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022A2B8
// Address: 0x22a2b8 - 0x22a330
void sub_0022A2B8_0x22a2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A2B8_0x22a2b8");
#endif

    switch (ctx->pc) {
        case 0x22a2d4u: goto label_22a2d4;
        case 0x22a2dcu: goto label_22a2dc;
        case 0x22a2e8u: goto label_22a2e8;
        case 0x22a2f4u: goto label_22a2f4;
        default: break;
    }

    ctx->pc = 0x22a2b8u;

    // 0x22a2b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22a2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22a2bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22a2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22a2c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22a2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22a2c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a2c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22a2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22a2cc: 0xc08a8ec  jal         func_22A3B0
    ctx->pc = 0x22A2CCu;
    SET_GPR_U32(ctx, 31, 0x22A2D4u);
    ctx->pc = 0x22A2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A2CCu;
            // 0x22a2d0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (runtime->hasFunction(0x22A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x22A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2D4u; }
        if (ctx->pc != 0x22A2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A3B0_0x22a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2D4u; }
        if (ctx->pc != 0x22A2D4u) { return; }
    }
    ctx->pc = 0x22A2D4u;
label_22a2d4:
    // 0x22a2d4: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22A2D4u;
    SET_GPR_U32(ctx, 31, 0x22A2DCu);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2DCu; }
        if (ctx->pc != 0x22A2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2DCu; }
        if (ctx->pc != 0x22A2DCu) { return; }
    }
    ctx->pc = 0x22A2DCu;
label_22a2dc:
    // 0x22a2dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a2dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a2e0: 0xc098552  jal         func_261548
    ctx->pc = 0x22A2E0u;
    SET_GPR_U32(ctx, 31, 0x22A2E8u);
    ctx->pc = 0x22A2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A2E0u;
            // 0x22a2e4: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2E8u; }
        if (ctx->pc != 0x22A2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2E8u; }
        if (ctx->pc != 0x22A2E8u) { return; }
    }
    ctx->pc = 0x22A2E8u;
label_22a2e8:
    // 0x22a2e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22a2e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a2ec: 0xc08c698  jal         func_231A60
    ctx->pc = 0x22A2ECu;
    SET_GPR_U32(ctx, 31, 0x22A2F4u);
    ctx->pc = 0x22A2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A2ECu;
            // 0x22a2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2F4u; }
        if (ctx->pc != 0x22A2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2F4u; }
        if (ctx->pc != 0x22A2F4u) { return; }
    }
    ctx->pc = 0x22A2F4u;
label_22a2f4:
    // 0x22a2f4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A2F4u;
    {
        const bool branch_taken_0x22a2f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A2F4u;
            // 0x22a2f8: 0x26220014  addiu       $v0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a2f4) {
            ctx->pc = 0x22A310u;
            goto label_22a310;
        }
    }
    ctx->pc = 0x22A2FCu;
    // 0x22a2fc: 0xa6320010  sh          $s2, 0x10($s1)
    ctx->pc = 0x22a2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 18));
    // 0x22a300: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22a300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x22a304: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22a304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x22a308: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x22a308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x22a30c: 0xa6200012  sh          $zero, 0x12($s1)
    ctx->pc = 0x22a30cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
label_22a310:
    // 0x22a310: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22a310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a314: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22a314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a318: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22a318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a31c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a31cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a324: 0x3e00008  jr          $ra
    ctx->pc = 0x22A324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A324u;
            // 0x22a328: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A32Cu;
    // 0x22a32c: 0x0  nop
    ctx->pc = 0x22a32cu;
    // NOP
    ctx->pc = 0x22a330u;
}
