#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234B28
// Address: 0x234b28 - 0x234ba0
void sub_00234B28_0x234b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234B28_0x234b28");
#endif

    switch (ctx->pc) {
        case 0x234b28u: goto label_234b28;
        case 0x234b2cu: goto label_234b2c;
        case 0x234b30u: goto label_234b30;
        case 0x234b34u: goto label_234b34;
        case 0x234b38u: goto label_234b38;
        case 0x234b3cu: goto label_234b3c;
        case 0x234b40u: goto label_234b40;
        case 0x234b44u: goto label_234b44;
        case 0x234b48u: goto label_234b48;
        case 0x234b4cu: goto label_234b4c;
        case 0x234b50u: goto label_234b50;
        case 0x234b54u: goto label_234b54;
        case 0x234b58u: goto label_234b58;
        case 0x234b5cu: goto label_234b5c;
        case 0x234b60u: goto label_234b60;
        case 0x234b64u: goto label_234b64;
        case 0x234b68u: goto label_234b68;
        case 0x234b6cu: goto label_234b6c;
        case 0x234b70u: goto label_234b70;
        case 0x234b74u: goto label_234b74;
        case 0x234b78u: goto label_234b78;
        case 0x234b7cu: goto label_234b7c;
        case 0x234b80u: goto label_234b80;
        case 0x234b84u: goto label_234b84;
        case 0x234b88u: goto label_234b88;
        case 0x234b8cu: goto label_234b8c;
        case 0x234b90u: goto label_234b90;
        case 0x234b94u: goto label_234b94;
        case 0x234b98u: goto label_234b98;
        case 0x234b9cu: goto label_234b9c;
        default: break;
    }

    ctx->pc = 0x234b28u;

label_234b28:
    // 0x234b28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_234b2c:
    // 0x234b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234b30:
    // 0x234b30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234b34:
    // 0x234b34: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x234b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_234b38:
    // 0x234b38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_234b3c:
    // 0x234b3c: 0xc08d2e8  jal         func_234BA0
label_234b40:
    if (ctx->pc == 0x234B40u) {
        ctx->pc = 0x234B40u;
            // 0x234b40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234B44u;
        goto label_234b44;
    }
    ctx->pc = 0x234B3Cu;
    SET_GPR_U32(ctx, 31, 0x234B44u);
    ctx->pc = 0x234B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234B3Cu;
            // 0x234b40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234BA0u;
    if (runtime->hasFunction(0x234BA0u)) {
        auto targetFn = runtime->lookupFunction(0x234BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B44u; }
        if (ctx->pc != 0x234B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234BA0_0x234ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B44u; }
        if (ctx->pc != 0x234B44u) { return; }
    }
    ctx->pc = 0x234B44u;
label_234b44:
    // 0x234b44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234b48:
    // 0x234b48: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_234b4c:
    if (ctx->pc == 0x234B4Cu) {
        ctx->pc = 0x234B50u;
        goto label_234b50;
    }
    ctx->pc = 0x234B48u;
    {
        const bool branch_taken_0x234b48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x234b48) {
            ctx->pc = 0x234B58u;
            goto label_234b58;
        }
    }
    ctx->pc = 0x234B50u;
label_234b50:
    // 0x234b50: 0x1000000e  b           . + 4 + (0xE << 2)
label_234b54:
    if (ctx->pc == 0x234B54u) {
        ctx->pc = 0x234B54u;
            // 0x234b54: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x234B58u;
        goto label_234b58;
    }
    ctx->pc = 0x234B50u;
    {
        const bool branch_taken_0x234b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234B50u;
            // 0x234b54: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b50) {
            ctx->pc = 0x234B8Cu;
            goto label_234b8c;
        }
    }
    ctx->pc = 0x234B58u;
label_234b58:
    // 0x234b58: 0xc08d54a  jal         func_235528
label_234b5c:
    if (ctx->pc == 0x234B5Cu) {
        ctx->pc = 0x234B5Cu;
            // 0x234b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234B60u;
        goto label_234b60;
    }
    ctx->pc = 0x234B58u;
    SET_GPR_U32(ctx, 31, 0x234B60u);
    ctx->pc = 0x234B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234B58u;
            // 0x234b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235528u;
    if (runtime->hasFunction(0x235528u)) {
        auto targetFn = runtime->lookupFunction(0x235528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B60u; }
        if (ctx->pc != 0x234B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235528_0x235528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B60u; }
        if (ctx->pc != 0x234B60u) { return; }
    }
    ctx->pc = 0x234B60u;
label_234b60:
    // 0x234b60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x234b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234b64:
    // 0x234b64: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_234b68:
    if (ctx->pc == 0x234B68u) {
        ctx->pc = 0x234B68u;
            // 0x234b68: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x234B6Cu;
        goto label_234b6c;
    }
    ctx->pc = 0x234B64u;
    {
        const bool branch_taken_0x234b64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234B64u;
            // 0x234b68: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b64) {
            ctx->pc = 0x234B8Cu;
            goto label_234b8c;
        }
    }
    ctx->pc = 0x234B6Cu;
label_234b6c:
    // 0x234b6c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x234b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_234b70:
    // 0x234b70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_234b74:
    if (ctx->pc == 0x234B74u) {
        ctx->pc = 0x234B78u;
        goto label_234b78;
    }
    ctx->pc = 0x234B70u;
    {
        const bool branch_taken_0x234b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234b70) {
            ctx->pc = 0x234B80u;
            goto label_234b80;
        }
    }
    ctx->pc = 0x234B78u;
label_234b78:
    // 0x234b78: 0x10000004  b           . + 4 + (0x4 << 2)
label_234b7c:
    if (ctx->pc == 0x234B7Cu) {
        ctx->pc = 0x234B7Cu;
            // 0x234b7c: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->pc = 0x234B80u;
        goto label_234b80;
    }
    ctx->pc = 0x234B78u;
    {
        const bool branch_taken_0x234b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234B78u;
            // 0x234b7c: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b78) {
            ctx->pc = 0x234B8Cu;
            goto label_234b8c;
        }
    }
    ctx->pc = 0x234B80u;
label_234b80:
    // 0x234b80: 0x40f809  jalr        $v0
label_234b84:
    if (ctx->pc == 0x234B84u) {
        ctx->pc = 0x234B88u;
        goto label_234b88;
    }
    ctx->pc = 0x234B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234B88u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x234B88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x234B88u; }
            if (ctx->pc != 0x234B88u) { return; }
        }
        }
    }
    ctx->pc = 0x234B88u;
label_234b88:
    // 0x234b88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x234b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234b8c:
    // 0x234b8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234b90:
    // 0x234b90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x234b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234b94:
    // 0x234b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234b98:
    // 0x234b98: 0x3e00008  jr          $ra
label_234b9c:
    if (ctx->pc == 0x234B9Cu) {
        ctx->pc = 0x234B9Cu;
            // 0x234b9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x234BA0u;
        goto label_fallthrough_0x234b98;
    }
    ctx->pc = 0x234B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234B98u;
            // 0x234b9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x234b98:
    ctx->pc = 0x234BA0u;
    ctx->pc = 0x234ba0u;
}
