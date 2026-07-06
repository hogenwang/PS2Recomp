#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AE790
// Address: 0x1ae790 - 0x1ae7c8
void sub_001AE790_0x1ae790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE790_0x1ae790");
#endif

    switch (ctx->pc) {
        case 0x1ae7acu: goto label_1ae7ac;
        default: break;
    }

    ctx->pc = 0x1ae790u;

    // 0x1ae790: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ae790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ae794: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ae798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae79c: 0x2484f710  addiu       $a0, $a0, -0x8F0
    ctx->pc = 0x1ae79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965008));
    // 0x1ae7a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae7a4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1AE7A4u;
    SET_GPR_U32(ctx, 31, 0x1AE7ACu);
    ctx->pc = 0x1AE7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE7A4u;
            // 0x1ae7a8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7ACu; }
        if (ctx->pc != 0x1AE7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7ACu; }
        if (ctx->pc != 0x1AE7ACu) { return; }
    }
    ctx->pc = 0x1AE7ACu;
label_1ae7ac:
    // 0x1ae7ac: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1ae7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1ae7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae7b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1ae7b8: 0xac60f708  sw          $zero, -0x8F8($v1)
    ctx->pc = 0x1ae7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965000), GPR_U32(ctx, 0));
    // 0x1ae7bc: 0xac40f70c  sw          $zero, -0x8F4($v0)
    ctx->pc = 0x1ae7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965004), GPR_U32(ctx, 0));
    // 0x1ae7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE7C0u;
            // 0x1ae7c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE7C8u;
    ctx->pc = 0x1ae7c8u;
}
