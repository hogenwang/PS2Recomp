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

// Function: sub_001E5300
// Address: 0x1e5300 - 0x1e53a0
void sub_001E5300_0x1e5300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5300_0x1e5300");
#endif

    switch (ctx->pc) {
        case 0x1e5300u: goto label_1e5300;
        case 0x1e5304u: goto label_1e5304;
        case 0x1e5308u: goto label_1e5308;
        case 0x1e530cu: goto label_1e530c;
        case 0x1e5310u: goto label_1e5310;
        case 0x1e5314u: goto label_1e5314;
        case 0x1e5318u: goto label_1e5318;
        case 0x1e531cu: goto label_1e531c;
        case 0x1e5320u: goto label_1e5320;
        case 0x1e5324u: goto label_1e5324;
        case 0x1e5328u: goto label_1e5328;
        case 0x1e532cu: goto label_1e532c;
        case 0x1e5330u: goto label_1e5330;
        case 0x1e5334u: goto label_1e5334;
        case 0x1e5338u: goto label_1e5338;
        case 0x1e533cu: goto label_1e533c;
        case 0x1e5340u: goto label_1e5340;
        case 0x1e5344u: goto label_1e5344;
        case 0x1e5348u: goto label_1e5348;
        case 0x1e534cu: goto label_1e534c;
        case 0x1e5350u: goto label_1e5350;
        case 0x1e5354u: goto label_1e5354;
        case 0x1e5358u: goto label_1e5358;
        case 0x1e535cu: goto label_1e535c;
        case 0x1e5360u: goto label_1e5360;
        case 0x1e5364u: goto label_1e5364;
        case 0x1e5368u: goto label_1e5368;
        case 0x1e536cu: goto label_1e536c;
        case 0x1e5370u: goto label_1e5370;
        case 0x1e5374u: goto label_1e5374;
        case 0x1e5378u: goto label_1e5378;
        case 0x1e537cu: goto label_1e537c;
        case 0x1e5380u: goto label_1e5380;
        case 0x1e5384u: goto label_1e5384;
        case 0x1e5388u: goto label_1e5388;
        case 0x1e538cu: goto label_1e538c;
        case 0x1e5390u: goto label_1e5390;
        case 0x1e5394u: goto label_1e5394;
        case 0x1e5398u: goto label_1e5398;
        case 0x1e539cu: goto label_1e539c;
        default: break;
    }

    ctx->pc = 0x1e5300u;

label_1e5300:
    // 0x1e5300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e5304:
    // 0x1e5304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e5304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e5308:
    // 0x1e5308: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e5308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1e530c:
    // 0x1e530c: 0xc078a58  jal         func_1E2960
label_1e5310:
    if (ctx->pc == 0x1E5310u) {
        ctx->pc = 0x1E5310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E530Cu;
        // 0x1e5310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5314u;
        goto label_1e5314;
    }
    ctx->pc = 0x1E530Cu;
    SET_GPR_U32(ctx, 31, 0x1E5314u);
    ctx->pc = 0x1E5310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E530Cu;
    // 0x1e5310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E530Cu, 0x1E5314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5314u;
label_1e5314:
    // 0x1e5314: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5318:
    // 0x1e5318: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e5318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e531c:
    // 0x1e531c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_1e5320:
    if (ctx->pc == 0x1E5320u) {
        ctx->pc = 0x1E5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E531Cu;
        // 0x1e5320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5324u;
        goto label_1e5324;
    }
    ctx->pc = 0x1E531Cu;
    {
        const bool branch_taken_0x1e531c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E531Cu;
        // 0x1e5320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e531c) {
            ctx->pc = 0x1E5340u;
            goto label_1e5340;
        }
    }
    ctx->pc = 0x1E5324u;
label_1e5324:
    // 0x1e5324: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e5324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1e5328:
    // 0x1e5328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e532c:
    // 0x1e532c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e532cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e5330:
    // 0x1e5330: 0x2484e140  addiu       $a0, $a0, -0x1EC0
    ctx->pc = 0x1e5330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959424));
label_1e5334:
    // 0x1e5334: 0x8079afa  j           func_1E6BE8
label_1e5338:
    if (ctx->pc == 0x1E5338u) {
        ctx->pc = 0x1E5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5334u;
        // 0x1e5338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E533Cu;
        goto label_1e533c;
    }
    ctx->pc = 0x1E5334u;
    ctx->pc = 0x1E5338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5334u;
    // 0x1e5338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E533Cu;
label_1e533c:
    // 0x1e533c: 0x0  nop
    ctx->pc = 0x1e533cu;
    // NOP
label_1e5340:
    // 0x1e5340: 0xc0796a0  jal         func_1E5A80
label_1e5344:
    if (ctx->pc == 0x1E5344u) {
        ctx->pc = 0x1E5348u;
        goto label_1e5348;
    }
    ctx->pc = 0x1E5340u;
    SET_GPR_U32(ctx, 31, 0x1E5348u);
    ctx->pc = 0x1E5A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5A80u, 0x1E5340u, 0x1E5348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5348u;
label_1e5348:
    // 0x1e5348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e534c:
    // 0x1e534c: 0xc07858e  jal         func_1E1638
label_1e5350:
    if (ctx->pc == 0x1E5350u) {
        ctx->pc = 0x1E5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E534Cu;
        // 0x1e5350: 0x8e0503c4  lw          $a1, 0x3C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5354u;
        goto label_1e5354;
    }
    ctx->pc = 0x1E534Cu;
    SET_GPR_U32(ctx, 31, 0x1E5354u);
    ctx->pc = 0x1E5350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E534Cu;
    // 0x1e5350: 0x8e0503c4  lw          $a1, 0x3C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1638u, 0x1E534Cu, 0x1E5354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5354u;
label_1e5354:
    // 0x1e5354: 0xc078686  jal         func_1E1A18
label_1e5358:
    if (ctx->pc == 0x1E5358u) {
        ctx->pc = 0x1E5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5354u;
        // 0x1e5358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E535Cu;
        goto label_1e535c;
    }
    ctx->pc = 0x1E5354u;
    SET_GPR_U32(ctx, 31, 0x1E535Cu);
    ctx->pc = 0x1E5358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5354u;
    // 0x1e5358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A18u, 0x1E5354u, 0x1E535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E535Cu;
label_1e535c:
    // 0x1e535c: 0xc071888  jal         func_1C6220
label_1e5360:
    if (ctx->pc == 0x1E5360u) {
        ctx->pc = 0x1E5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E535Cu;
        // 0x1e5360: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5364u;
        goto label_1e5364;
    }
    ctx->pc = 0x1E535Cu;
    SET_GPR_U32(ctx, 31, 0x1E5364u);
    ctx->pc = 0x1E5360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E535Cu;
    // 0x1e5360: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6220u, 0x1E535Cu, 0x1E5364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5364u;
label_1e5364:
    // 0x1e5364: 0x8e0203c0  lw          $v0, 0x3C0($s0)
    ctx->pc = 0x1e5364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
label_1e5368:
    // 0x1e5368: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e536c:
    if (ctx->pc == 0x1E536Cu) {
        ctx->pc = 0x1E536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5368u;
        // 0x1e536c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5370u;
        goto label_1e5370;
    }
    ctx->pc = 0x1E5368u;
    {
        const bool branch_taken_0x1e5368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5368u;
        // 0x1e536c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5368) {
            ctx->pc = 0x1E5380u;
            goto label_1e5380;
        }
    }
    ctx->pc = 0x1E5370u;
label_1e5370:
    // 0x1e5370: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e5374:
    // 0x1e5374: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1e5374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1e5378:
    // 0x1e5378: 0x60f809  jalr        $v1
label_1e537c:
    if (ctx->pc == 0x1E537Cu) {
        ctx->pc = 0x1E5380u;
        goto label_1e5380;
    }
    ctx->pc = 0x1E5378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E5380u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5378u, 0x1E5380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5380u;
label_1e5380:
    // 0x1e5380: 0xc0774d6  jal         func_1DD358
label_1e5384:
    if (ctx->pc == 0x1E5384u) {
        ctx->pc = 0x1E5384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5380u;
        // 0x1e5384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5388u;
        goto label_1e5388;
    }
    ctx->pc = 0x1E5380u;
    SET_GPR_U32(ctx, 31, 0x1E5388u);
    ctx->pc = 0x1E5384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5380u;
    // 0x1e5384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD358u, 0x1E5380u, 0x1E5388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5388u;
label_1e5388:
    // 0x1e5388: 0xae0004d8  sw          $zero, 0x4D8($s0)
    ctx->pc = 0x1e5388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1240), GPR_U32(ctx, 0));
label_1e538c:
    // 0x1e538c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e538cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e5390:
    // 0x1e5390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5394:
    // 0x1e5394: 0x3e00008  jr          $ra
label_1e5398:
    if (ctx->pc == 0x1E5398u) {
        ctx->pc = 0x1E5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5394u;
        // 0x1e5398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E539Cu;
        goto label_1e539c;
    }
    ctx->pc = 0x1E5394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5394u;
        // 0x1e5398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E539Cu;
label_1e539c:
    // 0x1e539c: 0x0  nop
    ctx->pc = 0x1e539cu;
    // NOP
    if (ctx->pc == 0x1e539cu) { ctx->pc = 0x1e53a0u; }
}
