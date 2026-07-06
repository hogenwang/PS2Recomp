#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212768
// Address: 0x212768 - 0x2127b0
void sub_00212768_0x212768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212768_0x212768");
#endif

    switch (ctx->pc) {
        case 0x212784u: goto label_212784;
        case 0x212794u: goto label_212794;
        default: break;
    }

    ctx->pc = 0x212768u;

    // 0x212768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21276c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21276cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212770: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x212770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x212774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212778: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21277c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21277Cu;
    SET_GPR_U32(ctx, 31, 0x212784u);
    ctx->pc = 0x212780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21277Cu;
            // 0x212780: 0x24840508  addiu       $a0, $a0, 0x508 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212784u; }
        if (ctx->pc != 0x212784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212784u; }
        if (ctx->pc != 0x212784u) { return; }
    }
    ctx->pc = 0x212784u;
label_212784:
    // 0x212784: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x212784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x212788: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21278c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21278Cu;
    SET_GPR_U32(ctx, 31, 0x212794u);
    ctx->pc = 0x212790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21278Cu;
            // 0x212790: 0x24840528  addiu       $a0, $a0, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212794u; }
        if (ctx->pc != 0x212794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212794u; }
        if (ctx->pc != 0x212794u) { return; }
    }
    ctx->pc = 0x212794u;
label_212794:
    // 0x212794: 0x8e0500dc  lw          $a1, 0xDC($s0)
    ctx->pc = 0x212794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x212798: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21279c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21279cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2127a0: 0x24840538  addiu       $a0, $a0, 0x538
    ctx->pc = 0x2127a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1336));
    // 0x2127a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2127a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2127a8: 0x8043e52  j           func_10F948
    ctx->pc = 0x2127A8u;
    ctx->pc = 0x2127ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2127A8u;
            // 0x2127ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2127B0u;
    ctx->pc = 0x2127b0u;
}
