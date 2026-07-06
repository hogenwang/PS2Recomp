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

// Function: sub_002F7438
// Address: 0x2f7438 - 0x2f7538
void sub_002F7438_0x2f7438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7438_0x2f7438");
#endif

    switch (ctx->pc) {
        case 0x2f7488u: goto label_2f7488;
        case 0x2f74a0u: goto label_2f74a0;
        case 0x2f74a8u: goto label_2f74a8;
        case 0x2f74c4u: goto label_2f74c4;
        case 0x2f74ccu: goto label_2f74cc;
        case 0x2f74d4u: goto label_2f74d4;
        case 0x2f74dcu: goto label_2f74dc;
        case 0x2f74f8u: goto label_2f74f8;
        case 0x2f7500u: goto label_2f7500;
        case 0x2f7508u: goto label_2f7508;
        case 0x2f7510u: goto label_2f7510;
        default: break;
    }

    ctx->pc = 0x2f7438u;

    // 0x2f7438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f7438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f743c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f743cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f7440: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f7440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f7444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f7444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7448: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7448u;
    {
        const bool branch_taken_0x2f7448 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7448u;
        // 0x2f744c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7448) {
            ctx->pc = 0x2F7458u;
            goto label_2f7458;
        }
    }
    ctx->pc = 0x2F7450u;
    // 0x2f7450: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7450u;
    {
        const bool branch_taken_0x2f7450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7450u;
        // 0x2f7454: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7450) {
            ctx->pc = 0x2F7468u;
            goto label_2f7468;
        }
    }
    ctx->pc = 0x2F7458u;
label_2f7458:
    // 0x2f7458: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2f7458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2f745c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F745Cu;
    {
        const bool branch_taken_0x2f745c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F745Cu;
        // 0x2f7460: 0x2402fc0b  addiu       $v0, $zero, -0x3F5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f745c) {
            ctx->pc = 0x2F7474u;
            goto label_2f7474;
        }
    }
    ctx->pc = 0x2F7464u;
    // 0x2f7464: 0x0  nop
    ctx->pc = 0x2f7464u;
    // NOP
label_2f7468:
    // 0x2f7468: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2f7468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2f746c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2F746Cu;
    {
        const bool branch_taken_0x2f746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F746Cu;
        // 0x2f7470: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f746c) {
            ctx->pc = 0x2F7520u;
            goto label_2f7520;
        }
    }
    ctx->pc = 0x2F7474u;
label_2f7474:
    // 0x2f7474: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f7474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f7478: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x2f7478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x2f747c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2f747cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2f7480: 0xc0beab8  jal         func_2FAAE0
    ctx->pc = 0x2F7480u;
    SET_GPR_U32(ctx, 31, 0x2F7488u);
    ctx->pc = 0x2F7484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7480u;
    // 0x2f7484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAAE0u, 0x2F7480u, 0x2F7488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7488u;
label_2f7488:
    // 0x2f7488: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2f7488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f748c: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x2f748cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x2f7490: 0x10910006  beq         $a0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7490u;
    {
        const bool branch_taken_0x2f7490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7490u;
        // 0x2f7494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7490) {
            ctx->pc = 0x2F74ACu;
            goto label_2f74ac;
        }
    }
    ctx->pc = 0x2F7498u;
    // 0x2f7498: 0xc0bf238  jal         func_2FC8E0
    ctx->pc = 0x2F7498u;
    SET_GPR_U32(ctx, 31, 0x2F74A0u);
    ctx->pc = 0x2F749Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7498u;
    // 0x2f749c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8E0u, 0x2F7498u, 0x2F74A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F74A0u;
label_2f74a0:
    // 0x2f74a0: 0xc0bf148  jal         func_2FC520
    ctx->pc = 0x2F74A0u;
    SET_GPR_U32(ctx, 31, 0x2F74A8u);
    ctx->pc = 0x2F74A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F74A0u;
    // 0x2f74a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC520u, 0x2F74A0u, 0x2F74A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F74A8u;
label_2f74a8:
    // 0x2f74a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f74ac:
    // 0x2f74ac: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2f74acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2f74b0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2f74b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2f74b4: 0x1091000b  beq         $a0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F74B4u;
    {
        const bool branch_taken_0x2f74b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74B4u;
        // 0x2f74b8: 0xae11013c  sw          $s1, 0x13C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f74b4) {
            ctx->pc = 0x2F74E4u;
            goto label_2f74e4;
        }
    }
    ctx->pc = 0x2F74BCu;
    // 0x2f74bc: 0xc0bf148  jal         func_2FC520
    ctx->pc = 0x2F74BCu;
    SET_GPR_U32(ctx, 31, 0x2F74C4u);
    ctx->pc = 0x2FC520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC520u, 0x2F74BCu, 0x2F74C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F74C4u;
label_2f74c4:
    // 0x2f74c4: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x2F74C4u;
    SET_GPR_U32(ctx, 31, 0x2F74CCu);
    ctx->pc = 0x2F74C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F74C4u;
    // 0x2f74c8: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x2F74C4u, 0x2F74CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F74CCu;
label_2f74cc:
    // 0x2f74cc: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x2F74CCu;
    SET_GPR_U32(ctx, 31, 0x2F74D4u);
    ctx->pc = 0x2F74D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F74CCu;
    // 0x2f74d0: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x2F74CCu, 0x2F74D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F74D4u;
label_2f74d4:
    // 0x2f74d4: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F74D4u;
    SET_GPR_U32(ctx, 31, 0x2F74DCu);
    ctx->pc = 0x2F74D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F74D4u;
    // 0x2f74d8: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F74D4u, 0x2F74DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F74DCu;
label_2f74dc:
    // 0x2f74dc: 0xae11005c  sw          $s1, 0x5C($s0)
    ctx->pc = 0x2f74dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
    // 0x2f74e0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2f74e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_2f74e4:
    // 0x2f74e4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x2f74e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2f74e8: 0x5091000b  beql        $a0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F74E8u;
    {
        const bool branch_taken_0x2f74e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x2f74e8) {
            ctx->pc = 0x2F74ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F74E8u;
            // 0x2f74ec: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7518u;
            goto label_2f7518;
        }
    }
    ctx->pc = 0x2F74F0u;
    // 0x2f74f0: 0xc0bf148  jal         func_2FC520
    ctx->pc = 0x2F74F0u;
    SET_GPR_U32(ctx, 31, 0x2F74F8u);
    ctx->pc = 0x2FC520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC520u, 0x2F74F0u, 0x2F74F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F74F8u;
label_2f74f8:
    // 0x2f74f8: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x2F74F8u;
    SET_GPR_U32(ctx, 31, 0x2F7500u);
    ctx->pc = 0x2F74FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F74F8u;
    // 0x2f74fc: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x2F74F8u, 0x2F7500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7500u;
label_2f7500:
    // 0x2f7500: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x2F7500u;
    SET_GPR_U32(ctx, 31, 0x2F7508u);
    ctx->pc = 0x2F7504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7500u;
    // 0x2f7504: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x2F7500u, 0x2F7508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7508u;
label_2f7508:
    // 0x2f7508: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F7508u;
    SET_GPR_U32(ctx, 31, 0x2F7510u);
    ctx->pc = 0x2F750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7508u;
    // 0x2f750c: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F7508u, 0x2F7510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7510u;
label_2f7510:
    // 0x2f7510: 0xae11009c  sw          $s1, 0x9C($s0)
    ctx->pc = 0x2f7510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 17));
    // 0x2f7514: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2f7514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_2f7518:
    // 0x2f7518: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f751c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2f751cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_2f7520:
    // 0x2f7520: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f7520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7524: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f7524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f752c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F752Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F752Cu;
        // 0x2f7530: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F752Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7534u;
    // 0x2f7534: 0x0  nop
    ctx->pc = 0x2f7534u;
    // NOP
}
