#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012EC30
// Address: 0x12ec30 - 0x12ed00
void sub_0012EC30_0x12ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EC30_0x12ec30");
#endif

    switch (ctx->pc) {
        case 0x12ecbcu: goto label_12ecbc;
        case 0x12ecdcu: goto label_12ecdc;
        default: break;
    }

    ctx->pc = 0x12ec30u;

    // 0x12ec30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ec30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ec34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12ec34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12ec38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12ec38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12ec3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12ec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12ec40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12ec40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec44: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x12ec44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x12ec48: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x12ec48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x12ec4c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x12EC4Cu;
    {
        const bool branch_taken_0x12ec4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC4Cu;
            // 0x12ec50: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec4c) {
            ctx->pc = 0x12ECA0u;
            goto label_12eca0;
        }
    }
    ctx->pc = 0x12EC54u;
    // 0x12ec54: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x12ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x12ec58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12ec5c: 0x2484c3c0  addiu       $a0, $a0, -0x3C40
    ctx->pc = 0x12ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951872));
    // 0x12ec60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12ec64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ec68: 0x600008  jr          $v1
    ctx->pc = 0x12EC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12EC70u: goto label_12ec70;
            case 0x12EC8Cu: goto label_12ec8c;
            case 0x12ECA0u: goto label_12eca0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12EC70u;
label_12ec70:
    // 0x12ec70: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x12ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x12ec74: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x12ec74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12ec78: 0x9063dca0  lbu         $v1, -0x2360($v1)
    ctx->pc = 0x12ec78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958240)));
    // 0x12ec7c: 0x54640009  bnel        $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12EC7Cu;
    {
        const bool branch_taken_0x12ec7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x12ec7c) {
            ctx->pc = 0x12EC80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC7Cu;
            // 0x12ec80: 0x92230004  lbu         $v1, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12ECA4u;
            goto label_12eca4;
        }
    }
    ctx->pc = 0x12EC84u;
    // 0x12ec84: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12EC84u;
    {
        const bool branch_taken_0x12ec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC84u;
            // 0x12ec88: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec84) {
            ctx->pc = 0x12ECE4u;
            goto label_12ece4;
        }
    }
    ctx->pc = 0x12EC8Cu;
label_12ec8c:
    // 0x12ec8c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x12ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x12ec90: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x12ec90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12ec94: 0x9063dee8  lbu         $v1, -0x2118($v1)
    ctx->pc = 0x12ec94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958824)));
    // 0x12ec98: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12EC98u;
    {
        const bool branch_taken_0x12ec98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x12ec98) {
            ctx->pc = 0x12ECE0u;
            goto label_12ece0;
        }
    }
    ctx->pc = 0x12ECA0u;
label_12eca0:
    // 0x12eca0: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x12eca0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_12eca4:
    // 0x12eca4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x12eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x12eca8: 0x2442c2f0  addiu       $v0, $v0, -0x3D10
    ctx->pc = 0x12eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951664));
    // 0x12ecac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12ecb0: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x12ecb0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ecb4: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x12ECB4u;
    SET_GPR_U32(ctx, 31, 0x12ECBCu);
    ctx->pc = 0x12ECB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECB4u;
            // 0x12ecb8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (runtime->hasFunction(0x32C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x32C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECBCu; }
        if (ctx->pc != 0x12ECBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C8B0_0x32c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECBCu; }
        if (ctx->pc != 0x12ECBCu) { return; }
    }
    ctx->pc = 0x12ECBCu;
label_12ecbc:
    // 0x12ecbc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12ecc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12ecc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ecc4: 0xac621d10  sw          $v0, 0x1D10($v1)
    ctx->pc = 0x12ecc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7440), GPR_U32(ctx, 2));
    // 0x12ecc8: 0x92260004  lbu         $a2, 0x4($s1)
    ctx->pc = 0x12ecc8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12eccc: 0x92270005  lbu         $a3, 0x5($s1)
    ctx->pc = 0x12ecccu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x12ecd0: 0x92280006  lbu         $t0, 0x6($s1)
    ctx->pc = 0x12ecd0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x12ecd4: 0xc04ba70  jal         func_12E9C0
    ctx->pc = 0x12ECD4u;
    SET_GPR_U32(ctx, 31, 0x12ECDCu);
    ctx->pc = 0x12ECD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECD4u;
            // 0x12ecd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E9C0u;
    if (runtime->hasFunction(0x12E9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12E9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECDCu; }
        if (ctx->pc != 0x12ECDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E9C0_0x12e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECDCu; }
        if (ctx->pc != 0x12ECDCu) { return; }
    }
    ctx->pc = 0x12ECDCu;
label_12ecdc:
    // 0x12ecdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12ece0:
    // 0x12ece0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12ece0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12ece4:
    // 0x12ece4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12ece4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ece8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12ece8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ecec: 0x3e00008  jr          $ra
    ctx->pc = 0x12ECECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ECF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECECu;
            // 0x12ecf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ECF4u;
    // 0x12ecf4: 0x0  nop
    ctx->pc = 0x12ecf4u;
    // NOP
    // 0x12ecf8: 0x0  nop
    ctx->pc = 0x12ecf8u;
    // NOP
    // 0x12ecfc: 0x0  nop
    ctx->pc = 0x12ecfcu;
    // NOP
    ctx->pc = 0x12ed00u;
}
