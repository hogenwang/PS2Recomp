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

// Function: sub_002963A0
// Address: 0x2963a0 - 0x296420
void sub_002963A0_0x2963a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002963A0_0x2963a0");
#endif

    switch (ctx->pc) {
        case 0x2963a0u: goto label_2963a0;
        case 0x2963a4u: goto label_2963a4;
        case 0x2963a8u: goto label_2963a8;
        case 0x2963acu: goto label_2963ac;
        case 0x2963b0u: goto label_2963b0;
        case 0x2963b4u: goto label_2963b4;
        case 0x2963b8u: goto label_2963b8;
        case 0x2963bcu: goto label_2963bc;
        case 0x2963c0u: goto label_2963c0;
        case 0x2963c4u: goto label_2963c4;
        case 0x2963c8u: goto label_2963c8;
        case 0x2963ccu: goto label_2963cc;
        case 0x2963d0u: goto label_2963d0;
        case 0x2963d4u: goto label_2963d4;
        case 0x2963d8u: goto label_2963d8;
        case 0x2963dcu: goto label_2963dc;
        case 0x2963e0u: goto label_2963e0;
        case 0x2963e4u: goto label_2963e4;
        case 0x2963e8u: goto label_2963e8;
        case 0x2963ecu: goto label_2963ec;
        case 0x2963f0u: goto label_2963f0;
        case 0x2963f4u: goto label_2963f4;
        case 0x2963f8u: goto label_2963f8;
        case 0x2963fcu: goto label_2963fc;
        case 0x296400u: goto label_296400;
        case 0x296404u: goto label_296404;
        case 0x296408u: goto label_296408;
        case 0x29640cu: goto label_29640c;
        case 0x296410u: goto label_296410;
        case 0x296414u: goto label_296414;
        case 0x296418u: goto label_296418;
        case 0x29641cu: goto label_29641c;
        default: break;
    }

    ctx->pc = 0x2963a0u;

label_2963a0:
    // 0x2963a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2963a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2963a4:
    // 0x2963a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2963a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2963a8:
    // 0x2963a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2963a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2963ac:
    // 0x2963ac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2963acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2963b0:
    // 0x2963b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2963b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2963b4:
    // 0x2963b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2963b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2963b8:
    // 0x2963b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2963b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2963bc:
    // 0x2963bc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_2963c0:
    if (ctx->pc == 0x2963C0u) {
        ctx->pc = 0x2963C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2963BCu;
        // 0x2963c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2963C4u;
        goto label_2963c4;
    }
    ctx->pc = 0x2963BCu;
    {
        const bool branch_taken_0x2963bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2963C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2963BCu;
        // 0x2963c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2963bc) {
            ctx->pc = 0x2963DCu;
            goto label_2963dc;
        }
    }
    ctx->pc = 0x2963C4u;
label_2963c4:
    // 0x2963c4: 0xc0a583c  jal         func_2960F0
label_2963c8:
    if (ctx->pc == 0x2963C8u) {
        ctx->pc = 0x2963CCu;
        goto label_2963cc;
    }
    ctx->pc = 0x2963C4u;
    SET_GPR_U32(ctx, 31, 0x2963CCu);
    ctx->pc = 0x2960F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2960F0u, 0x2963C4u, 0x2963CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2963CCu;
label_2963cc:
    // 0x2963cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2963d0:
    if (ctx->pc == 0x2963D0u) {
        ctx->pc = 0x2963D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2963CCu;
        // 0x2963d0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2963D4u;
        goto label_2963d4;
    }
    ctx->pc = 0x2963CCu;
    {
        const bool branch_taken_0x2963cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2963cc) {
            ctx->pc = 0x2963D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2963CCu;
            // 0x2963d0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2963E0u;
            goto label_2963e0;
        }
    }
    ctx->pc = 0x2963D4u;
label_2963d4:
    // 0x2963d4: 0x1000000b  b           . + 4 + (0xB << 2)
label_2963d8:
    if (ctx->pc == 0x2963D8u) {
        ctx->pc = 0x2963D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2963D4u;
        // 0x2963d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2963DCu;
        goto label_2963dc;
    }
    ctx->pc = 0x2963D4u;
    {
        const bool branch_taken_0x2963d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2963D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2963D4u;
        // 0x2963d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2963d4) {
            ctx->pc = 0x296404u;
            goto label_296404;
        }
    }
    ctx->pc = 0x2963DCu;
label_2963dc:
    // 0x2963dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2963dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2963e0:
    // 0x2963e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2963e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2963e4:
    // 0x2963e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2963e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2963e8:
    // 0x2963e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2963e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2963ec:
    // 0x2963ec: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2963ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2963f0:
    // 0x2963f0: 0x60f809  jalr        $v1
label_2963f4:
    if (ctx->pc == 0x2963F4u) {
        ctx->pc = 0x2963F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2963F0u;
        // 0x2963f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2963F8u;
        goto label_2963f8;
    }
    ctx->pc = 0x2963F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2963F8u);
        ctx->pc = 0x2963F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2963F0u;
        // 0x2963f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2963F0u, 0x2963F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2963F8u;
label_2963f8:
    // 0x2963f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2963f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2963fc:
    // 0x2963fc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2963fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_296400:
    // 0x296400: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x296400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_296404:
    // 0x296404: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x296404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_296408:
    // 0x296408: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x296408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29640c:
    // 0x29640c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29640cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_296410:
    // 0x296410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_296414:
    // 0x296414: 0x3e00008  jr          $ra
label_296418:
    if (ctx->pc == 0x296418u) {
        ctx->pc = 0x296418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296414u;
        // 0x296418: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29641Cu;
        goto label_29641c;
    }
    ctx->pc = 0x296414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296414u;
        // 0x296418: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29641Cu;
label_29641c:
    // 0x29641c: 0x0  nop
    ctx->pc = 0x29641cu;
    // NOP
    if (ctx->pc == 0x29641cu) { ctx->pc = 0x296420u; }
}
