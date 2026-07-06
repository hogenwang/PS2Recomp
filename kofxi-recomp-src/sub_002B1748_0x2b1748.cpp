#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B1748
// Address: 0x2b1748 - 0x2b17c0
void sub_002B1748_0x2b1748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1748_0x2b1748");
#endif

    switch (ctx->pc) {
        case 0x2b1778u: goto label_2b1778;
        case 0x2b1788u: goto label_2b1788;
        case 0x2b17a0u: goto label_2b17a0;
        case 0x2b17a8u: goto label_2b17a8;
        case 0x2b17b0u: goto label_2b17b0;
        case 0x2b17b8u: goto label_2b17b8;
        default: break;
    }

    ctx->pc = 0x2b1748u;

    // 0x2b1748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b1748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b174c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b174cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b1750: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b1750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b1754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b1754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1758: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2b1758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b175c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B175Cu;
    {
        const bool branch_taken_0x2b175c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B175Cu;
            // 0x2b1760: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b175c) {
            ctx->pc = 0x2B1790u;
            goto label_2b1790;
        }
    }
    ctx->pc = 0x2B1764u;
    // 0x2b1764: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2b1764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b1768: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1768u;
    {
        const bool branch_taken_0x2b1768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1768) {
            ctx->pc = 0x2B1780u;
            goto label_2b1780;
        }
    }
    ctx->pc = 0x2B1770u;
    // 0x2b1770: 0xc0a15b6  jal         func_2856D8
    ctx->pc = 0x2B1770u;
    SET_GPR_U32(ctx, 31, 0x2B1778u);
    ctx->pc = 0x2856D8u;
    if (runtime->hasFunction(0x2856D8u)) {
        auto targetFn = runtime->lookupFunction(0x2856D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1778u; }
        if (ctx->pc != 0x2B1778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002856D8_0x2856d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1778u; }
        if (ctx->pc != 0x2B1778u) { return; }
    }
    ctx->pc = 0x2B1778u;
label_2b1778:
    // 0x2b1778: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B1778u;
    {
        const bool branch_taken_0x2b1778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1778) {
            ctx->pc = 0x2B177Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1778u;
            // 0x2b177c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B1780u;
            goto label_2b1780;
        }
    }
    ctx->pc = 0x2B1780u;
label_2b1780:
    // 0x2b1780: 0xc0a1430  jal         func_2850C0
    ctx->pc = 0x2B1780u;
    SET_GPR_U32(ctx, 31, 0x2B1788u);
    ctx->pc = 0x2B1784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1780u;
            // 0x2b1784: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2850C0u;
    if (runtime->hasFunction(0x2850C0u)) {
        auto targetFn = runtime->lookupFunction(0x2850C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1788u; }
        if (ctx->pc != 0x2B1788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002850C0_0x2850c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1788u; }
        if (ctx->pc != 0x2B1788u) { return; }
    }
    ctx->pc = 0x2B1788u;
label_2b1788:
    // 0x2b1788: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2b1788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2b178c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b178cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1790:
    // 0x2b1790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b1790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1794: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1794u;
            // 0x2b1798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B179Cu;
    // 0x2b179c: 0x0  nop
    ctx->pc = 0x2b179cu;
    // NOP
label_2b17a0:
    // 0x2b17a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B17A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B17A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B17A0u;
            // 0x2b17a4: 0xac85002c  sw          $a1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B17A8u;
label_2b17a8:
    // 0x2b17a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B17A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B17ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B17A8u;
            // 0x2b17ac: 0x8c82002c  lw          $v0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B17B0u;
label_2b17b0:
    // 0x2b17b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B17B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B17B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B17B0u;
            // 0x2b17b4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B17B8u;
label_2b17b8:
    // 0x2b17b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B17B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B17BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B17B8u;
            // 0x2b17bc: 0x8c8200dc  lw          $v0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B17C0u;
    ctx->pc = 0x2b17c0u;
}
