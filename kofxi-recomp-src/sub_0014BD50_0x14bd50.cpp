#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014BD50
// Address: 0x14bd50 - 0x14be50
void sub_0014BD50_0x14bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BD50_0x14bd50");
#endif

    switch (ctx->pc) {
        case 0x14bdb0u: goto label_14bdb0;
        case 0x14bdd4u: goto label_14bdd4;
        case 0x14be08u: goto label_14be08;
        case 0x14be2cu: goto label_14be2c;
        default: break;
    }

    ctx->pc = 0x14bd50u;

    // 0x14bd50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14bd54: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14bd58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14bd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14bd5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14bd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14bd60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14bd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14bd64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14bd64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd68: 0x9042e078  lbu         $v0, -0x1F88($v0)
    ctx->pc = 0x14bd68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294959224)));
    // 0x14bd6c: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x14bd6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x14bd70: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BD70u;
    {
        const bool branch_taken_0x14bd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x14bd70) {
            ctx->pc = 0x14BD80u;
            goto label_14bd80;
        }
    }
    ctx->pc = 0x14BD78u;
    // 0x14bd78: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x14BD78u;
    {
        const bool branch_taken_0x14bd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD78u;
        // 0x14bd7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd78) {
            ctx->pc = 0x14BE30u;
            goto label_14be30;
        }
    }
    ctx->pc = 0x14BD80u;
label_14bd80:
    // 0x14bd80: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14bd84: 0x8c425d08  lw          $v0, 0x5D08($v0)
    ctx->pc = 0x14bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23816)));
    // 0x14bd88: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14BD88u;
    {
        const bool branch_taken_0x14bd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bd88) {
            ctx->pc = 0x14BDE8u;
            goto label_14bde8;
        }
    }
    ctx->pc = 0x14BD90u;
    // 0x14bd90: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14bd94: 0x3c050088  lui         $a1, 0x88
    ctx->pc = 0x14bd94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)136 << 16));
    // 0x14bd98: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x14bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14bd9c: 0x2442e1f0  addiu       $v0, $v0, -0x1E10
    ctx->pc = 0x14bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959600));
    // 0x14bda0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14bda4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x14bda4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14bda8: 0xc052b2c  jal         func_14ACB0
    ctx->pc = 0x14BDA8u;
    SET_GPR_U32(ctx, 31, 0x14BDB0u);
    ctx->pc = 0x14BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BDA8u;
    // 0x14bdac: 0x24a56cc0  addiu       $a1, $a1, 0x6CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACB0u, 0x14BDA8u, 0x14BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BDB0u;
label_14bdb0:
    // 0x14bdb0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x14bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x14bdb4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14bdb8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14bdbc: 0x24422220  addiu       $v0, $v0, 0x2220
    ctx->pc = 0x14bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8736));
    // 0x14bdc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14bdc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14bdc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bdc8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x14bdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14bdcc: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14BDCCu;
    SET_GPR_U32(ctx, 31, 0x14BDD4u);
    ctx->pc = 0x14BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BDCCu;
    // 0x14bdd0: 0x2484ced0  addiu       $a0, $a0, -0x3130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14BDCCu, 0x14BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BDD4u;
label_14bdd4:
    // 0x14bdd4: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x14bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x14bdd8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14bddc: 0xa043e078  sb          $v1, -0x1F88($v0)
    ctx->pc = 0x14bddcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294959224), (uint8_t)GPR_U32(ctx, 3));
    // 0x14bde0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14BDE0u;
    {
        const bool branch_taken_0x14bde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDE0u;
        // 0x14bde4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bde0) {
            ctx->pc = 0x14BE30u;
            goto label_14be30;
        }
    }
    ctx->pc = 0x14BDE8u;
label_14bde8:
    // 0x14bde8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14bdec: 0x3c050088  lui         $a1, 0x88
    ctx->pc = 0x14bdecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)136 << 16));
    // 0x14bdf0: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x14bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14bdf4: 0x2442e1f0  addiu       $v0, $v0, -0x1E10
    ctx->pc = 0x14bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959600));
    // 0x14bdf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14bdfc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x14bdfcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14be00: 0xc052b48  jal         func_14AD20
    ctx->pc = 0x14BE00u;
    SET_GPR_U32(ctx, 31, 0x14BE08u);
    ctx->pc = 0x14BE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE00u;
    // 0x14be04: 0x24a56cc0  addiu       $a1, $a1, 0x6CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AD20u, 0x14BE00u, 0x14BE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE08u;
label_14be08:
    // 0x14be08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BE08u;
    {
        const bool branch_taken_0x14be08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14be08) {
            ctx->pc = 0x14BE18u;
            goto label_14be18;
        }
    }
    ctx->pc = 0x14BE10u;
    // 0x14be10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14BE10u;
    {
        const bool branch_taken_0x14be10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE10u;
        // 0x14be14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be10) {
            ctx->pc = 0x14BE30u;
            goto label_14be30;
        }
    }
    ctx->pc = 0x14BE18u;
label_14be18:
    // 0x14be18: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14be18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14be1c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14be1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14be20: 0x2484ce38  addiu       $a0, $a0, -0x31C8
    ctx->pc = 0x14be20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954552));
    // 0x14be24: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14BE24u;
    SET_GPR_U32(ctx, 31, 0x14BE2Cu);
    ctx->pc = 0x14BE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE24u;
    // 0x14be28: 0xa051e078  sb          $s1, -0x1F88($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294959224), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14BE24u, 0x14BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE2Cu;
label_14be2c:
    // 0x14be2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14be30:
    // 0x14be30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14be30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14be34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14be34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14be38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14be38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14be3c: 0x3e00008  jr          $ra
    ctx->pc = 0x14BE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE3Cu;
        // 0x14be40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BE44u;
    // 0x14be44: 0x0  nop
    ctx->pc = 0x14be44u;
    // NOP
    // 0x14be48: 0x0  nop
    ctx->pc = 0x14be48u;
    // NOP
    // 0x14be4c: 0x0  nop
    ctx->pc = 0x14be4cu;
    // NOP
    if (ctx->pc == 0x14be4cu) { ctx->pc = 0x14be50u; }
}
