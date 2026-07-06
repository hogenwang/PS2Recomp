#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212080
// Address: 0x212080 - 0x2120c8
void sub_00212080_0x212080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212080_0x212080");
#endif

    switch (ctx->pc) {
        case 0x21209cu: goto label_21209c;
        case 0x2120acu: goto label_2120ac;
        default: break;
    }

    ctx->pc = 0x212080u;

    // 0x212080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x212084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212088: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x212088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21208c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21208cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212090: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212094: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212094u;
    SET_GPR_U32(ctx, 31, 0x21209Cu);
    ctx->pc = 0x212098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212094u;
            // 0x212098: 0x24840350  addiu       $a0, $a0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21209Cu; }
        if (ctx->pc != 0x21209Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21209Cu; }
        if (ctx->pc != 0x21209Cu) { return; }
    }
    ctx->pc = 0x21209Cu;
label_21209c:
    // 0x21209c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21209cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2120a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2120a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2120a4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2120A4u;
    SET_GPR_U32(ctx, 31, 0x2120ACu);
    ctx->pc = 0x2120A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2120A4u;
            // 0x2120a8: 0x24840370  addiu       $a0, $a0, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2120ACu; }
        if (ctx->pc != 0x2120ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2120ACu; }
        if (ctx->pc != 0x2120ACu) { return; }
    }
    ctx->pc = 0x2120ACu;
label_2120ac:
    // 0x2120ac: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2120acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2120b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2120b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2120b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2120b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2120b8: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x2120b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x2120bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2120bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2120c0: 0x8043e52  j           func_10F948
    ctx->pc = 0x2120C0u;
    ctx->pc = 0x2120C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2120C0u;
            // 0x2120c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2120C8u;
    ctx->pc = 0x2120c8u;
}
