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

// Function: sub_001A5ED8
// Address: 0x1a5ed8 - 0x1a6158
void sub_001A5ED8_0x1a5ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5ED8_0x1a5ed8");
#endif

    switch (ctx->pc) {
        case 0x1a5fa0u: goto label_1a5fa0;
        case 0x1a6080u: goto label_1a6080;
        default: break;
    }

    ctx->pc = 0x1a5ed8u;

    // 0x1a5ed8: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x1a5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x1a5edc: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5EDCu;
    {
        const bool branch_taken_0x1a5edc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EDCu;
        // 0x1a5ee0: 0x23180  sll         $a2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5edc) {
            ctx->pc = 0x1A5EF4u;
            goto label_1a5ef4;
        }
    }
    ctx->pc = 0x1A5EE4u;
    // 0x1a5ee4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1a5ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a5ee8: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x1a5ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x1a5eec: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5EECu;
    {
        const bool branch_taken_0x1a5eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EECu;
        // 0x1a5ef0: 0x3c0b0037  lui         $t3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5eec) {
            ctx->pc = 0x1A5F00u;
            goto label_1a5f00;
        }
    }
    ctx->pc = 0x1A5EF4u;
label_1a5ef4:
    // 0x1a5ef4: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a5ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a5ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EF8u;
        // 0x1a5efc: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5F00u;
label_1a5f00:
    // 0x1a5f00: 0x2565e118  addiu       $a1, $t3, -0x1EE8
    ctx->pc = 0x1a5f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959384));
    // 0x1a5f04: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1a5f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1a5f08: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5F08u;
    {
        const bool branch_taken_0x1a5f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a5f08) {
            ctx->pc = 0x1A5F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5F08u;
            // 0x1a5f0c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5F1Cu;
            goto label_1a5f1c;
        }
    }
    ctx->pc = 0x1A5F10u;
    // 0x1a5f10: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a5f14: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F14u;
        // 0x1a5f18: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5F1Cu;
label_1a5f1c:
    // 0x1a5f1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a5f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a5f20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5F20u;
    {
        const bool branch_taken_0x1a5f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F20u;
        // 0x1a5f24: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f20) {
            ctx->pc = 0x1A5F30u;
            goto label_1a5f30;
        }
    }
    ctx->pc = 0x1A5F28u;
    // 0x1a5f28: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F28u;
        // 0x1a5f2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5F30u;
label_1a5f30:
    // 0x1a5f30: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1a5f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1a5f34: 0x9c4c0000  lwu         $t4, 0x0($v0)
    ctx->pc = 0x1a5f34u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5f38: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x1a5f38u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 16))); // MMIO: 0x10000010
    // 0x1a5f3c: 0xdd6ae118  ld          $t2, -0x1EE8($t3)
    ctx->pc = 0x1a5f3cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 11), 4294959384)));
    // 0x1a5f40: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x1a5f40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x1a5f44: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5F44u;
    {
        const bool branch_taken_0x1a5f44 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F44u;
        // 0x1a5f48: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f44) {
            ctx->pc = 0x1A5F54u;
            goto label_1a5f54;
        }
    }
    ctx->pc = 0x1A5F4Cu;
    // 0x1a5f4c: 0x9c4c0000  lwu         $t4, 0x0($v0)
    ctx->pc = 0x1a5f4cu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5f50: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x1a5f50u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_1a5f54:
    // 0x1a5f54: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1a5f54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x1a5f58: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1a5f58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1a5f5c: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x1a5f5cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x1a5f60: 0x18a6025  or          $t4, $t4, $t2
    ctx->pc = 0x1a5f60u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x1a5f64: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x1a5f64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x1a5f68: 0x12c6014  dsllv       $t4, $t4, $t1
    ctx->pc = 0x1a5f68u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x1a5f6c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1a5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a5f70: 0xfccc0010  sd          $t4, 0x10($a2)
    ctx->pc = 0x1a5f70u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 12));
    // 0x1a5f74: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1a5f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1a5f78: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1a5f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1a5f7c: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x1A5F7Cu;
    {
        const bool branch_taken_0x1a5f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F7Cu;
        // 0x1a5f80: 0xacc3000c  sw          $v1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f7c) {
            ctx->pc = 0x1A6148u;
            goto label_1a6148;
        }
    }
    ctx->pc = 0x1A5F84u;
    // 0x1a5f84: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1a5f84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1a5f88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a5f88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5f8c: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x1a5f8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a5f90: 0x4c102d  daddu       $v0, $v0, $t4
    ctx->pc = 0x1a5f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 12));
    // 0x1a5f94: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x1a5f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a5f98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5F98u;
    {
        const bool branch_taken_0x1a5f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F98u;
        // 0x1a5f9c: 0x43382f  dsubu       $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f98) {
            ctx->pc = 0x1A5FA4u;
            goto label_1a5fa4;
        }
    }
    ctx->pc = 0x1A5FA0u;
label_1a5fa0:
    // 0x1a5fa0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1a5fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1a5fa4:
    // 0x1a5fa4: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1A5FA4u;
    {
        const bool branch_taken_0x1a5fa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5fa4) {
            ctx->pc = 0x1A5FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5FA4u;
            // 0x1a5fa8: 0xacc80004  sw          $t0, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5FD0u;
            goto label_1a5fd0;
        }
    }
    ctx->pc = 0x1A5FACu;
    // 0x1a5fac: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x1a5facu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1a5fb0: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x1a5fb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a5fb4: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x1a5fb4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a5fb8: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1a5fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1a5fbc: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x1a5fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x1a5fc0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1a5fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a5fc4: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A5FC4u;
    {
        const bool branch_taken_0x1a5fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5fc4) {
            ctx->pc = 0x1A5FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5FC4u;
            // 0x1a5fc8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a5fa0;
        }
    }
    ctx->pc = 0x1A5FCCu;
    // 0x1a5fcc: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x1a5fccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
label_1a5fd0:
    // 0x1a5fd0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5FD0u;
    {
        const bool branch_taken_0x1a5fd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FD0u;
        // 0x1a5fd4: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fd0) {
            ctx->pc = 0x1A5FDCu;
            goto label_1a5fdc;
        }
    }
    ctx->pc = 0x1A5FD8u;
    // 0x1a5fd8: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x1a5fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_1a5fdc:
    // 0x1a5fdc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5FDCu;
    {
        const bool branch_taken_0x1a5fdc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FDCu;
        // 0x1a5fe0: 0x2562e118  addiu       $v0, $t3, -0x1EE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fdc) {
            ctx->pc = 0x1A5FECu;
            goto label_1a5fec;
        }
    }
    ctx->pc = 0x1A5FE4u;
    // 0x1a5fe4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5FE4u;
    {
        const bool branch_taken_0x1a5fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FE4u;
        // 0x1a5fe8: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fe4) {
            ctx->pc = 0x1A5FF4u;
            goto label_1a5ff4;
        }
    }
    ctx->pc = 0x1A5FECu;
label_1a5fec:
    // 0x1a5fec: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x1a5fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x1a5ff0: 0x2562e118  addiu       $v0, $t3, -0x1EE8
    ctx->pc = 0x1a5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959384));
label_1a5ff4:
    // 0x1a5ff4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1a5ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1a5ff8: 0x4610053  bgez        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x1A5FF8u;
    {
        const bool branch_taken_0x1a5ff8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FF8u;
        // 0x1a5ffc: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ff8) {
            ctx->pc = 0x1A6148u;
            goto label_1a6148;
        }
    }
    ctx->pc = 0x1A6000u;
    // 0x1a6000: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a6000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6004: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x1a6004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x1a6008: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1a6008u;
    SET_GPR_S32(ctx, 9, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1a600c: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1A600Cu;
    {
        const bool branch_taken_0x1a600c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a600c) {
            ctx->pc = 0x1A6010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A600Cu;
            // 0x1a6010: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A603Cu;
            goto label_1a603c;
        }
    }
    ctx->pc = 0x1A6014u;
    // 0x1a6014: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a6014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6018: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a6018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a601c: 0x34630820  ori         $v1, $v1, 0x820
    ctx->pc = 0x1a601cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2080);
    // 0x1a6020: 0x3442f7ff  ori         $v0, $v0, 0xF7FF
    ctx->pc = 0x1a6020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63487);
    // 0x1a6024: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x1a6024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x1a6028: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a6028u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1a602c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1a602cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6030: 0xac220810  sw          $v0, 0x810($at)
    ctx->pc = 0x1a6030u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 2064), GPR_U32(ctx, 2)); // MMIO: 0x10000810
    // 0x1a6034: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6034u;
        // 0x1a6038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A603Cu;
label_1a603c:
    // 0x1a603c: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x1a603cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a6040: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x1a6040u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a6044: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1a6044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1a6048: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1a6048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a604c: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A604Cu;
    {
        const bool branch_taken_0x1a604c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A604Cu;
        // 0x1a6050: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a604c) {
            ctx->pc = 0x1A60B4u;
            goto label_1a60b4;
        }
    }
    ctx->pc = 0x1A6054u;
    // 0x1a6054: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1a6054u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1a6058: 0x64e37333  daddiu      $v1, $a3, 0x7333
    ctx->pc = 0x1a6058u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
    // 0x1a605c: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x1a605cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a6060: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x1a6060u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a6064: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1a6064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1a6068: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x1a6068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x1a606c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1a606cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a6070: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A6070u;
    {
        const bool branch_taken_0x1a6070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6070u;
        // 0x1a6074: 0x31280003  andi        $t0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6070) {
            ctx->pc = 0x1A60B4u;
            goto label_1a60b4;
        }
    }
    ctx->pc = 0x1A6078u;
    // 0x1a6078: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a6078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a607c: 0x0  nop
    ctx->pc = 0x1a607cu;
    // NOP
label_1a6080:
    // 0x1a6080: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1a6080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a6084: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1A6084u;
    {
        const bool branch_taken_0x1a6084 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6084u;
        // 0x1a6088: 0x64e37333  daddiu      $v1, $a3, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6084) {
            ctx->pc = 0x1A60B8u;
            goto label_1a60b8;
        }
    }
    ctx->pc = 0x1A608Cu;
    // 0x1a608c: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1a608cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1a6090: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x1a6090u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a6094: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x1a6094u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a6098: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1a6098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1a609c: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x1a609cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x1a60a0: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1a60a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a60a4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A60A4u;
    {
        const bool branch_taken_0x1a60a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a60a4) {
            ctx->pc = 0x1A60A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A60A4u;
            // 0x1a60a8: 0xec102f  dsubu       $v0, $a3, $t4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A60BCu;
            goto label_1a60bc;
        }
    }
    ctx->pc = 0x1A60ACu;
    // 0x1a60ac: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1A60ACu;
    {
        const bool branch_taken_0x1a60ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A60B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60ACu;
        // 0x1a60b0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60ac) {
            ctx->pc = 0x1A6080u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a6080;
        }
    }
    ctx->pc = 0x1A60B4u;
label_1a60b4:
    // 0x1a60b4: 0x31280003  andi        $t0, $t1, 0x3
    ctx->pc = 0x1a60b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_1a60b8:
    // 0x1a60b8: 0xec102f  dsubu       $v0, $a3, $t4
    ctx->pc = 0x1a60b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 12));
label_1a60bc:
    // 0x1a60bc: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x1a60bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x1a60c0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A60C0u;
    {
        const bool branch_taken_0x1a60c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A60C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60C0u;
        // 0x1a60c4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60c0) {
            ctx->pc = 0x1A6114u;
            goto label_1a6114;
        }
    }
    ctx->pc = 0x1A60C8u;
    // 0x1a60c8: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1a60c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a60cc: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1a60ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1a60d0: 0x24027333  addiu       $v0, $zero, 0x7333
    ctx->pc = 0x1a60d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x1a60d4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a60d4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1a60d8: 0x821016  dsrlv       $v0, $v0, $a0
    ctx->pc = 0x1a60d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x1a60dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a60dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a60e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a60e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a60e4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a60e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a60e8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1a60e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a60ec: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1a60ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1a60f0: 0x34840820  ori         $a0, $a0, 0x820
    ctx->pc = 0x1a60f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2080);
    // 0x1a60f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a60f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a60f8: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x1a60f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
    // 0x1a60fc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1a60fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1a6100: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x1a6100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x1a6104: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x1a6104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x1a6108: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a6108u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x1a610c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A610Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A610Cu;
        // 0x1a6110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A610Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6114u;
label_1a6114:
    // 0x1a6114: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1a6114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1a6118: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x1a6118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a611c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a611cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6120: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x1a6120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
    // 0x1a6124: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x1a6124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x1a6128: 0xa72816  dsrlv       $a1, $a3, $a1
    ctx->pc = 0x1a6128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x1a612c: 0x34840810  ori         $a0, $a0, 0x810
    ctx->pc = 0x1a612cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2064);
    // 0x1a6130: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a6130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6134: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a6134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a6138: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1a6138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a613c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1a613cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1a6140: 0x34420820  ori         $v0, $v0, 0x820
    ctx->pc = 0x1a6140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2080);
    // 0x1a6144: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1a6144u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
label_1a6148:
    // 0x1a6148: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a614c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A614Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A614Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6154u;
    // 0x1a6154: 0x0  nop
    ctx->pc = 0x1a6154u;
    // NOP
}
