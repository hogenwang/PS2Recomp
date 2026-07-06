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

// Function: sub_001E7EE0
// Address: 0x1e7ee0 - 0x1e80b8
void sub_001E7EE0_0x1e7ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7EE0_0x1e7ee0");
#endif

    switch (ctx->pc) {
        case 0x1e7f30u: goto label_1e7f30;
        case 0x1e803cu: goto label_1e803c;
        default: break;
    }

    ctx->pc = 0x1e7ee0u;

    // 0x1e7ee0: 0x24020120  addiu       $v0, $zero, 0x120
    ctx->pc = 0x1e7ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x1e7ee4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7ee8: 0x28a50120  slti        $a1, $a1, 0x120
    ctx->pc = 0x1e7ee8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)288) ? 1 : 0);
    // 0x1e7eec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7ef0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1e7ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1e7ef4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e7ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ef8: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E7EF8u;
    {
        const bool branch_taken_0x1e7ef8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7EF8u;
        // 0x1e7efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ef8) {
            ctx->pc = 0x1E7F34u;
            goto label_1e7f34;
        }
    }
    ctx->pc = 0x1E7F00u;
    // 0x1e7f00: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x1e7f00u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e7f04: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7f08: 0x5483000b  bnel        $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E7F08u;
    {
        const bool branch_taken_0x1e7f08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e7f08) {
            ctx->pc = 0x1E7F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7F08u;
            // 0x1e7f0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7F38u;
            goto label_1e7f38;
        }
    }
    ctx->pc = 0x1E7F10u;
    // 0x1e7f10: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x1e7f10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1e7f14: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7F14u;
    {
        const bool branch_taken_0x1e7f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7f14) {
            ctx->pc = 0x1E7F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7F14u;
            // 0x1e7f18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7F38u;
            goto label_1e7f38;
        }
    }
    ctx->pc = 0x1E7F1Cu;
    // 0x1e7f1c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1e7f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1e7f20: 0x24c4011a  addiu       $a0, $a2, 0x11A
    ctx->pc = 0x1e7f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 282));
    // 0x1e7f24: 0x24a5e648  addiu       $a1, $a1, -0x19B8
    ctx->pc = 0x1e7f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960712));
    // 0x1e7f28: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x1E7F28u;
    SET_GPR_U32(ctx, 31, 0x1E7F30u);
    ctx->pc = 0x1E7F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7F28u;
    // 0x1e7f2c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x1E7F28u, 0x1E7F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7F30u;
label_1e7f30:
    // 0x1e7f30: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e7f30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e7f34:
    // 0x1e7f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7f38:
    // 0x1e7f38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F38u;
        // 0x1e7f3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7F40u;
    // 0x1e7f40: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1e7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1e7f44: 0x28a50012  slti        $a1, $a1, 0x12
    ctx->pc = 0x1e7f44u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1e7f48: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1e7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1e7f4c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e7f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f50: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7F50u;
    {
        const bool branch_taken_0x1e7f50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F50u;
        // 0x1e7f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f50) {
            ctx->pc = 0x1E7F74u;
            goto label_1e7f74;
        }
    }
    ctx->pc = 0x1E7F58u;
    // 0x1e7f58: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x1e7f58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e7f5c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e7f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7f60: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7F60u;
    {
        const bool branch_taken_0x1e7f60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e7f60) {
            ctx->pc = 0x1E7F74u;
            goto label_1e7f74;
        }
    }
    ctx->pc = 0x1E7F68u;
    // 0x1e7f68: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x1e7f68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1e7f6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e7f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e7f70: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e7f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e7f74:
    // 0x1e7f74: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7F7Cu;
    // 0x1e7f7c: 0x0  nop
    ctx->pc = 0x1e7f7cu;
    // NOP
    // 0x1e7f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7f88: 0x8c82205c  lw          $v0, 0x205C($a0)
    ctx->pc = 0x1e7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8284)));
    // 0x1e7f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7f90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e7f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7f94: 0x806e75a  j           func_1B9D68
    ctx->pc = 0x1E7F94u;
    ctx->pc = 0x1E7F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7F94u;
    // 0x1e7f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    sub_001B9D68_0x1b9d68(rdram, ctx, runtime); return;
    ctx->pc = 0x1E7F9Cu;
    // 0x1e7f9c: 0x0  nop
    ctx->pc = 0x1e7f9cu;
    // NOP
    // 0x1e7fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7fa8: 0x8c82205c  lw          $v0, 0x205C($a0)
    ctx->pc = 0x1e7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8284)));
    // 0x1e7fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7fb0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e7fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7fb4: 0x806e7b4  j           func_1B9ED0
    ctx->pc = 0x1E7FB4u;
    ctx->pc = 0x1E7FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7FB4u;
    // 0x1e7fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9ED0u, 0x1E7FB4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E7FBCu;
    // 0x1e7fbc: 0x0  nop
    ctx->pc = 0x1e7fbcu;
    // NOP
    // 0x1e7fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7fc8: 0x8c82205c  lw          $v0, 0x205C($a0)
    ctx->pc = 0x1e7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8284)));
    // 0x1e7fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7fd0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e7fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7fd4: 0x806e822  j           func_1BA088
    ctx->pc = 0x1E7FD4u;
    ctx->pc = 0x1E7FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7FD4u;
    // 0x1e7fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA088u;
    sub_001BA088_0x1ba088(rdram, ctx, runtime); return;
    ctx->pc = 0x1E7FDCu;
    // 0x1e7fdc: 0x0  nop
    ctx->pc = 0x1e7fdcu;
    // NOP
    // 0x1e7fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7fe8: 0x8c82205c  lw          $v0, 0x205C($a0)
    ctx->pc = 0x1e7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8284)));
    // 0x1e7fec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7ff0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e7ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7ff4: 0x806e84e  j           func_1BA138
    ctx->pc = 0x1E7FF4u;
    ctx->pc = 0x1E7FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7FF4u;
    // 0x1e7ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA138u;
    sub_001BA138_0x1ba138(rdram, ctx, runtime); return;
    ctx->pc = 0x1E7FFCu;
    // 0x1e7ffc: 0x0  nop
    ctx->pc = 0x1e7ffcu;
    // NOP
    // 0x1e8000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e8000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e8004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e8004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e8008: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e8008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e800c: 0x8c82205c  lw          $v0, 0x205C($a0)
    ctx->pc = 0x1e800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8284)));
    // 0x1e8010: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e8010u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8014: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E8014u;
    {
        const bool branch_taken_0x1e8014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8014u;
        // 0x1e8018: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8014) {
            ctx->pc = 0x1E80A8u;
            goto label_1e80a8;
        }
    }
    ctx->pc = 0x1E801Cu;
    // 0x1e801c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E801Cu;
    {
        const bool branch_taken_0x1e801c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E8020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E801Cu;
        // 0x1e8020: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e801c) {
            ctx->pc = 0x1E8030u;
            goto label_1e8030;
        }
    }
    ctx->pc = 0x1E8024u;
    // 0x1e8024: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1E8024u;
    {
        const bool branch_taken_0x1e8024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8024u;
        // 0x1e8028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8024) {
            ctx->pc = 0x1E8094u;
            goto label_1e8094;
        }
    }
    ctx->pc = 0x1E802Cu;
    // 0x1e802c: 0x0  nop
    ctx->pc = 0x1e802cu;
    // NOP
label_1e8030:
    // 0x1e8030: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1e8030u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e8034: 0xc046b8a  jal         func_11AE28
    ctx->pc = 0x1E8034u;
    SET_GPR_U32(ctx, 31, 0x1E803Cu);
    ctx->pc = 0x1E8038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8034u;
    // 0x1e8038: 0x46806320  cvt.s.w     $f12, $f12 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE28u, 0x1E8034u, 0x1E803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E803Cu;
label_1e803c:
    // 0x1e803c: 0x3c0140dd  lui         $at, 0x40DD
    ctx->pc = 0x1e803cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16605 << 16));
    // 0x1e8040: 0x34210c54  ori         $at, $at, 0xC54
    ctx->pc = 0x1e8040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3156);
    // 0x1e8044: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e8044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8048: 0x3c0144d8  lui         $at, 0x44D8
    ctx->pc = 0x1e8048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17624 << 16));
    // 0x1e804c: 0x3421677d  ori         $at, $at, 0x677D
    ctx->pc = 0x1e804cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26493);
    // 0x1e8050: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e8050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e8054: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e8054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1e8058: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1e8058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1e805c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e805cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1e8060: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8064: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1e8064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e8068: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1e8068u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e806c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e806cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1e8070: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1e8070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e8074: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8074u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e8078: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1e8078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e807c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1e807cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1e8080: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e8080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e8084: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e8084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e8088: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e8088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e808c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e808cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8090: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1e8090u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e8094:
    // 0x1e8094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e8098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e809c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e809cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e80a0: 0x806eca0  j           func_1BB280
    ctx->pc = 0x1E80A0u;
    ctx->pc = 0x1E80A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E80A0u;
    // 0x1e80a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB280u;
    sub_001BB280_0x1bb280(rdram, ctx, runtime); return;
    ctx->pc = 0x1E80A8u;
label_1e80a8:
    // 0x1e80a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e80a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e80ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e80acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e80b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E80B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E80B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80B0u;
        // 0x1e80b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E80B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E80B8u;
}
