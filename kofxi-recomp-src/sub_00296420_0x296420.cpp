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

// Function: sub_00296420
// Address: 0x296420 - 0x2964a0
void sub_00296420_0x296420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296420_0x296420");
#endif

    switch (ctx->pc) {
        case 0x296420u: goto label_296420;
        case 0x296424u: goto label_296424;
        case 0x296428u: goto label_296428;
        case 0x29642cu: goto label_29642c;
        case 0x296430u: goto label_296430;
        case 0x296434u: goto label_296434;
        case 0x296438u: goto label_296438;
        case 0x29643cu: goto label_29643c;
        case 0x296440u: goto label_296440;
        case 0x296444u: goto label_296444;
        case 0x296448u: goto label_296448;
        case 0x29644cu: goto label_29644c;
        case 0x296450u: goto label_296450;
        case 0x296454u: goto label_296454;
        case 0x296458u: goto label_296458;
        case 0x29645cu: goto label_29645c;
        case 0x296460u: goto label_296460;
        case 0x296464u: goto label_296464;
        case 0x296468u: goto label_296468;
        case 0x29646cu: goto label_29646c;
        case 0x296470u: goto label_296470;
        case 0x296474u: goto label_296474;
        case 0x296478u: goto label_296478;
        case 0x29647cu: goto label_29647c;
        case 0x296480u: goto label_296480;
        case 0x296484u: goto label_296484;
        case 0x296488u: goto label_296488;
        case 0x29648cu: goto label_29648c;
        case 0x296490u: goto label_296490;
        case 0x296494u: goto label_296494;
        case 0x296498u: goto label_296498;
        case 0x29649cu: goto label_29649c;
        default: break;
    }

    ctx->pc = 0x296420u;

label_296420:
    // 0x296420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x296420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_296424:
    // 0x296424: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x296424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_296428:
    // 0x296428: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x296428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_29642c:
    // 0x29642c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x29642cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_296430:
    // 0x296430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_296434:
    // 0x296434: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x296434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_296438:
    // 0x296438: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x296438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29643c:
    // 0x29643c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_296440:
    if (ctx->pc == 0x296440u) {
        ctx->pc = 0x296440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29643Cu;
        // 0x296440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296444u;
        goto label_296444;
    }
    ctx->pc = 0x29643Cu;
    {
        const bool branch_taken_0x29643c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x296440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29643Cu;
        // 0x296440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29643c) {
            ctx->pc = 0x29645Cu;
            goto label_29645c;
        }
    }
    ctx->pc = 0x296444u;
label_296444:
    // 0x296444: 0xc0a583c  jal         func_2960F0
label_296448:
    if (ctx->pc == 0x296448u) {
        ctx->pc = 0x29644Cu;
        goto label_29644c;
    }
    ctx->pc = 0x296444u;
    SET_GPR_U32(ctx, 31, 0x29644Cu);
    ctx->pc = 0x2960F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2960F0u, 0x296444u, 0x29644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29644Cu;
label_29644c:
    // 0x29644c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_296450:
    if (ctx->pc == 0x296450u) {
        ctx->pc = 0x296450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29644Cu;
        // 0x296450: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296454u;
        goto label_296454;
    }
    ctx->pc = 0x29644Cu;
    {
        const bool branch_taken_0x29644c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29644c) {
            ctx->pc = 0x296450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29644Cu;
            // 0x296450: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296460u;
            goto label_296460;
        }
    }
    ctx->pc = 0x296454u;
label_296454:
    // 0x296454: 0x1000000b  b           . + 4 + (0xB << 2)
label_296458:
    if (ctx->pc == 0x296458u) {
        ctx->pc = 0x296458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296454u;
        // 0x296458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29645Cu;
        goto label_29645c;
    }
    ctx->pc = 0x296454u;
    {
        const bool branch_taken_0x296454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296454u;
        // 0x296458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296454) {
            ctx->pc = 0x296484u;
            goto label_296484;
        }
    }
    ctx->pc = 0x29645Cu;
label_29645c:
    // 0x29645c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_296460:
    // 0x296460: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x296460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_296464:
    // 0x296464: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x296464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_296468:
    // 0x296468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29646c:
    // 0x29646c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x29646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_296470:
    // 0x296470: 0x40f809  jalr        $v0
label_296474:
    if (ctx->pc == 0x296474u) {
        ctx->pc = 0x296474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296470u;
        // 0x296474: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296478u;
        goto label_296478;
    }
    ctx->pc = 0x296470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x296478u);
        ctx->pc = 0x296474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296470u;
        // 0x296474: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296470u, 0x296478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296478u;
label_296478:
    // 0x296478: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x296478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_29647c:
    // 0x29647c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29647cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_296480:
    // 0x296480: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x296480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_296484:
    // 0x296484: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x296484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_296488:
    // 0x296488: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x296488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29648c:
    // 0x29648c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29648cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_296490:
    // 0x296490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_296494:
    // 0x296494: 0x3e00008  jr          $ra
label_296498:
    if (ctx->pc == 0x296498u) {
        ctx->pc = 0x296498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296494u;
        // 0x296498: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29649Cu;
        goto label_29649c;
    }
    ctx->pc = 0x296494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296494u;
        // 0x296498: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29649Cu;
label_29649c:
    // 0x29649c: 0x0  nop
    ctx->pc = 0x29649cu;
    // NOP
    if (ctx->pc == 0x29649cu) { ctx->pc = 0x2964a0u; }
}
