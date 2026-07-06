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

// Function: sub_002843C0
// Address: 0x2843c0 - 0x284e50
void sub_002843C0_0x2843c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002843C0_0x2843c0");
#endif

    switch (ctx->pc) {
        case 0x2843ecu: goto label_2843ec;
        case 0x284400u: goto label_284400;
        case 0x284410u: goto label_284410;
        case 0x284420u: goto label_284420;
        case 0x284428u: goto label_284428;
        case 0x28447cu: goto label_28447c;
        case 0x2844b0u: goto label_2844b0;
        case 0x2844c4u: goto label_2844c4;
        case 0x2844ccu: goto label_2844cc;
        case 0x28454cu: goto label_28454c;
        case 0x284578u: goto label_284578;
        case 0x2845b0u: goto label_2845b0;
        case 0x2845c0u: goto label_2845c0;
        case 0x2845d4u: goto label_2845d4;
        case 0x284604u: goto label_284604;
        case 0x284618u: goto label_284618;
        case 0x2846ccu: goto label_2846cc;
        case 0x2846d0u: goto label_2846d0;
        case 0x2846d4u: goto label_2846d4;
        case 0x2846fcu: goto label_2846fc;
        case 0x284738u: goto label_284738;
        case 0x284750u: goto label_284750;
        case 0x284760u: goto label_284760;
        case 0x284778u: goto label_284778;
        case 0x28478cu: goto label_28478c;
        case 0x2847d0u: goto label_2847d0;
        case 0x2847dcu: goto label_2847dc;
        case 0x2847f0u: goto label_2847f0;
        case 0x284968u: goto label_284968;
        case 0x2849ecu: goto label_2849ec;
        case 0x284a0cu: goto label_284a0c;
        case 0x284a38u: goto label_284a38;
        case 0x284ab0u: goto label_284ab0;
        case 0x284adcu: goto label_284adc;
        case 0x284afcu: goto label_284afc;
        case 0x284b14u: goto label_284b14;
        case 0x284b38u: goto label_284b38;
        case 0x284b54u: goto label_284b54;
        case 0x284b68u: goto label_284b68;
        case 0x284b74u: goto label_284b74;
        case 0x284b88u: goto label_284b88;
        case 0x284b90u: goto label_284b90;
        case 0x284bb4u: goto label_284bb4;
        case 0x284bc0u: goto label_284bc0;
        case 0x284bf8u: goto label_284bf8;
        case 0x284c14u: goto label_284c14;
        case 0x284c2cu: goto label_284c2c;
        case 0x284c4cu: goto label_284c4c;
        case 0x284c6cu: goto label_284c6c;
        case 0x284cc8u: goto label_284cc8;
        case 0x284cd8u: goto label_284cd8;
        case 0x284cdcu: goto label_284cdc;
        case 0x284d20u: goto label_284d20;
        case 0x284da0u: goto label_284da0;
        case 0x284db4u: goto label_284db4;
        case 0x284e28u: goto label_284e28;
        case 0x284e38u: goto label_284e38;
        default: break;
    }

    ctx->pc = 0x2843c0u;

    // 0x2843c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2843c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2843c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2843C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2843C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843C4u;
        // 0x2843c8: 0x244236c0  addiu       $v0, $v0, 0x36C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14016));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2843C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2843CCu;
    // 0x2843cc: 0x0  nop
    ctx->pc = 0x2843ccu;
    // NOP
    // 0x2843d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2843d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2843d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2843d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2843d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2843d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2843dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2843dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2843e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2843e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2843e4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2843E4u;
    SET_GPR_U32(ctx, 31, 0x2843ECu);
    ctx->pc = 0x2843E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2843E4u;
    // 0x2843e8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2843E4u, 0x2843ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2843ECu;
label_2843ec:
    // 0x2843ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2843ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2843f0: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2843F0u;
    {
        const bool branch_taken_0x2843f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2843F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843F0u;
        // 0x2843f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843f0) {
            ctx->pc = 0x284460u;
            goto label_284460;
        }
    }
    ctx->pc = 0x2843F8u;
    // 0x2843f8: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2843F8u;
    SET_GPR_U32(ctx, 31, 0x284400u);
    ctx->pc = 0x2843FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2843F8u;
    // 0x2843fc: 0x24040400  addiu       $a0, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2843F8u, 0x284400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284400u;
label_284400:
    // 0x284400: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284400u;
    {
        const bool branch_taken_0x284400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284400u;
        // 0x284404: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284400) {
            ctx->pc = 0x284420u;
            goto label_284420;
        }
    }
    ctx->pc = 0x284408u;
    // 0x284408: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x284408u;
    SET_GPR_U32(ctx, 31, 0x284410u);
    ctx->pc = 0x28440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284408u;
    // 0x28440c: 0x24040400  addiu       $a0, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x284408u, 0x284410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284410u;
label_284410:
    // 0x284410: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284410u;
    {
        const bool branch_taken_0x284410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284410u;
        // 0x284414: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284410) {
            ctx->pc = 0x284430u;
            goto label_284430;
        }
    }
    ctx->pc = 0x284418u;
    // 0x284418: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x284418u;
    SET_GPR_U32(ctx, 31, 0x284420u);
    ctx->pc = 0x28441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284418u;
    // 0x28441c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x284418u, 0x284420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284420u;
label_284420:
    // 0x284420: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x284420u;
    SET_GPR_U32(ctx, 31, 0x284428u);
    ctx->pc = 0x284424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284420u;
    // 0x284424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x284420u, 0x284428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284428u;
label_284428:
    // 0x284428: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x284428u;
    {
        const bool branch_taken_0x284428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284428u;
        // 0x28442c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284428) {
            ctx->pc = 0x284460u;
            goto label_284460;
        }
    }
    ctx->pc = 0x284430u;
label_284430:
    // 0x284430: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x284430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x284434: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x284434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x284438: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x284438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x28443c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28443cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284440: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x284440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x284444: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x284444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x284448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28444c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x28444cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x284450: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x284450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x284454: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x284454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x284458: 0xae300020  sw          $s0, 0x20($s1)
    ctx->pc = 0x284458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 16));
    // 0x28445c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x28445cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_284460:
    // 0x284460: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x284460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284464: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x284464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x284468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28446c: 0x3e00008  jr          $ra
    ctx->pc = 0x28446Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28446Cu;
        // 0x284470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28446Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284474u;
    // 0x284474: 0x0  nop
    ctx->pc = 0x284474u;
    // NOP
    // 0x284478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_28447c:
    // 0x28447c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28447cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x284480: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x284480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x284484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x284484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284488: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284488u;
    {
        const bool branch_taken_0x284488 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284488u;
        // 0x28448c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284488) {
            ctx->pc = 0x284498u;
            goto label_284498;
        }
    }
    ctx->pc = 0x284490u;
    // 0x284490: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x284490u;
    {
        const bool branch_taken_0x284490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284490u;
        // 0x284494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284490) {
            ctx->pc = 0x2844DCu;
            goto label_2844dc;
        }
    }
    ctx->pc = 0x284498u;
label_284498:
    // 0x284498: 0x8e110020  lw          $s1, 0x20($s0)
    ctx->pc = 0x284498u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x28449c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x28449cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2844a0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2844A0u;
    {
        const bool branch_taken_0x2844a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2844a0) {
            ctx->pc = 0x2844A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2844A0u;
            // 0x2844a4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2844B4u;
            goto label_2844b4;
        }
    }
    ctx->pc = 0x2844A8u;
    // 0x2844a8: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2844A8u;
    SET_GPR_U32(ctx, 31, 0x2844B0u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2844A8u, 0x2844B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844B0u;
label_2844b0:
    // 0x2844b0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2844b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2844b4:
    // 0x2844b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2844B4u;
    {
        const bool branch_taken_0x2844b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2844b4) {
            ctx->pc = 0x2844C4u;
            goto label_2844c4;
        }
    }
    ctx->pc = 0x2844BCu;
    // 0x2844bc: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2844BCu;
    SET_GPR_U32(ctx, 31, 0x2844C4u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2844BCu, 0x2844C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844C4u;
label_2844c4:
    // 0x2844c4: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2844C4u;
    SET_GPR_U32(ctx, 31, 0x2844CCu);
    ctx->pc = 0x2844C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844C4u;
    // 0x2844c8: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2844C4u, 0x2844CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844CCu;
label_2844cc:
    // 0x2844cc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2844ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2844d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2844d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2844d4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2844d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2844d8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2844d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2844dc:
    // 0x2844dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2844dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2844e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2844e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2844e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2844e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2844e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2844E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2844ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2844E8u;
        // 0x2844ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2844E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2844F0u;
    // 0x2844f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2844f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2844f4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2844f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2844f8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2844f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2844fc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2844fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284500: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x284500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x284504: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x284504u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284508: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x284508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28450c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28450cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284510: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x284510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x284514: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x284514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284518: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x284518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28451c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x28451Cu;
    {
        const bool branch_taken_0x28451c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x284520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28451Cu;
        // 0x284520: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28451c) {
            ctx->pc = 0x28453Cu;
            goto label_28453c;
        }
    }
    ctx->pc = 0x284524u;
    // 0x284524: 0x8e910020  lw          $s1, 0x20($s4)
    ctx->pc = 0x284524u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x284528: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
    ctx->pc = 0x284528u;
    {
        const bool branch_taken_0x284528 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284528u;
        // 0x28452c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284528) {
            ctx->pc = 0x284644u;
            goto label_284644;
        }
    }
    ctx->pc = 0x284530u;
    // 0x284530: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x284530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x284534: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284534u;
    {
        const bool branch_taken_0x284534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284534) {
            ctx->pc = 0x284544u;
            goto label_284544;
        }
    }
    ctx->pc = 0x28453Cu;
label_28453c:
    // 0x28453c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x28453Cu;
    {
        const bool branch_taken_0x28453c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28453Cu;
        // 0x284540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28453c) {
            ctx->pc = 0x284644u;
            goto label_284644;
        }
    }
    ctx->pc = 0x284544u;
label_284544:
    // 0x284544: 0xc0a13ac  jal         func_284EB0
    ctx->pc = 0x284544u;
    SET_GPR_U32(ctx, 31, 0x28454Cu);
    ctx->pc = 0x284548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284544u;
    // 0x284548: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284EB0u, 0x284544u, 0x28454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28454Cu;
label_28454c:
    // 0x28454c: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x28454cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x284550: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x284550u;
    {
        const bool branch_taken_0x284550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x284554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284550u;
        // 0x284554: 0x250102a  slt         $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284550) {
            ctx->pc = 0x28459Cu;
            goto label_28459c;
        }
    }
    ctx->pc = 0x284558u;
    // 0x284558: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x284558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28455c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x28455cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x284560: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x284560u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x284564: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x284564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284568: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x284568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28456c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x28456cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x284570: 0xc049c48  jal         func_127120
    ctx->pc = 0x284570u;
    SET_GPR_U32(ctx, 31, 0x284578u);
    ctx->pc = 0x284574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284570u;
    // 0x284574: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x284570u, 0x284578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284578u;
label_284578:
    // 0x284578: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x284578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28457c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x28457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x284580: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x284580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x284584: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x284584u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x284588: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x284588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x28458c: 0x12500029  beq         $s2, $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x28458Cu;
    {
        const bool branch_taken_0x28458c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x284590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28458Cu;
        // 0x284590: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28458c) {
            ctx->pc = 0x284634u;
            goto label_284634;
        }
    }
    ctx->pc = 0x284594u;
    // 0x284594: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x284594u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x284598: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x284598u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_28459c:
    // 0x28459c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2845a0: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x2845a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2845a4: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2845A4u;
    {
        const bool branch_taken_0x2845a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2845a4) {
            ctx->pc = 0x2845A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2845A4u;
            // 0x2845a8: 0x8e840024  lw          $a0, 0x24($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2845F8u;
            goto label_2845f8;
        }
    }
    ctx->pc = 0x2845ACu;
    // 0x2845ac: 0x0  nop
    ctx->pc = 0x2845acu;
    // NOP
label_2845b0:
    // 0x2845b0: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x2845b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x2845b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2845b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2845b8: 0xc0a1468  jal         func_2851A0
    ctx->pc = 0x2845B8u;
    SET_GPR_U32(ctx, 31, 0x2845C0u);
    ctx->pc = 0x2845BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2845B8u;
    // 0x2845bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851A0u, 0x2845B8u, 0x2845C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845C0u;
label_2845c0:
    // 0x2845c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2845c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2845c4: 0x1e000007  bgtz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2845C4u;
    {
        const bool branch_taken_0x2845c4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2845c4) {
            ctx->pc = 0x2845E4u;
            goto label_2845e4;
        }
    }
    ctx->pc = 0x2845CCu;
    // 0x2845cc: 0xc0a15ea  jal         func_2857A8
    ctx->pc = 0x2845CCu;
    SET_GPR_U32(ctx, 31, 0x2845D4u);
    ctx->pc = 0x2845D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2845CCu;
    // 0x2845d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2857A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2857A8u, 0x2845CCu, 0x2845D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845D4u;
label_2845d4:
    // 0x2845d4: 0x6000019  bltz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2845D4u;
    {
        const bool branch_taken_0x2845d4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2845D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845D4u;
        // 0x2845d8: 0x15182a  slt         $v1, $zero, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845d4) {
            ctx->pc = 0x28463Cu;
            goto label_28463c;
        }
    }
    ctx->pc = 0x2845DCu;
    // 0x2845dc: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2845DCu;
    {
        const bool branch_taken_0x2845dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2845E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845DCu;
        // 0x2845e0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845dc) {
            ctx->pc = 0x284644u;
            goto label_284644;
        }
    }
    ctx->pc = 0x2845E4u;
label_2845e4:
    // 0x2845e4: 0x12500013  beq         $s2, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2845E4u;
    {
        const bool branch_taken_0x2845e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x2845E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845E4u;
        // 0x2845e8: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845e4) {
            ctx->pc = 0x284634u;
            goto label_284634;
        }
    }
    ctx->pc = 0x2845ECu;
    // 0x2845ec: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2845ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2845f0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x2845F0u;
    {
        const bool branch_taken_0x2845f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2845F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845F0u;
        // 0x2845f4: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845f0) {
            ctx->pc = 0x2845B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2845b0;
        }
    }
    ctx->pc = 0x2845F8u;
label_2845f8:
    // 0x2845f8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2845f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2845fc: 0xc0a1468  jal         func_2851A0
    ctx->pc = 0x2845FCu;
    SET_GPR_U32(ctx, 31, 0x284604u);
    ctx->pc = 0x284600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2845FCu;
    // 0x284600: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851A0u, 0x2845FCu, 0x284604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284604u;
label_284604:
    // 0x284604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x284604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284608: 0x5e000008  bgtzl       $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x284608u;
    {
        const bool branch_taken_0x284608 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x284608) {
            ctx->pc = 0x28460Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284608u;
            // 0x28460c: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28462Cu;
            goto label_28462c;
        }
    }
    ctx->pc = 0x284610u;
    // 0x284610: 0xc0a15ea  jal         func_2857A8
    ctx->pc = 0x284610u;
    SET_GPR_U32(ctx, 31, 0x284618u);
    ctx->pc = 0x284614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284610u;
    // 0x284614: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2857A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2857A8u, 0x284610u, 0x284618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284618u;
label_284618:
    // 0x284618: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x284618u;
    {
        const bool branch_taken_0x284618 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x28461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284618u;
        // 0x28461c: 0x15182a  slt         $v1, $zero, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284618) {
            ctx->pc = 0x28463Cu;
            goto label_28463c;
        }
    }
    ctx->pc = 0x284620u;
    // 0x284620: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x284620u;
    {
        const bool branch_taken_0x284620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x284624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284620u;
        // 0x284624: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284620) {
            ctx->pc = 0x284644u;
            goto label_284644;
        }
    }
    ctx->pc = 0x284628u;
    // 0x284628: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x284628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_28462c:
    // 0x28462c: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
    ctx->pc = 0x28462Cu;
    {
        const bool branch_taken_0x28462c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28462Cu;
        // 0x284630: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28462c) {
            ctx->pc = 0x28454Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28454c;
        }
    }
    ctx->pc = 0x284634u;
label_284634:
    // 0x284634: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x284634u;
    {
        const bool branch_taken_0x284634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284634u;
        // 0x284638: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284634) {
            ctx->pc = 0x284644u;
            goto label_284644;
        }
    }
    ctx->pc = 0x28463Cu;
label_28463c:
    // 0x28463c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28463cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284640: 0x2a3100b  movn        $v0, $s5, $v1
    ctx->pc = 0x284640u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 21));
label_284644:
    // 0x284644: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x284644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x284648: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x284648u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28464c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28464cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x284650: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x284650u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284654: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x284654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284658: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x284658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28465c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28465cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284660: 0x3e00008  jr          $ra
    ctx->pc = 0x284660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284660u;
        // 0x284664: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284668u;
    // 0x284668: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x284668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28466c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x28466cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x284670: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x284670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x284674: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x284674u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284678: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x284678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28467c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28467cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284680: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x284680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x284684: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x284684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284688: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x284688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28468c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28468cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284690: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x284690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x284694: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x284694u;
    {
        const bool branch_taken_0x284694 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x284698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284694u;
        // 0x284698: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284694) {
            ctx->pc = 0x2846BCu;
            goto label_2846bc;
        }
    }
    ctx->pc = 0x28469Cu;
    // 0x28469c: 0x1a400063  blez        $s2, . + 4 + (0x63 << 2)
    ctx->pc = 0x28469Cu;
    {
        const bool branch_taken_0x28469c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2846A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28469Cu;
        // 0x2846a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28469c) {
            ctx->pc = 0x28482Cu;
            goto label_28482c;
        }
    }
    ctx->pc = 0x2846A4u;
    // 0x2846a4: 0x8e710020  lw          $s1, 0x20($s3)
    ctx->pc = 0x2846a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2846a8: 0x12200061  beqz        $s1, . + 4 + (0x61 << 2)
    ctx->pc = 0x2846A8u;
    {
        const bool branch_taken_0x2846a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2846ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846A8u;
        // 0x2846ac: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846a8) {
            ctx->pc = 0x284830u;
            goto label_284830;
        }
    }
    ctx->pc = 0x2846B0u;
    // 0x2846b0: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x2846b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2846b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2846B4u;
    {
        const bool branch_taken_0x2846b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2846b4) {
            ctx->pc = 0x2846C4u;
            goto label_2846c4;
        }
    }
    ctx->pc = 0x2846BCu;
label_2846bc:
    // 0x2846bc: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2846BCu;
    {
        const bool branch_taken_0x2846bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2846C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846BCu;
        // 0x2846c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846bc) {
            ctx->pc = 0x28482Cu;
            goto label_28482c;
        }
    }
    ctx->pc = 0x2846C4u;
label_2846c4:
    // 0x2846c4: 0xc0a13ac  jal         func_284EB0
    ctx->pc = 0x2846C4u;
    SET_GPR_U32(ctx, 31, 0x2846CCu);
    ctx->pc = 0x2846C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2846C4u;
    // 0x2846c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284EB0u, 0x2846C4u, 0x2846CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846CCu;
label_2846cc:
    // 0x2846cc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2846ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2846d0:
    // 0x2846d0: 0x8e280018  lw          $t0, 0x18($s1)
    ctx->pc = 0x2846d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2846d4:
    // 0x2846d4: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x2846d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2846d8: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x2846d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2846dc: 0x828023  subu        $s0, $a0, $v0
    ctx->pc = 0x2846dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2846e0: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x2846e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2846e4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2846E4u;
    {
        const bool branch_taken_0x2846e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2846E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846E4u;
        // 0x2846e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846e4) {
            ctx->pc = 0x284710u;
            goto label_284710;
        }
    }
    ctx->pc = 0x2846ECu;
    // 0x2846ec: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2846ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2846f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2846f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2846f4: 0xc049c48  jal         func_127120
    ctx->pc = 0x2846F4u;
    SET_GPR_U32(ctx, 31, 0x2846FCu);
    ctx->pc = 0x2846F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2846F4u;
    // 0x2846f8: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2846F4u, 0x2846FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846FCu;
label_2846fc:
    // 0x2846fc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2846fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x284700: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x284700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x284704: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x284704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x284708: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x284708u;
    {
        const bool branch_taken_0x284708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284708u;
        // 0x28470c: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284708) {
            ctx->pc = 0x28482Cu;
            goto label_28482c;
        }
    }
    ctx->pc = 0x284710u;
label_284710:
    // 0x284710: 0x1100002b  beqz        $t0, . + 4 + (0x2B << 2)
    ctx->pc = 0x284710u;
    {
        const bool branch_taken_0x284710 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x284714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284710u;
        // 0x284714: 0x244102a  slt         $v0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284710) {
            ctx->pc = 0x2847C0u;
            goto label_2847c0;
        }
    }
    ctx->pc = 0x284718u;
    // 0x284718: 0x1a000012  blez        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x284718u;
    {
        const bool branch_taken_0x284718 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284718u;
        // 0x28471c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284718) {
            ctx->pc = 0x284764u;
            goto label_284764;
        }
    }
    ctx->pc = 0x284720u;
    // 0x284720: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x284720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x284724: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x284724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284728: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x284728u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x28472c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x28472cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x284730: 0xc049c48  jal         func_127120
    ctx->pc = 0x284730u;
    SET_GPR_U32(ctx, 31, 0x284738u);
    ctx->pc = 0x284734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284730u;
    // 0x284734: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x284730u, 0x284738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284738u;
label_284738:
    // 0x284738: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x284738u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x28473c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x28473cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x284740: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x284740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x284744: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x284744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x284748: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x284748u;
    {
        const bool branch_taken_0x284748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284748u;
        // 0x28474c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284748) {
            ctx->pc = 0x284764u;
            goto label_284764;
        }
    }
    ctx->pc = 0x284750u;
label_284750:
    // 0x284750: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x284750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284754: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x284754u;
    {
        const bool branch_taken_0x284754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284754u;
        // 0x284758: 0x2a3100b  movn        $v0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284754) {
            ctx->pc = 0x28482Cu;
            goto label_28482c;
        }
    }
    ctx->pc = 0x28475Cu;
    // 0x28475c: 0x0  nop
    ctx->pc = 0x28475cu;
    // NOP
label_284760:
    // 0x284760: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x284760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_284764:
    // 0x284764: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x284764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x284768: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x284768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x28476c: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x28476cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x284770: 0xc0a14b0  jal         func_2852C0
    ctx->pc = 0x284770u;
    SET_GPR_U32(ctx, 31, 0x284778u);
    ctx->pc = 0x284774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284770u;
    // 0x284774: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2852C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2852C0u, 0x284770u, 0x284778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284778u;
label_284778:
    // 0x284778: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x284778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28477c: 0x5e000008  bgtzl       $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28477Cu;
    {
        const bool branch_taken_0x28477c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x28477c) {
            ctx->pc = 0x284780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28477Cu;
            // 0x284780: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2847A0u;
            goto label_2847a0;
        }
    }
    ctx->pc = 0x284784u;
    // 0x284784: 0xc0a15ea  jal         func_2857A8
    ctx->pc = 0x284784u;
    SET_GPR_U32(ctx, 31, 0x28478Cu);
    ctx->pc = 0x284788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284784u;
    // 0x284788: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2857A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2857A8u, 0x284784u, 0x28478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28478Cu;
label_28478c:
    // 0x28478c: 0x600fff0  bltz        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x28478Cu;
    {
        const bool branch_taken_0x28478c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x284790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28478Cu;
        // 0x284790: 0x15182a  slt         $v1, $zero, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28478c) {
            ctx->pc = 0x284750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_284750;
        }
    }
    ctx->pc = 0x284794u;
    // 0x284794: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x284794u;
    {
        const bool branch_taken_0x284794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x284798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284794u;
        // 0x284798: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284794) {
            ctx->pc = 0x28482Cu;
            goto label_28482c;
        }
    }
    ctx->pc = 0x28479Cu;
    // 0x28479c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x28479cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2847a0:
    // 0x2847a0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2847a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2847a4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2847a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2847a8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2847a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2847ac: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x2847acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x2847b0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2847B0u;
    {
        const bool branch_taken_0x2847b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2847B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847B0u;
        // 0x2847b4: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847b0) {
            ctx->pc = 0x284760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_284760;
        }
    }
    ctx->pc = 0x2847B8u;
    // 0x2847b8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2847b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2847bc: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x2847bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2847c0:
    // 0x2847c0: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x2847C0u;
    {
        const bool branch_taken_0x2847c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2847C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847C0u;
        // 0x2847c4: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847c0) {
            ctx->pc = 0x2846D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2846d0;
        }
    }
    ctx->pc = 0x2847C8u;
    // 0x2847c8: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x2847c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2847cc: 0x0  nop
    ctx->pc = 0x2847ccu;
    // NOP
label_2847d0:
    // 0x2847d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2847d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2847d4: 0xc0a14b0  jal         func_2852C0
    ctx->pc = 0x2847D4u;
    SET_GPR_U32(ctx, 31, 0x2847DCu);
    ctx->pc = 0x2847D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847D4u;
    // 0x2847d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2852C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2852C0u, 0x2847D4u, 0x2847DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847DCu;
label_2847dc:
    // 0x2847dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2847dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2847e0: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2847E0u;
    {
        const bool branch_taken_0x2847e0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2847e0) {
            ctx->pc = 0x2847E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2847E0u;
            // 0x2847e4: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284800u;
            goto label_284800;
        }
    }
    ctx->pc = 0x2847E8u;
    // 0x2847e8: 0xc0a15ea  jal         func_2857A8
    ctx->pc = 0x2847E8u;
    SET_GPR_U32(ctx, 31, 0x2847F0u);
    ctx->pc = 0x2847ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847E8u;
    // 0x2847ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2857A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2857A8u, 0x2847E8u, 0x2847F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847F0u;
label_2847f0:
    // 0x2847f0: 0x600ffd7  bltz        $s0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2847F0u;
    {
        const bool branch_taken_0x2847f0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2847F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847F0u;
        // 0x2847f4: 0x15182a  slt         $v1, $zero, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847f0) {
            ctx->pc = 0x284750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_284750;
        }
    }
    ctx->pc = 0x2847F8u;
    // 0x2847f8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2847F8u;
    {
        const bool branch_taken_0x2847f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2847FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847F8u;
        // 0x2847fc: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847f8) {
            ctx->pc = 0x284828u;
            goto label_284828;
        }
    }
    ctx->pc = 0x284800u;
label_284800:
    // 0x284800: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x284800u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x284804: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x284804u;
    {
        const bool branch_taken_0x284804 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x284808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284804u;
        // 0x284808: 0x290a021  addu        $s4, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284804) {
            ctx->pc = 0x284828u;
            goto label_284828;
        }
    }
    ctx->pc = 0x28480Cu;
    // 0x28480c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x284810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x284810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284814: 0x244182a  slt         $v1, $s2, $a0
    ctx->pc = 0x284814u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x284818: 0x5060ffed  beql        $v1, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x284818u;
    {
        const bool branch_taken_0x284818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284818) {
            ctx->pc = 0x28481Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284818u;
            // 0x28481c: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2847D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2847d0;
        }
    }
    ctx->pc = 0x284820u;
    // 0x284820: 0x1000ffac  b           . + 4 + (-0x54 << 2)
    ctx->pc = 0x284820u;
    {
        const bool branch_taken_0x284820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284820u;
        // 0x284824: 0x8e280018  lw          $t0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284820) {
            ctx->pc = 0x2846D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2846d4;
        }
    }
    ctx->pc = 0x284828u;
label_284828:
    // 0x284828: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x284828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28482c:
    // 0x28482c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28482cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_284830:
    // 0x284830: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x284830u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x284834: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x284834u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x284838: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x284838u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28483c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28483cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284840: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x284840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x284844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284848: 0x3e00008  jr          $ra
    ctx->pc = 0x284848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284848u;
        // 0x28484c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284850u;
    // 0x284850: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x284850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x284854: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x284854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x284858: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x284858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x28485c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x28485cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x284860: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x284860u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284864: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x284864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x284868: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x284868u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28486c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28486cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x284870: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x284870u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284874: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x284874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x284878: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x284878u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28487c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28487cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x284880: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x284880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x284884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x284888: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x284888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28488c: 0x124200dc  beq         $s2, $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x28488Cu;
    {
        const bool branch_taken_0x28488c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x284890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28488Cu;
        // 0x284890: 0x8e710020  lw          $s1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28488c) {
            ctx->pc = 0x284C00u;
            goto label_284c00;
        }
    }
    ctx->pc = 0x284894u;
    // 0x284894: 0x2a42000d  slti        $v0, $s2, 0xD
    ctx->pc = 0x284894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x284898: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x284898u;
    {
        const bool branch_taken_0x284898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284898u;
        // 0x28489c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284898) {
            ctx->pc = 0x2848DCu;
            goto label_2848dc;
        }
    }
    ctx->pc = 0x2848A0u;
    // 0x2848a0: 0x12420028  beq         $s2, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2848A0u;
    {
        const bool branch_taken_0x2848a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2848A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848A0u;
        // 0x2848a4: 0x2a420004  slti        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848a0) {
            ctx->pc = 0x284944u;
            goto label_284944;
        }
    }
    ctx->pc = 0x2848A8u;
    // 0x2848a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2848A8u;
    {
        const bool branch_taken_0x2848a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2848ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848A8u;
        // 0x2848ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848a8) {
            ctx->pc = 0x2848C0u;
            goto label_2848c0;
        }
    }
    ctx->pc = 0x2848B0u;
    // 0x2848b0: 0x5242001c  beql        $s2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2848B0u;
    {
        const bool branch_taken_0x2848b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2848b0) {
            ctx->pc = 0x2848B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2848B0u;
            // 0x2848b4: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284924u;
            goto label_284924;
        }
    }
    ctx->pc = 0x2848B8u;
    // 0x2848b8: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x2848B8u;
    {
        const bool branch_taken_0x2848b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2848BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848B8u;
        // 0x2848bc: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848b8) {
            ctx->pc = 0x284C3Cu;
            goto label_284c3c;
        }
    }
    ctx->pc = 0x2848C0u;
label_2848c0:
    // 0x2848c0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2848c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2848c4: 0x1242003a  beq         $s2, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2848C4u;
    {
        const bool branch_taken_0x2848c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2848C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848C4u;
        // 0x2848c8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848c4) {
            ctx->pc = 0x2849B0u;
            goto label_2849b0;
        }
    }
    ctx->pc = 0x2848CCu;
    // 0x2848cc: 0x524200ab  beql        $s2, $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x2848CCu;
    {
        const bool branch_taken_0x2848cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2848cc) {
            ctx->pc = 0x2848D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2848CCu;
            // 0x2848d0: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284B7Cu;
            goto label_284b7c;
        }
    }
    ctx->pc = 0x2848D4u;
    // 0x2848d4: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x2848D4u;
    {
        const bool branch_taken_0x2848d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2848D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848D4u;
        // 0x2848d8: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848d4) {
            ctx->pc = 0x284C3Cu;
            goto label_284c3c;
        }
    }
    ctx->pc = 0x2848DCu;
label_2848dc:
    // 0x2848dc: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x2848dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x2848e0: 0x1242001a  beq         $s2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2848E0u;
    {
        const bool branch_taken_0x2848e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2848E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848E0u;
        // 0x2848e4: 0x2a420075  slti        $v0, $s2, 0x75 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)117) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848e0) {
            ctx->pc = 0x28494Cu;
            goto label_28494c;
        }
    }
    ctx->pc = 0x2848E8u;
    // 0x2848e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2848E8u;
    {
        const bool branch_taken_0x2848e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2848ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848E8u;
        // 0x2848ec: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848e8) {
            ctx->pc = 0x284908u;
            goto label_284908;
        }
    }
    ctx->pc = 0x2848F0u;
    // 0x2848f0: 0x12420027  beq         $s2, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2848F0u;
    {
        const bool branch_taken_0x2848f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2848F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848F0u;
        // 0x2848f4: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848f0) {
            ctx->pc = 0x284990u;
            goto label_284990;
        }
    }
    ctx->pc = 0x2848F8u;
    // 0x2848f8: 0x12420094  beq         $s2, $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x2848F8u;
    {
        const bool branch_taken_0x2848f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2848f8) {
            ctx->pc = 0x284B4Cu;
            goto label_284b4c;
        }
    }
    ctx->pc = 0x284900u;
    // 0x284900: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x284900u;
    {
        const bool branch_taken_0x284900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284900u;
        // 0x284904: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284900) {
            ctx->pc = 0x284C3Cu;
            goto label_284c3c;
        }
    }
    ctx->pc = 0x284908u;
label_284908:
    // 0x284908: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x284908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x28490c: 0x1242004c  beq         $s2, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x28490Cu;
    {
        const bool branch_taken_0x28490c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x284910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28490Cu;
        // 0x284910: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28490c) {
            ctx->pc = 0x284A40u;
            goto label_284a40;
        }
    }
    ctx->pc = 0x284914u;
    // 0x284914: 0x5242002e  beql        $s2, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x284914u;
    {
        const bool branch_taken_0x284914 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x284914) {
            ctx->pc = 0x284918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284914u;
            // 0x284918: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2849D0u;
            goto label_2849d0;
        }
    }
    ctx->pc = 0x28491Cu;
    // 0x28491c: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x28491Cu;
    {
        const bool branch_taken_0x28491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28491Cu;
        // 0x284920: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28491c) {
            ctx->pc = 0x284C3Cu;
            goto label_284c3c;
        }
    }
    ctx->pc = 0x284924u;
label_284924:
    // 0x284924: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x284924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284928: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x284928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x28492c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x28492cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284930: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x284930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x284934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x284934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284938: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x284938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x28493c: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x28493Cu;
    {
        const bool branch_taken_0x28493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28493Cu;
        // 0x284940: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28493c) {
            ctx->pc = 0x284BF0u;
            goto label_284bf0;
        }
    }
    ctx->pc = 0x284944u;
label_284944:
    // 0x284944: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x284944u;
    {
        const bool branch_taken_0x284944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284944u;
        // 0x284948: 0x8e350018  lw          $s5, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284944) {
            ctx->pc = 0x284C50u;
            goto label_284c50;
        }
    }
    ctx->pc = 0x28494Cu;
label_28494c:
    // 0x28494c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x28494cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x284950: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x284950u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284954: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x284954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x284958: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x284958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28495c: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x28495Cu;
    {
        const bool branch_taken_0x28495c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28495Cu;
        // 0x284960: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28495c) {
            ctx->pc = 0x284C50u;
            goto label_284c50;
        }
    }
    ctx->pc = 0x284964u;
    // 0x284964: 0x0  nop
    ctx->pc = 0x284964u;
    // NOP
label_284968:
    // 0x284968: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x284968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x28496c: 0x66a40001  daddiu      $a0, $s5, 0x1
    ctx->pc = 0x28496cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)1);
    // 0x284970: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x284970u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284974: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x284974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x284978: 0xa6182a  slt         $v1, $a1, $a2
    ctx->pc = 0x284978u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28497c: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x28497cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x284980: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x284980u;
    {
        const bool branch_taken_0x284980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x284984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284980u;
        // 0x284984: 0x82a80a  movz        $s5, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284980) {
            ctx->pc = 0x284968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_284968;
        }
    }
    ctx->pc = 0x284988u;
    // 0x284988: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x284988u;
    {
        const bool branch_taken_0x284988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284988u;
        // 0x28498c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284988) {
            ctx->pc = 0x284C70u;
            goto label_284c70;
        }
    }
    ctx->pc = 0x284990u;
label_284990:
    // 0x284990: 0x8e350018  lw          $s5, 0x18($s1)
    ctx->pc = 0x284990u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x284994: 0x16a000b6  bnez        $s5, . + 4 + (0xB6 << 2)
    ctx->pc = 0x284994u;
    {
        const bool branch_taken_0x284994 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x284998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284994u;
        // 0x284998: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284994) {
            ctx->pc = 0x284C70u;
            goto label_284c70;
        }
    }
    ctx->pc = 0x28499Cu;
    // 0x28499c: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x28499cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2849a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2849a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2849a4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2849a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2849a8: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x2849A8u;
    {
        const bool branch_taken_0x2849a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2849ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2849A8u;
        // 0x2849ac: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2849a8) {
            ctx->pc = 0x284BF0u;
            goto label_284bf0;
        }
    }
    ctx->pc = 0x2849B0u;
label_2849b0:
    // 0x2849b0: 0x8e35000c  lw          $s5, 0xC($s1)
    ctx->pc = 0x2849b0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2849b4: 0x16a000ae  bnez        $s5, . + 4 + (0xAE << 2)
    ctx->pc = 0x2849B4u;
    {
        const bool branch_taken_0x2849b4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2849B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2849B4u;
        // 0x2849b8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2849b4) {
            ctx->pc = 0x284C70u;
            goto label_284c70;
        }
    }
    ctx->pc = 0x2849BCu;
    // 0x2849bc: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x2849bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2849c0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2849c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2849c4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2849c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2849c8: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2849C8u;
    {
        const bool branch_taken_0x2849c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2849CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2849C8u;
        // 0x2849cc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2849c8) {
            ctx->pc = 0x284BF0u;
            goto label_284bf0;
        }
    }
    ctx->pc = 0x2849D0u;
label_2849d0:
    // 0x2849d0: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x2849d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2849d4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2849D4u;
    {
        const bool branch_taken_0x2849d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2849d4) {
            ctx->pc = 0x284A14u;
            goto label_284a14;
        }
    }
    ctx->pc = 0x2849DCu;
    // 0x2849dc: 0x14903c  dsll32      $s2, $s4, 0
    ctx->pc = 0x2849dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2849e0: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x2849e0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x2849e4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2849E4u;
    SET_GPR_U32(ctx, 31, 0x2849ECu);
    ctx->pc = 0x2849E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2849E4u;
    // 0x2849e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2849E4u, 0x2849ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849ECu;
label_2849ec:
    // 0x2849ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2849ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2849f0: 0x12000099  beqz        $s0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2849F0u;
    {
        const bool branch_taken_0x2849f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2849F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2849F0u;
        // 0x2849f4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2849f0) {
            ctx->pc = 0x284C58u;
            goto label_284c58;
        }
    }
    ctx->pc = 0x2849F8u;
    // 0x2849f8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2849f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2849fc: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2849FCu;
    {
        const bool branch_taken_0x2849fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2849fc) {
            ctx->pc = 0x284A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2849FCu;
            // 0x284a00: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284A1Cu;
            goto label_284a1c;
        }
    }
    ctx->pc = 0x284A04u;
    // 0x284a04: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x284A04u;
    SET_GPR_U32(ctx, 31, 0x284A0Cu);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x284A04u, 0x284A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A0Cu;
label_284a0c:
    // 0x284a0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x284A0Cu;
    {
        const bool branch_taken_0x284a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A0Cu;
        // 0x284a10: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a0c) {
            ctx->pc = 0x284A1Cu;
            goto label_284a1c;
        }
    }
    ctx->pc = 0x284A14u;
label_284a14:
    // 0x284a14: 0x14903c  dsll32      $s2, $s4, 0
    ctx->pc = 0x284a14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) << (32 + 0));
    // 0x284a18: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x284a18u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_284a1c:
    // 0x284a1c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x284a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x284a20: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x284a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284a24: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x284a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x284a28: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x284a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284a2c: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x284a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x284a30: 0xc049c48  jal         func_127120
    ctx->pc = 0x284A30u;
    SET_GPR_U32(ctx, 31, 0x284A38u);
    ctx->pc = 0x284A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A30u;
    // 0x284a34: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x284A30u, 0x284A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A38u;
label_284a38:
    // 0x284a38: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x284A38u;
    {
        const bool branch_taken_0x284a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A38u;
        // 0x284a3c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a38) {
            ctx->pc = 0x284C70u;
            goto label_284c70;
        }
    }
    ctx->pc = 0x284A40u;
label_284a40:
    // 0x284a40: 0x12c0000e  beqz        $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x284A40u;
    {
        const bool branch_taken_0x284a40 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x284a40) {
            ctx->pc = 0x284A7Cu;
            goto label_284a7c;
        }
    }
    ctx->pc = 0x284A48u;
    // 0x284a48: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x284a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x284a4c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x284A4Cu;
    {
        const bool branch_taken_0x284a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284a4c) {
            ctx->pc = 0x284A68u;
            goto label_284a68;
        }
    }
    ctx->pc = 0x284A54u;
    // 0x284a54: 0x14a03c  dsll32      $s4, $s4, 0
    ctx->pc = 0x284a54u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 0));
    // 0x284a58: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x284a58u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x284a5c: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x284a5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x284a60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x284A60u;
    {
        const bool branch_taken_0x284a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A60u;
        // 0x284a64: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a60) {
            ctx->pc = 0x284A8Cu;
            goto label_284a8c;
        }
    }
    ctx->pc = 0x284A68u;
label_284a68:
    // 0x284a68: 0x14983c  dsll32      $s3, $s4, 0
    ctx->pc = 0x284a68u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) << (32 + 0));
    // 0x284a6c: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x284a6cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x284a70: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x284a70u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x284a74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x284A74u;
    {
        const bool branch_taken_0x284a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A74u;
        // 0x284a78: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a74) {
            ctx->pc = 0x284A8Cu;
            goto label_284a8c;
        }
    }
    ctx->pc = 0x284A7Cu;
label_284a7c:
    // 0x284a7c: 0x14983c  dsll32      $s3, $s4, 0
    ctx->pc = 0x284a7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) << (32 + 0));
    // 0x284a80: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x284a80u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x284a84: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x284a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284a88: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x284a88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_284a8c:
    // 0x284a8c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x284a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x284a90: 0x2a820401  slti        $v0, $s4, 0x401
    ctx->pc = 0x284a90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x284a94: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x284A94u;
    {
        const bool branch_taken_0x284a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A94u;
        // 0x284a98: 0x8e360014  lw          $s6, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a94) {
            ctx->pc = 0x284ABCu;
            goto label_284abc;
        }
    }
    ctx->pc = 0x284A9Cu;
    // 0x284a9c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x284a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x284aa0: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284AA0u;
    {
        const bool branch_taken_0x284aa0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x284AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AA0u;
        // 0x284aa4: 0x2a620401  slti        $v0, $s3, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284aa0) {
            ctx->pc = 0x284AC0u;
            goto label_284ac0;
        }
    }
    ctx->pc = 0x284AA8u;
    // 0x284aa8: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x284AA8u;
    SET_GPR_U32(ctx, 31, 0x284AB0u);
    ctx->pc = 0x284AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284AA8u;
    // 0x284aac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x284AA8u, 0x284AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284AB0u;
label_284ab0:
    // 0x284ab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x284ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ab4: 0x52000068  beql        $s0, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x284AB4u;
    {
        const bool branch_taken_0x284ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x284ab4) {
            ctx->pc = 0x284AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284AB4u;
            // 0x284ab8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284C58u;
            goto label_284c58;
        }
    }
    ctx->pc = 0x284ABCu;
label_284abc:
    // 0x284abc: 0x2a620401  slti        $v0, $s3, 0x401
    ctx->pc = 0x284abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1025) ? 1 : 0);
label_284ac0:
    // 0x284ac0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x284AC0u;
    {
        const bool branch_taken_0x284ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284ac0) {
            ctx->pc = 0x284AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284AC0u;
            // 0x284ac4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284B04u;
            goto label_284b04;
        }
    }
    ctx->pc = 0x284AC8u;
    // 0x284ac8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x284ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x284acc: 0x5262000d  beql        $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284ACCu;
    {
        const bool branch_taken_0x284acc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x284acc) {
            ctx->pc = 0x284AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284ACCu;
            // 0x284ad0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284B04u;
            goto label_284b04;
        }
    }
    ctx->pc = 0x284AD4u;
    // 0x284ad4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x284AD4u;
    SET_GPR_U32(ctx, 31, 0x284ADCu);
    ctx->pc = 0x284AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284AD4u;
    // 0x284ad8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x284AD4u, 0x284ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284ADCu;
label_284adc:
    // 0x284adc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x284adcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ae0: 0x56c00008  bnel        $s6, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x284AE0u;
    {
        const bool branch_taken_0x284ae0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x284ae0) {
            ctx->pc = 0x284AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284AE0u;
            // 0x284ae4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284B04u;
            goto label_284b04;
        }
    }
    ctx->pc = 0x284AE8u;
    // 0x284ae8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x284ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x284aec: 0x1202005a  beq         $s0, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x284AECu;
    {
        const bool branch_taken_0x284aec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x284AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AECu;
        // 0x284af0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284aec) {
            ctx->pc = 0x284C58u;
            goto label_284c58;
        }
    }
    ctx->pc = 0x284AF4u;
    // 0x284af4: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x284AF4u;
    SET_GPR_U32(ctx, 31, 0x284AFCu);
    ctx->pc = 0x284AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284AF4u;
    // 0x284af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x284AF4u, 0x284AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284AFCu;
label_284afc:
    // 0x284afc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x284AFCu;
    {
        const bool branch_taken_0x284afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AFCu;
        // 0x284b00: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284afc) {
            ctx->pc = 0x284C58u;
            goto label_284c58;
        }
    }
    ctx->pc = 0x284B04u;
label_284b04:
    // 0x284b04: 0x50900008  beql        $a0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x284B04u;
    {
        const bool branch_taken_0x284b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x284b04) {
            ctx->pc = 0x284B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284B04u;
            // 0x284b08: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284B28u;
            goto label_284b28;
        }
    }
    ctx->pc = 0x284B0Cu;
    // 0x284b0c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x284B0Cu;
    SET_GPR_U32(ctx, 31, 0x284B14u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x284B0Cu, 0x284B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B14u;
label_284b14:
    // 0x284b14: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x284b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x284b18: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x284b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x284b1c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x284b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x284b20: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x284b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x284b24: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x284b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_284b28:
    // 0x284b28: 0x10960051  beq         $a0, $s6, . + 4 + (0x51 << 2)
    ctx->pc = 0x284B28u;
    {
        const bool branch_taken_0x284b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 22));
        ctx->pc = 0x284B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B28u;
        // 0x284b2c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b28) {
            ctx->pc = 0x284C70u;
            goto label_284c70;
        }
    }
    ctx->pc = 0x284B30u;
    // 0x284b30: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x284B30u;
    SET_GPR_U32(ctx, 31, 0x284B38u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x284B30u, 0x284B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B38u;
label_284b38:
    // 0x284b38: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x284b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x284b3c: 0xae360014  sw          $s6, 0x14($s1)
    ctx->pc = 0x284b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
    // 0x284b40: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x284b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x284b44: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x284B44u;
    {
        const bool branch_taken_0x284b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B44u;
        // 0x284b48: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b44) {
            ctx->pc = 0x284C50u;
            goto label_284c50;
        }
    }
    ctx->pc = 0x284B4Cu;
label_284b4c:
    // 0x284b4c: 0xc0a13ac  jal         func_284EB0
    ctx->pc = 0x284B4Cu;
    SET_GPR_U32(ctx, 31, 0x284B54u);
    ctx->pc = 0x284B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B4Cu;
    // 0x284b50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284EB0u, 0x284B4Cu, 0x284B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B54u;
label_284b54:
    // 0x284b54: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x284b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x284b58: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x284b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284b5c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x284b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284b60: 0xc0a1558  jal         func_285560
    ctx->pc = 0x284B60u;
    SET_GPR_U32(ctx, 31, 0x284B68u);
    ctx->pc = 0x284B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B60u;
    // 0x284b64: 0x24050065  addiu       $a1, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285560u, 0x284B60u, 0x284B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B68u;
label_284b68:
    // 0x284b68: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x284b68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284b6c: 0xc0a15ea  jal         func_2857A8
    ctx->pc = 0x284B6Cu;
    SET_GPR_U32(ctx, 31, 0x284B74u);
    ctx->pc = 0x284B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B6Cu;
    // 0x284b70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2857A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2857A8u, 0x284B6Cu, 0x284B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B74u;
label_284b74:
    // 0x284b74: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x284B74u;
    {
        const bool branch_taken_0x284b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B74u;
        // 0x284b78: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b74) {
            ctx->pc = 0x284C70u;
            goto label_284c70;
        }
    }
    ctx->pc = 0x284B7Cu;
label_284b7c:
    // 0x284b7c: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x284B7Cu;
    {
        const bool branch_taken_0x284b7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x284b7c) {
            ctx->pc = 0x284B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284B7Cu;
            // 0x284b80: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284BE4u;
            goto label_284be4;
        }
    }
    ctx->pc = 0x284B84u;
    // 0x284b84: 0x0  nop
    ctx->pc = 0x284b84u;
    // NOP
label_284b88:
    // 0x284b88: 0xc0a13ac  jal         func_284EB0
    ctx->pc = 0x284B88u;
    SET_GPR_U32(ctx, 31, 0x284B90u);
    ctx->pc = 0x284B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B88u;
    // 0x284b8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284EB0u, 0x284B88u, 0x284B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B90u;
label_284b90:
    // 0x284b90: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x284b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x284b94: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x284b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x284b98: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x284b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x284b9c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x284B9Cu;
    {
        const bool branch_taken_0x284b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B9Cu;
        // 0x284ba0: 0xc33023  subu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b9c) {
            ctx->pc = 0x284BD8u;
            goto label_284bd8;
        }
    }
    ctx->pc = 0x284BA4u;
    // 0x284ba4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x284ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x284ba8: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x284ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x284bac: 0xc0a14b0  jal         func_2852C0
    ctx->pc = 0x284BACu;
    SET_GPR_U32(ctx, 31, 0x284BB4u);
    ctx->pc = 0x284BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BACu;
    // 0x284bb0: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2852C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2852C0u, 0x284BACu, 0x284BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BB4u;
label_284bb4:
    // 0x284bb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x284bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284bb8: 0xc0a15ea  jal         func_2857A8
    ctx->pc = 0x284BB8u;
    SET_GPR_U32(ctx, 31, 0x284BC0u);
    ctx->pc = 0x284BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BB8u;
    // 0x284bbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2857A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2857A8u, 0x284BB8u, 0x284BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BC0u;
label_284bc0:
    // 0x284bc0: 0x1a00002b  blez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x284BC0u;
    {
        const bool branch_taken_0x284bc0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x284BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BC0u;
        // 0x284bc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bc0) {
            ctx->pc = 0x284C70u;
            goto label_284c70;
        }
    }
    ctx->pc = 0x284BC8u;
    // 0x284bc8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x284bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x284bcc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x284bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x284bd0: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x284BD0u;
    {
        const bool branch_taken_0x284bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BD0u;
        // 0x284bd4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bd0) {
            ctx->pc = 0x284B88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_284b88;
        }
    }
    ctx->pc = 0x284BD8u;
label_284bd8:
    // 0x284bd8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x284bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x284bdc: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x284bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x284be0: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x284be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_284be4:
    // 0x284be4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x284be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284be8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x284be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284bec: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x284becu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_284bf0:
    // 0x284bf0: 0xc0a1558  jal         func_285560
    ctx->pc = 0x284BF0u;
    SET_GPR_U32(ctx, 31, 0x284BF8u);
    ctx->pc = 0x285560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285560u, 0x284BF0u, 0x284BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BF8u;
label_284bf8:
    // 0x284bf8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x284BF8u;
    {
        const bool branch_taken_0x284bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BF8u;
        // 0x284bfc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bf8) {
            ctx->pc = 0x284C50u;
            goto label_284c50;
        }
    }
    ctx->pc = 0x284C00u;
label_284c00:
    // 0x284c00: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x284c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x284c04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x284c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284c08: 0x24050075  addiu       $a1, $zero, 0x75
    ctx->pc = 0x284c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x284c0c: 0xc0a1550  jal         func_285540
    ctx->pc = 0x284C0Cu;
    SET_GPR_U32(ctx, 31, 0x284C14u);
    ctx->pc = 0x284C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C0Cu;
    // 0x284c10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285540u, 0x284C0Cu, 0x284C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C14u;
label_284c14:
    // 0x284c14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284C14u;
    {
        const bool branch_taken_0x284c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C14u;
        // 0x284c18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c14) {
            ctx->pc = 0x284C34u;
            goto label_284c34;
        }
    }
    ctx->pc = 0x284C1Cu;
    // 0x284c1c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x284c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x284c20: 0x24050075  addiu       $a1, $zero, 0x75
    ctx->pc = 0x284c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x284c24: 0xc0a1550  jal         func_285540
    ctx->pc = 0x284C24u;
    SET_GPR_U32(ctx, 31, 0x284C2Cu);
    ctx->pc = 0x284C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C24u;
    // 0x284c28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285540u, 0x284C24u, 0x284C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C2Cu;
label_284c2c:
    // 0x284c2c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x284C2Cu;
    {
        const bool branch_taken_0x284c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C2Cu;
        // 0x284c30: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c2c) {
            ctx->pc = 0x284C70u;
            goto label_284c70;
        }
    }
    ctx->pc = 0x284C34u;
label_284c34:
    // 0x284c34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x284C34u;
    {
        const bool branch_taken_0x284c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C34u;
        // 0x284c38: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c34) {
            ctx->pc = 0x284C50u;
            goto label_284c50;
        }
    }
    ctx->pc = 0x284C3Cu;
label_284c3c:
    // 0x284c3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x284c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284c40: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x284c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284c44: 0xc0a1558  jal         func_285560
    ctx->pc = 0x284C44u;
    SET_GPR_U32(ctx, 31, 0x284C4Cu);
    ctx->pc = 0x284C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C44u;
    // 0x284c48: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285560u, 0x284C44u, 0x284C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C4Cu;
label_284c4c:
    // 0x284c4c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x284c4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284c50:
    // 0x284c50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x284C50u;
    {
        const bool branch_taken_0x284c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C50u;
        // 0x284c54: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c50) {
            ctx->pc = 0x284C70u;
            goto label_284c70;
        }
    }
    ctx->pc = 0x284C58u;
label_284c58:
    // 0x284c58: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x284c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x284c5c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x284c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x284c60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x284c60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284c64: 0xc0a5648  jal         func_295920
    ctx->pc = 0x284C64u;
    SET_GPR_U32(ctx, 31, 0x284C6Cu);
    ctx->pc = 0x284C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C64u;
    // 0x284c68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x284C64u, 0x284C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C6Cu;
label_284c6c:
    // 0x284c6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x284c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284c70:
    // 0x284c70: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x284c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x284c74: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x284c74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x284c78: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x284c78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x284c7c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x284c7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x284c80: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x284c80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284c84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x284c84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284c88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x284c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284c8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x284c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284c90: 0x3e00008  jr          $ra
    ctx->pc = 0x284C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C90u;
        // 0x284c94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284C98u;
    // 0x284c98: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x284c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x284c9c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x284c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x284ca0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x284ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x284ca4: 0x2416000a  addiu       $s6, $zero, 0xA
    ctx->pc = 0x284ca4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x284ca8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x284ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x284cac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x284cacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284cb0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x284cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x284cb4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x284cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x284cb8: 0x24d3ffff  addiu       $s3, $a2, -0x1
    ctx->pc = 0x284cb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x284cbc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x284cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x284cc0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x284cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x284cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_284cc8:
    // 0x284cc8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x284cc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ccc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x284cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x284cd0: 0xc0a13ac  jal         func_284EB0
    ctx->pc = 0x284CD0u;
    SET_GPR_U32(ctx, 31, 0x284CD8u);
    ctx->pc = 0x284CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284CD0u;
    // 0x284cd4: 0x8eb10020  lw          $s1, 0x20($s5) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284EB0u, 0x284CD0u, 0x284CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284CD8u;
label_284cd8:
    // 0x284cd8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x284cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_284cdc:
    // 0x284cdc: 0x1880002c  blez        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x284CDCu;
    {
        const bool branch_taken_0x284cdc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x284CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CDCu;
        // 0x284ce0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cdc) {
            ctx->pc = 0x284D90u;
            goto label_284d90;
        }
    }
    ctx->pc = 0x284CE4u;
    // 0x284ce4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x284ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x284ce8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x284ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x284cec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x284cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284cf0: 0x1880001b  blez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x284CF0u;
    {
        const bool branch_taken_0x284cf0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x284CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CF0u;
        // 0x284cf4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cf0) {
            ctx->pc = 0x284D60u;
            goto label_284d60;
        }
    }
    ctx->pc = 0x284CF8u;
    // 0x284cf8: 0x1a60001a  blez        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x284CF8u;
    {
        const bool branch_taken_0x284cf8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x284CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CF8u;
        // 0x284cfc: 0x901023  subu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cf8) {
            ctx->pc = 0x284D64u;
            goto label_284d64;
        }
    }
    ctx->pc = 0x284D00u;
    // 0x284d00: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x284d00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x284d04: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x284d04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x284d08: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x284d08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x284d0c: 0x14560004  bne         $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x284D0Cu;
    {
        const bool branch_taken_0x284d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x284D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D0Cu;
        // 0x284d10: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d0c) {
            ctx->pc = 0x284D20u;
            goto label_284d20;
        }
    }
    ctx->pc = 0x284D14u;
    // 0x284d14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x284d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284d18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x284D18u;
    {
        const bool branch_taken_0x284d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D18u;
        // 0x284d1c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d18) {
            ctx->pc = 0x284D58u;
            goto label_284d58;
        }
    }
    ctx->pc = 0x284D20u;
label_284d20:
    // 0x284d20: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x284d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x284d24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x284d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x284d28: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x284d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x284d2c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x284D2Cu;
    {
        const bool branch_taken_0x284d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D2Cu;
        // 0x284d30: 0x213102a  slt         $v0, $s0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d2c) {
            ctx->pc = 0x284D5Cu;
            goto label_284d5c;
        }
    }
    ctx->pc = 0x284D34u;
    // 0x284d34: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x284D34u;
    {
        const bool branch_taken_0x284d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D34u;
        // 0x284d38: 0xb01021  addu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d34) {
            ctx->pc = 0x284D5Cu;
            goto label_284d5c;
        }
    }
    ctx->pc = 0x284D3Cu;
    // 0x284d3c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x284d3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284d40: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x284d40u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x284d44: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x284d44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284d48: 0x1476fff5  bne         $v1, $s6, . + 4 + (-0xB << 2)
    ctx->pc = 0x284D48u;
    {
        const bool branch_taken_0x284d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x284D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D48u;
        // 0x284d4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d48) {
            ctx->pc = 0x284D20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_284d20;
        }
    }
    ctx->pc = 0x284D50u;
    // 0x284d50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x284d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284d54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x284d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_284d58:
    // 0x284d58: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x284d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_284d5c:
    // 0x284d5c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x284d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_284d60:
    // 0x284d60: 0x901023  subu        $v0, $a0, $s0
    ctx->pc = 0x284d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_284d64:
    // 0x284d64: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x284d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x284d68: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x284d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x284d6c: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x284d6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x284d70: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x284d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x284d74: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x284D74u;
    {
        const bool branch_taken_0x284d74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x284D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D74u;
        // 0x284d78: 0x2709823  subu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d74) {
            ctx->pc = 0x284D84u;
            goto label_284d84;
        }
    }
    ctx->pc = 0x284D7Cu;
    // 0x284d7c: 0x5613ffd7  bnel        $s0, $s3, . + 4 + (-0x29 << 2)
    ctx->pc = 0x284D7Cu;
    {
        const bool branch_taken_0x284d7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x284d7c) {
            ctx->pc = 0x284D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284D7Cu;
            // 0x284d80: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284CDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_284cdc;
        }
    }
    ctx->pc = 0x284D84u;
label_284d84:
    // 0x284d84: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x284d84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x284d88: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x284D88u;
    {
        const bool branch_taken_0x284d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D88u;
        // 0x284d8c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d88) {
            ctx->pc = 0x284DE0u;
            goto label_284de0;
        }
    }
    ctx->pc = 0x284D90u;
label_284d90:
    // 0x284d90: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x284d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x284d94: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x284d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x284d98: 0xc0a1468  jal         func_2851A0
    ctx->pc = 0x284D98u;
    SET_GPR_U32(ctx, 31, 0x284DA0u);
    ctx->pc = 0x284D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284D98u;
    // 0x284d9c: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851A0u, 0x284D98u, 0x284DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284DA0u;
label_284da0:
    // 0x284da0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x284da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284da4: 0x5e00000c  bgtzl       $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x284DA4u;
    {
        const bool branch_taken_0x284da4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x284da4) {
            ctx->pc = 0x284DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284DA4u;
            // 0x284da8: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284DD8u;
            goto label_284dd8;
        }
    }
    ctx->pc = 0x284DACu;
    // 0x284dac: 0xc0a15ea  jal         func_2857A8
    ctx->pc = 0x284DACu;
    SET_GPR_U32(ctx, 31, 0x284DB4u);
    ctx->pc = 0x284DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284DACu;
    // 0x284db0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2857A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2857A8u, 0x284DACu, 0x284DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284DB4u;
label_284db4:
    // 0x284db4: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284DB4u;
    {
        const bool branch_taken_0x284db4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x284DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DB4u;
        // 0x284db8: 0x14182a  slt         $v1, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284db4) {
            ctx->pc = 0x284DC8u;
            goto label_284dc8;
        }
    }
    ctx->pc = 0x284DBCu;
    // 0x284dbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x284dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284dc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x284DC0u;
    {
        const bool branch_taken_0x284dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DC0u;
        // 0x284dc4: 0x283100b  movn        $v0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284dc0) {
            ctx->pc = 0x284DE0u;
            goto label_284de0;
        }
    }
    ctx->pc = 0x284DC8u;
label_284dc8:
    // 0x284dc8: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x284DC8u;
    {
        const bool branch_taken_0x284dc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x284dc8) {
            ctx->pc = 0x284DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284DC8u;
            // 0x284dcc: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284DD8u;
            goto label_284dd8;
        }
    }
    ctx->pc = 0x284DD0u;
    // 0x284dd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x284DD0u;
    {
        const bool branch_taken_0x284dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DD0u;
        // 0x284dd4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284dd0) {
            ctx->pc = 0x284DE0u;
            goto label_284de0;
        }
    }
    ctx->pc = 0x284DD8u;
label_284dd8:
    // 0x284dd8: 0x1000ffbf  b           . + 4 + (-0x41 << 2)
    ctx->pc = 0x284DD8u;
    {
        const bool branch_taken_0x284dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DD8u;
        // 0x284ddc: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284dd8) {
            ctx->pc = 0x284CD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_284cd8;
        }
    }
    ctx->pc = 0x284DE0u;
label_284de0:
    // 0x284de0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x284de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x284de4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x284de4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x284de8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x284de8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x284dec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x284decu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x284df0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x284df0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284df4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x284df4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284df8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x284df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284dfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x284dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284e00: 0x3e00008  jr          $ra
    ctx->pc = 0x284E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E00u;
        // 0x284e04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284E08u;
    // 0x284e08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284e0c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x284e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x284e10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x284e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x284e14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x284e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284e18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x284e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284e1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x284e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x284e20: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x284E20u;
    SET_GPR_U32(ctx, 31, 0x284E28u);
    ctx->pc = 0x284E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284E20u;
    // 0x284e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x284E20u, 0x284E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E28u;
label_284e28:
    // 0x284e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284e2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x284e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284e30: 0xc0a14b0  jal         func_2852C0
    ctx->pc = 0x284E30u;
    SET_GPR_U32(ctx, 31, 0x284E38u);
    ctx->pc = 0x284E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284E30u;
    // 0x284e34: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2852C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2852C0u, 0x284E30u, 0x284E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E38u;
label_284e38:
    // 0x284e38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x284e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284e3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x284e3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284e40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x284e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284e44: 0x3e00008  jr          $ra
    ctx->pc = 0x284E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E44u;
        // 0x284e48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284E4Cu;
    // 0x284e4c: 0x0  nop
    ctx->pc = 0x284e4cu;
    // NOP
    if (ctx->pc == 0x284e4cu) { ctx->pc = 0x284e50u; }
}
