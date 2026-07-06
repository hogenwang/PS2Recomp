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

// Function: sub_002D1EC8
// Address: 0x2d1ec8 - 0x2d2030
void sub_002D1EC8_0x2d1ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1EC8_0x2d1ec8");
#endif

    switch (ctx->pc) {
        case 0x2d1f48u: goto label_2d1f48;
        case 0x2d1fa4u: goto label_2d1fa4;
        case 0x2d1fb4u: goto label_2d1fb4;
        case 0x2d1fccu: goto label_2d1fcc;
        case 0x2d1fe4u: goto label_2d1fe4;
        case 0x2d1ffcu: goto label_2d1ffc;
        case 0x2d2008u: goto label_2d2008;
        default: break;
    }

    ctx->pc = 0x2d1ec8u;

    // 0x2d1ec8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d1ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d1ecc: 0x24020108  addiu       $v0, $zero, 0x108
    ctx->pc = 0x2d1eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x2d1ed0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d1ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d1ed4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d1ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ed8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d1ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d1edc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d1edcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ee0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d1ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d1ee4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d1ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d1ee8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d1ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d1eec: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2d1eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2d1ef0: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x2d1ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d1ef4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2d1ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d1ef8: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x2d1ef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d1efc: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2D1EFCu;
    {
        const bool branch_taken_0x2d1efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1EFCu;
        // 0x2d1f00: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1efc) {
            ctx->pc = 0x2D200Cu;
            goto label_2d200c;
        }
    }
    ctx->pc = 0x2D1F04u;
    // 0x2d1f04: 0x56240025  bnel        $s1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D1F04u;
    {
        const bool branch_taken_0x2d1f04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d1f04) {
            ctx->pc = 0x2D1F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1F04u;
            // 0x2d1f08: 0x118040  sll         $s0, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1F9Cu;
            goto label_2d1f9c;
        }
    }
    ctx->pc = 0x2D1F0Cu;
    // 0x2d1f0c: 0x2627ffff  addiu       $a3, $s1, -0x1
    ctx->pc = 0x2d1f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2d1f10: 0x4e0003e  bltz        $a3, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D1F10u;
    {
        const bool branch_taken_0x2d1f10 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2D1F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F10u;
        // 0x2d1f14: 0x730c0  sll         $a2, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f10) {
            ctx->pc = 0x2D200Cu;
            goto label_2d200c;
        }
    }
    ctx->pc = 0x2D1F18u;
    // 0x2d1f18: 0x8e690008  lw          $t1, 0x8($s3)
    ctx->pc = 0x2d1f18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2d1f1c: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x2d1f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d1f20: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x2d1f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2d1f24: 0xc82021  addu        $a0, $a2, $t0
    ctx->pc = 0x2d1f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2d1f28: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x2d1f28u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1f2c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2d1f2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d1f30: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D1F30u;
    {
        const bool branch_taken_0x2d1f30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d1f30) {
            ctx->pc = 0x2D1F6Cu;
            goto label_2d1f6c;
        }
    }
    ctx->pc = 0x2D1F38u;
    // 0x2d1f38: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2d1f38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f3c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2d1f3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f40: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2d1f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2d1f44: 0x0  nop
    ctx->pc = 0x2d1f44u;
    // NOP
label_2d1f48:
    // 0x2d1f48: 0x4e0000a  bltz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2D1F48u;
    {
        const bool branch_taken_0x2d1f48 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2D1F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F48u;
        // 0x2d1f4c: 0x730c0  sll         $a2, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f48) {
            ctx->pc = 0x2D1F74u;
            goto label_2d1f74;
        }
    }
    ctx->pc = 0x2D1F50u;
    // 0x2d1f50: 0xcb1821  addu        $v1, $a2, $t3
    ctx->pc = 0x2d1f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x2d1f54: 0xca2021  addu        $a0, $a2, $t2
    ctx->pc = 0x2d1f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2d1f58: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x2d1f58u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1f5c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2d1f5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d1f60: 0x0  nop
    ctx->pc = 0x2d1f60u;
    // NOP
    // 0x2d1f64: 0x50a2fff8  beql        $a1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D1F64u;
    {
        const bool branch_taken_0x2d1f64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d1f64) {
            ctx->pc = 0x2D1F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1F64u;
            // 0x2d1f68: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1F48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d1f48;
        }
    }
    ctx->pc = 0x2D1F6Cu;
label_2d1f6c:
    // 0x2d1f6c: 0x4e30004  bgezl       $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1F6Cu;
    {
        const bool branch_taken_0x2d1f6c = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2d1f6c) {
            ctx->pc = 0x2D1F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1F6Cu;
            // 0x2d1f70: 0xc91021  addu        $v0, $a2, $t1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1F80u;
            goto label_2d1f80;
        }
    }
    ctx->pc = 0x2D1F74u;
label_2d1f74:
    // 0x2d1f74: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2D1F74u;
    {
        const bool branch_taken_0x2d1f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F74u;
        // 0x2d1f78: 0x24020108  addiu       $v0, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f74) {
            ctx->pc = 0x2D200Cu;
            goto label_2d200c;
        }
    }
    ctx->pc = 0x2D1F7Cu;
    // 0x2d1f7c: 0x0  nop
    ctx->pc = 0x2d1f7cu;
    // NOP
label_2d1f80:
    // 0x2d1f80: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x2d1f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2d1f84: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2d1f84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1f88: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x2d1f88u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d1f8c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2d1f8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d1f90: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D1F90u;
    {
        const bool branch_taken_0x2d1f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F90u;
        // 0x2d1f94: 0x24020108  addiu       $v0, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f90) {
            ctx->pc = 0x2D200Cu;
            goto label_2d200c;
        }
    }
    ctx->pc = 0x2D1F98u;
    // 0x2d1f98: 0x118040  sll         $s0, $s1, 1
    ctx->pc = 0x2d1f98u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_2d1f9c:
    // 0x2d1f9c: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D1F9Cu;
    SET_GPR_U32(ctx, 31, 0x2D1FA4u);
    ctx->pc = 0x2D1FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1F9Cu;
    // 0x2d1fa0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D1F9Cu, 0x2D1FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FA4u;
label_2d1fa4:
    // 0x2d1fa4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d1fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d1fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1fac: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D1FACu;
    SET_GPR_U32(ctx, 31, 0x2D1FB4u);
    ctx->pc = 0x2D1FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1FACu;
    // 0x2d1fb0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D19A8u, 0x2D1FACu, 0x2D1FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FB4u;
label_2d1fb4:
    // 0x2d1fb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1fb8: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D1FB8u;
    {
        const bool branch_taken_0x2d1fb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1fb8) {
            ctx->pc = 0x2D2000u;
            goto label_2d2000;
        }
    }
    ctx->pc = 0x2D1FC0u;
    // 0x2d1fc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d1fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1fc4: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D1FC4u;
    SET_GPR_U32(ctx, 31, 0x2D1FCCu);
    ctx->pc = 0x2D1FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1FC4u;
    // 0x2d1fc8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D1FC4u, 0x2D1FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FCCu;
label_2d1fcc:
    // 0x2d1fcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1fd0: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D1FD0u;
    {
        const bool branch_taken_0x2d1fd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1fd0) {
            ctx->pc = 0x2D2000u;
            goto label_2d2000;
        }
    }
    ctx->pc = 0x2D1FD8u;
    // 0x2d1fd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1fdc: 0xc0b50ac  jal         func_2D42B0
    ctx->pc = 0x2D1FDCu;
    SET_GPR_U32(ctx, 31, 0x2D1FE4u);
    ctx->pc = 0x2D1FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1FDCu;
    // 0x2d1fe0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D42B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D42B0u, 0x2D1FDCu, 0x2D1FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FE4u;
label_2d1fe4:
    // 0x2d1fe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1fe8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1FE8u;
    {
        const bool branch_taken_0x2d1fe8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FE8u;
        // 0x2d1fec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1fe8) {
            ctx->pc = 0x2D2000u;
            goto label_2d2000;
        }
    }
    ctx->pc = 0x2D1FF0u;
    // 0x2d1ff0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d1ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ff4: 0xc0b4a88  jal         func_2D2A20
    ctx->pc = 0x2D1FF4u;
    SET_GPR_U32(ctx, 31, 0x2D1FFCu);
    ctx->pc = 0x2D1FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1FF4u;
    // 0x2d1ff8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2A20u, 0x2D1FF4u, 0x2D1FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FFCu;
label_2d1ffc:
    // 0x2d1ffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d2000:
    // 0x2d2000: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D2000u;
    SET_GPR_U32(ctx, 31, 0x2D2008u);
    ctx->pc = 0x2D2004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2000u;
    // 0x2d2004: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D2000u, 0x2D2008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2008u;
label_2d2008:
    // 0x2d2008: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d2008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d200c:
    // 0x2d200c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d200cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2010: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d2010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2014: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d2014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2018: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d2018u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d201c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d201cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2020: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2d2020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d2024: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2024u;
        // 0x2d2028: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D202Cu;
    // 0x2d202c: 0x0  nop
    ctx->pc = 0x2d202cu;
    // NOP
}
