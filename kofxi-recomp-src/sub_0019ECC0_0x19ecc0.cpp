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

// Function: sub_0019ECC0
// Address: 0x19ecc0 - 0x19eda0
void sub_0019ECC0_0x19ecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019ECC0_0x19ecc0");
#endif

    switch (ctx->pc) {
        case 0x19ed14u: goto label_19ed14;
        case 0x19ed38u: goto label_19ed38;
        default: break;
    }

    ctx->pc = 0x19ecc0u;

    // 0x19ecc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19ecc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19ecc4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ecc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19ecc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19eccc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19ecccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19ecd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19ecd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19ecd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ecd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ecdc: 0x9466da88  lhu         $a2, -0x2578($v1)
    ctx->pc = 0x19ecdcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957704)));
    // 0x19ece0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x19ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x19ece4: 0x90659780  lbu         $a1, -0x6880($v1)
    ctx->pc = 0x19ece4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x19ece8: 0x30c3fffd  andi        $v1, $a2, 0xFFFD
    ctx->pc = 0x19ece8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65533);
    // 0x19ecec: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19ECECu;
    {
        const bool branch_taken_0x19ecec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECECu;
        // 0x19ecf0: 0xa483da88  sh          $v1, -0x2578($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294957704), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ecec) {
            ctx->pc = 0x19ED00u;
            goto label_19ed00;
        }
    }
    ctx->pc = 0x19ECF4u;
    // 0x19ecf4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19ecf8: 0x14a30021  bne         $a1, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x19ECF8u;
    {
        const bool branch_taken_0x19ecf8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x19ecf8) {
            ctx->pc = 0x19ED80u;
            goto label_19ed80;
        }
    }
    ctx->pc = 0x19ED00u;
label_19ed00:
    // 0x19ed00: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x19ed00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x19ed04: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x19ed04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x19ed08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19ed08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ed0c: 0x2631db50  addiu       $s1, $s1, -0x24B0
    ctx->pc = 0x19ed0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957904));
    // 0x19ed10: 0x2610b820  addiu       $s0, $s0, -0x47E0
    ctx->pc = 0x19ed10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948896));
label_19ed14:
    // 0x19ed14: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ed18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19ed18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ed1c: 0x9065db10  lbu         $a1, -0x24F0($v1)
    ctx->pc = 0x19ed1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957840)));
    // 0x19ed20: 0x2441804  sllv        $v1, $a0, $s2
    ctx->pc = 0x19ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 18) & 0x1F));
    // 0x19ed24: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x19ed24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x19ed28: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x19ED28u;
    {
        const bool branch_taken_0x19ed28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed28) {
            ctx->pc = 0x19ED68u;
            goto label_19ed68;
        }
    }
    ctx->pc = 0x19ED30u;
    // 0x19ed30: 0xc05f104  jal         func_17C410
    ctx->pc = 0x19ED30u;
    SET_GPR_U32(ctx, 31, 0x19ED38u);
    ctx->pc = 0x19ED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED30u;
    // 0x19ed34: 0x96240014  lhu         $a0, 0x14($s1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C410u, 0x19ED30u, 0x19ED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED38u;
label_19ed38:
    // 0x19ed38: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x19ed38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x19ed3c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x19ED3Cu;
    {
        const bool branch_taken_0x19ed3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed3c) {
            ctx->pc = 0x19ED68u;
            goto label_19ed68;
        }
    }
    ctx->pc = 0x19ED44u;
    // 0x19ed44: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ed48: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x19ed48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19ed4c: 0x9466da88  lhu         $a2, -0x2578($v1)
    ctx->pc = 0x19ed4cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957704)));
    // 0x19ed50: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19ed54: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x19ed54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19ed58: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x19ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x19ed5c: 0xa06555d0  sb          $a1, 0x55D0($v1)
    ctx->pc = 0x19ed5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21968), (uint8_t)GPR_U32(ctx, 5));
    // 0x19ed60: 0x34c30002  ori         $v1, $a2, 0x2
    ctx->pc = 0x19ed60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x19ed64: 0xa483da88  sh          $v1, -0x2578($a0)
    ctx->pc = 0x19ed64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957704), (uint16_t)GPR_U32(ctx, 3));
label_19ed68:
    // 0x19ed68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19ed68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19ed6c: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x19ed6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19ed70: 0x26310248  addiu       $s1, $s1, 0x248
    ctx->pc = 0x19ed70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 584));
    // 0x19ed74: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x19ED74u;
    {
        const bool branch_taken_0x19ed74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED74u;
        // 0x19ed78: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed74) {
            ctx->pc = 0x19ED14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19ed14;
        }
    }
    ctx->pc = 0x19ED7Cu;
    // 0x19ed7c: 0x0  nop
    ctx->pc = 0x19ed7cu;
    // NOP
label_19ed80:
    // 0x19ed80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19ed80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ed84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19ed84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ed88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ed88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ed8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ed8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ed90: 0x3e00008  jr          $ra
    ctx->pc = 0x19ED90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED90u;
        // 0x19ed94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ED90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ED98u;
    // 0x19ed98: 0x0  nop
    ctx->pc = 0x19ed98u;
    // NOP
    // 0x19ed9c: 0x0  nop
    ctx->pc = 0x19ed9cu;
    // NOP
    if (ctx->pc == 0x19ed9cu) { ctx->pc = 0x19eda0u; }
}
