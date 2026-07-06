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

// Function: sub_002303B8
// Address: 0x2303b8 - 0x230488
void sub_002303B8_0x2303b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002303B8_0x2303b8");
#endif

    switch (ctx->pc) {
        case 0x2303ecu: goto label_2303ec;
        case 0x230400u: goto label_230400;
        case 0x23041cu: goto label_23041c;
        case 0x23043cu: goto label_23043c;
        case 0x230454u: goto label_230454;
        case 0x230470u: goto label_230470;
        default: break;
    }

    ctx->pc = 0x2303b8u;

    // 0x2303b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2303b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2303bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2303bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2303c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2303c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2303c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2303c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2303c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2303c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2303cc: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x2303ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2303d0: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x2303d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2303d4: 0x3042fdf3  andi        $v0, $v0, 0xFDF3
    ctx->pc = 0x2303d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65011);
    // 0x2303d8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2303d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2303dc: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2303DCu;
    {
        const bool branch_taken_0x2303dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303DCu;
        // 0x2303e0: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303dc) {
            ctx->pc = 0x230434u;
            goto label_230434;
        }
    }
    ctx->pc = 0x2303E4u;
    // 0x2303e4: 0xc08c1d4  jal         func_230750
    ctx->pc = 0x2303E4u;
    SET_GPR_U32(ctx, 31, 0x2303ECu);
    ctx->pc = 0x2303E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2303E4u;
    // 0x2303e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230750u, 0x2303E4u, 0x2303ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303ECu;
label_2303ec:
    // 0x2303ec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2303ECu;
    {
        const bool branch_taken_0x2303ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303ECu;
        // 0x2303f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303ec) {
            ctx->pc = 0x230434u;
            goto label_230434;
        }
    }
    ctx->pc = 0x2303F4u;
    // 0x2303f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2303f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2303f8: 0xc08c1bc  jal         func_2306F0
    ctx->pc = 0x2303F8u;
    SET_GPR_U32(ctx, 31, 0x230400u);
    ctx->pc = 0x2303FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2303F8u;
    // 0x2303fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2306F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2306F0u, 0x2303F8u, 0x230400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230400u;
label_230400:
    // 0x230400: 0x96220078  lhu         $v0, 0x78($s1)
    ctx->pc = 0x230400u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x230404: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x230404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x230408: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x230408u;
    {
        const bool branch_taken_0x230408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230408) {
            ctx->pc = 0x23040Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230408u;
            // 0x23040c: 0x26240036  addiu       $a0, $s1, 0x36 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 54));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230420u;
            goto label_230420;
        }
    }
    ctx->pc = 0x230410u;
    // 0x230410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230414: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x230414u;
    SET_GPR_U32(ctx, 31, 0x23041Cu);
    ctx->pc = 0x230418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230414u;
    // 0x230418: 0x26250048  addiu       $a1, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x230414u, 0x23041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23041Cu;
label_23041c:
    // 0x23041c: 0x26240036  addiu       $a0, $s1, 0x36
    ctx->pc = 0x23041cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 54));
label_230420:
    // 0x230420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x230420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230424: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x230424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23042c: 0x808b6f0  j           func_22DBC0
    ctx->pc = 0x23042Cu;
    ctx->pc = 0x230430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23042Cu;
    // 0x230430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DBC0u;
    sub_0022DBC0_0x22dbc0(rdram, ctx, runtime); return;
    ctx->pc = 0x230434u;
label_230434:
    // 0x230434: 0xc08b6f0  jal         func_22DBC0
    ctx->pc = 0x230434u;
    SET_GPR_U32(ctx, 31, 0x23043Cu);
    ctx->pc = 0x230438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230434u;
    // 0x230438: 0x26040036  addiu       $a0, $s0, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DBC0u, 0x230434u, 0x23043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23043Cu;
label_23043c:
    // 0x23043c: 0x96020078  lhu         $v0, 0x78($s0)
    ctx->pc = 0x23043cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x230440: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x230440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x230444: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x230444u;
    {
        const bool branch_taken_0x230444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230444u;
        // 0x230448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230444) {
            ctx->pc = 0x230458u;
            goto label_230458;
        }
    }
    ctx->pc = 0x23044Cu;
    // 0x23044c: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x23044Cu;
    SET_GPR_U32(ctx, 31, 0x230454u);
    ctx->pc = 0x230450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23044Cu;
    // 0x230450: 0x26050048  addiu       $a1, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x23044Cu, 0x230454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230454u;
label_230454:
    // 0x230454: 0x0  nop
    ctx->pc = 0x230454u;
    // NOP
label_230458:
    // 0x230458: 0x960200b0  lhu         $v0, 0xB0($s0)
    ctx->pc = 0x230458u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x23045c: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x23045cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x230460: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230460u;
    {
        const bool branch_taken_0x230460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230460u;
        // 0x230464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230460) {
            ctx->pc = 0x230470u;
            goto label_230470;
        }
    }
    ctx->pc = 0x230468u;
    // 0x230468: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x230468u;
    SET_GPR_U32(ctx, 31, 0x230470u);
    ctx->pc = 0x23046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230468u;
    // 0x23046c: 0x24850080  addiu       $a1, $a0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x230468u, 0x230470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230470u;
label_230470:
    // 0x230470: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x230470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230474: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x230474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23047c: 0x3e00008  jr          $ra
    ctx->pc = 0x23047Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23047Cu;
        // 0x230480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23047Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230484u;
    // 0x230484: 0x0  nop
    ctx->pc = 0x230484u;
    // NOP
    if (ctx->pc == 0x230484u) { ctx->pc = 0x230488u; }
}
