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

// Function: sub_00229A90
// Address: 0x229a90 - 0x229c38
void sub_00229A90_0x229a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229A90_0x229a90");
#endif

    switch (ctx->pc) {
        case 0x229ac0u: goto label_229ac0;
        case 0x229b04u: goto label_229b04;
        case 0x229b3cu: goto label_229b3c;
        case 0x229b5cu: goto label_229b5c;
        case 0x229b80u: goto label_229b80;
        case 0x229b98u: goto label_229b98;
        case 0x229ba8u: goto label_229ba8;
        case 0x229bc0u: goto label_229bc0;
        case 0x229bf4u: goto label_229bf4;
        case 0x229bfcu: goto label_229bfc;
        case 0x229c14u: goto label_229c14;
        default: break;
    }

    ctx->pc = 0x229a90u;

    // 0x229a90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x229a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x229a94: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x229a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x229a98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x229a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x229a9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x229a9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229aa0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x229aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x229aa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x229aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229aa8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x229aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x229aac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x229aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x229ab0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x229ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x229ab4: 0x3c1201c1  lui         $s2, 0x1C1
    ctx->pc = 0x229ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
    // 0x229ab8: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x229AB8u;
    SET_GPR_U32(ctx, 31, 0x229AC0u);
    ctx->pc = 0x229ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AB8u;
    // 0x229abc: 0x8e44a730  lw          $a0, -0x58D0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x229AB8u, 0x229AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AC0u;
label_229ac0:
    // 0x229ac0: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x229ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x229ac4: 0x3c1401c1  lui         $s4, 0x1C1
    ctx->pc = 0x229ac4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)449 << 16));
    // 0x229ac8: 0x8ce2a78c  lw          $v0, -0x5874($a3)
    ctx->pc = 0x229ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944652)));
    // 0x229acc: 0x8e84a738  lw          $a0, -0x58C8($s4)
    ctx->pc = 0x229accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944568)));
    // 0x229ad0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x229ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x229ad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x229ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x229ad8: 0x24634518  addiu       $v1, $v1, 0x4518
    ctx->pc = 0x229ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17688));
    // 0x229adc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x229adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x229ae0: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x229ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x229ae4: 0xace2a78c  sw          $v0, -0x5874($a3)
    ctx->pc = 0x229ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294944652), GPR_U32(ctx, 2));
    // 0x229ae8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x229ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229aec: 0xaca3a784  sw          $v1, -0x587C($a1)
    ctx->pc = 0x229aecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294944644), GPR_U32(ctx, 3));
    // 0x229af0: 0x10860009  beq         $a0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x229AF0u;
    {
        const bool branch_taken_0x229af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x229AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AF0u;
        // 0x229af4: 0xae84a738  sw          $a0, -0x58C8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294944568), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229af0) {
            ctx->pc = 0x229B18u;
            goto label_229b18;
        }
    }
    ctx->pc = 0x229AF8u;
    // 0x229af8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x229af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x229afc: 0xc08a2b4  jal         func_228AD0
    ctx->pc = 0x229AFCu;
    SET_GPR_U32(ctx, 31, 0x229B04u);
    ctx->pc = 0x229B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AFCu;
    // 0x229b00: 0x248444b0  addiu       $a0, $a0, 0x44B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228AD0u, 0x229AFCu, 0x229B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B04u;
label_229b04:
    // 0x229b04: 0x8e82a738  lw          $v0, -0x58C8($s4)
    ctx->pc = 0x229b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944568)));
    // 0x229b08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x229b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229b0c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x229B0Cu;
    {
        const bool branch_taken_0x229b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B0Cu;
        // 0x229b10: 0xae82a738  sw          $v0, -0x58C8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294944568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b0c) {
            ctx->pc = 0x229C0Cu;
            goto label_229c0c;
        }
    }
    ctx->pc = 0x229B14u;
    // 0x229b14: 0x0  nop
    ctx->pc = 0x229b14u;
    // NOP
label_229b18:
    // 0x229b18: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x229B18u;
    {
        const bool branch_taken_0x229b18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x229B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B18u;
        // 0x229b1c: 0x3c1101c1  lui         $s1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b18) {
            ctx->pc = 0x229B44u;
            goto label_229b44;
        }
    }
    ctx->pc = 0x229B20u;
    // 0x229b20: 0x8e22a734  lw          $v0, -0x58CC($s1)
    ctx->pc = 0x229b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944564)));
    // 0x229b24: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x229B24u;
    {
        const bool branch_taken_0x229b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229b24) {
            ctx->pc = 0x229B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229B24u;
            // 0x229b28: 0x3c1101c1  lui         $s1, 0x1C1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)449 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229B64u;
            goto label_229b64;
        }
    }
    ctx->pc = 0x229B2Cu;
    // 0x229b2c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x229b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x229b30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x229b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b34: 0xc08a2b4  jal         func_228AD0
    ctx->pc = 0x229B34u;
    SET_GPR_U32(ctx, 31, 0x229B3Cu);
    ctx->pc = 0x229B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B34u;
    // 0x229b38: 0x24844458  addiu       $a0, $a0, 0x4458 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228AD0u, 0x229B34u, 0x229B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B3Cu;
label_229b3c:
    // 0x229b3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x229B3Cu;
    {
        const bool branch_taken_0x229b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B3Cu;
        // 0x229b40: 0x8e22a734  lw          $v0, -0x58CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b3c) {
            ctx->pc = 0x229B48u;
            goto label_229b48;
        }
    }
    ctx->pc = 0x229B44u;
label_229b44:
    // 0x229b44: 0x8e22a734  lw          $v0, -0x58CC($s1)
    ctx->pc = 0x229b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944564)));
label_229b48:
    // 0x229b48: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x229B48u;
    {
        const bool branch_taken_0x229b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B48u;
        // 0x229b4c: 0x3c1101c1  lui         $s1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b48) {
            ctx->pc = 0x229B64u;
            goto label_229b64;
        }
    }
    ctx->pc = 0x229B50u;
    // 0x229b50: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x229b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x229b54: 0xc08a2b4  jal         func_228AD0
    ctx->pc = 0x229B54u;
    SET_GPR_U32(ctx, 31, 0x229B5Cu);
    ctx->pc = 0x229B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B54u;
    // 0x229b58: 0x24844530  addiu       $a0, $a0, 0x4530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228AD0u, 0x229B54u, 0x229B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B5Cu;
label_229b5c:
    // 0x229b5c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x229B5Cu;
    {
        const bool branch_taken_0x229b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229b5c) {
            ctx->pc = 0x229C0Cu;
            goto label_229c0c;
        }
    }
    ctx->pc = 0x229B64u;
label_229b64:
    // 0x229b64: 0x8e22a774  lw          $v0, -0x588C($s1)
    ctx->pc = 0x229b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944628)));
    // 0x229b68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x229B68u;
    {
        const bool branch_taken_0x229b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229b68) {
            ctx->pc = 0x229B88u;
            goto label_229b88;
        }
    }
    ctx->pc = 0x229B70u;
    // 0x229b70: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x229B70u;
    {
        const bool branch_taken_0x229b70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x229B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B70u;
        // 0x229b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b70) {
            ctx->pc = 0x229B88u;
            goto label_229b88;
        }
    }
    ctx->pc = 0x229B78u;
    // 0x229b78: 0xc08a534  jal         func_2294D0
    ctx->pc = 0x229B78u;
    SET_GPR_U32(ctx, 31, 0x229B80u);
    ctx->pc = 0x229B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B78u;
    // 0x229b7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2294D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2294D0u, 0x229B78u, 0x229B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B80u;
label_229b80:
    // 0x229b80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x229B80u;
    {
        const bool branch_taken_0x229b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B80u;
        // 0x229b84: 0x8e82a738  lw          $v0, -0x58C8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b80) {
            ctx->pc = 0x229BB0u;
            goto label_229bb0;
        }
    }
    ctx->pc = 0x229B88u;
label_229b88:
    // 0x229b88: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x229B88u;
    {
        const bool branch_taken_0x229b88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x229B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B88u;
        // 0x229b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b88) {
            ctx->pc = 0x229BA0u;
            goto label_229ba0;
        }
    }
    ctx->pc = 0x229B90u;
    // 0x229b90: 0xc08a45c  jal         func_229170
    ctx->pc = 0x229B90u;
    SET_GPR_U32(ctx, 31, 0x229B98u);
    ctx->pc = 0x229B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B90u;
    // 0x229b94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229170u, 0x229B90u, 0x229B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B98u;
label_229b98:
    // 0x229b98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x229B98u;
    {
        const bool branch_taken_0x229b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B98u;
        // 0x229b9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b98) {
            ctx->pc = 0x229BACu;
            goto label_229bac;
        }
    }
    ctx->pc = 0x229BA0u;
label_229ba0:
    // 0x229ba0: 0xc08a494  jal         func_229250
    ctx->pc = 0x229BA0u;
    SET_GPR_U32(ctx, 31, 0x229BA8u);
    ctx->pc = 0x229BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229BA0u;
    // 0x229ba4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229250u, 0x229BA0u, 0x229BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229BA8u;
label_229ba8:
    // 0x229ba8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229bac:
    // 0x229bac: 0x8e82a738  lw          $v0, -0x58C8($s4)
    ctx->pc = 0x229bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944568)));
label_229bb0:
    // 0x229bb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x229bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229bb4: 0xae82a738  sw          $v0, -0x58C8($s4)
    ctx->pc = 0x229bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294944568), GPR_U32(ctx, 2));
    // 0x229bb8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x229BB8u;
    SET_GPR_U32(ctx, 31, 0x229BC0u);
    ctx->pc = 0x229BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229BB8u;
    // 0x229bbc: 0x8e44a730  lw          $a0, -0x58D0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x229BB8u, 0x229BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229BC0u;
label_229bc0:
    // 0x229bc0: 0x16000015  bnez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x229BC0u;
    {
        const bool branch_taken_0x229bc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x229BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BC0u;
        // 0x229bc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229bc0) {
            ctx->pc = 0x229C18u;
            goto label_229c18;
        }
    }
    ctx->pc = 0x229BC8u;
    // 0x229bc8: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x229BC8u;
    {
        const bool branch_taken_0x229bc8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x229BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BC8u;
        // 0x229bcc: 0x3c0201c1  lui         $v0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229bc8) {
            ctx->pc = 0x229BE0u;
            goto label_229be0;
        }
    }
    ctx->pc = 0x229BD0u;
    // 0x229bd0: 0x8e22a774  lw          $v0, -0x588C($s1)
    ctx->pc = 0x229bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944628)));
    // 0x229bd4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x229BD4u;
    {
        const bool branch_taken_0x229bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BD4u;
        // 0x229bd8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229bd4) {
            ctx->pc = 0x229C18u;
            goto label_229c18;
        }
    }
    ctx->pc = 0x229BDCu;
    // 0x229bdc: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x229bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
label_229be0:
    // 0x229be0: 0x8c43a770  lw          $v1, -0x5890($v0)
    ctx->pc = 0x229be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944624)));
    // 0x229be4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x229BE4u;
    {
        const bool branch_taken_0x229be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BE4u;
        // 0x229be8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229be4) {
            ctx->pc = 0x229BF4u;
            goto label_229bf4;
        }
    }
    ctx->pc = 0x229BECu;
    // 0x229bec: 0xc08a29c  jal         func_228A70
    ctx->pc = 0x229BECu;
    SET_GPR_U32(ctx, 31, 0x229BF4u);
    ctx->pc = 0x229BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229BECu;
    // 0x229bf0: 0x248444f0  addiu       $a0, $a0, 0x44F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228A70u, 0x229BECu, 0x229BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229BF4u;
label_229bf4:
    // 0x229bf4: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x229BF4u;
    SET_GPR_U32(ctx, 31, 0x229BFCu);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x229BF4u, 0x229BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229BFCu;
label_229bfc:
    // 0x229bfc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x229bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x229c00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x229c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x229c04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x229C04u;
    {
        const bool branch_taken_0x229c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C04u;
        // 0x229c08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c04) {
            ctx->pc = 0x229C18u;
            goto label_229c18;
        }
    }
    ctx->pc = 0x229C0Cu;
label_229c0c:
    // 0x229c0c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x229C0Cu;
    SET_GPR_U32(ctx, 31, 0x229C14u);
    ctx->pc = 0x229C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C0Cu;
    // 0x229c10: 0x8e44a730  lw          $a0, -0x58D0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x229C0Cu, 0x229C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C14u;
label_229c14:
    // 0x229c14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x229c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229c18:
    // 0x229c18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x229c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229c1c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x229c1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229c20: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x229c20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229c24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x229c24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229c28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x229c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229c30: 0x3e00008  jr          $ra
    ctx->pc = 0x229C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C30u;
        // 0x229c34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229C38u;
}
