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

// Function: sub_001C1AE8
// Address: 0x1c1ae8 - 0x1c1c28
void sub_001C1AE8_0x1c1ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1AE8_0x1c1ae8");
#endif

    switch (ctx->pc) {
        case 0x1c1b10u: goto label_1c1b10;
        case 0x1c1b30u: goto label_1c1b30;
        case 0x1c1b58u: goto label_1c1b58;
        case 0x1c1b6cu: goto label_1c1b6c;
        case 0x1c1bccu: goto label_1c1bcc;
        case 0x1c1becu: goto label_1c1bec;
        default: break;
    }

    ctx->pc = 0x1c1ae8u;

    // 0x1c1ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1aec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c1af0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c1af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c1af4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1af8: 0x2450c868  addiu       $s0, $v0, -0x3798
    ctx->pc = 0x1c1af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953064));
    // 0x1c1afc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c1b00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c1b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c1b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c1b08: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c1b08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1b0c: 0x0  nop
    ctx->pc = 0x1c1b0cu;
    // NOP
label_1c1b10:
    // 0x1c1b10: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x1c1b10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1c1b14: 0x54720009  bnel        $v1, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C1B14u;
    {
        const bool branch_taken_0x1c1b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c1b14) {
            ctx->pc = 0x1C1B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1B14u;
            // 0x1c1b18: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1B3Cu;
            goto label_1c1b3c;
        }
    }
    ctx->pc = 0x1C1B1Cu;
    // 0x1c1b1c: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x1c1b1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c1b20: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1B20u;
    {
        const bool branch_taken_0x1c1b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c1b20) {
            ctx->pc = 0x1C1B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1B20u;
            // 0x1c1b24: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1B3Cu;
            goto label_1c1b3c;
        }
    }
    ctx->pc = 0x1C1B28u;
    // 0x1c1b28: 0xc043400  jal         func_10D000
    ctx->pc = 0x1C1B28u;
    SET_GPR_U32(ctx, 31, 0x1C1B30u);
    ctx->pc = 0x1C1B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B28u;
    // 0x1c1b2c: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D000u, 0x1C1B28u, 0x1C1B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B30u;
label_1c1b30:
    // 0x1c1b30: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C1B30u;
    {
        const bool branch_taken_0x1c1b30 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c1b30) {
            ctx->pc = 0x1C1B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1B30u;
            // 0x1c1b34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1B90u;
            goto label_1c1b90;
        }
    }
    ctx->pc = 0x1C1B38u;
    // 0x1c1b38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c1b38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c1b3c:
    // 0x1c1b3c: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x1c1b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c1b40: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C1B40u;
    {
        const bool branch_taken_0x1c1b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B40u;
        // 0x1c1b44: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b40) {
            ctx->pc = 0x1C1B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c1b10;
        }
    }
    ctx->pc = 0x1C1B48u;
    // 0x1c1b48: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c1b4c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c1b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1b50: 0x2450c868  addiu       $s0, $v0, -0x3798
    ctx->pc = 0x1c1b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953064));
    // 0x1c1b54: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1c1b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1c1b58:
    // 0x1c1b58: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1c1b58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c1b5c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1B5Cu;
    {
        const bool branch_taken_0x1c1b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c1b5c) {
            ctx->pc = 0x1C1B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1B5Cu;
            // 0x1c1b60: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1B70u;
            goto label_1c1b70;
        }
    }
    ctx->pc = 0x1C1B64u;
    // 0x1c1b64: 0xc0705de  jal         func_1C1778
    ctx->pc = 0x1C1B64u;
    SET_GPR_U32(ctx, 31, 0x1C1B6Cu);
    ctx->pc = 0x1C1B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B64u;
    // 0x1c1b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1778u, 0x1C1B64u, 0x1C1B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B6Cu;
label_1c1b6c:
    // 0x1c1b6c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1c1b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1c1b70:
    // 0x1c1b70: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C1B70u;
    {
        const bool branch_taken_0x1c1b70 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1C1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B70u;
        // 0x1c1b74: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b70) {
            ctx->pc = 0x1C1B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c1b58;
        }
    }
    ctx->pc = 0x1C1B78u;
    // 0x1c1b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1b7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1b80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1b80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1b84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c1b88: 0x80709b0  j           func_1C26C0
    ctx->pc = 0x1C1B88u;
    ctx->pc = 0x1C1B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B88u;
    // 0x1c1b8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C26C0u;
    sub_001C26C0_0x1c26c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C1B90u;
label_1c1b90:
    // 0x1c1b90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1b94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1b94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1b98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c1b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B9Cu;
        // 0x1c1ba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1BA4u;
    // 0x1c1ba4: 0x0  nop
    ctx->pc = 0x1c1ba4u;
    // NOP
    // 0x1c1ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1bac: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c1bb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1bb4: 0x2450c864  addiu       $s0, $v0, -0x379C
    ctx->pc = 0x1c1bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953060));
    // 0x1c1bb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c1bbc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c1bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c1bc0: 0x24849b68  addiu       $a0, $a0, -0x6498
    ctx->pc = 0x1c1bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941544));
    // 0x1c1bc4: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C1BC4u;
    SET_GPR_U32(ctx, 31, 0x1C1BCCu);
    ctx->pc = 0x1C1BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1BC4u;
    // 0x1c1bc8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C1BC4u, 0x1C1BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1BCCu;
label_1c1bcc:
    // 0x1c1bcc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c1bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c1bd0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c1bd4: 0x2484c868  addiu       $a0, $a0, -0x3798
    ctx->pc = 0x1c1bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953064));
    // 0x1c1bd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1bdc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1BDCu;
    {
        const bool branch_taken_0x1c1bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BDCu;
        // 0x1c1be0: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bdc) {
            ctx->pc = 0x1C1BF0u;
            goto label_1c1bf0;
        }
    }
    ctx->pc = 0x1C1BE4u;
    // 0x1c1be4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C1BE4u;
    SET_GPR_U32(ctx, 31, 0x1C1BECu);
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1C1BE4u, 0x1C1BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1BECu;
label_1c1bec:
    // 0x1c1bec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c1becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c1bf0:
    // 0x1c1bf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c1bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c1bf4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c1bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c1bf8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c1bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c1bfc: 0x24849b80  addiu       $a0, $a0, -0x6480
    ctx->pc = 0x1c1bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941568));
    // 0x1c1c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1c04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1c08: 0x806d212  j           func_1B4848
    ctx->pc = 0x1C1C08u;
    ctx->pc = 0x1C1C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C08u;
    // 0x1c1c0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    sub_001B4848_0x1b4848(rdram, ctx, runtime); return;
    ctx->pc = 0x1C1C10u;
    // 0x1c1c10: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c1c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c1c14: 0x2463c864  addiu       $v1, $v1, -0x379C
    ctx->pc = 0x1c1c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953060));
    // 0x1c1c18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1c1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c1c20: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C20u;
        // 0x1c1c24: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1C28u;
}
