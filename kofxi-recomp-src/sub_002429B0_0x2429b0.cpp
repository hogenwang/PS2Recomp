#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002429B0
// Address: 0x2429b0 - 0x242a00
void sub_002429B0_0x2429b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002429B0_0x2429b0");
#endif

    switch (ctx->pc) {
        case 0x2429d0u: goto label_2429d0;
        default: break;
    }

    ctx->pc = 0x2429b0u;

    // 0x2429b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2429b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2429b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2429b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2429b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2429b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2429bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2429bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2429c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2429c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2429c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2429c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2429c8: 0xc08b822  jal         func_22E088
    ctx->pc = 0x2429C8u;
    SET_GPR_U32(ctx, 31, 0x2429D0u);
    ctx->pc = 0x2429CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2429C8u;
            // 0x2429cc: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E088u;
    if (runtime->hasFunction(0x22E088u)) {
        auto targetFn = runtime->lookupFunction(0x22E088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2429D0u; }
        if (ctx->pc != 0x2429D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E088_0x22e088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2429D0u; }
        if (ctx->pc != 0x2429D0u) { return; }
    }
    ctx->pc = 0x2429D0u;
label_2429d0:
    // 0x2429d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2429d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2429d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2429D4u;
    {
        const bool branch_taken_0x2429d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2429D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2429D4u;
            // 0x2429d8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429d4) {
            ctx->pc = 0x2429E8u;
            goto label_2429e8;
        }
    }
    ctx->pc = 0x2429DCu;
    // 0x2429dc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2429dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2429e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2429e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2429e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2429e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2429e8:
    // 0x2429e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2429e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2429ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2429ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2429f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2429f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2429f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2429f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2429f8: 0x8098560  j           func_261580
    ctx->pc = 0x2429F8u;
    ctx->pc = 0x2429FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2429F8u;
            // 0x2429fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00261580_0x261580(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x242A00u;
    ctx->pc = 0x242a00u;
}
