#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC170
// Address: 0x1dc170 - 0x1dc1f0
void sub_001DC170_0x1dc170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC170_0x1dc170");
#endif

    switch (ctx->pc) {
        case 0x1dc188u: goto label_1dc188;
        case 0x1dc19cu: goto label_1dc19c;
        case 0x1dc1c0u: goto label_1dc1c0;
        case 0x1dc1c8u: goto label_1dc1c8;
        case 0x1dc1d4u: goto label_1dc1d4;
        default: break;
    }

    ctx->pc = 0x1dc170u;

    // 0x1dc170: 0x24840078  addiu       $a0, $a0, 0x78
    ctx->pc = 0x1dc170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x1dc174: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1dc174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1dc178: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1dc178u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1dc17c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1dc17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1dc180: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC180u;
            // 0x1dc184: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC188u;
label_1dc188:
    // 0x1dc188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc18c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc190: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dc190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dc194: 0xc0770ee  jal         func_1DC3B8
    ctx->pc = 0x1DC194u;
    SET_GPR_U32(ctx, 31, 0x1DC19Cu);
    ctx->pc = 0x1DC198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC194u;
            // 0x1dc198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC3B8u;
    if (runtime->hasFunction(0x1DC3B8u)) {
        auto targetFn = runtime->lookupFunction(0x1DC3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC19Cu; }
        if (ctx->pc != 0x1DC19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC3B8_0x1dc3b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC19Cu; }
        if (ctx->pc != 0x1DC19Cu) { return; }
    }
    ctx->pc = 0x1DC19Cu;
label_1dc19c:
    // 0x1dc19c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1dc19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1dc1a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc1a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DC1A4u;
    {
        const bool branch_taken_0x1dc1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC1A4u;
            // 0x1dc1a8: 0x34a50201  ori         $a1, $a1, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1a4) {
            ctx->pc = 0x1DC1C0u;
            goto label_1dc1c0;
        }
    }
    ctx->pc = 0x1DC1ACu;
    // 0x1dc1ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc1acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc1b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dc1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc1b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc1b8: 0x8076688  j           func_1D9A20
    ctx->pc = 0x1DC1B8u;
    ctx->pc = 0x1DC1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC1B8u;
            // 0x1dc1bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    if (runtime->hasFunction(0x1D9A20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9A20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001D9A20_0x1d9a20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1DC1C0u;
label_1dc1c0:
    // 0x1dc1c0: 0xc077116  jal         func_1DC458
    ctx->pc = 0x1DC1C0u;
    SET_GPR_U32(ctx, 31, 0x1DC1C8u);
    ctx->pc = 0x1DC458u;
    if (runtime->hasFunction(0x1DC458u)) {
        auto targetFn = runtime->lookupFunction(0x1DC458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1C8u; }
        if (ctx->pc != 0x1DC1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC458_0x1dc458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1C8u; }
        if (ctx->pc != 0x1DC1C8u) { return; }
    }
    ctx->pc = 0x1DC1C8u;
label_1dc1c8:
    // 0x1dc1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc1cc: 0xc07707e  jal         func_1DC1F8
    ctx->pc = 0x1DC1CCu;
    SET_GPR_U32(ctx, 31, 0x1DC1D4u);
    ctx->pc = 0x1DC1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC1CCu;
            // 0x1dc1d0: 0x24050428  addiu       $a1, $zero, 0x428 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC1F8u;
    if (runtime->hasFunction(0x1DC1F8u)) {
        auto targetFn = runtime->lookupFunction(0x1DC1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1D4u; }
        if (ctx->pc != 0x1DC1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC1F8_0x1dc1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1D4u; }
        if (ctx->pc != 0x1DC1D4u) { return; }
    }
    ctx->pc = 0x1DC1D4u;
label_1dc1d4:
    // 0x1dc1d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc1d8: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x1dc1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x1dc1dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc1dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc1e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc1e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc1e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC1E8u;
            // 0x1dc1ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC1F0u;
    ctx->pc = 0x1dc1f0u;
}
