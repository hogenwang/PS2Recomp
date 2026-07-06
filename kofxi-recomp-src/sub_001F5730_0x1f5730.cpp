#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5730
// Address: 0x1f5730 - 0x1f57c8
void sub_001F5730_0x1f5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5730_0x1f5730");
#endif

    switch (ctx->pc) {
        case 0x1f5748u: goto label_1f5748;
        case 0x1f5770u: goto label_1f5770;
        case 0x1f5788u: goto label_1f5788;
        case 0x1f57a0u: goto label_1f57a0;
        case 0x1f57b4u: goto label_1f57b4;
        default: break;
    }

    ctx->pc = 0x1f5730u;

    // 0x1f5730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5734: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f5734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f5738: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f573c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f573cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f5740: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1F5740u;
    SET_GPR_U32(ctx, 31, 0x1F5748u);
    ctx->pc = 0x1F5744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5740u;
            // 0x1f5744: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5748u; }
        if (ctx->pc != 0x1F5748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5748u; }
        if (ctx->pc != 0x1F5748u) { return; }
    }
    ctx->pc = 0x1F5748u;
label_1f5748:
    // 0x1f5748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f574c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1f574cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f5750: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f5750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f5754: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1f5754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1f5758: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5758u;
    {
        const bool branch_taken_0x1f5758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F575Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5758u;
            // 0x1f575c: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5758) {
            ctx->pc = 0x1F5768u;
            goto label_1f5768;
        }
    }
    ctx->pc = 0x1F5760u;
    // 0x1f5760: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F5760u;
    {
        const bool branch_taken_0x1f5760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5760u;
            // 0x1f5764: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5760) {
            ctx->pc = 0x1F57ACu;
            goto label_1f57ac;
        }
    }
    ctx->pc = 0x1F5768u;
label_1f5768:
    // 0x1f5768: 0xc07d5f2  jal         func_1F57C8
    ctx->pc = 0x1F5768u;
    SET_GPR_U32(ctx, 31, 0x1F5770u);
    ctx->pc = 0x1F57C8u;
    if (runtime->hasFunction(0x1F57C8u)) {
        auto targetFn = runtime->lookupFunction(0x1F57C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5770u; }
        if (ctx->pc != 0x1F5770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F57C8_0x1f57c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5770u; }
        if (ctx->pc != 0x1F5770u) { return; }
    }
    ctx->pc = 0x1F5770u;
label_1f5770:
    // 0x1f5770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5774: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1f5774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5778: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F5778u;
    {
        const bool branch_taken_0x1f5778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F577Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5778u;
            // 0x1f577c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5778) {
            ctx->pc = 0x1F57ACu;
            goto label_1f57ac;
        }
    }
    ctx->pc = 0x1F5780u;
    // 0x1f5780: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F5780u;
    SET_GPR_U32(ctx, 31, 0x1F5788u);
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5788u; }
        if (ctx->pc != 0x1F5788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5788u; }
        if (ctx->pc != 0x1F5788u) { return; }
    }
    ctx->pc = 0x1F5788u;
label_1f5788:
    // 0x1f5788: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5788u;
    {
        const bool branch_taken_0x1f5788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F578Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5788u;
            // 0x1f578c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5788) {
            ctx->pc = 0x1F57ACu;
            goto label_1f57ac;
        }
    }
    ctx->pc = 0x1F5790u;
    // 0x1f5790: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1f5790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5794: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x1f5794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1f5798: 0xc07f2f8  jal         func_1FCBE0
    ctx->pc = 0x1F5798u;
    SET_GPR_U32(ctx, 31, 0x1F57A0u);
    ctx->pc = 0x1F579Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5798u;
            // 0x1f579c: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCBE0u;
    if (runtime->hasFunction(0x1FCBE0u)) {
        auto targetFn = runtime->lookupFunction(0x1FCBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F57A0u; }
        if (ctx->pc != 0x1F57A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCBE0_0x1fcbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F57A0u; }
        if (ctx->pc != 0x1F57A0u) { return; }
    }
    ctx->pc = 0x1F57A0u;
label_1f57a0:
    // 0x1f57a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1f57a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f57a4: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1f57a4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1f57a8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1f57a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1f57ac:
    // 0x1f57ac: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1F57ACu;
    SET_GPR_U32(ctx, 31, 0x1F57B4u);
    ctx->pc = 0x1F57B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F57ACu;
            // 0x1f57b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F57B4u; }
        if (ctx->pc != 0x1F57B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F57B4u; }
        if (ctx->pc != 0x1F57B4u) { return; }
    }
    ctx->pc = 0x1F57B4u;
label_1f57b4:
    // 0x1f57b4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1f57b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f57b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f57b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f57bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f57bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f57c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F57C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F57C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F57C0u;
            // 0x1f57c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F57C8u;
    ctx->pc = 0x1f57c8u;
}
