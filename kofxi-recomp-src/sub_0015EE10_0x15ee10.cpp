#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015EE10
// Address: 0x15ee10 - 0x15ee90
void sub_0015EE10_0x15ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EE10_0x15ee10");
#endif

    switch (ctx->pc) {
        case 0x15ee38u: goto label_15ee38;
        case 0x15ee4cu: goto label_15ee4c;
        default: break;
    }

    ctx->pc = 0x15ee10u;

    // 0x15ee10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15ee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15ee14: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15ee18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15ee18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15ee1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ee1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15ee20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ee20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ee24: 0x904244d0  lbu         $v0, 0x44D0($v0)
    ctx->pc = 0x15ee24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17616)));
    // 0x15ee28: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15EE28u;
    {
        const bool branch_taken_0x15ee28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15EE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE28u;
            // 0x15ee2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ee28) {
            ctx->pc = 0x15EE68u;
            goto label_15ee68;
        }
    }
    ctx->pc = 0x15EE30u;
    // 0x15ee30: 0x3c11009b  lui         $s1, 0x9B
    ctx->pc = 0x15ee30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)155 << 16));
    // 0x15ee34: 0x263144d0  addiu       $s1, $s1, 0x44D0
    ctx->pc = 0x15ee34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 17616));
label_15ee38:
    // 0x15ee38: 0x8626000c  lh          $a2, 0xC($s1)
    ctx->pc = 0x15ee38u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15ee3c: 0x8627000e  lh          $a3, 0xE($s1)
    ctx->pc = 0x15ee3cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x15ee40: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x15ee40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15ee44: 0xc05721c  jal         func_15C870
    ctx->pc = 0x15EE44u;
    SET_GPR_U32(ctx, 31, 0x15EE4Cu);
    ctx->pc = 0x15EE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE44u;
            // 0x15ee48: 0x96240008  lhu         $a0, 0x8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE4Cu; }
        if (ctx->pc != 0x15EE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE4Cu; }
        if (ctx->pc != 0x15EE4Cu) { return; }
    }
    ctx->pc = 0x15EE4Cu;
label_15ee4c:
    // 0x15ee4c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15ee50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15ee50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15ee54: 0x904244d0  lbu         $v0, 0x44D0($v0)
    ctx->pc = 0x15ee54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17616)));
    // 0x15ee58: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x15ee58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15ee5c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x15EE5Cu;
    {
        const bool branch_taken_0x15ee5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE5Cu;
            // 0x15ee60: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ee5c) {
            ctx->pc = 0x15EE38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ee38;
        }
    }
    ctx->pc = 0x15EE64u;
    // 0x15ee64: 0x0  nop
    ctx->pc = 0x15ee64u;
    // NOP
label_15ee68:
    // 0x15ee68: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15ee6c: 0xa04044d0  sb          $zero, 0x44D0($v0)
    ctx->pc = 0x15ee6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17616), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ee70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ee70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ee74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15ee74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ee78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ee7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ee7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ee80: 0x3e00008  jr          $ra
    ctx->pc = 0x15EE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE80u;
            // 0x15ee84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15EE88u;
    // 0x15ee88: 0x0  nop
    ctx->pc = 0x15ee88u;
    // NOP
    // 0x15ee8c: 0x0  nop
    ctx->pc = 0x15ee8cu;
    // NOP
    ctx->pc = 0x15ee90u;
}
