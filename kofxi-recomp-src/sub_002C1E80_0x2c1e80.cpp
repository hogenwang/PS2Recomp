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

// Function: sub_002C1E80
// Address: 0x2c1e80 - 0x2c21e8
void sub_002C1E80_0x2c1e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1E80_0x2c1e80");
#endif

    switch (ctx->pc) {
        case 0x2c1f0cu: goto label_2c1f0c;
        case 0x2c1f88u: goto label_2c1f88;
        case 0x2c20a0u: goto label_2c20a0;
        case 0x2c20bcu: goto label_2c20bc;
        case 0x2c20d8u: goto label_2c20d8;
        case 0x2c20f8u: goto label_2c20f8;
        case 0x2c2138u: goto label_2c2138;
        case 0x2c2158u: goto label_2c2158;
        case 0x2c2190u: goto label_2c2190;
        case 0x2c21b0u: goto label_2c21b0;
        case 0x2c21c8u: goto label_2c21c8;
        case 0x2c21ccu: goto label_2c21cc;
        default: break;
    }

    ctx->pc = 0x2c1e80u;

    // 0x2c1e80: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1E80u;
    {
        const bool branch_taken_0x2c1e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1e80) {
            ctx->pc = 0x2C1EA4u;
            goto label_2c1ea4;
        }
    }
    ctx->pc = 0x2C1E88u;
    // 0x2c1e88: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2c1e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c1e8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c1e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c1e90: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2c1e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c1e94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1E94u;
    {
        const bool branch_taken_0x2c1e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1e94) {
            ctx->pc = 0x2C1EA4u;
            goto label_2c1ea4;
        }
    }
    ctx->pc = 0x2C1E9Cu;
    // 0x2c1e9c: 0x4a30003  bgezl       $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1E9Cu;
    {
        const bool branch_taken_0x2c1e9c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2c1e9c) {
            ctx->pc = 0x2C1EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1E9Cu;
            // 0x2c1ea0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1EACu;
            goto label_2c1eac;
        }
    }
    ctx->pc = 0x2C1EA4u;
label_2c1ea4:
    // 0x2c1ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EA4u;
        // 0x2c1ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1EACu;
label_2c1eac:
    // 0x2c1eac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2c1eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c1eb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c1eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c1eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EB4u;
        // 0x2c1eb8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1EBCu;
    // 0x2c1ebc: 0x0  nop
    ctx->pc = 0x2c1ebcu;
    // NOP
    // 0x2c1ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c1ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c1ec4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c1ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c1ec8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c1ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c1ecc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c1eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1ed0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c1ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c1ed4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c1ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1ed8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1ED8u;
    {
        const bool branch_taken_0x2c1ed8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1ED8u;
        // 0x2c1edc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ed8) {
            ctx->pc = 0x2C1EFCu;
            goto label_2c1efc;
        }
    }
    ctx->pc = 0x2C1EE0u;
    // 0x2c1ee0: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x2c1ee0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c1ee4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c1ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c1ee8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c1ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c1eec: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2C1EECu;
    {
        const bool branch_taken_0x2c1eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EECu;
        // 0x2c1ef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1eec) {
            ctx->pc = 0x2C1FACu;
            goto label_2c1fac;
        }
    }
    ctx->pc = 0x2C1EF4u;
    // 0x2c1ef4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1EF4u;
    {
        const bool branch_taken_0x2c1ef4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2C1EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EF4u;
        // 0x2c1ef8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ef4) {
            ctx->pc = 0x2C1F04u;
            goto label_2c1f04;
        }
    }
    ctx->pc = 0x2C1EFCu;
label_2c1efc:
    // 0x2c1efc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2C1EFCu;
    {
        const bool branch_taken_0x2c1efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EFCu;
        // 0x2c1f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1efc) {
            ctx->pc = 0x2C1FACu;
            goto label_2c1fac;
        }
    }
    ctx->pc = 0x2C1F04u;
label_2c1f04:
    // 0x2c1f04: 0xc0af084  jal         func_2BC210
    ctx->pc = 0x2C1F04u;
    SET_GPR_U32(ctx, 31, 0x2C1F0Cu);
    ctx->pc = 0x2C1F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F04u;
    // 0x2c1f08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC210u, 0x2C1F04u, 0x2C1F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F0Cu;
label_2c1f0c:
    // 0x2c1f0c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2c1f0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1f10: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2c1f10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c1f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1f18: 0x12070023  beq         $s0, $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C1F18u;
    {
        const bool branch_taken_0x2c1f18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F18u;
        // 0x2c1f1c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f18) {
            ctx->pc = 0x2C1FA8u;
            goto label_2c1fa8;
        }
    }
    ctx->pc = 0x2C1F20u;
    // 0x2c1f20: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1F20u;
    {
        const bool branch_taken_0x2c1f20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F20u;
        // 0x2c1f24: 0x103080  sll         $a2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f20) {
            ctx->pc = 0x2C1F3Cu;
            goto label_2c1f3c;
        }
    }
    ctx->pc = 0x2C1F28u;
    // 0x2c1f28: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2c1f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c1f2c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x2c1f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2c1f30: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x2c1f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x2c1f34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1F34u;
    {
        const bool branch_taken_0x2c1f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F34u;
        // 0x2c1f38: 0x8c65000c  lw          $a1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f34) {
            ctx->pc = 0x2C1F50u;
            goto label_2c1f50;
        }
    }
    ctx->pc = 0x2C1F3Cu;
label_2c1f3c:
    // 0x2c1f3c: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x2c1f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2c1f40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c1f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1f44: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2c1f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c1f48: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2c1f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c1f4c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x2c1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2c1f50:
    // 0x2c1f50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c1f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c1f54: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C1F54u;
    {
        const bool branch_taken_0x2c1f54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F54u;
        // 0x2c1f58: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f54) {
            ctx->pc = 0x2C1FA8u;
            goto label_2c1fa8;
        }
    }
    ctx->pc = 0x2C1F5Cu;
    // 0x2c1f5c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2c1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c1f60: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2c1f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c1f64: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C1F64u;
    {
        const bool branch_taken_0x2c1f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F64u;
        // 0x2c1f68: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f64) {
            ctx->pc = 0x2C1FACu;
            goto label_2c1fac;
        }
    }
    ctx->pc = 0x2C1F6Cu;
    // 0x2c1f6c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2c1f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c1f70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c1f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1f74: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x2c1f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2c1f78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C1F78u;
    {
        const bool branch_taken_0x2c1f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F78u;
        // 0x2c1f7c: 0x2468ffff  addiu       $t0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f78) {
            ctx->pc = 0x2C1FA8u;
            goto label_2c1fa8;
        }
    }
    ctx->pc = 0x2C1F80u;
    // 0x2c1f80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1F80u;
    {
        const bool branch_taken_0x2c1f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F80u;
        // 0x2c1f84: 0xe52823  subu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f80) {
            ctx->pc = 0x2C1F8Cu;
            goto label_2c1f8c;
        }
    }
    ctx->pc = 0x2C1F88u;
label_2c1f88:
    // 0x2c1f88: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2c1f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2c1f8c:
    // 0x2c1f8c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x2c1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2c1f90: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2c1f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2c1f94: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x2c1f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x2c1f98: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2c1f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2c1f9c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x2c1f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2c1fa0: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C1FA0u;
    {
        const bool branch_taken_0x2c1fa0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FA0u;
        // 0x2c1fa4: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1fa0) {
            ctx->pc = 0x2C1F88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c1f88;
        }
    }
    ctx->pc = 0x2C1FA8u;
label_2c1fa8:
    // 0x2c1fa8: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x2c1fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c1fac:
    // 0x2c1fac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c1facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1fb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c1fb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1fb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c1fb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1fb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c1fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FBCu;
        // 0x2c1fc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1FC4u;
    // 0x2c1fc4: 0x0  nop
    ctx->pc = 0x2c1fc4u;
    // NOP
    // 0x2c1fc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c1fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c1fcc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c1fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c1fd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c1fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c1fd4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c1fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1fd8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c1fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c1fdc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2c1fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1fe0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2c1fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c1fe4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c1fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c1fe8: 0x10800053  beqz        $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2C1FE8u;
    {
        const bool branch_taken_0x2c1fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FE8u;
        // 0x2c1fec: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1fe8) {
            ctx->pc = 0x2C2138u;
            goto label_2c2138;
        }
    }
    ctx->pc = 0x2C1FF0u;
    // 0x2c1ff0: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x2c1ff0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c1ff4: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2c1ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c1ff8: 0xf1102a  slt         $v0, $a3, $s1
    ctx->pc = 0x2c1ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2c1ffc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1FFCu;
    {
        const bool branch_taken_0x2c1ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FFCu;
        // 0x2c2000: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ffc) {
            ctx->pc = 0x2C200Cu;
            goto label_2c200c;
        }
    }
    ctx->pc = 0x2C2004u;
    // 0x2c2004: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2004u;
    {
        const bool branch_taken_0x2c2004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2004u;
        // 0x2c2008: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2004) {
            ctx->pc = 0x2C2014u;
            goto label_2c2014;
        }
    }
    ctx->pc = 0x2C200Cu;
label_2c200c:
    // 0x2c200c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2c200cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2c2010: 0xe2880a  movz        $s1, $a3, $v0
    ctx->pc = 0x2c2010u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_2c2014:
    // 0x2c2014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2018: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c2018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c201c: 0x1603000c  bne         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C201Cu;
    {
        const bool branch_taken_0x2c201c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C201Cu;
        // 0x2c2020: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c201c) {
            ctx->pc = 0x2C2050u;
            goto label_2c2050;
        }
    }
    ctx->pc = 0x2C2024u;
    // 0x2c2024: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2024u;
    {
        const bool branch_taken_0x2c2024 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2024) {
            ctx->pc = 0x2C2028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2024u;
            // 0x2c2028: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2038u;
            goto label_2c2038;
        }
    }
    ctx->pc = 0x2C202Cu;
    // 0x2c202c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c202cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2030: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C2030u;
    {
        const bool branch_taken_0x2c2030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2030u;
        // 0x2c2034: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2030) {
            ctx->pc = 0x2C2098u;
            goto label_2c2098;
        }
    }
    ctx->pc = 0x2C2038u;
label_2c2038:
    // 0x2c2038: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2c2038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c203c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c203cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2040: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c2040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c2044: 0x8c64fffc  lw          $a0, -0x4($v1)
    ctx->pc = 0x2c2044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x2c2048: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C2048u;
    {
        const bool branch_taken_0x2c2048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2048u;
        // 0x2c204c: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2048) {
            ctx->pc = 0x2C2098u;
            goto label_2c2098;
        }
    }
    ctx->pc = 0x2C2050u;
label_2c2050:
    // 0x2c2050: 0x227102a  slt         $v0, $s1, $a3
    ctx->pc = 0x2c2050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2c2054: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C2054u;
    {
        const bool branch_taken_0x2c2054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2054) {
            ctx->pc = 0x2C2058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2054u;
            // 0x2c2058: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2084u;
            goto label_2c2084;
        }
    }
    ctx->pc = 0x2C205Cu;
    // 0x2c205c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C205Cu;
    {
        const bool branch_taken_0x2c205c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C205Cu;
        // 0x2c2060: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c205c) {
            ctx->pc = 0x2C207Cu;
            goto label_2c207c;
        }
    }
    ctx->pc = 0x2C2064u;
    // 0x2c2064: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2c2064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2c2068: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c2068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c206c: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x2c206cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x2c2070: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2c2070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c2074: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2074u;
    {
        const bool branch_taken_0x2c2074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2074u;
        // 0x2c2078: 0x24900001  addiu       $s0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2074) {
            ctx->pc = 0x2C2094u;
            goto label_2c2094;
        }
    }
    ctx->pc = 0x2C207Cu;
label_2c207c:
    // 0x2c207c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C207Cu;
    {
        const bool branch_taken_0x2c207c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C207Cu;
        // 0x2c2080: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c207c) {
            ctx->pc = 0x2C2094u;
            goto label_2c2094;
        }
    }
    ctx->pc = 0x2C2084u;
label_2c2084:
    // 0x2c2084: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2c2084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c2088: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c2088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c208c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c208cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c2090: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x2c2090u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c2094:
    // 0x2c2094: 0x2e140001  sltiu       $s4, $s0, 0x1
    ctx->pc = 0x2c2094u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2c2098:
    // 0x2c2098: 0xc0b0116  jal         func_2C0458
    ctx->pc = 0x2C2098u;
    SET_GPR_U32(ctx, 31, 0x2C20A0u);
    ctx->pc = 0x2C209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2098u;
    // 0x2c209c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0458u, 0x2C2098u, 0x2C20A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C20A0u;
label_2c20a0:
    // 0x2c20a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c20a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c20a4: 0x12400024  beqz        $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C20A4u;
    {
        const bool branch_taken_0x2c20a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C20A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20A4u;
        // 0x2c20a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20a4) {
            ctx->pc = 0x2C2138u;
            goto label_2c2138;
        }
    }
    ctx->pc = 0x2C20ACu;
    // 0x2c20ac: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x2c20acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    // 0x2c20b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c20b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c20b4: 0xc0af02c  jal         func_2BC0B0
    ctx->pc = 0x2C20B4u;
    SET_GPR_U32(ctx, 31, 0x2C20BCu);
    ctx->pc = 0x2C20B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C20B4u;
    // 0x2c20b8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0B0u, 0x2C20B4u, 0x2C20BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C20BCu;
label_2c20bc:
    // 0x2c20bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C20BCu;
    {
        const bool branch_taken_0x2c20bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C20C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20BCu;
        // 0x2c20c0: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20bc) {
            ctx->pc = 0x2C20E0u;
            goto label_2c20e0;
        }
    }
    ctx->pc = 0x2C20C4u;
    // 0x2c20c4: 0x240500e3  addiu       $a1, $zero, 0xE3
    ctx->pc = 0x2c20c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    // 0x2c20c8: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c20c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2c20cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c20ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c20d0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C20D0u;
    SET_GPR_U32(ctx, 31, 0x2C20D8u);
    ctx->pc = 0x2C20D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C20D0u;
    // 0x2c20d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2C20D0u, 0x2C20D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C20D8u;
label_2c20d8:
    // 0x2c20d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C20D8u;
    {
        const bool branch_taken_0x2c20d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c20d8) {
            ctx->pc = 0x2C2128u;
            goto label_2c2128;
        }
    }
    ctx->pc = 0x2C20E0u;
label_2c20e0:
    // 0x2c20e0: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x2C20E0u;
    {
        const bool branch_taken_0x2c20e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20E0u;
        // 0x2c20e4: 0x26260001  addiu       $a2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20e0) {
            ctx->pc = 0x2C2120u;
            goto label_2c2120;
        }
    }
    ctx->pc = 0x2C20E8u;
    // 0x2c20e8: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2c20e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c20ec: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2c20ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2c20f0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C20F0u;
    {
        const bool branch_taken_0x2c20f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C20F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20F0u;
        // 0x2c20f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20f0) {
            ctx->pc = 0x2C213Cu;
            goto label_2c213c;
        }
    }
    ctx->pc = 0x2C20F8u;
label_2c20f8:
    // 0x2c20f8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2c20f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2c20fc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2c20fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c2100: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c2100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c2104: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c2104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c2108: 0xc7282a  slt         $a1, $a2, $a3
    ctx->pc = 0x2c2108u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2c210c: 0x8c64fffc  lw          $a0, -0x4($v1)
    ctx->pc = 0x2c210cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x2c2110: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2c2110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2c2114: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c2114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c2118: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C2118u;
    {
        const bool branch_taken_0x2c2118 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2118u;
        // 0x2c211c: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2118) {
            ctx->pc = 0x2C20F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c20f8;
        }
    }
    ctx->pc = 0x2C2120u;
label_2c2120:
    // 0x2c2120: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2120u;
    {
        const bool branch_taken_0x2c2120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2120u;
        // 0x2c2124: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2120) {
            ctx->pc = 0x2C213Cu;
            goto label_2c213c;
        }
    }
    ctx->pc = 0x2C2128u;
label_2c2128:
    // 0x2c2128: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2128u;
    {
        const bool branch_taken_0x2c2128 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2128u;
        // 0x2c212c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2128) {
            ctx->pc = 0x2C213Cu;
            goto label_2c213c;
        }
    }
    ctx->pc = 0x2C2130u;
    // 0x2c2130: 0xc0a098c  jal         func_282630
    ctx->pc = 0x2C2130u;
    SET_GPR_U32(ctx, 31, 0x2C2138u);
    ctx->pc = 0x2C2134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2130u;
    // 0x2c2134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282630u, 0x2C2130u, 0x2C2138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2138u;
label_2c2138:
    // 0x2c2138: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c213c:
    // 0x2c213c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c213cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2140: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c2140u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2144: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c2144u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2148: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c2148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c214c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c214cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c2150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2154: 0x3e00008  jr          $ra
label_2c2158:
    if (ctx->pc == 0x2C2158u) {
        ctx->pc = 0x2C2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2154u;
        // 0x2c2158: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C215Cu;
        goto label_fallthrough_0x2c2154;
    }
    ctx->pc = 0x2C2154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2154u;
        // 0x2c2158: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c2154:
    ctx->pc = 0x2C215Cu;
    // 0x2c215c: 0x0  nop
    ctx->pc = 0x2c215cu;
    // NOP
    // 0x2c2160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c2160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c2164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c2164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c2168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c2168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c216c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c216cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c2170: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c2170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c2174: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2c2174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2178: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c2178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c217c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2c217cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2180: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c2180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2184: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c2184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c2188: 0xc0a69c2  jal         func_29A708
    ctx->pc = 0x2C2188u;
    SET_GPR_U32(ctx, 31, 0x2C2190u);
    ctx->pc = 0x2C218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2188u;
    // 0x2c218c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A708u, 0x2C2188u, 0x2C2190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2190u;
label_2c2190:
    // 0x2c2190: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2190u;
    {
        const bool branch_taken_0x2c2190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2190u;
        // 0x2c2194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2190) {
            ctx->pc = 0x2C21B8u;
            goto label_2c21b8;
        }
    }
    ctx->pc = 0x2C2198u;
    // 0x2c2198: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c2198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c219c: 0x240500e4  addiu       $a1, $zero, 0xE4
    ctx->pc = 0x2c219cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
    // 0x2c21a0: 0x240600a3  addiu       $a2, $zero, 0xA3
    ctx->pc = 0x2c21a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x2c21a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c21a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c21a8: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C21A8u;
    SET_GPR_U32(ctx, 31, 0x2C21B0u);
    ctx->pc = 0x2C21ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C21A8u;
    // 0x2c21ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2C21A8u, 0x2C21B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C21B0u;
label_2c21b0:
    // 0x2c21b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C21B0u;
    {
        const bool branch_taken_0x2c21b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21B0u;
        // 0x2c21b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c21b0) {
            ctx->pc = 0x2C21CCu;
            goto label_2c21cc;
        }
    }
    ctx->pc = 0x2C21B8u;
label_2c21b8:
    // 0x2c21b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c21b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c21bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c21bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c21c0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2c21c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c21c4: 0xc0b087a  jal         func_2C21E8
label_2c21c8:
    if (ctx->pc == 0x2C21C8u) {
        ctx->pc = 0x2C21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21C4u;
        // 0x2c21c8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C21CCu;
        goto label_2c21cc;
    }
    ctx->pc = 0x2C21C4u;
    SET_GPR_U32(ctx, 31, 0x2C21CCu);
    ctx->pc = 0x2C21C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C21C4u;
    // 0x2c21c8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C21E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C21E8u, 0x2C21C4u, 0x2C21CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C21CCu;
label_2c21cc:
    // 0x2c21cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c21ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c21d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c21d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c21d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c21d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c21d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c21d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c21dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c21dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c21e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C21E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21E0u;
        // 0x2c21e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C21E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C21E8u;
}
