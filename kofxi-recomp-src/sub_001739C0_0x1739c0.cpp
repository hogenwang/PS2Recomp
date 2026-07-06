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

// Function: sub_001739C0
// Address: 0x1739c0 - 0x173ac0
void sub_001739C0_0x1739c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001739C0_0x1739c0");
#endif

    switch (ctx->pc) {
        case 0x1739ecu: goto label_1739ec;
        case 0x173a04u: goto label_173a04;
        case 0x173a28u: goto label_173a28;
        case 0x173a30u: goto label_173a30;
        case 0x173a38u: goto label_173a38;
        case 0x173a40u: goto label_173a40;
        case 0x173a5cu: goto label_173a5c;
        case 0x173a9cu: goto label_173a9c;
        default: break;
    }

    ctx->pc = 0x1739c0u;

    // 0x1739c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1739c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1739c4: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x1739c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x1739c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1739c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1739cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1739ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1739d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1739d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1739d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1739d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1739d8: 0x8c426dc0  lw          $v0, 0x6DC0($v0)
    ctx->pc = 0x1739d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28096)));
    // 0x1739dc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1739DCu;
    {
        const bool branch_taken_0x1739dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1739E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739DCu;
        // 0x1739e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1739dc) {
            ctx->pc = 0x173A78u;
            goto label_173a78;
        }
    }
    ctx->pc = 0x1739E4u;
    // 0x1739e4: 0x3c10009b  lui         $s0, 0x9B
    ctx->pc = 0x1739e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)155 << 16));
    // 0x1739e8: 0x26106bc0  addiu       $s0, $s0, 0x6BC0
    ctx->pc = 0x1739e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27584));
label_1739ec:
    // 0x1739ec: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1739ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1739f0: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x1739f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1739f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1739F4u;
    {
        const bool branch_taken_0x1739f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1739f4) {
            ctx->pc = 0x173A08u;
            goto label_173a08;
        }
    }
    ctx->pc = 0x1739FCu;
    // 0x1739fc: 0xc068158  jal         func_1A0560
    ctx->pc = 0x1739FCu;
    SET_GPR_U32(ctx, 31, 0x173A04u);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x1739FCu, 0x173A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A04u;
label_173a04:
    // 0x173a04: 0x0  nop
    ctx->pc = 0x173a04u;
    // NOP
label_173a08:
    // 0x173a08: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x173a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x173a0c: 0x9042d9c8  lbu         $v0, -0x2638($v0)
    ctx->pc = 0x173a0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957512)));
    // 0x173a10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x173a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x173a14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x173A14u;
    {
        const bool branch_taken_0x173a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173a14) {
            ctx->pc = 0x173A38u;
            goto label_173a38;
        }
    }
    ctx->pc = 0x173A1Cu;
    // 0x173a1c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x173a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x173a20: 0xc048930  jal         func_1224C0
    ctx->pc = 0x173A20u;
    SET_GPR_U32(ctx, 31, 0x173A28u);
    ctx->pc = 0x173A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A20u;
    // 0x173a24: 0xc44cd9c0  lwc1        $f12, -0x2640($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x173A20u, 0x173A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A28u;
label_173a28:
    // 0x173a28: 0xc067d38  jal         func_19F4E0
    ctx->pc = 0x173A28u;
    SET_GPR_U32(ctx, 31, 0x173A30u);
    ctx->pc = 0x173A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A28u;
    // 0x173a2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F4E0u, 0x173A28u, 0x173A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A30u;
label_173a30:
    // 0x173a30: 0xc067d40  jal         func_19F500
    ctx->pc = 0x173A30u;
    SET_GPR_U32(ctx, 31, 0x173A38u);
    ctx->pc = 0x19F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F500u, 0x173A30u, 0x173A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A38u;
label_173a38:
    // 0x173a38: 0xc05cf08  jal         func_173C20
    ctx->pc = 0x173A38u;
    SET_GPR_U32(ctx, 31, 0x173A40u);
    ctx->pc = 0x173A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A38u;
    // 0x173a3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173C20u, 0x173A38u, 0x173A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A40u;
label_173a40:
    // 0x173a40: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x173a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x173a44: 0x9042d9c8  lbu         $v0, -0x2638($v0)
    ctx->pc = 0x173a44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957512)));
    // 0x173a48: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x173a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x173a4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x173A4Cu;
    {
        const bool branch_taken_0x173a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173a4c) {
            ctx->pc = 0x173A60u;
            goto label_173a60;
        }
    }
    ctx->pc = 0x173A54u;
    // 0x173a54: 0xc067d3c  jal         func_19F4F0
    ctx->pc = 0x173A54u;
    SET_GPR_U32(ctx, 31, 0x173A5Cu);
    ctx->pc = 0x19F4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F4F0u, 0x173A54u, 0x173A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A5Cu;
label_173a5c:
    // 0x173a5c: 0x0  nop
    ctx->pc = 0x173a5cu;
    // NOP
label_173a60:
    // 0x173a60: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x173a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x173a64: 0x8c426dc0  lw          $v0, 0x6DC0($v0)
    ctx->pc = 0x173a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28096)));
    // 0x173a68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x173a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x173a6c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x173a6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x173a70: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x173A70u;
    {
        const bool branch_taken_0x173a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A70u;
        // 0x173a74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a70) {
            ctx->pc = 0x1739ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1739ec;
        }
    }
    ctx->pc = 0x173A78u;
label_173a78:
    // 0x173a78: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x173a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x173a7c: 0x8c459e00  lw          $a1, -0x6200($v0)
    ctx->pc = 0x173a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942208)));
    // 0x173a80: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x173a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x173a84: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x173a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x173a88: 0xac606dc8  sw          $zero, 0x6DC8($v1)
    ctx->pc = 0x173a88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28104), GPR_U32(ctx, 0));
    // 0x173a8c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x173a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x173a90: 0xac859df8  sw          $a1, -0x6208($a0)
    ctx->pc = 0x173a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294942200), GPR_U32(ctx, 5));
    // 0x173a94: 0xc04bffc  jal         func_12FFF0
    ctx->pc = 0x173A94u;
    SET_GPR_U32(ctx, 31, 0x173A9Cu);
    ctx->pc = 0x173A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A94u;
    // 0x173a98: 0xac406dc0  sw          $zero, 0x6DC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 28096), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FFF0u, 0x173A94u, 0x173A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A9Cu;
label_173a9c:
    // 0x173a9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x173a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173aa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x173aa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173aa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173aac: 0x3e00008  jr          $ra
    ctx->pc = 0x173AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AACu;
        // 0x173ab0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173AB4u;
    // 0x173ab4: 0x0  nop
    ctx->pc = 0x173ab4u;
    // NOP
    // 0x173ab8: 0x0  nop
    ctx->pc = 0x173ab8u;
    // NOP
    // 0x173abc: 0x0  nop
    ctx->pc = 0x173abcu;
    // NOP
    if (ctx->pc == 0x173abcu) { ctx->pc = 0x173ac0u; }
}
