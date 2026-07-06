#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00191B10
// Address: 0x191b10 - 0x191b60
void sub_00191B10_0x191b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191B10_0x191b10");
#endif

    switch (ctx->pc) {
        case 0x191b38u: goto label_191b38;
        case 0x191b4cu: goto label_191b4c;
        default: break;
    }

    ctx->pc = 0x191b10u;

    // 0x191b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191b14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191b18: 0x10850009  beq         $a0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x191B18u;
    {
        const bool branch_taken_0x191b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x191B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191B18u;
            // 0x191b1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b18) {
            ctx->pc = 0x191B40u;
            goto label_191b40;
        }
    }
    ctx->pc = 0x191B20u;
    // 0x191b20: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x191B20u;
    {
        const bool branch_taken_0x191b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x191b20) {
            ctx->pc = 0x191B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191B20u;
            // 0x191b24: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x191B30u;
            goto label_191b30;
        }
    }
    ctx->pc = 0x191B28u;
    // 0x191b28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x191B28u;
    {
        const bool branch_taken_0x191b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191B28u;
            // 0x191b2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b28) {
            ctx->pc = 0x191B50u;
            goto label_191b50;
        }
    }
    ctx->pc = 0x191B30u;
label_191b30:
    // 0x191b30: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x191B30u;
    SET_GPR_U32(ctx, 31, 0x191B38u);
    ctx->pc = 0x191B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191B30u;
            // 0x191b34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B38u; }
        if (ctx->pc != 0x191B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B38u; }
        if (ctx->pc != 0x191B38u) { return; }
    }
    ctx->pc = 0x191B38u;
label_191b38:
    // 0x191b38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x191B38u;
    {
        const bool branch_taken_0x191b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191b38) {
            ctx->pc = 0x191B4Cu;
            goto label_191b4c;
        }
    }
    ctx->pc = 0x191B40u;
label_191b40:
    // 0x191b40: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x191b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x191b44: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x191B44u;
    SET_GPR_U32(ctx, 31, 0x191B4Cu);
    ctx->pc = 0x191B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191B44u;
            // 0x191b48: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B4Cu; }
        if (ctx->pc != 0x191B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B4Cu; }
        if (ctx->pc != 0x191B4Cu) { return; }
    }
    ctx->pc = 0x191B4Cu;
label_191b4c:
    // 0x191b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191b50:
    // 0x191b50: 0x3e00008  jr          $ra
    ctx->pc = 0x191B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191B50u;
            // 0x191b54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191B58u;
    // 0x191b58: 0x0  nop
    ctx->pc = 0x191b58u;
    // NOP
    // 0x191b5c: 0x0  nop
    ctx->pc = 0x191b5cu;
    // NOP
    ctx->pc = 0x191b60u;
}
