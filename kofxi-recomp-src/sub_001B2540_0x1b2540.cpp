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

// Function: sub_001B2540
// Address: 0x1b2540 - 0x1b2630
void sub_001B2540_0x1b2540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2540_0x1b2540");
#endif

    switch (ctx->pc) {
        case 0x1b25b0u: goto label_1b25b0;
        case 0x1b25c0u: goto label_1b25c0;
        case 0x1b25ccu: goto label_1b25cc;
        case 0x1b260cu: goto label_1b260c;
        case 0x1b2614u: goto label_1b2614;
        case 0x1b261cu: goto label_1b261c;
        default: break;
    }

    ctx->pc = 0x1b2540u;

    // 0x1b2540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2544: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2548: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b2548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b254c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b254cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2550: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b2550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2554: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b2554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b2558: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b2558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b255c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b255cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2560: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2560u;
    {
        const bool branch_taken_0x1b2560 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2560u;
        // 0x1b2564: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2560) {
            ctx->pc = 0x1B2580u;
            goto label_1b2580;
        }
    }
    ctx->pc = 0x1B2568u;
    // 0x1b2568: 0x5e400006  bgtzl       $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2568u;
    {
        const bool branch_taken_0x1b2568 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x1b2568) {
            ctx->pc = 0x1B256Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2568u;
            // 0x1b256c: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2584u;
            goto label_1b2584;
        }
    }
    ctx->pc = 0x1B2570u;
    // 0x1b2570: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b2570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b2574: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x1b2574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1b2578: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2578u;
    {
        const bool branch_taken_0x1b2578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2578) {
            ctx->pc = 0x1B257Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2578u;
            // 0x1b257c: 0x8e300094  lw          $s0, 0x94($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B25A8u;
            goto label_1b25a8;
        }
    }
    ctx->pc = 0x1B2580u;
label_1b2580:
    // 0x1b2580: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b2580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1b2584:
    // 0x1b2584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b258c: 0x24847d30  addiu       $a0, $a0, 0x7D30
    ctx->pc = 0x1b258cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32048));
    // 0x1b2590: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2594: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2594u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2598: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b2598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b259c: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1B259Cu;
    ctx->pc = 0x1B25A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B259Cu;
    // 0x1b25a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1B25A4u;
    // 0x1b25a4: 0x0  nop
    ctx->pc = 0x1b25a4u;
    // NOP
label_1b25a8:
    // 0x1b25a8: 0xc0718ae  jal         func_1C62B8
    ctx->pc = 0x1B25A8u;
    SET_GPR_U32(ctx, 31, 0x1B25B0u);
    ctx->pc = 0x1B25ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B25A8u;
    // 0x1b25ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C62B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C62B8u, 0x1B25A8u, 0x1B25B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25B0u;
label_1b25b0:
    // 0x1b25b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b25b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b25b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25b8: 0xc06c85a  jal         func_1B2168
    ctx->pc = 0x1B25B8u;
    SET_GPR_U32(ctx, 31, 0x1B25C0u);
    ctx->pc = 0x1B25BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B25B8u;
    // 0x1b25bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2168u, 0x1B25B8u, 0x1B25C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25C0u;
label_1b25c0:
    // 0x1b25c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b25c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25c4: 0xc071a92  jal         func_1C6A48
    ctx->pc = 0x1B25C4u;
    SET_GPR_U32(ctx, 31, 0x1B25CCu);
    ctx->pc = 0x1B25C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B25C4u;
    // 0x1b25c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6A48u, 0x1B25C4u, 0x1B25CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25CCu;
label_1b25cc:
    // 0x1b25cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b25ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b25d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b25d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b25d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b25d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b25d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b25dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b25dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b25e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b25e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b25e4: 0x806c898  j           func_1B2260
    ctx->pc = 0x1B25E4u;
    ctx->pc = 0x1B25E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B25E4u;
    // 0x1b25e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2260u;
    sub_001B2260_0x1b2260(rdram, ctx, runtime); return;
    ctx->pc = 0x1B25ECu;
    // 0x1b25ec: 0x0  nop
    ctx->pc = 0x1b25ecu;
    // NOP
    // 0x1b25f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B25F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B25F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B25F8u;
    // 0x1b25f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b25f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b25fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b25fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2600: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b2600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b2604: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B2604u;
    SET_GPR_U32(ctx, 31, 0x1B260Cu);
    ctx->pc = 0x1B2608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2604u;
    // 0x1b2608: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B2604u, 0x1B260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B260Cu;
label_1b260c:
    // 0x1b260c: 0xc06c98c  jal         func_1B2630
    ctx->pc = 0x1B260Cu;
    SET_GPR_U32(ctx, 31, 0x1B2614u);
    ctx->pc = 0x1B2610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B260Cu;
    // 0x1b2610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2630u, 0x1B260Cu, 0x1B2614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2614u;
label_1b2614:
    // 0x1b2614: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1B2614u;
    SET_GPR_U32(ctx, 31, 0x1B261Cu);
    ctx->pc = 0x1B2618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2614u;
    // 0x1b2618: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1B2614u, 0x1B261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B261Cu;
label_1b261c:
    // 0x1b261c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b261cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2620: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b2620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2628: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2628u;
        // 0x1b262c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2630u;
}
