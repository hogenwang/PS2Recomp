#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00343180
// Address: 0x343180 - 0x3431d0
void sub_00343180_0x343180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343180_0x343180");
#endif

    switch (ctx->pc) {
        case 0x3431a8u: goto label_3431a8;
        default: break;
    }

    ctx->pc = 0x343180u;

    // 0x343180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x343184: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34318c: 0x9043fe25  lbu         $v1, -0x1DB($v0)
    ctx->pc = 0x34318cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294966821)));
    // 0x343190: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x343190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x343194: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x343194u;
    {
        const bool branch_taken_0x343194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x343194) {
            ctx->pc = 0x343198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343194u;
            // 0x343198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3431C0u;
            goto label_3431c0;
        }
    }
    ctx->pc = 0x34319Cu;
    // 0x34319c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34319cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3431a0: 0xc088696  jal         func_221A58
    ctx->pc = 0x3431A0u;
    SET_GPR_U32(ctx, 31, 0x3431A8u);
    ctx->pc = 0x3431A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3431A0u;
            // 0x3431a4: 0x8c4440a8  lw          $a0, 0x40A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (runtime->hasFunction(0x221A58u)) {
        auto targetFn = runtime->lookupFunction(0x221A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3431A8u; }
        if (ctx->pc != 0x3431A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221A58_0x221a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3431A8u; }
        if (ctx->pc != 0x3431A8u) { return; }
    }
    ctx->pc = 0x3431A8u;
label_3431a8:
    // 0x3431a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3431a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3431ac: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3431ACu;
    {
        const bool branch_taken_0x3431ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3431ac) {
            ctx->pc = 0x3431BCu;
            goto label_3431bc;
        }
    }
    ctx->pc = 0x3431B4u;
    // 0x3431b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3431B4u;
    {
        const bool branch_taken_0x3431b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3431B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3431B4u;
            // 0x3431b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3431b4) {
            ctx->pc = 0x3431C0u;
            goto label_3431c0;
        }
    }
    ctx->pc = 0x3431BCu;
label_3431bc:
    // 0x3431bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3431bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3431c0:
    // 0x3431c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3431c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3431c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3431C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3431C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3431C4u;
            // 0x3431c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3431CCu;
    // 0x3431cc: 0x0  nop
    ctx->pc = 0x3431ccu;
    // NOP
    ctx->pc = 0x3431d0u;
}
