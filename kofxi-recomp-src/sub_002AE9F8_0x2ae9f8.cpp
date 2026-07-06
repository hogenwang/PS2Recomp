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

// Function: sub_002AE9F8
// Address: 0x2ae9f8 - 0x2aeb70
void sub_002AE9F8_0x2ae9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE9F8_0x2ae9f8");
#endif

    switch (ctx->pc) {
        case 0x2aea0cu: goto label_2aea0c;
        case 0x2aea24u: goto label_2aea24;
        case 0x2aea48u: goto label_2aea48;
        case 0x2aeafcu: goto label_2aeafc;
        case 0x2aeb18u: goto label_2aeb18;
        case 0x2aeb28u: goto label_2aeb28;
        case 0x2aeb48u: goto label_2aeb48;
        default: break;
    }

    ctx->pc = 0x2ae9f8u;

    // 0x2ae9f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ae9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ae9fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ae9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aea00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aea00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aea04: 0xc0ab79a  jal         func_2ADE68
    ctx->pc = 0x2AEA04u;
    SET_GPR_U32(ctx, 31, 0x2AEA0Cu);
    ctx->pc = 0x2AEA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA04u;
    // 0x2aea08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADE68u, 0x2AEA04u, 0x2AEA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA0Cu;
label_2aea0c:
    // 0x2aea0c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2aea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2aea10: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x2aea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2aea14: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AEA14u;
    {
        const bool branch_taken_0x2aea14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aea14) {
            ctx->pc = 0x2AEA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEA14u;
            // 0x2aea18: 0x8c84017c  lw          $a0, 0x17C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEA34u;
            goto label_2aea34;
        }
    }
    ctx->pc = 0x2AEA1Cu;
    // 0x2aea1c: 0xc0a4ff2  jal         func_293FC8
    ctx->pc = 0x2AEA1Cu;
    SET_GPR_U32(ctx, 31, 0x2AEA24u);
    ctx->pc = 0x2AEA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA1Cu;
    // 0x2aea20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293FC8u, 0x2AEA1Cu, 0x2AEA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA24u;
label_2aea24:
    // 0x2aea24: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2aea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2aea28: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x2aea28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
    // 0x2aea2c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2aea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2aea30: 0x8c84017c  lw          $a0, 0x17C($a0)
    ctx->pc = 0x2aea30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
label_2aea34:
    // 0x2aea34: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AEA34u;
    {
        const bool branch_taken_0x2aea34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA34u;
        // 0x2aea38: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea34) {
            ctx->pc = 0x2AEA54u;
            goto label_2aea54;
        }
    }
    ctx->pc = 0x2AEA3Cu;
    // 0x2aea3c: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2aea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x2aea40: 0xc0af16c  jal         func_2BC5B0
    ctx->pc = 0x2AEA40u;
    SET_GPR_U32(ctx, 31, 0x2AEA48u);
    ctx->pc = 0x2AEA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA40u;
    // 0x2aea44: 0x24a5e950  addiu       $a1, $a1, -0x16B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5B0u, 0x2AEA40u, 0x2AEA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA48u;
label_2aea48:
    // 0x2aea48: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2aea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2aea4c: 0xac40017c  sw          $zero, 0x17C($v0)
    ctx->pc = 0x2aea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 380), GPR_U32(ctx, 0));
    // 0x2aea50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aea50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2aea54:
    // 0x2aea54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aea54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aea58: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA58u;
        // 0x2aea5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEA60u;
    // 0x2aea60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2aea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2aea64: 0x24a3fff9  addiu       $v1, $a1, -0x7
    ctx->pc = 0x2aea64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967289));
    // 0x2aea68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2aea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2aea6c: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x2aea6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2aea70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2aea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2aea74: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2aea74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aea7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2aea7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2aea80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2aea84: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2AEA84u;
    {
        const bool branch_taken_0x2aea84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA84u;
        // 0x2aea88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea84) {
            ctx->pc = 0x2AEB50u;
            goto label_2aeb50;
        }
    }
    ctx->pc = 0x2AEA8Cu;
    // 0x2aea8c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2aea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2aea90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2aea90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aea94: 0x2442d160  addiu       $v0, $v0, -0x2EA0
    ctx->pc = 0x2aea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955360));
    // 0x2aea98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2aea98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aea9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2aea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aeaa0: 0x800008  jr          $a0
    ctx->pc = 0x2AEAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AEAA8u: goto label_2aeaa8;
            case 0x2AEAB4u: goto label_2aeab4;
            case 0x2AEAC4u: goto label_2aeac4;
            case 0x2AEAD0u: goto label_2aead0;
            case 0x2AEAE8u: goto label_2aeae8;
            case 0x2AEB30u: goto label_2aeb30;
            case 0x2AEB50u: goto label_2aeb50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEAA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2AEAA8u;
label_2aeaa8:
    // 0x2aeaa8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2aeaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2aeaac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2AEAACu;
    {
        const bool branch_taken_0x2aeaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEAACu;
        // 0x2aeab0: 0x8c51011c  lw          $s1, 0x11C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeaac) {
            ctx->pc = 0x2AEB50u;
            goto label_2aeb50;
        }
    }
    ctx->pc = 0x2AEAB4u;
label_2aeab4:
    // 0x2aeab4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2aeab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2aeab8: 0x8c51011c  lw          $s1, 0x11C($v0)
    ctx->pc = 0x2aeab8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
    // 0x2aeabc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2AEABCu;
    {
        const bool branch_taken_0x2aeabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEABCu;
        // 0x2aeac0: 0xac40011c  sw          $zero, 0x11C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeabc) {
            ctx->pc = 0x2AEB50u;
            goto label_2aeb50;
        }
    }
    ctx->pc = 0x2AEAC4u;
label_2aeac4:
    // 0x2aeac4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2aeac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2aeac8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2AEAC8u;
    {
        const bool branch_taken_0x2aeac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEAC8u;
        // 0x2aeacc: 0x8c510118  lw          $s1, 0x118($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeac8) {
            ctx->pc = 0x2AEB50u;
            goto label_2aeb50;
        }
    }
    ctx->pc = 0x2AEAD0u;
label_2aead0:
    // 0x2aead0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2aead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2aead4: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2aead4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aead8: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x2aead8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2aeadc: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x2aeadcu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x2aeae0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2AEAE0u;
    {
        const bool branch_taken_0x2aeae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEAE0u;
        // 0x2aeae4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeae0) {
            ctx->pc = 0x2AEB54u;
            goto label_2aeb54;
        }
    }
    ctx->pc = 0x2AEAE8u;
label_2aeae8:
    // 0x2aeae8: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x2aeae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2aeaec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AEAECu;
    {
        const bool branch_taken_0x2aeaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aeaec) {
            ctx->pc = 0x2AEAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEAECu;
            // 0x2aeaf0: 0x8e040088  lw          $a0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEB10u;
            goto label_2aeb10;
        }
    }
    ctx->pc = 0x2AEAF4u;
    // 0x2aeaf4: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2AEAF4u;
    SET_GPR_U32(ctx, 31, 0x2AEAFCu);
    ctx->pc = 0x2AEAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEAF4u;
    // 0x2aeaf8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2AEAF4u, 0x2AEAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEAFCu;
label_2aeafc:
    // 0x2aeafc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AEAFCu;
    {
        const bool branch_taken_0x2aeafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEAFCu;
        // 0x2aeb00: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeafc) {
            ctx->pc = 0x2AEB0Cu;
            goto label_2aeb0c;
        }
    }
    ctx->pc = 0x2AEB04u;
    // 0x2aeb04: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2AEB04u;
    {
        const bool branch_taken_0x2aeb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB04u;
        // 0x2aeb08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb04) {
            ctx->pc = 0x2AEB54u;
            goto label_2aeb54;
        }
    }
    ctx->pc = 0x2AEB0Cu;
label_2aeb0c:
    // 0x2aeb0c: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x2aeb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2aeb10:
    // 0x2aeb10: 0xc0af10e  jal         func_2BC438
    ctx->pc = 0x2AEB10u;
    SET_GPR_U32(ctx, 31, 0x2AEB18u);
    ctx->pc = 0x2AEB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB10u;
    // 0x2aeb14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC438u, 0x2AEB10u, 0x2AEB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB18u;
label_2aeb18:
    // 0x2aeb18: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2AEB18u;
    {
        const bool branch_taken_0x2aeb18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB18u;
        // 0x2aeb1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb18) {
            ctx->pc = 0x2AEB50u;
            goto label_2aeb50;
        }
    }
    ctx->pc = 0x2AEB20u;
    // 0x2aeb20: 0xc0a3966  jal         func_28E598
    ctx->pc = 0x2AEB20u;
    SET_GPR_U32(ctx, 31, 0x2AEB28u);
    ctx->pc = 0x2AEB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB20u;
    // 0x2aeb24: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E598u, 0x2AEB20u, 0x2AEB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB28u;
label_2aeb28:
    // 0x2aeb28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2AEB28u;
    {
        const bool branch_taken_0x2aeb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB28u;
        // 0x2aeb2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb28) {
            ctx->pc = 0x2AEB54u;
            goto label_2aeb54;
        }
    }
    ctx->pc = 0x2AEB30u;
label_2aeb30:
    // 0x2aeb30: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x2aeb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2aeb34: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AEB34u;
    {
        const bool branch_taken_0x2aeb34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB34u;
        // 0x2aeb38: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb34) {
            ctx->pc = 0x2AEB50u;
            goto label_2aeb50;
        }
    }
    ctx->pc = 0x2AEB3Cu;
    // 0x2aeb3c: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2aeb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x2aeb40: 0xc0af16c  jal         func_2BC5B0
    ctx->pc = 0x2AEB40u;
    SET_GPR_U32(ctx, 31, 0x2AEB48u);
    ctx->pc = 0x2AEB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB40u;
    // 0x2aeb44: 0x24a5e430  addiu       $a1, $a1, -0x1BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5B0u, 0x2AEB40u, 0x2AEB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB48u;
label_2aeb48:
    // 0x2aeb48: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2aeb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x2aeb4c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2aeb4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aeb50:
    // 0x2aeb50: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2aeb50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aeb54:
    // 0x2aeb54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2aeb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aeb58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2aeb58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aeb5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2aeb5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aeb60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aeb60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aeb64: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB64u;
        // 0x2aeb68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEB6Cu;
    // 0x2aeb6c: 0x0  nop
    ctx->pc = 0x2aeb6cu;
    // NOP
    if (ctx->pc == 0x2aeb6cu) { ctx->pc = 0x2aeb70u; }
}
