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

// Function: sub_002D0188
// Address: 0x2d0188 - 0x2d0248
void sub_002D0188_0x2d0188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0188_0x2d0188");
#endif

    switch (ctx->pc) {
        case 0x2d01e0u: goto label_2d01e0;
        default: break;
    }

    ctx->pc = 0x2d0188u;

    // 0x2d0188: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x2d0188u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d018c: 0xdd230000  ld          $v1, 0x0($t1)
    ctx->pc = 0x2d018cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d0190: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2d0190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d0194: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0194u;
    {
        const bool branch_taken_0x2d0194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0194u;
        // 0x2d0198: 0x64182f  dsubu       $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0194) {
            ctx->pc = 0x2D01A8u;
            goto label_2d01a8;
        }
    }
    ctx->pc = 0x2D019Cu;
    // 0x2d019c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d019cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d01a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D01A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01A0u;
        // 0x2d01a4: 0xfd230000  sd          $v1, 0x0($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D01A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D01A8u;
label_2d01a8:
    // 0x2d01a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d01a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d01ac: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x2d01acu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x2d01b0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2d01b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d01b4: 0x2448ffff  addiu       $t0, $v0, -0x1
    ctx->pc = 0x2d01b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d01b8: 0x107302a  slt         $a2, $t0, $a3
    ctx->pc = 0x2d01b8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d01bc: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D01BCu;
    {
        const bool branch_taken_0x2d01bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D01C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01BCu;
        // 0x2d01c0: 0xe8182a  slt         $v1, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d01bc) {
            ctx->pc = 0x2D0208u;
            goto label_2d0208;
        }
    }
    ctx->pc = 0x2D01C4u;
    // 0x2d01c4: 0x25220008  addiu       $v0, $t1, 0x8
    ctx->pc = 0x2d01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2d01c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d01c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d01cc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2d01ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d01d0: 0x6463ffff  daddiu      $v1, $v1, -0x1
    ctx->pc = 0x2d01d0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
    // 0x2d01d4: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D01D4u;
    {
        const bool branch_taken_0x2d01d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01D4u;
        // 0x2d01d8: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d01d4) {
            ctx->pc = 0x2D0204u;
            goto label_2d0204;
        }
    }
    ctx->pc = 0x2D01DCu;
    // 0x2d01dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d01dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d01e0:
    // 0x2d01e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d01e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d01e4: 0x107302a  slt         $a2, $t0, $a3
    ctx->pc = 0x2d01e4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d01e8: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D01E8u;
    {
        const bool branch_taken_0x2d01e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01E8u;
        // 0x2d01ec: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d01e8) {
            ctx->pc = 0x2D0204u;
            goto label_2d0204;
        }
    }
    ctx->pc = 0x2D01F0u;
    // 0x2d01f0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d01f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d01f4: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x2d01f4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x2d01f8: 0x0  nop
    ctx->pc = 0x2d01f8u;
    // NOP
    // 0x2d01fc: 0x1044fff8  beq         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D01FCu;
    {
        const bool branch_taken_0x2d01fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2D0200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01FCu;
        // 0x2d0200: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d01fc) {
            ctx->pc = 0x2D01E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d01e0;
        }
    }
    ctx->pc = 0x2D0204u;
label_2d0204:
    // 0x2d0204: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x2d0204u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_2d0208:
    // 0x2d0208: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D0208u;
    {
        const bool branch_taken_0x2d0208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0208u;
        // 0x2d020c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0208) {
            ctx->pc = 0x2D023Cu;
            goto label_2d023c;
        }
    }
    ctx->pc = 0x2D0210u;
    // 0x2d0210: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2D0210u;
    {
        const bool branch_taken_0x2d0210 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0210u;
        // 0x2d0214: 0x24020109  addiu       $v0, $zero, 0x109 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0210) {
            ctx->pc = 0x2D023Cu;
            goto label_2d023c;
        }
    }
    ctx->pc = 0x2D0218u;
    // 0x2d0218: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2d0218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2d021c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2d021cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2d0220: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2d0220u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0224: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0224u;
    {
        const bool branch_taken_0x2d0224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0224) {
            ctx->pc = 0x2D0228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0224u;
            // 0x2d0228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D023Cu;
            goto label_2d023c;
        }
    }
    ctx->pc = 0x2D022Cu;
    // 0x2d022c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2d022cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d0230: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d0230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d0234: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2d0234u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2d0238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d023c:
    // 0x2d023c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D023Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D023Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0244u;
    // 0x2d0244: 0x0  nop
    ctx->pc = 0x2d0244u;
    // NOP
    if (ctx->pc == 0x2d0244u) { ctx->pc = 0x2d0248u; }
}
