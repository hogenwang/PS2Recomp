#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9C08
// Address: 0x1b9c08 - 0x1b9c90
void sub_001B9C08_0x1b9c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9C08_0x1b9c08");
#endif

    switch (ctx->pc) {
        case 0x1b9c20u: goto label_1b9c20;
        case 0x1b9c48u: goto label_1b9c48;
        case 0x1b9c58u: goto label_1b9c58;
        case 0x1b9c6cu: goto label_1b9c6c;
        case 0x1b9c74u: goto label_1b9c74;
        case 0x1b9c7cu: goto label_1b9c7c;
        default: break;
    }

    ctx->pc = 0x1b9c08u;

    // 0x1b9c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9c0c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9C0Cu;
    {
        const bool branch_taken_0x1b9c0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C0Cu;
            // 0x1b9c10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c0c) {
            ctx->pc = 0x1B9C28u;
            goto label_1b9c28;
        }
    }
    ctx->pc = 0x1B9C14u;
    // 0x1b9c14: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1b9c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1b9c18: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B9C18u;
    SET_GPR_U32(ctx, 31, 0x1B9C20u);
    ctx->pc = 0x1B9C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C18u;
            // 0x1b9c1c: 0x248481a8  addiu       $a0, $a0, -0x7E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C20u; }
        if (ctx->pc != 0x1B9C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C20u; }
        if (ctx->pc != 0x1B9C20u) { return; }
    }
    ctx->pc = 0x1B9C20u;
label_1b9c20:
    // 0x1b9c20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9C20u;
    {
        const bool branch_taken_0x1b9c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C20u;
            // 0x1b9c24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c20) {
            ctx->pc = 0x1B9C48u;
            goto label_1b9c48;
        }
    }
    ctx->pc = 0x1B9C28u;
label_1b9c28:
    // 0x1b9c28: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x1b9c28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1b9c2c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b9c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b9c30: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9C30u;
    {
        const bool branch_taken_0x1b9c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9c30) {
            ctx->pc = 0x1B9C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C30u;
            // 0x1b9c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9C48u;
            goto label_1b9c48;
        }
    }
    ctx->pc = 0x1B9C38u;
    // 0x1b9c38: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b9c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b9c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9c40: 0x806d89c  j           func_1B6270
    ctx->pc = 0x1B9C40u;
    ctx->pc = 0x1B9C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C40u;
            // 0x1b9c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6270u;
    if (runtime->hasFunction(0x1B6270u)) {
        auto targetFn = runtime->lookupFunction(0x1B6270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B6270_0x1b6270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B9C48u;
label_1b9c48:
    // 0x1b9c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C4Cu;
            // 0x1b9c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9C54u;
    // 0x1b9c54: 0x0  nop
    ctx->pc = 0x1b9c54u;
    // NOP
label_1b9c58:
    // 0x1b9c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9c60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b9c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b9c64: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B9C64u;
    SET_GPR_U32(ctx, 31, 0x1B9C6Cu);
    ctx->pc = 0x1B9C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C64u;
            // 0x1b9c68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C6Cu; }
        if (ctx->pc != 0x1B9C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C6Cu; }
        if (ctx->pc != 0x1B9C6Cu) { return; }
    }
    ctx->pc = 0x1B9C6Cu;
label_1b9c6c:
    // 0x1b9c6c: 0xc06e724  jal         func_1B9C90
    ctx->pc = 0x1B9C6Cu;
    SET_GPR_U32(ctx, 31, 0x1B9C74u);
    ctx->pc = 0x1B9C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C6Cu;
            // 0x1b9c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C90u;
    if (runtime->hasFunction(0x1B9C90u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C74u; }
        if (ctx->pc != 0x1B9C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9C90_0x1b9c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C74u; }
        if (ctx->pc != 0x1B9C74u) { return; }
    }
    ctx->pc = 0x1B9C74u;
label_1b9c74:
    // 0x1b9c74: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1B9C74u;
    SET_GPR_U32(ctx, 31, 0x1B9C7Cu);
    ctx->pc = 0x1B9C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C74u;
            // 0x1b9c78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C7Cu; }
        if (ctx->pc != 0x1B9C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C7Cu; }
        if (ctx->pc != 0x1B9C7Cu) { return; }
    }
    ctx->pc = 0x1B9C7Cu;
label_1b9c7c:
    // 0x1b9c7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b9c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9c80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b9c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9c88: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C88u;
            // 0x1b9c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9C90u;
    ctx->pc = 0x1b9c90u;
}
