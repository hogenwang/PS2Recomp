#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8730
// Address: 0x1e8730 - 0x1e87b8
void sub_001E8730_0x1e8730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8730_0x1e8730");
#endif

    switch (ctx->pc) {
        case 0x1e8768u: goto label_1e8768;
        case 0x1e878cu: goto label_1e878c;
        default: break;
    }

    ctx->pc = 0x1e8730u;

    // 0x1e8730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e8730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e8734: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e8734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e8738: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e8738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e873c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e873cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e8740: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e8740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8744: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e8744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e8748: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e8748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e874c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1e874cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1e8750: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e8750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8754: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1e8754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1e8758: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1e8758u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e875c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1e875cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1e8760: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E8760u;
    {
        const bool branch_taken_0x1e8760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8760u;
            // 0x1e8764: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8760) {
            ctx->pc = 0x1E876Cu;
            goto label_1e876c;
        }
    }
    ctx->pc = 0x1E8768u;
label_1e8768:
    // 0x1e8768: 0x26310012  addiu       $s1, $s1, 0x12
    ctx->pc = 0x1e8768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
label_1e876c:
    // 0x1e876c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1e876cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1e8770: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8770u;
    {
        const bool branch_taken_0x1e8770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8770) {
            ctx->pc = 0x1E8774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8770u;
            // 0x1e8774: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8798u;
            goto label_1e8798;
        }
    }
    ctx->pc = 0x1E8778u;
    // 0x1e8778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e877c: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x1e877cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
    // 0x1e8780: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1e8780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1e8784: 0xc06ee4c  jal         func_1BB930
    ctx->pc = 0x1E8784u;
    SET_GPR_U32(ctx, 31, 0x1E878Cu);
    ctx->pc = 0x1E8788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8784u;
            // 0x1e8788: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB930u;
    if (runtime->hasFunction(0x1BB930u)) {
        auto targetFn = runtime->lookupFunction(0x1BB930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E878Cu; }
        if (ctx->pc != 0x1E878Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB930_0x1bb930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E878Cu; }
        if (ctx->pc != 0x1E878Cu) { return; }
    }
    ctx->pc = 0x1E878Cu;
label_1e878c:
    // 0x1e878c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E878Cu;
    {
        const bool branch_taken_0x1e878c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E878Cu;
            // 0x1e8790: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e878c) {
            ctx->pc = 0x1E8768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e8768;
        }
    }
    ctx->pc = 0x1E8794u;
    // 0x1e8794: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x1e8794u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
label_1e8798:
    // 0x1e8798: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e8798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e879c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e879cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e87a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e87a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e87a4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1e87a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e87a8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1e87a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e87ac: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1e87acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e87b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E87B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E87B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E87B0u;
            // 0x1e87b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E87B8u;
    ctx->pc = 0x1e87b8u;
}
