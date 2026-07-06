#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7480
// Address: 0x1f7480 - 0x1f74c8
void sub_001F7480_0x1f7480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7480_0x1f7480");
#endif

    switch (ctx->pc) {
        case 0x1f74b8u: goto label_1f74b8;
        default: break;
    }

    ctx->pc = 0x1f7480u;

    // 0x1f7480: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f7480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f7484: 0x3c035a5a  lui         $v1, 0x5A5A
    ctx->pc = 0x1f7484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23130 << 16));
    // 0x1f7488: 0x8c44ead4  lw          $a0, -0x152C($v0)
    ctx->pc = 0x1f7488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961876)));
    // 0x1f748c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f748cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7490: 0x34635a5a  ori         $v1, $v1, 0x5A5A
    ctx->pc = 0x1f7490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23130);
    // 0x1f7494: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7494u;
    {
        const bool branch_taken_0x1f7494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F7498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7494u;
            // 0x1f7498: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7494) {
            ctx->pc = 0x1F74B8u;
            goto label_1f74b8;
        }
    }
    ctx->pc = 0x1F749Cu;
    // 0x1f749c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f749cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f74a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f74a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f74a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f74a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f74a8: 0x34a50201  ori         $a1, $a1, 0x201
    ctx->pc = 0x1f74a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
    // 0x1f74ac: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F74ACu;
    ctx->pc = 0x1F74B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F74ACu;
            // 0x1f74b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F74B4u;
    // 0x1f74b4: 0x0  nop
    ctx->pc = 0x1f74b4u;
    // NOP
label_1f74b8:
    // 0x1f74b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f74b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f74bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F74BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F74C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F74BCu;
            // 0x1f74c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F74C4u;
    // 0x1f74c4: 0x0  nop
    ctx->pc = 0x1f74c4u;
    // NOP
    ctx->pc = 0x1f74c8u;
}
