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

// Function: sub_002F6B90
// Address: 0x2f6b90 - 0x2f6d58
void sub_002F6B90_0x2f6b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6B90_0x2f6b90");
#endif

    switch (ctx->pc) {
        case 0x2f6bccu: goto label_2f6bcc;
        case 0x2f6bf8u: goto label_2f6bf8;
        case 0x2f6c0cu: goto label_2f6c0c;
        case 0x2f6c28u: goto label_2f6c28;
        case 0x2f6c34u: goto label_2f6c34;
        case 0x2f6c64u: goto label_2f6c64;
        case 0x2f6c7cu: goto label_2f6c7c;
        case 0x2f6c90u: goto label_2f6c90;
        case 0x2f6ca8u: goto label_2f6ca8;
        case 0x2f6cb8u: goto label_2f6cb8;
        case 0x2f6cc0u: goto label_2f6cc0;
        case 0x2f6cc8u: goto label_2f6cc8;
        case 0x2f6cdcu: goto label_2f6cdc;
        case 0x2f6d0cu: goto label_2f6d0c;
        case 0x2f6d20u: goto label_2f6d20;
        case 0x2f6d28u: goto label_2f6d28;
        default: break;
    }

    ctx->pc = 0x2f6b90u;

    // 0x2f6b90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f6b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f6b94: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2f6b94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2f6b98: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2f6b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2f6b9c: 0x24c62398  addiu       $a2, $a2, 0x2398
    ctx->pc = 0x2f6b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9112));
    // 0x2f6ba0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2f6ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2f6ba4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f6ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f6ba8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f6ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f6bac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f6bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6bb0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2f6bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2f6bb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f6bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6bb8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f6bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f6bbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f6bbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6bc0: 0x8e3000b8  lw          $s0, 0xB8($s1)
    ctx->pc = 0x2f6bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2f6bc4: 0xc043e24  jal         func_10F890
    ctx->pc = 0x2F6BC4u;
    SET_GPR_U32(ctx, 31, 0x2F6BCCu);
    ctx->pc = 0x2F6BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6BC4u;
    // 0x2f6bc8: 0x96070010  lhu         $a3, 0x10($s0) (Delay Slot)
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F890u, 0x2F6BC4u, 0x2F6BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6BCCu;
label_2f6bcc:
    // 0x2f6bcc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2f6bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f6bd0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f6bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f6bd4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f6bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f6bd8: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x2f6bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x2f6bdc: 0x24a523a0  addiu       $a1, $a1, 0x23A0
    ctx->pc = 0x2f6bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9120));
    // 0x2f6be0: 0x24e723b0  addiu       $a3, $a3, 0x23B0
    ctx->pc = 0x2f6be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9136));
    // 0x2f6be4: 0x252923b8  addiu       $t1, $t1, 0x23B8
    ctx->pc = 0x2f6be4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9144));
    // 0x2f6be8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f6be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6bec: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2f6becu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6bf0: 0xc0bd9b0  jal         func_2F66C0
    ctx->pc = 0x2F6BF0u;
    SET_GPR_U32(ctx, 31, 0x2F6BF8u);
    ctx->pc = 0x2F6BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6BF0u;
    // 0x2f6bf4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F66C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F66C0u, 0x2F6BF0u, 0x2F6BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6BF8u;
label_2f6bf8:
    // 0x2f6bf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f6bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6bfc: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2F6BFCu;
    {
        const bool branch_taken_0x2f6bfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BFCu;
        // 0x2f6c00: 0x2402fc16  addiu       $v0, $zero, -0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6bfc) {
            ctx->pc = 0x2F6CF8u;
            goto label_2f6cf8;
        }
    }
    ctx->pc = 0x2F6C04u;
    // 0x2f6c04: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2F6C04u;
    SET_GPR_U32(ctx, 31, 0x2F6C0Cu);
    ctx->pc = 0x2F6C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C04u;
    // 0x2f6c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2F6C04u, 0x2F6C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C0Cu;
label_2f6c0c:
    // 0x2f6c0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f6c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c10: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2f6c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2f6c14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f6c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c1c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2f6c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6c20: 0xc0bdf70  jal         func_2F7DC0
    ctx->pc = 0x2F6C20u;
    SET_GPR_U32(ctx, 31, 0x2F6C28u);
    ctx->pc = 0x2F6C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C20u;
    // 0x2f6c24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7DC0u, 0x2F6C20u, 0x2F6C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C28u;
label_2f6c28:
    // 0x2f6c28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f6c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c2c: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F6C2Cu;
    SET_GPR_U32(ctx, 31, 0x2F6C34u);
    ctx->pc = 0x2F6C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C2Cu;
    // 0x2f6c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F6C2Cu, 0x2F6C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C34u;
label_2f6c34:
    // 0x2f6c34: 0x6400031  bltz        $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x2F6C34u;
    {
        const bool branch_taken_0x2f6c34 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2F6C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C34u;
        // 0x2f6c38: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c34) {
            ctx->pc = 0x2F6CFCu;
            goto label_2f6cfc;
        }
    }
    ctx->pc = 0x2F6C3Cu;
    // 0x2f6c3c: 0x52420006  beql        $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6C3Cu;
    {
        const bool branch_taken_0x2f6c3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6c3c) {
            ctx->pc = 0x2F6C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6C3Cu;
            // 0x2f6c40: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6C58u;
            goto label_2f6c58;
        }
    }
    ctx->pc = 0x2F6C44u;
    // 0x2f6c44: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2f6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2f6c48: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2F6C48u;
    {
        const bool branch_taken_0x2f6c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C48u;
        // 0x2f6c4c: 0x2402fc15  addiu       $v0, $zero, -0x3EB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c48) {
            ctx->pc = 0x2F6CFCu;
            goto label_2f6cfc;
        }
    }
    ctx->pc = 0x2F6C50u;
    // 0x2f6c50: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2F6C50u;
    {
        const bool branch_taken_0x2f6c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C50u;
        // 0x2f6c54: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c50) {
            ctx->pc = 0x2F6CFCu;
            goto label_2f6cfc;
        }
    }
    ctx->pc = 0x2F6C58u;
label_2f6c58:
    // 0x2f6c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c5c: 0xc0bda8c  jal         func_2F6A30
    ctx->pc = 0x2F6C5Cu;
    SET_GPR_U32(ctx, 31, 0x2F6C64u);
    ctx->pc = 0x2F6C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C5Cu;
    // 0x2f6c60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6A30u, 0x2F6C5Cu, 0x2F6C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C64u;
label_2f6c64:
    // 0x2f6c64: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f6c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c68: 0x12600028  beqz        $s3, . + 4 + (0x28 << 2)
    ctx->pc = 0x2F6C68u;
    {
        const bool branch_taken_0x2f6c68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C68u;
        // 0x2f6c6c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c68) {
            ctx->pc = 0x2F6D0Cu;
            goto label_2f6d0c;
        }
    }
    ctx->pc = 0x2F6C70u;
    // 0x2f6c70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f6c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c74: 0xc0bd9fe  jal         func_2F67F8
    ctx->pc = 0x2F6C74u;
    SET_GPR_U32(ctx, 31, 0x2F6C7Cu);
    ctx->pc = 0x2F6C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C74u;
    // 0x2f6c78: 0x24a523c8  addiu       $a1, $a1, 0x23C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F67F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F67F8u, 0x2F6C74u, 0x2F6C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C7Cu;
label_2f6c7c:
    // 0x2f6c7c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F6C7Cu;
    {
        const bool branch_taken_0x2f6c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C7Cu;
        // 0x2f6c80: 0x2402fc0c  addiu       $v0, $zero, -0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c7c) {
            ctx->pc = 0x2F6CF8u;
            goto label_2f6cf8;
        }
    }
    ctx->pc = 0x2F6C84u;
    // 0x2f6c84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f6c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c88: 0xc04a726  jal         func_129C98
    ctx->pc = 0x2F6C88u;
    SET_GPR_U32(ctx, 31, 0x2F6C90u);
    ctx->pc = 0x2F6C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C88u;
    // 0x2f6c8c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129C98u, 0x2F6C88u, 0x2F6C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C90u;
label_2f6c90:
    // 0x2f6c90: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F6C90u;
    {
        const bool branch_taken_0x2f6c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C90u;
        // 0x2f6c94: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c90) {
            ctx->pc = 0x2F6CF0u;
            goto label_2f6cf0;
        }
    }
    ctx->pc = 0x2F6C98u;
    // 0x2f6c98: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2f6c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f6c9c: 0x24a523d0  addiu       $a1, $a1, 0x23D0
    ctx->pc = 0x2f6c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9168));
    // 0x2f6ca0: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2F6CA0u;
    SET_GPR_U32(ctx, 31, 0x2F6CA8u);
    ctx->pc = 0x2F6CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CA0u;
    // 0x2f6ca4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x2F6CA0u, 0x2F6CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CA8u;
label_2f6ca8:
    // 0x2f6ca8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F6CA8u;
    {
        const bool branch_taken_0x2f6ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CA8u;
        // 0x2f6cac: 0x2402fc0c  addiu       $v0, $zero, -0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ca8) {
            ctx->pc = 0x2F6CF8u;
            goto label_2f6cf8;
        }
    }
    ctx->pc = 0x2F6CB0u;
    // 0x2f6cb0: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F6CB0u;
    SET_GPR_U32(ctx, 31, 0x2F6CB8u);
    ctx->pc = 0x2F6CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CB0u;
    // 0x2f6cb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F6CB0u, 0x2F6CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CB8u;
label_2f6cb8:
    // 0x2f6cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6cbc: 0x0  nop
    ctx->pc = 0x2f6cbcu;
    // NOP
label_2f6cc0:
    // 0x2f6cc0: 0xc0bda8c  jal         func_2F6A30
    ctx->pc = 0x2F6CC0u;
    SET_GPR_U32(ctx, 31, 0x2F6CC8u);
    ctx->pc = 0x2F6CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CC0u;
    // 0x2f6cc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6A30u, 0x2F6CC0u, 0x2F6CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CC8u;
label_2f6cc8:
    // 0x2f6cc8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f6cc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ccc: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x2F6CCCu;
    {
        const bool branch_taken_0x2f6ccc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CCCu;
        // 0x2f6cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ccc) {
            ctx->pc = 0x2F6D38u;
            goto label_2f6d38;
        }
    }
    ctx->pc = 0x2F6CD4u;
    // 0x2f6cd4: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F6CD4u;
    SET_GPR_U32(ctx, 31, 0x2F6CDCu);
    ctx->pc = 0x2F6CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CD4u;
    // 0x2f6cd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F6CD4u, 0x2F6CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CDCu;
label_2f6cdc:
    // 0x2f6cdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2f6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6ce0: 0x5c40fff7  bgtzl       $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F6CE0u;
    {
        const bool branch_taken_0x2f6ce0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2f6ce0) {
            ctx->pc = 0x2F6CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6CE0u;
            // 0x2f6ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6CC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6cc0;
        }
    }
    ctx->pc = 0x2F6CE8u;
    // 0x2f6ce8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F6CE8u;
    {
        const bool branch_taken_0x2f6ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CE8u;
        // 0x2f6cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ce8) {
            ctx->pc = 0x2F6D38u;
            goto label_2f6d38;
        }
    }
    ctx->pc = 0x2F6CF0u;
label_2f6cf0:
    // 0x2f6cf0: 0x2402fc0c  addiu       $v0, $zero, -0x3F4
    ctx->pc = 0x2f6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966284));
    // 0x2f6cf4: 0x0  nop
    ctx->pc = 0x2f6cf4u;
    // NOP
label_2f6cf8:
    // 0x2f6cf8: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2f6cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2f6cfc:
    // 0x2f6cfc: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6CFCu;
    {
        const bool branch_taken_0x2f6cfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CFCu;
        // 0x2f6d00: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6cfc) {
            ctx->pc = 0x2F6D10u;
            goto label_2f6d10;
        }
    }
    ctx->pc = 0x2F6D04u;
    // 0x2f6d04: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F6D04u;
    SET_GPR_U32(ctx, 31, 0x2F6D0Cu);
    ctx->pc = 0x2F6D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D04u;
    // 0x2f6d08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F6D04u, 0x2F6D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D0Cu;
label_2f6d0c:
    // 0x2f6d0c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f6d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f6d10:
    // 0x2f6d10: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x2f6d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x2f6d14: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2f6d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x2f6d18: 0xc0bf238  jal         func_2FC8E0
    ctx->pc = 0x2F6D18u;
    SET_GPR_U32(ctx, 31, 0x2F6D20u);
    ctx->pc = 0x2F6D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D18u;
    // 0x2f6d1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8E0u, 0x2F6D18u, 0x2F6D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D20u;
label_2f6d20:
    // 0x2f6d20: 0xc0bf148  jal         func_2FC520
    ctx->pc = 0x2F6D20u;
    SET_GPR_U32(ctx, 31, 0x2F6D28u);
    ctx->pc = 0x2F6D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D20u;
    // 0x2f6d24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC520u, 0x2F6D20u, 0x2F6D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D28u;
label_2f6d28:
    // 0x2f6d28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f6d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6d2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6d30: 0xae22013c  sw          $v0, 0x13C($s1)
    ctx->pc = 0x2f6d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 2));
    // 0x2f6d34: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x2f6d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_2f6d38:
    // 0x2f6d38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f6d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f6d3c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2f6d3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f6d40: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2f6d40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6d44: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2f6d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6d48: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f6d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D4Cu;
        // 0x2f6d50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6D54u;
    // 0x2f6d54: 0x0  nop
    ctx->pc = 0x2f6d54u;
    // NOP
    if (ctx->pc == 0x2f6d54u) { ctx->pc = 0x2f6d58u; }
}
