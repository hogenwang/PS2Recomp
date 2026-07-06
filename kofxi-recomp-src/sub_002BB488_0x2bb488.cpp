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

// Function: sub_002BB488
// Address: 0x2bb488 - 0x2bb518
void sub_002BB488_0x2bb488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB488_0x2bb488");
#endif

    switch (ctx->pc) {
        case 0x2bb488u: goto label_2bb488;
        case 0x2bb48cu: goto label_2bb48c;
        case 0x2bb490u: goto label_2bb490;
        case 0x2bb494u: goto label_2bb494;
        case 0x2bb498u: goto label_2bb498;
        case 0x2bb49cu: goto label_2bb49c;
        case 0x2bb4a0u: goto label_2bb4a0;
        case 0x2bb4a4u: goto label_2bb4a4;
        case 0x2bb4a8u: goto label_2bb4a8;
        case 0x2bb4acu: goto label_2bb4ac;
        case 0x2bb4b0u: goto label_2bb4b0;
        case 0x2bb4b4u: goto label_2bb4b4;
        case 0x2bb4b8u: goto label_2bb4b8;
        case 0x2bb4bcu: goto label_2bb4bc;
        case 0x2bb4c0u: goto label_2bb4c0;
        case 0x2bb4c4u: goto label_2bb4c4;
        case 0x2bb4c8u: goto label_2bb4c8;
        case 0x2bb4ccu: goto label_2bb4cc;
        case 0x2bb4d0u: goto label_2bb4d0;
        case 0x2bb4d4u: goto label_2bb4d4;
        case 0x2bb4d8u: goto label_2bb4d8;
        case 0x2bb4dcu: goto label_2bb4dc;
        case 0x2bb4e0u: goto label_2bb4e0;
        case 0x2bb4e4u: goto label_2bb4e4;
        case 0x2bb4e8u: goto label_2bb4e8;
        case 0x2bb4ecu: goto label_2bb4ec;
        case 0x2bb4f0u: goto label_2bb4f0;
        case 0x2bb4f4u: goto label_2bb4f4;
        case 0x2bb4f8u: goto label_2bb4f8;
        case 0x2bb4fcu: goto label_2bb4fc;
        case 0x2bb500u: goto label_2bb500;
        case 0x2bb504u: goto label_2bb504;
        case 0x2bb508u: goto label_2bb508;
        case 0x2bb50cu: goto label_2bb50c;
        case 0x2bb510u: goto label_2bb510;
        case 0x2bb514u: goto label_2bb514;
        default: break;
    }

    ctx->pc = 0x2bb488u;

label_2bb488:
    // 0x2bb488: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bb488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2bb48c:
    // 0x2bb48c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bb48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2bb490:
    // 0x2bb490: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bb490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2bb494:
    // 0x2bb494: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bb494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb498:
    // 0x2bb498: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bb498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2bb49c:
    // 0x2bb49c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bb49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb4a0:
    // 0x2bb4a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bb4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2bb4a4:
    // 0x2bb4a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bb4a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bb4a8:
    // 0x2bb4a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bb4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2bb4ac:
    // 0x2bb4ac: 0xc0a6218  jal         func_298860
label_2bb4b0:
    if (ctx->pc == 0x2BB4B0u) {
        ctx->pc = 0x2BB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4ACu;
        // 0x2bb4b0: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB4B4u;
        goto label_2bb4b4;
    }
    ctx->pc = 0x2BB4ACu;
    SET_GPR_U32(ctx, 31, 0x2BB4B4u);
    ctx->pc = 0x2BB4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB4ACu;
    // 0x2bb4b0: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298860u, 0x2BB4ACu, 0x2BB4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB4B4u;
label_2bb4b4:
    // 0x2bb4b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bb4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb4b8:
    // 0x2bb4b8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2bb4bc:
    if (ctx->pc == 0x2BB4BCu) {
        ctx->pc = 0x2BB4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4B8u;
        // 0x2bb4bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB4C0u;
        goto label_2bb4c0;
    }
    ctx->pc = 0x2BB4B8u;
    {
        const bool branch_taken_0x2bb4b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4B8u;
        // 0x2bb4bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb4b8) {
            ctx->pc = 0x2BB4CCu;
            goto label_2bb4cc;
        }
    }
    ctx->pc = 0x2BB4C0u;
label_2bb4c0:
    // 0x2bb4c0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2bb4c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb4c4:
    // 0x2bb4c4: 0xc0aeeae  jal         func_2BBAB8
label_2bb4c8:
    if (ctx->pc == 0x2BB4C8u) {
        ctx->pc = 0x2BB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4C4u;
        // 0x2bb4c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB4CCu;
        goto label_2bb4cc;
    }
    ctx->pc = 0x2BB4C4u;
    SET_GPR_U32(ctx, 31, 0x2BB4CCu);
    ctx->pc = 0x2BB4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB4C4u;
    // 0x2bb4c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBAB8u, 0x2BB4C4u, 0x2BB4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB4CCu;
label_2bb4cc:
    // 0x2bb4cc: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_2bb4d0:
    if (ctx->pc == 0x2BB4D0u) {
        ctx->pc = 0x2BB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4CCu;
        // 0x2bb4d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB4D4u;
        goto label_2bb4d4;
    }
    ctx->pc = 0x2BB4CCu;
    {
        const bool branch_taken_0x2bb4cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4CCu;
        // 0x2bb4d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb4cc) {
            ctx->pc = 0x2BB4F4u;
            goto label_2bb4f4;
        }
    }
    ctx->pc = 0x2BB4D4u;
label_2bb4d4:
    // 0x2bb4d4: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x2bb4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_2bb4d8:
    // 0x2bb4d8: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x2bb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2bb4dc:
    // 0x2bb4dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2bb4e0:
    if (ctx->pc == 0x2BB4E0u) {
        ctx->pc = 0x2BB4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4DCu;
        // 0x2bb4e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB4E4u;
        goto label_2bb4e4;
    }
    ctx->pc = 0x2BB4DCu;
    {
        const bool branch_taken_0x2bb4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4DCu;
        // 0x2bb4e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb4dc) {
            ctx->pc = 0x2BB4ECu;
            goto label_2bb4ec;
        }
    }
    ctx->pc = 0x2BB4E4u;
label_2bb4e4:
    // 0x2bb4e4: 0x40f809  jalr        $v0
label_2bb4e8:
    if (ctx->pc == 0x2BB4E8u) {
        ctx->pc = 0x2BB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4E4u;
        // 0x2bb4e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB4ECu;
        goto label_2bb4ec;
    }
    ctx->pc = 0x2BB4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BB4ECu);
        ctx->pc = 0x2BB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4E4u;
        // 0x2bb4e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB4E4u, 0x2BB4ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB4ECu;
label_2bb4ec:
    // 0x2bb4ec: 0xc0aed46  jal         func_2BB518
label_2bb4f0:
    if (ctx->pc == 0x2BB4F0u) {
        ctx->pc = 0x2BB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4ECu;
        // 0x2bb4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB4F4u;
        goto label_2bb4f4;
    }
    ctx->pc = 0x2BB4ECu;
    SET_GPR_U32(ctx, 31, 0x2BB4F4u);
    ctx->pc = 0x2BB4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB4ECu;
    // 0x2bb4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB518u, 0x2BB4ECu, 0x2BB4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB4F4u;
label_2bb4f4:
    // 0x2bb4f4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2bb4f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bb4f8:
    // 0x2bb4f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bb4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2bb4fc:
    // 0x2bb4fc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bb4fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bb500:
    // 0x2bb500: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bb500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bb504:
    // 0x2bb504: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bb504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bb508:
    // 0x2bb508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bb508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb50c:
    // 0x2bb50c: 0x3e00008  jr          $ra
label_2bb510:
    if (ctx->pc == 0x2BB510u) {
        ctx->pc = 0x2BB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB50Cu;
        // 0x2bb510: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB514u;
        goto label_2bb514;
    }
    ctx->pc = 0x2BB50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB50Cu;
        // 0x2bb510: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB514u;
label_2bb514:
    // 0x2bb514: 0x0  nop
    ctx->pc = 0x2bb514u;
    // NOP
    if (ctx->pc == 0x2bb514u) { ctx->pc = 0x2bb518u; }
}
