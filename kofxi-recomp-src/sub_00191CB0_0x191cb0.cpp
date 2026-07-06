#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00191CB0
// Address: 0x191cb0 - 0x191cf0
void sub_00191CB0_0x191cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191CB0_0x191cb0");
#endif

    switch (ctx->pc) {
        case 0x191ce4u: goto label_191ce4;
        default: break;
    }

    ctx->pc = 0x191cb0u;

    // 0x191cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191cb4: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x191cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x191cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191cbc: 0x8c64d918  lw          $a0, -0x26E8($v1)
    ctx->pc = 0x191cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x191cc0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x191cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x191cc4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x191cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x191cc8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x191cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x191ccc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x191CCCu;
    {
        const bool branch_taken_0x191ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x191ccc) {
            ctx->pc = 0x191CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191CCCu;
            // 0x191cd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x191CE8u;
            goto label_191ce8;
        }
    }
    ctx->pc = 0x191CD4u;
    // 0x191cd4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x191cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191cd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191cdc: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x191CDCu;
    SET_GPR_U32(ctx, 31, 0x191CE4u);
    ctx->pc = 0x191CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191CDCu;
            // 0x191ce0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191CE4u; }
        if (ctx->pc != 0x191CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191CE4u; }
        if (ctx->pc != 0x191CE4u) { return; }
    }
    ctx->pc = 0x191CE4u;
label_191ce4:
    // 0x191ce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191ce8:
    // 0x191ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x191CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191CE8u;
            // 0x191cec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191CF0u;
    ctx->pc = 0x191cf0u;
}
