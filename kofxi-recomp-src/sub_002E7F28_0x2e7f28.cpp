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

// Function: sub_002E7F28
// Address: 0x2e7f28 - 0x2e8068
void sub_002E7F28_0x2e7f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7F28_0x2e7f28");
#endif

    switch (ctx->pc) {
        case 0x2e7f48u: goto label_2e7f48;
        case 0x2e7f4cu: goto label_2e7f4c;
        case 0x2e7f68u: goto label_2e7f68;
        case 0x2e7f80u: goto label_2e7f80;
        case 0x2e7f94u: goto label_2e7f94;
        case 0x2e7ff8u: goto label_2e7ff8;
        case 0x2e800cu: goto label_2e800c;
        case 0x2e8024u: goto label_2e8024;
        default: break;
    }

    ctx->pc = 0x2e7f28u;

    // 0x2e7f28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7f2c: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2e7f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2e7f30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e7f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e7f34: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2e7f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f38: 0x8c70fd98  lw          $s0, -0x268($v1)
    ctx->pc = 0x2e7f38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966680)));
    // 0x2e7f3c: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E7F3Cu;
    {
        const bool branch_taken_0x2e7f3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F3Cu;
        // 0x2e7f40: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f3c) {
            ctx->pc = 0x2E7FA4u;
            goto label_2e7fa4;
        }
    }
    ctx->pc = 0x2E7F44u;
    // 0x2e7f44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7f48:
    // 0x2e7f48: 0x54440014  bnel        $v0, $a0, . + 4 + (0x14 << 2)
label_2e7f4c:
    if (ctx->pc == 0x2E7F4Cu) {
        ctx->pc = 0x2E7F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F48u;
        // 0x2e7f4c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F50u;
        goto label_fallthrough_0x2e7f48;
    }
    ctx->pc = 0x2E7F48u;
    {
        const bool branch_taken_0x2e7f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e7f48) {
            ctx->pc = 0x2E7F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7F48u;
            // 0x2e7f4c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7F9Cu;
            goto label_2e7f9c;
        }
    }
label_fallthrough_0x2e7f48:
    ctx->pc = 0x2E7F50u;
    // 0x2e7f50: 0x8ca2fd98  lw          $v0, -0x268($a1)
    ctx->pc = 0x2e7f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294966680)));
    // 0x2e7f54: 0x54500005  bnel        $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7F54u;
    {
        const bool branch_taken_0x2e7f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e7f54) {
            ctx->pc = 0x2E7F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7F54u;
            // 0x2e7f58: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7F6Cu;
            goto label_2e7f6c;
        }
    }
    ctx->pc = 0x2E7F5Cu;
    // 0x2e7f5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e7f60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E7F60u;
    {
        const bool branch_taken_0x2e7f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F60u;
        // 0x2e7f64: 0xac62fd98  sw          $v0, -0x268($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f60) {
            ctx->pc = 0x2E7F8Cu;
            goto label_2e7f8c;
        }
    }
    ctx->pc = 0x2E7F68u;
label_2e7f68:
    // 0x2e7f68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e7f68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7f6c:
    // 0x2e7f6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e7f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e7f70: 0x0  nop
    ctx->pc = 0x2e7f70u;
    // NOP
    // 0x2e7f74: 0x0  nop
    ctx->pc = 0x2e7f74u;
    // NOP
    // 0x2e7f78: 0x0  nop
    ctx->pc = 0x2e7f78u;
    // NOP
    // 0x2e7f7c: 0x1450fffa  bne         $v0, $s0, . + 4 + (-0x6 << 2)
label_2e7f80:
    if (ctx->pc == 0x2E7F80u) {
        ctx->pc = 0x2E7F84u;
        goto label_fallthrough_0x2e7f7c;
    }
    ctx->pc = 0x2E7F7Cu;
    {
        const bool branch_taken_0x2e7f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e7f7c) {
            ctx->pc = 0x2E7F68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7f68;
        }
    }
label_fallthrough_0x2e7f7c:
    ctx->pc = 0x2E7F84u;
    // 0x2e7f84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7f88: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e7f88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2e7f8c:
    // 0x2e7f8c: 0xc098560  jal         func_261580
    ctx->pc = 0x2E7F8Cu;
    SET_GPR_U32(ctx, 31, 0x2E7F94u);
    ctx->pc = 0x2E7F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7F8Cu;
    // 0x2e7f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2E7F8Cu, 0x2E7F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7F94u;
label_2e7f94:
    // 0x2e7f94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7F94u;
    {
        const bool branch_taken_0x2e7f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F94u;
        // 0x2e7f98: 0x2402ffe4  addiu       $v0, $zero, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f94) {
            ctx->pc = 0x2E7FA8u;
            goto label_2e7fa8;
        }
    }
    ctx->pc = 0x2E7F9Cu;
label_2e7f9c:
    // 0x2e7f9c: 0x5600ffea  bnel        $s0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2E7F9Cu;
    {
        const bool branch_taken_0x2e7f9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7f9c) {
            ctx->pc = 0x2E7FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7F9Cu;
            // 0x2e7fa0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7F48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7f48;
        }
    }
    ctx->pc = 0x2E7FA4u;
label_2e7fa4:
    // 0x2e7fa4: 0x2402ffe4  addiu       $v0, $zero, -0x1C
    ctx->pc = 0x2e7fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_2e7fa8:
    // 0x2e7fa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e7fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7fac: 0x10100b  movn        $v0, $zero, $s0
    ctx->pc = 0x2e7facu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2e7fb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e7fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FB4u;
        // 0x2e7fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7FBCu;
    // 0x2e7fbc: 0x0  nop
    ctx->pc = 0x2e7fbcu;
    // NOP
    // 0x2e7fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e7fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e7fc4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e7fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e7fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e7fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e7fcc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e7fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2e7fd0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e7fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e7fd4: 0x24140028  addiu       $s4, $zero, 0x28
    ctx->pc = 0x2e7fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2e7fd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e7fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e7fdc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e7fdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7fe0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e7fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e7fe4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e7fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7fe8: 0x8c50ea08  lw          $s0, -0x15F8($v0)
    ctx->pc = 0x2e7fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961672)));
    // 0x2e7fec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e7fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ff0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e7ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e7ff4: 0x2402ffe4  addiu       $v0, $zero, -0x1C
    ctx->pc = 0x2e7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_2e7ff8:
    // 0x2e7ff8: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E7FF8u;
    {
        const bool branch_taken_0x2e7ff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FF8u;
        // 0x2e7ffc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ff8) {
            ctx->pc = 0x2E8044u;
            goto label_2e8044;
        }
    }
    ctx->pc = 0x2E8000u;
    // 0x2e8000: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e8000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8004: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2E8004u;
    SET_GPR_U32(ctx, 31, 0x2E800Cu);
    ctx->pc = 0x2E8008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8004u;
    // 0x2e8008: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x2E8004u, 0x2E800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E800Cu;
label_2e800c:
    // 0x2e800c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E800Cu;
    {
        const bool branch_taken_0x2e800c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e800c) {
            ctx->pc = 0x2E8010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E800Cu;
            // 0x2e8010: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7FF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7ff8;
        }
    }
    ctx->pc = 0x2E8014u;
    // 0x2e8014: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2E8014u;
    {
        const bool branch_taken_0x2e8014 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8014u;
        // 0x2e8018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8014) {
            ctx->pc = 0x2E8044u;
            goto label_2e8044;
        }
    }
    ctx->pc = 0x2E801Cu;
    // 0x2e801c: 0xc0b9902  jal         func_2E6408
    ctx->pc = 0x2E801Cu;
    SET_GPR_U32(ctx, 31, 0x2E8024u);
    ctx->pc = 0x2E8020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E801Cu;
    // 0x2e8020: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6408u, 0x2E801Cu, 0x2E8024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8024u;
label_2e8024:
    // 0x2e8024: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8024u;
    {
        const bool branch_taken_0x2e8024 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8024u;
        // 0x2e8028: 0x541818  mult        $v1, $v0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8024) {
            ctx->pc = 0x2E8034u;
            goto label_2e8034;
        }
    }
    ctx->pc = 0x2E802Cu;
    // 0x2e802c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E802Cu;
    {
        const bool branch_taken_0x2e802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E802Cu;
        // 0x2e8030: 0x2402ffe3  addiu       $v0, $zero, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e802c) {
            ctx->pc = 0x2E8044u;
            goto label_2e8044;
        }
    }
    ctx->pc = 0x2E8034u;
label_2e8034:
    // 0x2e8034: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2e8034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e8038: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x2e8038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2e803c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2e803cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2e8040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8044:
    // 0x2e8044: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e8044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8048: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e8048u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e804c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e804cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8050: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e8050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8054: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e8054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e8058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e805c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E805Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E805Cu;
        // 0x2e8060: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E805Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8064u;
    // 0x2e8064: 0x0  nop
    ctx->pc = 0x2e8064u;
    // NOP
    if (ctx->pc == 0x2e8064u) { ctx->pc = 0x2e8068u; }
}
