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

// Function: sub_001B7E10
// Address: 0x1b7e10 - 0x1b7ed0
void sub_001B7E10_0x1b7e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7E10_0x1b7e10");
#endif

    switch (ctx->pc) {
        case 0x1b7e10u: goto label_1b7e10;
        case 0x1b7e14u: goto label_1b7e14;
        case 0x1b7e18u: goto label_1b7e18;
        case 0x1b7e1cu: goto label_1b7e1c;
        case 0x1b7e20u: goto label_1b7e20;
        case 0x1b7e24u: goto label_1b7e24;
        case 0x1b7e28u: goto label_1b7e28;
        case 0x1b7e2cu: goto label_1b7e2c;
        case 0x1b7e30u: goto label_1b7e30;
        case 0x1b7e34u: goto label_1b7e34;
        case 0x1b7e38u: goto label_1b7e38;
        case 0x1b7e3cu: goto label_1b7e3c;
        case 0x1b7e40u: goto label_1b7e40;
        case 0x1b7e44u: goto label_1b7e44;
        case 0x1b7e48u: goto label_1b7e48;
        case 0x1b7e4cu: goto label_1b7e4c;
        case 0x1b7e50u: goto label_1b7e50;
        case 0x1b7e54u: goto label_1b7e54;
        case 0x1b7e58u: goto label_1b7e58;
        case 0x1b7e5cu: goto label_1b7e5c;
        case 0x1b7e60u: goto label_1b7e60;
        case 0x1b7e64u: goto label_1b7e64;
        case 0x1b7e68u: goto label_1b7e68;
        case 0x1b7e6cu: goto label_1b7e6c;
        case 0x1b7e70u: goto label_1b7e70;
        case 0x1b7e74u: goto label_1b7e74;
        case 0x1b7e78u: goto label_1b7e78;
        case 0x1b7e7cu: goto label_1b7e7c;
        case 0x1b7e80u: goto label_1b7e80;
        case 0x1b7e84u: goto label_1b7e84;
        case 0x1b7e88u: goto label_1b7e88;
        case 0x1b7e8cu: goto label_1b7e8c;
        case 0x1b7e90u: goto label_1b7e90;
        case 0x1b7e94u: goto label_1b7e94;
        case 0x1b7e98u: goto label_1b7e98;
        case 0x1b7e9cu: goto label_1b7e9c;
        case 0x1b7ea0u: goto label_1b7ea0;
        case 0x1b7ea4u: goto label_1b7ea4;
        case 0x1b7ea8u: goto label_1b7ea8;
        case 0x1b7eacu: goto label_1b7eac;
        case 0x1b7eb0u: goto label_1b7eb0;
        case 0x1b7eb4u: goto label_1b7eb4;
        case 0x1b7eb8u: goto label_1b7eb8;
        case 0x1b7ebcu: goto label_1b7ebc;
        case 0x1b7ec0u: goto label_1b7ec0;
        case 0x1b7ec4u: goto label_1b7ec4;
        case 0x1b7ec8u: goto label_1b7ec8;
        case 0x1b7eccu: goto label_1b7ecc;
        default: break;
    }

    ctx->pc = 0x1b7e10u;

label_1b7e10:
    // 0x1b7e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b7e14:
    // 0x1b7e14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b7e18:
    // 0x1b7e18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b7e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b7e1c:
    // 0x1b7e1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b7e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b7e20:
    // 0x1b7e20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b7e20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b7e24:
    // 0x1b7e24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b7e28:
    // 0x1b7e28: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b7e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1b7e2c:
    // 0x1b7e2c: 0xc06e042  jal         func_1B8108
label_1b7e30:
    if (ctx->pc == 0x1B7E30u) {
        ctx->pc = 0x1B7E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E2Cu;
        // 0x1b7e30: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7E34u;
        goto label_1b7e34;
    }
    ctx->pc = 0x1B7E2Cu;
    SET_GPR_U32(ctx, 31, 0x1B7E34u);
    ctx->pc = 0x1B7E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E2Cu;
    // 0x1b7e30: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8108u, 0x1B7E2Cu, 0x1B7E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E34u;
label_1b7e34:
    // 0x1b7e34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b7e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b7e38:
    // 0x1b7e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7e3c:
    // 0x1b7e3c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1b7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1b7e40:
    // 0x1b7e40: 0x40f809  jalr        $v0
label_1b7e44:
    if (ctx->pc == 0x1B7E44u) {
        ctx->pc = 0x1B7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E40u;
        // 0x1b7e44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7E48u;
        goto label_1b7e48;
    }
    ctx->pc = 0x1B7E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7E48u);
        ctx->pc = 0x1B7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E40u;
        // 0x1b7e44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7E40u, 0x1B7E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7E48u;
label_1b7e48:
    // 0x1b7e48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b7e4c:
    // 0x1b7e4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b7e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7e50:
    // 0x1b7e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7e54:
    // 0x1b7e54: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1b7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1b7e58:
    // 0x1b7e58: 0x40f809  jalr        $v0
label_1b7e5c:
    if (ctx->pc == 0x1B7E5Cu) {
        ctx->pc = 0x1B7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E58u;
        // 0x1b7e5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7E60u;
        goto label_1b7e60;
    }
    ctx->pc = 0x1B7E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7E60u);
        ctx->pc = 0x1B7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E58u;
        // 0x1b7e5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7E58u, 0x1B7E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7E60u;
label_1b7e60:
    // 0x1b7e60: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1b7e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1b7e64:
    // 0x1b7e64: 0xc06e048  jal         func_1B8120
label_1b7e68:
    if (ctx->pc == 0x1B7E68u) {
        ctx->pc = 0x1B7E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E64u;
        // 0x1b7e68: 0xae510040  sw          $s1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7E6Cu;
        goto label_1b7e6c;
    }
    ctx->pc = 0x1B7E64u;
    SET_GPR_U32(ctx, 31, 0x1B7E6Cu);
    ctx->pc = 0x1B7E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E64u;
    // 0x1b7e68: 0xae510040  sw          $s1, 0x40($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8120u, 0x1B7E64u, 0x1B7E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E6Cu;
label_1b7e6c:
    // 0x1b7e6c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1b7e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1b7e70:
    // 0x1b7e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7e74:
    // 0x1b7e74: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x1b7e74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_1b7e78:
    // 0x1b7e78: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1b7e78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_1b7e7c:
    // 0x1b7e7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b7e80:
    // 0x1b7e80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b7e80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7e84:
    // 0x1b7e84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b7e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b7e88:
    // 0x1b7e88: 0x3e00008  jr          $ra
label_1b7e8c:
    if (ctx->pc == 0x1B7E8Cu) {
        ctx->pc = 0x1B7E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E88u;
        // 0x1b7e8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7E90u;
        goto label_1b7e90;
    }
    ctx->pc = 0x1B7E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E88u;
        // 0x1b7e8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7E90u;
label_1b7e90:
    // 0x1b7e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b7e94:
    // 0x1b7e94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b7e98:
    // 0x1b7e98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b7e9c:
    // 0x1b7e9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b7ea0:
    // 0x1b7ea0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b7ea4:
    // 0x1b7ea4: 0xc06e054  jal         func_1B8150
label_1b7ea8:
    if (ctx->pc == 0x1B7EA8u) {
        ctx->pc = 0x1B7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7EA4u;
        // 0x1b7ea8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7EACu;
        goto label_1b7eac;
    }
    ctx->pc = 0x1B7EA4u;
    SET_GPR_U32(ctx, 31, 0x1B7EACu);
    ctx->pc = 0x1B7EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7EA4u;
    // 0x1b7ea8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B7EA4u, 0x1B7EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7EACu;
label_1b7eac:
    // 0x1b7eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7eb0:
    // 0x1b7eb0: 0xc06dfb4  jal         func_1B7ED0
label_1b7eb4:
    if (ctx->pc == 0x1B7EB4u) {
        ctx->pc = 0x1B7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7EB0u;
        // 0x1b7eb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7EB8u;
        goto label_1b7eb8;
    }
    ctx->pc = 0x1B7EB0u;
    SET_GPR_U32(ctx, 31, 0x1B7EB8u);
    ctx->pc = 0x1B7EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7EB0u;
    // 0x1b7eb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7ED0u, 0x1B7EB0u, 0x1B7EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7EB8u;
label_1b7eb8:
    // 0x1b7eb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7ebc:
    // 0x1b7ebc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b7ec0:
    // 0x1b7ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7ec4:
    // 0x1b7ec4: 0x806e05a  j           func_1B8168
label_1b7ec8:
    if (ctx->pc == 0x1B7EC8u) {
        ctx->pc = 0x1B7EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7EC4u;
        // 0x1b7ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7ECCu;
        goto label_1b7ecc;
    }
    ctx->pc = 0x1B7EC4u;
    ctx->pc = 0x1B7EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7EC4u;
    // 0x1b7ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    sub_001B8168_0x1b8168(rdram, ctx, runtime); return;
    ctx->pc = 0x1B7ECCu;
label_1b7ecc:
    // 0x1b7ecc: 0x0  nop
    ctx->pc = 0x1b7eccu;
    // NOP
}
