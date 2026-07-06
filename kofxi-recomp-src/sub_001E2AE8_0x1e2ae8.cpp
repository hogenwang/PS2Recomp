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

// Function: sub_001E2AE8
// Address: 0x1e2ae8 - 0x1e2e90
void sub_001E2AE8_0x1e2ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2AE8_0x1e2ae8");
#endif

    switch (ctx->pc) {
        case 0x1e2b00u: goto label_1e2b00;
        case 0x1e2b1cu: goto label_1e2b1c;
        case 0x1e2b28u: goto label_1e2b28;
        case 0x1e2b44u: goto label_1e2b44;
        case 0x1e2bf4u: goto label_1e2bf4;
        case 0x1e2d00u: goto label_1e2d00;
        case 0x1e2d18u: goto label_1e2d18;
        case 0x1e2d38u: goto label_1e2d38;
        case 0x1e2da4u: goto label_1e2da4;
        case 0x1e2dbcu: goto label_1e2dbc;
        case 0x1e2de0u: goto label_1e2de0;
        case 0x1e2df4u: goto label_1e2df4;
        case 0x1e2e1cu: goto label_1e2e1c;
        case 0x1e2e38u: goto label_1e2e38;
        case 0x1e2e48u: goto label_1e2e48;
        case 0x1e2e74u: goto label_1e2e74;
        default: break;
    }

    ctx->pc = 0x1e2ae8u;

    // 0x1e2ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e2aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e2af0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e2af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e2af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2af8: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E2AF8u;
    SET_GPR_U32(ctx, 31, 0x1E2B00u);
    ctx->pc = 0x1E2AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2AF8u;
    // 0x1e2afc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E2AF8u, 0x1E2B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2B00u;
label_1e2b00:
    // 0x1e2b00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e2b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2b08: 0x2404fff4  addiu       $a0, $zero, -0xC
    ctx->pc = 0x1e2b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x1e2b0c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2B0Cu;
    {
        const bool branch_taken_0x1e2b0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B0Cu;
        // 0x1e2b10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b0c) {
            ctx->pc = 0x1E2B30u;
            goto label_1e2b30;
        }
    }
    ctx->pc = 0x1E2B14u;
    // 0x1e2b14: 0xc078328  jal         func_1E0CA0
    ctx->pc = 0x1E2B14u;
    SET_GPR_U32(ctx, 31, 0x1E2B1Cu);
    ctx->pc = 0x1E0CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0CA0u, 0x1E2B14u, 0x1E2B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2B1Cu;
label_1e2b1c:
    // 0x1e2b1c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e2b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e2b20: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E2B20u;
    SET_GPR_U32(ctx, 31, 0x1E2B28u);
    ctx->pc = 0x1E2B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2B20u;
    // 0x1e2b24: 0x2484d720  addiu       $a0, $a0, -0x28E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E2B20u, 0x1E2B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2B28u;
label_1e2b28:
    // 0x1e2b28: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E2B28u;
    {
        const bool branch_taken_0x1e2b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B28u;
        // 0x1e2b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b28) {
            ctx->pc = 0x1E2B6Cu;
            goto label_1e2b6c;
        }
    }
    ctx->pc = 0x1E2B30u;
label_1e2b30:
    // 0x1e2b30: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e2b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e2b34: 0x1465000d  bne         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E2B34u;
    {
        const bool branch_taken_0x1e2b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1E2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B34u;
        // 0x1e2b38: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b34) {
            ctx->pc = 0x1E2B6Cu;
            goto label_1e2b6c;
        }
    }
    ctx->pc = 0x1E2B3Cu;
    // 0x1e2b3c: 0xc07eb30  jal         func_1FACC0
    ctx->pc = 0x1E2B3Cu;
    SET_GPR_U32(ctx, 31, 0x1E2B44u);
    ctx->pc = 0x1E2B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2B3Cu;
    // 0x1e2b40: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FACC0u, 0x1E2B3Cu, 0x1E2B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2B44u;
label_1e2b44:
    // 0x1e2b44: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1e2b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e2b48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e2b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2b4c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e2b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e2b50: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1e2b50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1e2b54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e2b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2b58: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2B58u;
    {
        const bool branch_taken_0x1e2b58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B58u;
        // 0x1e2b5c: 0x223100a  movz        $v0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b58) {
            ctx->pc = 0x1E2B68u;
            goto label_1e2b68;
        }
    }
    ctx->pc = 0x1E2B60u;
    // 0x1e2b60: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2B60u;
    {
        const bool branch_taken_0x1e2b60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1E2B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B60u;
        // 0x1e2b64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b60) {
            ctx->pc = 0x1E2B70u;
            goto label_1e2b70;
        }
    }
    ctx->pc = 0x1E2B68u;
label_1e2b68:
    // 0x1e2b68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e2b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e2b6c:
    // 0x1e2b6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2b70:
    // 0x1e2b70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2b70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2b74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2b78: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B78u;
        // 0x1e2b7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2B80u;
    // 0x1e2b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2b84: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e2b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2b8c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2B8Cu;
    {
        const bool branch_taken_0x1e2b8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B8Cu;
        // 0x1e2b90: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b8c) {
            ctx->pc = 0x1E2BA8u;
            goto label_1e2ba8;
        }
    }
    ctx->pc = 0x1E2B94u;
    // 0x1e2b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2b98: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e2b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e2b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2ba0: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E2BA0u;
    ctx->pc = 0x1E2BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2BA0u;
    // 0x1e2ba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E2BA8u;
label_1e2ba8:
    // 0x1e2ba8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e2ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e2bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2bb0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2BB0u;
    {
        const bool branch_taken_0x1e2bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BB0u;
        // 0x1e2bb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2bb0) {
            ctx->pc = 0x1E2BC8u;
            goto label_1e2bc8;
        }
    }
    ctx->pc = 0x1E2BB8u;
    // 0x1e2bb8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e2bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e2bbc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e2bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2bc0: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E2BC0u;
    ctx->pc = 0x1E2BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2BC0u;
    // 0x1e2bc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E2BC8u;
label_1e2bc8:
    // 0x1e2bc8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e2bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e2bcc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e2bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2bd0: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E2BD0u;
    ctx->pc = 0x1E2BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2BD0u;
    // 0x1e2bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E2BD8u;
    // 0x1e2bd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2bdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e2bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e2be0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e2be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2be4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e2be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e2be8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2bec: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E2BECu;
    SET_GPR_U32(ctx, 31, 0x1E2BF4u);
    ctx->pc = 0x1E2BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2BECu;
    // 0x1e2bf0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E2BECu, 0x1E2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2BF4u;
label_1e2bf4:
    // 0x1e2bf4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e2bf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2bf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2bfc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2BFCu;
    {
        const bool branch_taken_0x1e2bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BFCu;
        // 0x1e2c00: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2bfc) {
            ctx->pc = 0x1E2C20u;
            goto label_1e2c20;
        }
    }
    ctx->pc = 0x1E2C04u;
    // 0x1e2c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2c08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2c0c: 0x2484d748  addiu       $a0, $a0, -0x28B8
    ctx->pc = 0x1e2c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956872));
    // 0x1e2c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2c14: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E2C14u;
    ctx->pc = 0x1E2C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2C14u;
    // 0x1e2c18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E2C1Cu;
    // 0x1e2c1c: 0x0  nop
    ctx->pc = 0x1e2c1cu;
    // NOP
label_1e2c20:
    // 0x1e2c20: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2C20u;
    {
        const bool branch_taken_0x1e2c20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C20u;
        // 0x1e2c24: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c20) {
            ctx->pc = 0x1E2C48u;
            goto label_1e2c48;
        }
    }
    ctx->pc = 0x1E2C28u;
    // 0x1e2c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2c2c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e2c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e2c30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2c34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2c38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2c3c: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E2C3Cu;
    ctx->pc = 0x1E2C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2C3Cu;
    // 0x1e2c40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E2C44u;
    // 0x1e2c44: 0x0  nop
    ctx->pc = 0x1e2c44u;
    // NOP
label_1e2c48:
    // 0x1e2c48: 0x16030009  bne         $s0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2C48u;
    {
        const bool branch_taken_0x1e2c48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C48u;
        // 0x1e2c4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c48) {
            ctx->pc = 0x1E2C70u;
            goto label_1e2c70;
        }
    }
    ctx->pc = 0x1E2C50u;
    // 0x1e2c50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2c54: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e2c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e2c58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2c5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e2c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2c60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2c64: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E2C64u;
    ctx->pc = 0x1E2C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2C64u;
    // 0x1e2c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E2C6Cu;
    // 0x1e2c6c: 0x0  nop
    ctx->pc = 0x1e2c6cu;
    // NOP
label_1e2c70:
    // 0x1e2c70: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E2C70u;
    {
        const bool branch_taken_0x1e2c70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C70u;
        // 0x1e2c74: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c70) {
            ctx->pc = 0x1E2CB8u;
            goto label_1e2cb8;
        }
    }
    ctx->pc = 0x1E2C78u;
    // 0x1e2c78: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e2c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e2c7c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2C7Cu;
    {
        const bool branch_taken_0x1e2c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C7Cu;
        // 0x1e2c80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c7c) {
            ctx->pc = 0x1E2CA0u;
            goto label_1e2ca0;
        }
    }
    ctx->pc = 0x1E2C84u;
    // 0x1e2c84: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e2c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e2c88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2c8c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e2c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2c90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2c94: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E2C94u;
    ctx->pc = 0x1E2C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2C94u;
    // 0x1e2c98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E2C9Cu;
    // 0x1e2c9c: 0x0  nop
    ctx->pc = 0x1e2c9cu;
    // NOP
label_1e2ca0:
    // 0x1e2ca0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e2ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e2ca4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2ca8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e2ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2cac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2cb0: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E2CB0u;
    ctx->pc = 0x1E2CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2CB0u;
    // 0x1e2cb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E2CB8u;
label_1e2cb8:
    // 0x1e2cb8: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2CB8u;
    {
        const bool branch_taken_0x1e2cb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CB8u;
        // 0x1e2cbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2cb8) {
            ctx->pc = 0x1E2CD8u;
            goto label_1e2cd8;
        }
    }
    ctx->pc = 0x1E2CC0u;
    // 0x1e2cc0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e2cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e2cc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2cc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2cc8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1e2cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e2ccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2cd0: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E2CD0u;
    ctx->pc = 0x1E2CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2CD0u;
    // 0x1e2cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E2CD8u;
label_1e2cd8:
    // 0x1e2cd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2cd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2cdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CE0u;
        // 0x1e2ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2CE8u;
    // 0x1e2ce8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2cec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e2cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e2cf0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e2cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e2cf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e2cf8: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E2CF8u;
    SET_GPR_U32(ctx, 31, 0x1E2D00u);
    ctx->pc = 0x1E2CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2CF8u;
    // 0x1e2cfc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E2CF8u, 0x1E2D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2D00u;
label_1e2d00:
    // 0x1e2d00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e2d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2d08: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2D08u;
    {
        const bool branch_taken_0x1e2d08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D08u;
        // 0x1e2d0c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d08) {
            ctx->pc = 0x1E2D20u;
            goto label_1e2d20;
        }
    }
    ctx->pc = 0x1E2D10u;
    // 0x1e2d10: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E2D10u;
    SET_GPR_U32(ctx, 31, 0x1E2D18u);
    ctx->pc = 0x1E2D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2D10u;
    // 0x1e2d14: 0x2484d778  addiu       $a0, $a0, -0x2888 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E2D10u, 0x1E2D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2D18u;
label_1e2d18:
    // 0x1e2d18: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E2D18u;
    {
        const bool branch_taken_0x1e2d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D18u;
        // 0x1e2d1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d18) {
            ctx->pc = 0x1E2D7Cu;
            goto label_1e2d7c;
        }
    }
    ctx->pc = 0x1E2D20u;
label_1e2d20:
    // 0x1e2d20: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1e2d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e2d24: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E2D24u;
    {
        const bool branch_taken_0x1e2d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D24u;
        // 0x1e2d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d24) {
            ctx->pc = 0x1E2D7Cu;
            goto label_1e2d7c;
        }
    }
    ctx->pc = 0x1E2D2Cu;
    // 0x1e2d2c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e2d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e2d30: 0xc07ebda  jal         func_1FAF68
    ctx->pc = 0x1E2D30u;
    SET_GPR_U32(ctx, 31, 0x1E2D38u);
    ctx->pc = 0x1E2D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2D30u;
    // 0x1e2d34: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF68u, 0x1E2D30u, 0x1E2D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2D38u;
label_1e2d38:
    // 0x1e2d38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e2d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2d3c: 0x1071000e  beq         $v1, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E2D3Cu;
    {
        const bool branch_taken_0x1e2d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1E2D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D3Cu;
        // 0x1e2d40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d3c) {
            ctx->pc = 0x1E2D78u;
            goto label_1e2d78;
        }
    }
    ctx->pc = 0x1E2D44u;
    // 0x1e2d44: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1e2d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e2d48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2D48u;
    {
        const bool branch_taken_0x1e2d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D48u;
        // 0x1e2d4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d48) {
            ctx->pc = 0x1E2D60u;
            goto label_1e2d60;
        }
    }
    ctx->pc = 0x1E2D50u;
    // 0x1e2d50: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2D50u;
    {
        const bool branch_taken_0x1e2d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D50u;
        // 0x1e2d54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d50) {
            ctx->pc = 0x1E2D78u;
            goto label_1e2d78;
        }
    }
    ctx->pc = 0x1E2D58u;
    // 0x1e2d58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2D58u;
    {
        const bool branch_taken_0x1e2d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D58u;
        // 0x1e2d5c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d58) {
            ctx->pc = 0x1E2D78u;
            goto label_1e2d78;
        }
    }
    ctx->pc = 0x1E2D60u;
label_1e2d60:
    // 0x1e2d60: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2D60u;
    {
        const bool branch_taken_0x1e2d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D60u;
        // 0x1e2d64: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d60) {
            ctx->pc = 0x1E2D78u;
            goto label_1e2d78;
        }
    }
    ctx->pc = 0x1E2D68u;
    // 0x1e2d68: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1e2d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e2d6c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2D6Cu;
    {
        const bool branch_taken_0x1e2d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D6Cu;
        // 0x1e2d70: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d6c) {
            ctx->pc = 0x1E2D78u;
            goto label_1e2d78;
        }
    }
    ctx->pc = 0x1E2D74u;
    // 0x1e2d74: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e2d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e2d78:
    // 0x1e2d78: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e2d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2d7c:
    // 0x1e2d7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e2d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2d80: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e2d80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e2d84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2d88: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D88u;
        // 0x1e2d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2D90u;
    // 0x1e2d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2d94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e2d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e2d98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e2d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e2d9c: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E2D9Cu;
    SET_GPR_U32(ctx, 31, 0x1E2DA4u);
    ctx->pc = 0x1E2DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2D9Cu;
    // 0x1e2da0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E2D9Cu, 0x1E2DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2DA4u;
label_1e2da4:
    // 0x1e2da4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e2da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e2da8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2dac: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2DACu;
    {
        const bool branch_taken_0x1e2dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E2DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DACu;
        // 0x1e2db0: 0x2484d7a8  addiu       $a0, $a0, -0x2858 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2dac) {
            ctx->pc = 0x1E2DC8u;
            goto label_1e2dc8;
        }
    }
    ctx->pc = 0x1E2DB4u;
    // 0x1e2db4: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E2DB4u;
    SET_GPR_U32(ctx, 31, 0x1E2DBCu);
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E2DB4u, 0x1E2DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2DBCu;
label_1e2dbc:
    // 0x1e2dbc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E2DBCu;
    {
        const bool branch_taken_0x1e2dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DBCu;
        // 0x1e2dc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2dbc) {
            ctx->pc = 0x1E2DF8u;
            goto label_1e2df8;
        }
    }
    ctx->pc = 0x1E2DC4u;
    // 0x1e2dc4: 0x0  nop
    ctx->pc = 0x1e2dc4u;
    // NOP
label_1e2dc8:
    // 0x1e2dc8: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1e2dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e2dcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e2dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2dd0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2DD0u;
    {
        const bool branch_taken_0x1e2dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DD0u;
        // 0x1e2dd4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2dd0) {
            ctx->pc = 0x1E2DF8u;
            goto label_1e2df8;
        }
    }
    ctx->pc = 0x1E2DD8u;
    // 0x1e2dd8: 0xc07bff6  jal         func_1EFFD8
    ctx->pc = 0x1E2DD8u;
    SET_GPR_U32(ctx, 31, 0x1E2DE0u);
    ctx->pc = 0x1E2DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2DD8u;
    // 0x1e2ddc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFFD8u, 0x1E2DD8u, 0x1E2DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2DE0u;
label_1e2de0:
    // 0x1e2de0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e2de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e2de4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2DE4u;
    {
        const bool branch_taken_0x1e2de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DE4u;
        // 0x1e2de8: 0x2484d7d8  addiu       $a0, $a0, -0x2828 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2de4) {
            ctx->pc = 0x1E2DF4u;
            goto label_1e2df4;
        }
    }
    ctx->pc = 0x1E2DECu;
    // 0x1e2dec: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E2DECu;
    SET_GPR_U32(ctx, 31, 0x1E2DF4u);
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E2DECu, 0x1E2DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2DF4u;
label_1e2df4:
    // 0x1e2df4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e2df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2df8:
    // 0x1e2df8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e2df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2dfc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e2dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e2e00: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E00u;
        // 0x1e2e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2E08u;
    // 0x1e2e08: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e2e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e2e0c: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x1e2e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x1e2e10: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x1e2e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x1e2e14: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E2E14u;
    SET_GPR_U32(ctx, 31, 0x1E2E1Cu);
    ctx->pc = 0x1E2E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E14u;
    // 0x1e2e18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E2E14u, 0x1E2E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E1Cu;
label_1e2e1c:
    // 0x1e2e1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2e20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e2e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2e24: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2E24u;
    {
        const bool branch_taken_0x1e2e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E24u;
        // 0x1e2e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e24) {
            ctx->pc = 0x1E2E40u;
            goto label_1e2e40;
        }
    }
    ctx->pc = 0x1E2E2Cu;
    // 0x1e2e2c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e2e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e2e30: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E2E30u;
    SET_GPR_U32(ctx, 31, 0x1E2E38u);
    ctx->pc = 0x1E2E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E30u;
    // 0x1e2e34: 0x2484d7f8  addiu       $a0, $a0, -0x2808 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E2E30u, 0x1E2E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E38u;
label_1e2e38:
    // 0x1e2e38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2E38u;
    {
        const bool branch_taken_0x1e2e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E38u;
        // 0x1e2e3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e38) {
            ctx->pc = 0x1E2E4Cu;
            goto label_1e2e4c;
        }
    }
    ctx->pc = 0x1E2E40u;
label_1e2e40:
    // 0x1e2e40: 0xc0789fc  jal         func_1E27F0
    ctx->pc = 0x1E2E40u;
    SET_GPR_U32(ctx, 31, 0x1E2E48u);
    ctx->pc = 0x1E27F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E27F0u, 0x1E2E40u, 0x1E2E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E48u;
label_1e2e48:
    // 0x1e2e48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2e4c:
    // 0x1e2e4c: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x1e2e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e2e50: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x1e2e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e2e54: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E54u;
        // 0x1e2e58: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2E5Cu;
    // 0x1e2e5c: 0x0  nop
    ctx->pc = 0x1e2e5cu;
    // NOP
    // 0x1e2e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2e64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e2e68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e2e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2e6c: 0xc07e51e  jal         func_1F9478
    ctx->pc = 0x1E2E6Cu;
    SET_GPR_U32(ctx, 31, 0x1E2E74u);
    ctx->pc = 0x1E2E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E6Cu;
    // 0x1e2e70: 0x8c84003c  lw          $a0, 0x3C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9478u, 0x1E2E6Cu, 0x1E2E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E74u;
label_1e2e74:
    // 0x1e2e74: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1e2e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e2e78: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1e2e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1e2e7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2e80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e2e84: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E84u;
        // 0x1e2e88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2E8Cu;
    // 0x1e2e8c: 0x0  nop
    ctx->pc = 0x1e2e8cu;
    // NOP
}
