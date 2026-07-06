#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1860
// Address: 0x2d1860 - 0x2d18b0
void sub_002D1860_0x2d1860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1860_0x2d1860");
#endif

    switch (ctx->pc) {
        case 0x2d188cu: goto label_2d188c;
        case 0x2d1894u: goto label_2d1894;
        default: break;
    }

    ctx->pc = 0x2d1860u;

    // 0x2d1860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d1864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d1864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d1868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d1868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d186c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d186cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d1870: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d1870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d1874: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1874u;
    {
        const bool branch_taken_0x2d1874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1874u;
            // 0x2d1878: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1874) {
            ctx->pc = 0x2D1898u;
            goto label_2d1898;
        }
    }
    ctx->pc = 0x2D187Cu;
    // 0x2d187c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d187cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d1880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d1880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1884: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D1884u;
    SET_GPR_U32(ctx, 31, 0x2D188Cu);
    ctx->pc = 0x2D1888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1884u;
            // 0x2d1888: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D188Cu; }
        if (ctx->pc != 0x2D188Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D188Cu; }
        if (ctx->pc != 0x2D188Cu) { return; }
    }
    ctx->pc = 0x2D188Cu;
label_2d188c:
    // 0x2d188c: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D188Cu;
    SET_GPR_U32(ctx, 31, 0x2D1894u);
    ctx->pc = 0x2D1890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D188Cu;
            // 0x2d1890: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1894u; }
        if (ctx->pc != 0x2D1894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1894u; }
        if (ctx->pc != 0x2D1894u) { return; }
    }
    ctx->pc = 0x2D1894u;
label_2d1894:
    // 0x2d1894: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2d1894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2d1898:
    // 0x2d1898: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d1898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2d189c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d189cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d18a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d18a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d18a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d18a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d18a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D18A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D18ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D18A8u;
            // 0x2d18ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D18B0u;
    ctx->pc = 0x2d18b0u;
}
