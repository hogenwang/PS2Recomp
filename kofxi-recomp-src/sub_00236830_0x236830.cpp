#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00236830
// Address: 0x236830 - 0x2368d8
void sub_00236830_0x236830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236830_0x236830");
#endif

    switch (ctx->pc) {
        case 0x236850u: goto label_236850;
        case 0x236860u: goto label_236860;
        case 0x236880u: goto label_236880;
        case 0x23689cu: goto label_23689c;
        case 0x2368b4u: goto label_2368b4;
        default: break;
    }

    ctx->pc = 0x236830u;

    // 0x236830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x236830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x236834: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x236834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x236838: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23683c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23683cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x236840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236844: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x236844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x236848: 0xc08c682  jal         func_231A08
    ctx->pc = 0x236848u;
    SET_GPR_U32(ctx, 31, 0x236850u);
    ctx->pc = 0x23684Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236848u;
            // 0x23684c: 0x8e1100f0  lw          $s1, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236850u; }
        if (ctx->pc != 0x236850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236850u; }
        if (ctx->pc != 0x236850u) { return; }
    }
    ctx->pc = 0x236850u;
label_236850:
    // 0x236850: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x236850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x236854: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x236854u;
    {
        const bool branch_taken_0x236854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x236858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236854u;
            // 0x236858: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236854) {
            ctx->pc = 0x236894u;
            goto label_236894;
        }
    }
    ctx->pc = 0x23685Cu;
    // 0x23685c: 0x0  nop
    ctx->pc = 0x23685cu;
    // NOP
label_236860:
    // 0x236860: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x236860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x236864: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x236864u;
    {
        const bool branch_taken_0x236864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236864u;
            // 0x236868: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236864) {
            ctx->pc = 0x236878u;
            goto label_236878;
        }
    }
    ctx->pc = 0x23686Cu;
    // 0x23686c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x23686cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x236870: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x236870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x236874: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x236874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_236878:
    // 0x236878: 0xc098560  jal         func_261580
    ctx->pc = 0x236878u;
    SET_GPR_U32(ctx, 31, 0x236880u);
    ctx->pc = 0x23687Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236878u;
            // 0x23687c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236880u; }
        if (ctx->pc != 0x236880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236880u; }
        if (ctx->pc != 0x236880u) { return; }
    }
    ctx->pc = 0x236880u;
label_236880:
    // 0x236880: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x236880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x236884: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x236884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x236888: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x236888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23688c: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x23688Cu;
    {
        const bool branch_taken_0x23688c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x236890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23688Cu;
            // 0x236890: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23688c) {
            ctx->pc = 0x236860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_236860;
        }
    }
    ctx->pc = 0x236894u;
label_236894:
    // 0x236894: 0xc08c698  jal         func_231A60
    ctx->pc = 0x236894u;
    SET_GPR_U32(ctx, 31, 0x23689Cu);
    ctx->pc = 0x236898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236894u;
            // 0x236898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23689Cu; }
        if (ctx->pc != 0x23689Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23689Cu; }
        if (ctx->pc != 0x23689Cu) { return; }
    }
    ctx->pc = 0x23689Cu;
label_23689c:
    // 0x23689c: 0x92240005  lbu         $a0, 0x5($s1)
    ctx->pc = 0x23689cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x2368a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2368a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368a4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2368a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2368a8: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2368a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2368ac: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2368ACu;
    SET_GPR_U32(ctx, 31, 0x2368B4u);
    ctx->pc = 0x2368B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2368ACu;
            // 0x2368b0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2368B4u; }
        if (ctx->pc != 0x2368B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2368B4u; }
        if (ctx->pc != 0x2368B4u) { return; }
    }
    ctx->pc = 0x2368B4u;
label_2368b4:
    // 0x2368b4: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x2368b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2368b8: 0xa2200006  sb          $zero, 0x6($s1)
    ctx->pc = 0x2368b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2368bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2368bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2368c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2368c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2368c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2368c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2368c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2368c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2368cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2368CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2368D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2368CCu;
            // 0x2368d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2368D4u;
    // 0x2368d4: 0x0  nop
    ctx->pc = 0x2368d4u;
    // NOP
    ctx->pc = 0x2368d8u;
}
