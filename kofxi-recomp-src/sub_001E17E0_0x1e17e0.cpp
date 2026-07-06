#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E17E0
// Address: 0x1e17e0 - 0x1e1860
void sub_001E17E0_0x1e17e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E17E0_0x1e17e0");
#endif

    switch (ctx->pc) {
        case 0x1e180cu: goto label_1e180c;
        case 0x1e1830u: goto label_1e1830;
        case 0x1e1838u: goto label_1e1838;
        case 0x1e1844u: goto label_1e1844;
        default: break;
    }

    ctx->pc = 0x1e17e0u;

    // 0x1e17e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e17e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e17e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e17e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e17e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e17e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e17ec: 0x80785fe  j           func_1E17F8
    ctx->pc = 0x1E17ECu;
    ctx->pc = 0x1E17F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E17ECu;
            // 0x1e17f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E17F8u;
    goto label_1e17f8;
    ctx->pc = 0x1E17F4u;
    // 0x1e17f4: 0x0  nop
    ctx->pc = 0x1e17f4u;
    // NOP
label_1e17f8:
    // 0x1e17f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e17f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e17fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e17fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1800: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e1800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e1804: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E1804u;
    SET_GPR_U32(ctx, 31, 0x1E180Cu);
    ctx->pc = 0x1E1808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1804u;
            // 0x1e1808: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E180Cu; }
        if (ctx->pc != 0x1E180Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E180Cu; }
        if (ctx->pc != 0x1E180Cu) { return; }
    }
    ctx->pc = 0x1E180Cu;
label_1e180c:
    // 0x1e180c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e180cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1810: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1810u;
    {
        const bool branch_taken_0x1e1810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E1814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1810u;
            // 0x1e1814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1810) {
            ctx->pc = 0x1E1830u;
            goto label_1e1830;
        }
    }
    ctx->pc = 0x1E1818u;
    // 0x1e1818: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e1818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e181c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e181cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1820: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e1820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1824: 0x2484d2c8  addiu       $a0, $a0, -0x2D38
    ctx->pc = 0x1e1824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955720));
    // 0x1e1828: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E1828u;
    ctx->pc = 0x1E182Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1828u;
            // 0x1e182c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E1830u;
label_1e1830:
    // 0x1e1830: 0xc0785ba  jal         func_1E16E8
    ctx->pc = 0x1E1830u;
    SET_GPR_U32(ctx, 31, 0x1E1838u);
    ctx->pc = 0x1E16E8u;
    if (runtime->hasFunction(0x1E16E8u)) {
        auto targetFn = runtime->lookupFunction(0x1E16E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1838u; }
        if (ctx->pc != 0x1E1838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E16E8_0x1e16e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1838u; }
        if (ctx->pc != 0x1E1838u) { return; }
    }
    ctx->pc = 0x1E1838u;
label_1e1838:
    // 0x1e1838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e183c: 0xc0796a0  jal         func_1E5A80
    ctx->pc = 0x1E183Cu;
    SET_GPR_U32(ctx, 31, 0x1E1844u);
    ctx->pc = 0x1E1840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E183Cu;
            // 0x1e1840: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5A80u;
    if (runtime->hasFunction(0x1E5A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E5A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1844u; }
        if (ctx->pc != 0x1E1844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5A80_0x1e5a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1844u; }
        if (ctx->pc != 0x1E1844u) { return; }
    }
    ctx->pc = 0x1E1844u;
label_1e1844:
    // 0x1e1844: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x1e1844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x1e1848: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1e1848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1e184c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e184cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1850: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1854: 0x80718ae  j           func_1C62B8
    ctx->pc = 0x1E1854u;
    ctx->pc = 0x1E1858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1854u;
            // 0x1e1858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C62B8u;
    if (runtime->hasFunction(0x1C62B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C62B8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C62B8_0x1c62b8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E185Cu;
    // 0x1e185c: 0x0  nop
    ctx->pc = 0x1e185cu;
    // NOP
    ctx->pc = 0x1e1860u;
}
