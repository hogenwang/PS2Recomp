#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00237F90
// Address: 0x237f90 - 0x237fe0
void sub_00237F90_0x237f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237F90_0x237f90");
#endif

    switch (ctx->pc) {
        case 0x237fb0u: goto label_237fb0;
        case 0x237fc4u: goto label_237fc4;
        default: break;
    }

    ctx->pc = 0x237f90u;

    // 0x237f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x237f94: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x237f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x237f98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237f9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x237f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x237fa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237fa4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x237fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x237fa8: 0xc08ac88  jal         func_22B220
    ctx->pc = 0x237FA8u;
    SET_GPR_U32(ctx, 31, 0x237FB0u);
    ctx->pc = 0x237FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237FA8u;
            // 0x237fac: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (runtime->hasFunction(0x22B220u)) {
        auto targetFn = runtime->lookupFunction(0x22B220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237FB0u; }
        if (ctx->pc != 0x237FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B220_0x22b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237FB0u; }
        if (ctx->pc != 0x237FB0u) { return; }
    }
    ctx->pc = 0x237FB0u;
label_237fb0:
    // 0x237fb0: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x237fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x237fb4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x237fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237fb8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x237fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x237fbc: 0xc08de5e  jal         func_237978
    ctx->pc = 0x237FBCu;
    SET_GPR_U32(ctx, 31, 0x237FC4u);
    ctx->pc = 0x237FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237FBCu;
            // 0x237fc0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x237978u;
    if (runtime->hasFunction(0x237978u)) {
        auto targetFn = runtime->lookupFunction(0x237978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237FC4u; }
        if (ctx->pc != 0x237FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00237978_0x237978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237FC4u; }
        if (ctx->pc != 0x237FC4u) { return; }
    }
    ctx->pc = 0x237FC4u;
label_237fc4:
    // 0x237fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237fc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x237fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237fcc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x237fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237fd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237fd4: 0x808a996  j           func_22A658
    ctx->pc = 0x237FD4u;
    ctx->pc = 0x237FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237FD4u;
            // 0x237fd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022A658_0x22a658(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x237FDCu;
    // 0x237fdc: 0x0  nop
    ctx->pc = 0x237fdcu;
    // NOP
    ctx->pc = 0x237fe0u;
}
