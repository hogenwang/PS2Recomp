#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012ED00
// Address: 0x12ed00 - 0x12edd0
void sub_0012ED00_0x12ed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012ED00_0x12ed00");
#endif

    switch (ctx->pc) {
        case 0x12ed8cu: goto label_12ed8c;
        case 0x12edacu: goto label_12edac;
        default: break;
    }

    ctx->pc = 0x12ed00u;

    // 0x12ed00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ed00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ed04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12ed04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12ed08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12ed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12ed0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12ed0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12ed10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12ed10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed14: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x12ed14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x12ed18: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x12ed18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x12ed1c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x12ED1Cu;
    {
        const bool branch_taken_0x12ed1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED1Cu;
            // 0x12ed20: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed1c) {
            ctx->pc = 0x12ED70u;
            goto label_12ed70;
        }
    }
    ctx->pc = 0x12ED24u;
    // 0x12ed24: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x12ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x12ed28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12ed2c: 0x2484c3e0  addiu       $a0, $a0, -0x3C20
    ctx->pc = 0x12ed2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951904));
    // 0x12ed30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12ed30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12ed34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ed38: 0x600008  jr          $v1
    ctx->pc = 0x12ED38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12ED40u: goto label_12ed40;
            case 0x12ED5Cu: goto label_12ed5c;
            case 0x12ED70u: goto label_12ed70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12ED40u;
label_12ed40:
    // 0x12ed40: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x12ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x12ed44: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x12ed44u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12ed48: 0x9063dca0  lbu         $v1, -0x2360($v1)
    ctx->pc = 0x12ed48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958240)));
    // 0x12ed4c: 0x54640009  bnel        $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12ED4Cu;
    {
        const bool branch_taken_0x12ed4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x12ed4c) {
            ctx->pc = 0x12ED50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED4Cu;
            // 0x12ed50: 0x92230004  lbu         $v1, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12ED74u;
            goto label_12ed74;
        }
    }
    ctx->pc = 0x12ED54u;
    // 0x12ed54: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12ED54u;
    {
        const bool branch_taken_0x12ed54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED54u;
            // 0x12ed58: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed54) {
            ctx->pc = 0x12EDB4u;
            goto label_12edb4;
        }
    }
    ctx->pc = 0x12ED5Cu;
label_12ed5c:
    // 0x12ed5c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x12ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x12ed60: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x12ed60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12ed64: 0x9063dee8  lbu         $v1, -0x2118($v1)
    ctx->pc = 0x12ed64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958824)));
    // 0x12ed68: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12ED68u;
    {
        const bool branch_taken_0x12ed68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x12ed68) {
            ctx->pc = 0x12EDB0u;
            goto label_12edb0;
        }
    }
    ctx->pc = 0x12ED70u;
label_12ed70:
    // 0x12ed70: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x12ed70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_12ed74:
    // 0x12ed74: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x12ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x12ed78: 0x2442c2f0  addiu       $v0, $v0, -0x3D10
    ctx->pc = 0x12ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951664));
    // 0x12ed7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12ed80: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x12ed80u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ed84: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x12ED84u;
    SET_GPR_U32(ctx, 31, 0x12ED8Cu);
    ctx->pc = 0x12ED88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED84u;
            // 0x12ed88: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (runtime->hasFunction(0x32C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x32C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED8Cu; }
        if (ctx->pc != 0x12ED8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C8B0_0x32c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED8Cu; }
        if (ctx->pc != 0x12ED8Cu) { return; }
    }
    ctx->pc = 0x12ED8Cu;
label_12ed8c:
    // 0x12ed8c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12ed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12ed90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12ed90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed94: 0xac621d10  sw          $v0, 0x1D10($v1)
    ctx->pc = 0x12ed94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7440), GPR_U32(ctx, 2));
    // 0x12ed98: 0x92260004  lbu         $a2, 0x4($s1)
    ctx->pc = 0x12ed98u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12ed9c: 0x92270005  lbu         $a3, 0x5($s1)
    ctx->pc = 0x12ed9cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x12eda0: 0x92280006  lbu         $t0, 0x6($s1)
    ctx->pc = 0x12eda0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x12eda4: 0xc04ba70  jal         func_12E9C0
    ctx->pc = 0x12EDA4u;
    SET_GPR_U32(ctx, 31, 0x12EDACu);
    ctx->pc = 0x12EDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EDA4u;
            // 0x12eda8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E9C0u;
    if (runtime->hasFunction(0x12E9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12E9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EDACu; }
        if (ctx->pc != 0x12EDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E9C0_0x12e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EDACu; }
        if (ctx->pc != 0x12EDACu) { return; }
    }
    ctx->pc = 0x12EDACu;
label_12edac:
    // 0x12edac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12edacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12edb0:
    // 0x12edb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12edb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12edb4:
    // 0x12edb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12edb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12edb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12edb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12edbc: 0x3e00008  jr          $ra
    ctx->pc = 0x12EDBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EDBCu;
            // 0x12edc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EDC4u;
    // 0x12edc4: 0x0  nop
    ctx->pc = 0x12edc4u;
    // NOP
    // 0x12edc8: 0x0  nop
    ctx->pc = 0x12edc8u;
    // NOP
    // 0x12edcc: 0x0  nop
    ctx->pc = 0x12edccu;
    // NOP
    ctx->pc = 0x12edd0u;
}
