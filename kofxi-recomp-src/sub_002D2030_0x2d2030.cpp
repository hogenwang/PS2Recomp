#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D2030
// Address: 0x2d2030 - 0x2d20d8
void sub_002D2030_0x2d2030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2030_0x2d2030");
#endif

    switch (ctx->pc) {
        case 0x2d2064u: goto label_2d2064;
        case 0x2d2070u: goto label_2d2070;
        case 0x2d20a4u: goto label_2d20a4;
        case 0x2d20b0u: goto label_2d20b0;
        default: break;
    }

    ctx->pc = 0x2d2030u;

    // 0x2d2030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d2034: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d2034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d2038: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d2038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d203c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d203cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2040: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d2040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d2044: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d2044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d2048: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d2048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d204c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d204cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d2050: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2d2050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2054: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d2054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d2058: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2d2058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2d205c: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D205Cu;
    SET_GPR_U32(ctx, 31, 0x2D2064u);
    ctx->pc = 0x2D2060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D205Cu;
            // 0x2d2060: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2064u; }
        if (ctx->pc != 0x2D2064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2064u; }
        if (ctx->pc != 0x2D2064u) { return; }
    }
    ctx->pc = 0x2D2064u;
label_2d2064:
    // 0x2d2064: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d2064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2068: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D2068u;
    SET_GPR_U32(ctx, 31, 0x2D2070u);
    ctx->pc = 0x2D206Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2068u;
            // 0x2d206c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (runtime->hasFunction(0x2D19A8u)) {
        auto targetFn = runtime->lookupFunction(0x2D19A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2070u; }
        if (ctx->pc != 0x2D2070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D19A8_0x2d19a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2070u; }
        if (ctx->pc != 0x2D2070u) { return; }
    }
    ctx->pc = 0x2D2070u;
label_2d2070:
    // 0x2d2070: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2d2070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2074: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d2074u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d2078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d207c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d207cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2080: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d2080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2084: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2d2084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d2088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d208c: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D208Cu;
    {
        const bool branch_taken_0x2d208c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D208Cu;
            // 0x2d2090: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d208c) {
            ctx->pc = 0x2D20A8u;
            goto label_2d20a8;
        }
    }
    ctx->pc = 0x2D2094u;
    // 0x2d2094: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2d2094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d2098: 0xfc490000  sd          $t1, 0x0($v0)
    ctx->pc = 0x2d2098u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 9));
    // 0x2d209c: 0xc0b48e4  jal         func_2D2390
    ctx->pc = 0x2D209Cu;
    SET_GPR_U32(ctx, 31, 0x2D20A4u);
    ctx->pc = 0x2D20A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D209Cu;
            // 0x2d20a0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2390u;
    if (runtime->hasFunction(0x2D2390u)) {
        auto targetFn = runtime->lookupFunction(0x2D2390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D20A4u; }
        if (ctx->pc != 0x2D20A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2390_0x2d2390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D20A4u; }
        if (ctx->pc != 0x2D20A4u) { return; }
    }
    ctx->pc = 0x2D20A4u;
label_2d20a4:
    // 0x2d20a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d20a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d20a8:
    // 0x2d20a8: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D20A8u;
    SET_GPR_U32(ctx, 31, 0x2D20B0u);
    ctx->pc = 0x2D20ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D20A8u;
            // 0x2d20ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D20B0u; }
        if (ctx->pc != 0x2D20B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D20B0u; }
        if (ctx->pc != 0x2D20B0u) { return; }
    }
    ctx->pc = 0x2D20B0u;
label_2d20b0:
    // 0x2d20b0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2d20b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d20b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d20b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d20b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d20bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d20bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d20c0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d20c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d20c4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d20c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d20c8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2d20c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d20cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D20CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D20D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D20CCu;
            // 0x2d20d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D20D4u;
    // 0x2d20d4: 0x0  nop
    ctx->pc = 0x2d20d4u;
    // NOP
    ctx->pc = 0x2d20d8u;
}
