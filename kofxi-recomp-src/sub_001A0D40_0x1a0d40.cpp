#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0D40
// Address: 0x1a0d40 - 0x1a0dc0
void sub_001A0D40_0x1a0d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0D40_0x1a0d40");
#endif

    switch (ctx->pc) {
        case 0x1a0d54u: goto label_1a0d54;
        case 0x1a0d78u: goto label_1a0d78;
        default: break;
    }

    ctx->pc = 0x1a0d40u;

    // 0x1a0d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0d44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a0d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0d48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a0d4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0d50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a0d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0d54:
    // 0x1a0d54: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0d58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a0d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0d5c: 0x9063db08  lbu         $v1, -0x24F8($v1)
    ctx->pc = 0x1a0d5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957832)));
    // 0x1a0d60: 0x2048804  sllv        $s1, $a0, $s0
    ctx->pc = 0x1a0d60u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a0d64: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x1a0d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x1a0d68: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A0D68u;
    {
        const bool branch_taken_0x1a0d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0d68) {
            ctx->pc = 0x1A0D98u;
            goto label_1a0d98;
        }
    }
    ctx->pc = 0x1A0D70u;
    // 0x1a0d70: 0xc067ff0  jal         func_19FFC0
    ctx->pc = 0x1A0D70u;
    SET_GPR_U32(ctx, 31, 0x1A0D78u);
    ctx->pc = 0x1A0D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D70u;
            // 0x1a0d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FFC0u;
    if (runtime->hasFunction(0x19FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x19FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D78u; }
        if (ctx->pc != 0x1A0D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FFC0_0x19ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D78u; }
        if (ctx->pc != 0x1A0D78u) { return; }
    }
    ctx->pc = 0x1A0D78u;
label_1a0d78:
    // 0x1a0d78: 0x2202027  not         $a0, $s1
    ctx->pc = 0x1a0d78u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 17) | GPR_U64(ctx, 0)));
    // 0x1a0d7c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0d80: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1a0d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a0d84: 0x9064db08  lbu         $a0, -0x24F8($v1)
    ctx->pc = 0x1a0d84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957832)));
    // 0x1a0d88: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0d8c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1a0d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1a0d90: 0xa064db08  sb          $a0, -0x24F8($v1)
    ctx->pc = 0x1a0d90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957832), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0d94: 0x0  nop
    ctx->pc = 0x1a0d94u;
    // NOP
label_1a0d98:
    // 0x1a0d98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a0d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a0d9c: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x1a0d9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a0da0: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1A0DA0u;
    {
        const bool branch_taken_0x1a0da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0da0) {
            ctx->pc = 0x1A0D54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a0d54;
        }
    }
    ctx->pc = 0x1A0DA8u;
    // 0x1a0da8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0dac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0dacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0db0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0db4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0DB4u;
            // 0x1a0db8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0DBCu;
    // 0x1a0dbc: 0x0  nop
    ctx->pc = 0x1a0dbcu;
    // NOP
    ctx->pc = 0x1a0dc0u;
}
