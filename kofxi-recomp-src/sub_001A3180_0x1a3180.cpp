#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3180
// Address: 0x1a3180 - 0x1a3210
void sub_001A3180_0x1a3180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3180_0x1a3180");
#endif

    switch (ctx->pc) {
        case 0x1a31acu: goto label_1a31ac;
        case 0x1a31c0u: goto label_1a31c0;
        case 0x1a31e4u: goto label_1a31e4;
        case 0x1a31f8u: goto label_1a31f8;
        default: break;
    }

    ctx->pc = 0x1a3180u;

    // 0x1a3180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a3180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3184: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a3184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a3188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a318c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a318cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a3190: 0xa440e8e4  sh          $zero, -0x171C($v0)
    ctx->pc = 0x1a3190u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961380), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a3194: 0x2484e8cb  addiu       $a0, $a0, -0x1735
    ctx->pc = 0x1a3194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961355));
    // 0x1a3198: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a3198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a319c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a319cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31a0: 0xa440e8dc  sh          $zero, -0x1724($v0)
    ctx->pc = 0x1a31a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961372), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a31a4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1A31A4u;
    SET_GPR_U32(ctx, 31, 0x1A31ACu);
    ctx->pc = 0x1A31A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A31A4u;
            // 0x1a31a8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31ACu; }
        if (ctx->pc != 0x1A31ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31ACu; }
        if (ctx->pc != 0x1A31ACu) { return; }
    }
    ctx->pc = 0x1A31ACu;
label_1a31ac:
    // 0x1a31ac: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1a31acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1a31b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a31b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a31b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31b8: 0xc047682  jal         func_11DA08
    ctx->pc = 0x1A31B8u;
    SET_GPR_U32(ctx, 31, 0x1A31C0u);
    ctx->pc = 0x1A31BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A31B8u;
            // 0x1a31bc: 0x24c6e8cb  addiu       $a2, $a2, -0x1735 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961355));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DA08u;
    if (runtime->hasFunction(0x11DA08u)) {
        auto targetFn = runtime->lookupFunction(0x11DA08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31C0u; }
        if (ctx->pc != 0x1A31C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DA08_0x11da08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31C0u; }
        if (ctx->pc != 0x1A31C0u) { return; }
    }
    ctx->pc = 0x1A31C0u;
label_1a31c0:
    // 0x1a31c0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a31c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a31c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a31c8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a31c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a31cc: 0xa460e984  sh          $zero, -0x167C($v1)
    ctx->pc = 0x1a31ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294961540), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a31d0: 0x2484e96b  addiu       $a0, $a0, -0x1695
    ctx->pc = 0x1a31d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961515));
    // 0x1a31d4: 0xa440e97c  sh          $zero, -0x1684($v0)
    ctx->pc = 0x1a31d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961532), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a31d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a31d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31dc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1A31DCu;
    SET_GPR_U32(ctx, 31, 0x1A31E4u);
    ctx->pc = 0x1A31E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A31DCu;
            // 0x1a31e0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31E4u; }
        if (ctx->pc != 0x1A31E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31E4u; }
        if (ctx->pc != 0x1A31E4u) { return; }
    }
    ctx->pc = 0x1A31E4u;
label_1a31e4:
    // 0x1a31e4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1a31e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1a31e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a31e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a31ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a31ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31f0: 0xc047682  jal         func_11DA08
    ctx->pc = 0x1A31F0u;
    SET_GPR_U32(ctx, 31, 0x1A31F8u);
    ctx->pc = 0x1A31F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A31F0u;
            // 0x1a31f4: 0x24c6e96b  addiu       $a2, $a2, -0x1695 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961515));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DA08u;
    if (runtime->hasFunction(0x11DA08u)) {
        auto targetFn = runtime->lookupFunction(0x11DA08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31F8u; }
        if (ctx->pc != 0x1A31F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DA08_0x11da08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31F8u; }
        if (ctx->pc != 0x1A31F8u) { return; }
    }
    ctx->pc = 0x1A31F8u;
label_1a31f8:
    // 0x1a31f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a31f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a31fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A31FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A31FCu;
            // 0x1a3200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3204u;
    // 0x1a3204: 0x0  nop
    ctx->pc = 0x1a3204u;
    // NOP
    // 0x1a3208: 0x0  nop
    ctx->pc = 0x1a3208u;
    // NOP
    // 0x1a320c: 0x0  nop
    ctx->pc = 0x1a320cu;
    // NOP
    ctx->pc = 0x1a3210u;
}
