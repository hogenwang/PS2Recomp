#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028C710
// Address: 0x28c710 - 0x28c790
void sub_0028C710_0x28c710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C710_0x28c710");
#endif

    switch (ctx->pc) {
        case 0x28c730u: goto label_28c730;
        case 0x28c738u: goto label_28c738;
        case 0x28c75cu: goto label_28c75c;
        case 0x28c778u: goto label_28c778;
        default: break;
    }

    ctx->pc = 0x28c710u;

    // 0x28c710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28c710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28c714: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28c714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28c718: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28c718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28c71c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28c71cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28c720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c724: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28c728: 0xc0a31c0  jal         func_28C700
    ctx->pc = 0x28C728u;
    SET_GPR_U32(ctx, 31, 0x28C730u);
    ctx->pc = 0x28C72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C728u;
            // 0x28c72c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C700u;
    if (runtime->hasFunction(0x28C700u)) {
        auto targetFn = runtime->lookupFunction(0x28C700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C730u; }
        if (ctx->pc != 0x28C730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C700_0x28c700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C730u; }
        if (ctx->pc != 0x28C730u) { return; }
    }
    ctx->pc = 0x28C730u;
label_28c730:
    // 0x28c730: 0xc0a13de  jal         func_284F78
    ctx->pc = 0x28C730u;
    SET_GPR_U32(ctx, 31, 0x28C738u);
    ctx->pc = 0x28C734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C730u;
            // 0x28c734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F78u;
    if (runtime->hasFunction(0x284F78u)) {
        auto targetFn = runtime->lookupFunction(0x284F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C738u; }
        if (ctx->pc != 0x28C738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F78_0x284f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C738u; }
        if (ctx->pc != 0x28C738u) { return; }
    }
    ctx->pc = 0x28C738u;
label_28c738:
    // 0x28c738: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28c738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c73c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C73Cu;
    {
        const bool branch_taken_0x28c73c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C73Cu;
            // 0x28c740: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c73c) {
            ctx->pc = 0x28C74Cu;
            goto label_28c74c;
        }
    }
    ctx->pc = 0x28C744u;
    // 0x28c744: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28C744u;
    {
        const bool branch_taken_0x28c744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C744u;
            // 0x28c748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c744) {
            ctx->pc = 0x28C760u;
            goto label_28c760;
        }
    }
    ctx->pc = 0x28C74Cu;
label_28c74c:
    // 0x28c74c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28c74cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c754: 0xc0a1550  jal         func_285540
    ctx->pc = 0x28C754u;
    SET_GPR_U32(ctx, 31, 0x28C75Cu);
    ctx->pc = 0x28C758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C754u;
            // 0x28c758: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285540u;
    if (runtime->hasFunction(0x285540u)) {
        auto targetFn = runtime->lookupFunction(0x285540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C75Cu; }
        if (ctx->pc != 0x28C75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285540_0x285540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C75Cu; }
        if (ctx->pc != 0x28C75Cu) { return; }
    }
    ctx->pc = 0x28C75Cu;
label_28c75c:
    // 0x28c75c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28c75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c760:
    // 0x28c760: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28c760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c764: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28c764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c768: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28c768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c76c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28c76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c770: 0x3e00008  jr          $ra
    ctx->pc = 0x28C770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C770u;
            // 0x28c774: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C778u;
label_28c778:
    // 0x28c778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28c778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c77c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x28c77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x28c780: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x28c780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x28c784: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x28c784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x28c788: 0x3e00008  jr          $ra
    ctx->pc = 0x28C788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C788u;
            // 0x28c78c: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C790u;
    ctx->pc = 0x28c790u;
}
