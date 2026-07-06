#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002181E0
// Address: 0x2181e0 - 0x218238
void sub_002181E0_0x2181e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002181E0_0x2181e0");
#endif

    switch (ctx->pc) {
        case 0x2181fcu: goto label_2181fc;
        case 0x21820cu: goto label_21820c;
        case 0x21821cu: goto label_21821c;
        default: break;
    }

    ctx->pc = 0x2181e0u;

    // 0x2181e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2181e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2181e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2181e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2181e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2181e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2181ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2181ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2181f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2181f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2181f4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2181F4u;
    SET_GPR_U32(ctx, 31, 0x2181FCu);
    ctx->pc = 0x2181F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2181F4u;
            // 0x2181f8: 0x24840fb0  addiu       $a0, $a0, 0xFB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2181FCu; }
        if (ctx->pc != 0x2181FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2181FCu; }
        if (ctx->pc != 0x2181FCu) { return; }
    }
    ctx->pc = 0x2181FCu;
label_2181fc:
    // 0x2181fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2181fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218200: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218204: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218204u;
    SET_GPR_U32(ctx, 31, 0x21820Cu);
    ctx->pc = 0x218208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218204u;
            // 0x218208: 0x24840928  addiu       $a0, $a0, 0x928 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21820Cu; }
        if (ctx->pc != 0x21820Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21820Cu; }
        if (ctx->pc != 0x21820Cu) { return; }
    }
    ctx->pc = 0x21820Cu;
label_21820c:
    // 0x21820c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21820cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x218210: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218214: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218214u;
    SET_GPR_U32(ctx, 31, 0x21821Cu);
    ctx->pc = 0x218218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218214u;
            // 0x218218: 0x24840fc8  addiu       $a0, $a0, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21821Cu; }
        if (ctx->pc != 0x21821Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21821Cu; }
        if (ctx->pc != 0x21821Cu) { return; }
    }
    ctx->pc = 0x21821Cu;
label_21821c:
    // 0x21821c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x21821cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x218220: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218224: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x218224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218228: 0x24840fd8  addiu       $a0, $a0, 0xFD8
    ctx->pc = 0x218228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
    // 0x21822c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21822cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218230: 0x8043e52  j           func_10F948
    ctx->pc = 0x218230u;
    ctx->pc = 0x218234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218230u;
            // 0x218234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x218238u;
    ctx->pc = 0x218238u;
}
