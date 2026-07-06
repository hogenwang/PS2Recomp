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

// Function: sub_001AB290
// Address: 0x1ab290 - 0x1ab3b0
void sub_001AB290_0x1ab290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB290_0x1ab290");
#endif

    switch (ctx->pc) {
        case 0x1ab2d8u: goto label_1ab2d8;
        case 0x1ab32cu: goto label_1ab32c;
        case 0x1ab338u: goto label_1ab338;
        case 0x1ab348u: goto label_1ab348;
        case 0x1ab388u: goto label_1ab388;
        default: break;
    }

    ctx->pc = 0x1ab290u;

    // 0x1ab290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab294: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1ab294u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1ab298: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ab298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ab29c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ab29cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab2a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ab2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ab2a4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1ab2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab2a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ab2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ab2ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ab2acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab2b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ab2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ab2b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ab2b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab2b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab2bc: 0x2503e6a8  addiu       $v1, $t0, -0x1958
    ctx->pc = 0x1ab2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960808));
    // 0x1ab2c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ab2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ab2c4: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x1ab2c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab2c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AB2C8u;
    {
        const bool branch_taken_0x1ab2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2C8u;
        // 0x1ab2cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab2c8) {
            ctx->pc = 0x1AB2FCu;
            goto label_1ab2fc;
        }
    }
    ctx->pc = 0x1AB2D0u;
    // 0x1ab2d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ab2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ab2d4: 0x0  nop
    ctx->pc = 0x1ab2d4u;
    // NOP
label_1ab2d8:
    // 0x1ab2d8: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x1ab2d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ab2dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB2DCu;
    {
        const bool branch_taken_0x1ab2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2DCu;
        // 0x1ab2e0: 0x24630104  addiu       $v1, $v1, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab2dc) {
            ctx->pc = 0x1AB2FCu;
            goto label_1ab2fc;
        }
    }
    ctx->pc = 0x1AB2E4u;
    // 0x1ab2e4: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x1ab2e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab2e8: 0x0  nop
    ctx->pc = 0x1ab2e8u;
    // NOP
    // 0x1ab2ec: 0x0  nop
    ctx->pc = 0x1ab2ecu;
    // NOP
    // 0x1ab2f0: 0x0  nop
    ctx->pc = 0x1ab2f0u;
    // NOP
    // 0x1ab2f4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AB2F4u;
    {
        const bool branch_taken_0x1ab2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab2f4) {
            ctx->pc = 0x1AB2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB2F4u;
            // 0x1ab2f8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB2D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ab2d8;
        }
    }
    ctx->pc = 0x1AB2FCu;
label_1ab2fc:
    // 0x1ab2fc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1ab2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ab300: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1AB300u;
    {
        const bool branch_taken_0x1ab300 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB300u;
        // 0x1ab304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab300) {
            ctx->pc = 0x1AB38Cu;
            goto label_1ab38c;
        }
    }
    ctx->pc = 0x1AB308u;
    // 0x1ab308: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x1ab308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1ab30c: 0x2503e6a8  addiu       $v1, $t0, -0x1958
    ctx->pc = 0x1ab30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960808));
    // 0x1ab310: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ab310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ab314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab318: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ab318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ab31c: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x1ab31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x1ab320: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1ab320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ab324: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1AB324u;
    SET_GPR_U32(ctx, 31, 0x1AB32Cu);
    ctx->pc = 0x1AB328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB324u;
    // 0x1ab328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1AB324u, 0x1AB32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB32Cu;
label_1ab32c:
    // 0x1ab32c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab330: 0xc06f692  jal         func_1BDA48
    ctx->pc = 0x1AB330u;
    SET_GPR_U32(ctx, 31, 0x1AB338u);
    ctx->pc = 0x1AB334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB330u;
    // 0x1ab334: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA48u, 0x1AB330u, 0x1AB338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB338u;
label_1ab338:
    // 0x1ab338: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB338u;
    {
        const bool branch_taken_0x1ab338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB338u;
        // 0x1ab33c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab338) {
            ctx->pc = 0x1AB350u;
            goto label_1ab350;
        }
    }
    ctx->pc = 0x1AB340u;
    // 0x1ab340: 0xc06acec  jal         func_1AB3B0
    ctx->pc = 0x1AB340u;
    SET_GPR_U32(ctx, 31, 0x1AB348u);
    ctx->pc = 0x1AB344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB340u;
    // 0x1ab344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3B0u, 0x1AB340u, 0x1AB348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB348u;
label_1ab348:
    // 0x1ab348: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1AB348u;
    {
        const bool branch_taken_0x1ab348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB348u;
        // 0x1ab34c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab348) {
            ctx->pc = 0x1AB38Cu;
            goto label_1ab38c;
        }
    }
    ctx->pc = 0x1AB350u;
label_1ab350:
    // 0x1ab350: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1ab350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1ab354: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1ab354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1ab358: 0x2442b208  addiu       $v0, $v0, -0x4DF8
    ctx->pc = 0x1ab358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947336));
    // 0x1ab35c: 0x2463b238  addiu       $v1, $v1, -0x4DC8
    ctx->pc = 0x1ab35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947384));
    // 0x1ab360: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x1ab360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x1ab364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab368: 0xae140038  sw          $s4, 0x38($s0)
    ctx->pc = 0x1ab368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
    // 0x1ab36c: 0xae13003c  sw          $s3, 0x3C($s0)
    ctx->pc = 0x1ab36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 19));
    // 0x1ab370: 0xae110040  sw          $s1, 0x40($s0)
    ctx->pc = 0x1ab370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
    // 0x1ab374: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x1ab374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
    // 0x1ab378: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x1ab378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x1ab37c: 0xae10007c  sw          $s0, 0x7C($s0)
    ctx->pc = 0x1ab37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 16));
    // 0x1ab380: 0xc06ac96  jal         func_1AB258
    ctx->pc = 0x1AB380u;
    SET_GPR_U32(ctx, 31, 0x1AB388u);
    ctx->pc = 0x1AB384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB380u;
    // 0x1ab384: 0xae100084  sw          $s0, 0x84($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB258u, 0x1AB380u, 0x1AB388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB388u;
label_1ab388:
    // 0x1ab388: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ab388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab38c:
    // 0x1ab38c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab38cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab390: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab394: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab398: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ab398u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab39c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ab39cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab3a0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ab3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ab3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3A4u;
        // 0x1ab3a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB3ACu;
    // 0x1ab3ac: 0x0  nop
    ctx->pc = 0x1ab3acu;
    // NOP
    if (ctx->pc == 0x1ab3acu) { ctx->pc = 0x1ab3b0u; }
}
