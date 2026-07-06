#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022A5B0
// Address: 0x22a5b0 - 0x22a658
void sub_0022A5B0_0x22a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A5B0_0x22a5b0");
#endif

    switch (ctx->pc) {
        case 0x22a5d4u: goto label_22a5d4;
        case 0x22a5e0u: goto label_22a5e0;
        case 0x22a5ecu: goto label_22a5ec;
        case 0x22a5fcu: goto label_22a5fc;
        case 0x22a600u: goto label_22a600;
        case 0x22a638u: goto label_22a638;
        default: break;
    }

    ctx->pc = 0x22a5b0u;

    // 0x22a5b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22a5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22a5b4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22a5b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22a5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22a5bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22a5bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a5c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22a5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22a5c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22a5c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a5c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22a5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22a5cc: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22A5CCu;
    SET_GPR_U32(ctx, 31, 0x22A5D4u);
    ctx->pc = 0x22A5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A5CCu;
            // 0x22a5d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5D4u; }
        if (ctx->pc != 0x22A5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5D4u; }
        if (ctx->pc != 0x22A5D4u) { return; }
    }
    ctx->pc = 0x22A5D4u;
label_22a5d4:
    // 0x22a5d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a5d8: 0xc098552  jal         func_261548
    ctx->pc = 0x22A5D8u;
    SET_GPR_U32(ctx, 31, 0x22A5E0u);
    ctx->pc = 0x22A5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A5D8u;
            // 0x22a5dc: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5E0u; }
        if (ctx->pc != 0x22A5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5E0u; }
        if (ctx->pc != 0x22A5E0u) { return; }
    }
    ctx->pc = 0x22A5E0u;
label_22a5e0:
    // 0x22a5e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22a5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a5e4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x22A5E4u;
    SET_GPR_U32(ctx, 31, 0x22A5ECu);
    ctx->pc = 0x22A5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A5E4u;
            // 0x22a5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5ECu; }
        if (ctx->pc != 0x22A5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5ECu; }
        if (ctx->pc != 0x22A5ECu) { return; }
    }
    ctx->pc = 0x22A5ECu;
label_22a5ec:
    // 0x22a5ec: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A5ECu;
    {
        const bool branch_taken_0x22a5ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A5ECu;
            // 0x22a5f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5ec) {
            ctx->pc = 0x22A610u;
            goto label_22a610;
        }
    }
    ctx->pc = 0x22A5F4u;
    // 0x22a5f4: 0xc08a8ae  jal         func_22A2B8
    ctx->pc = 0x22A5F4u;
    SET_GPR_U32(ctx, 31, 0x22A5FCu);
    ctx->pc = 0x22A5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A5F4u;
            // 0x22a5f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A2B8u;
    if (runtime->hasFunction(0x22A2B8u)) {
        auto targetFn = runtime->lookupFunction(0x22A2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5FCu; }
        if (ctx->pc != 0x22A5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A2B8_0x22a2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5FCu; }
        if (ctx->pc != 0x22A5FCu) { return; }
    }
    ctx->pc = 0x22A5FCu;
label_22a5fc:
    // 0x22a5fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22a5fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a600:
    // 0x22a600: 0x5620000a  bnel        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x22A600u;
    {
        const bool branch_taken_0x22a600 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a600) {
            ctx->pc = 0x22A604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A600u;
            // 0x22a604: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A62Cu;
            goto label_22a62c;
        }
    }
    ctx->pc = 0x22A608u;
    // 0x22a608: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22A608u;
    {
        const bool branch_taken_0x22a608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A608u;
            // 0x22a60c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a608) {
            ctx->pc = 0x22A63Cu;
            goto label_22a63c;
        }
    }
    ctx->pc = 0x22A610u;
label_22a610:
    // 0x22a610: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x22a610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x22a614: 0xa6320010  sh          $s2, 0x10($s1)
    ctx->pc = 0x22a614u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 18));
    // 0x22a618: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22a618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x22a61c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x22a620: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x22a620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x22a624: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x22A624u;
    {
        const bool branch_taken_0x22a624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A624u;
            // 0x22a628: 0xa6200012  sh          $zero, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a624) {
            ctx->pc = 0x22A600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a600;
        }
    }
    ctx->pc = 0x22A62Cu;
label_22a62c:
    // 0x22a62c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22a62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a630: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x22A630u;
    SET_GPR_U32(ctx, 31, 0x22A638u);
    ctx->pc = 0x22A634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A630u;
            // 0x22a634: 0x240600ec  addiu       $a2, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A638u; }
        if (ctx->pc != 0x22A638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A638u; }
        if (ctx->pc != 0x22A638u) { return; }
    }
    ctx->pc = 0x22A638u;
label_22a638:
    // 0x22a638: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22a638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a63c:
    // 0x22a63c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22a63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a640: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22a640u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a644: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22a644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a648: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a64c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a64cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a650: 0x3e00008  jr          $ra
    ctx->pc = 0x22A650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A650u;
            // 0x22a654: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A658u;
    ctx->pc = 0x22a658u;
}
