#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0430
// Address: 0x1b0430 - 0x1b04a0
void sub_001B0430_0x1b0430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0430_0x1b0430");
#endif

    switch (ctx->pc) {
        case 0x1b0430u: goto label_1b0430;
        case 0x1b0434u: goto label_1b0434;
        case 0x1b0438u: goto label_1b0438;
        case 0x1b043cu: goto label_1b043c;
        case 0x1b0440u: goto label_1b0440;
        case 0x1b0444u: goto label_1b0444;
        case 0x1b0448u: goto label_1b0448;
        case 0x1b044cu: goto label_1b044c;
        case 0x1b0450u: goto label_1b0450;
        case 0x1b0454u: goto label_1b0454;
        case 0x1b0458u: goto label_1b0458;
        case 0x1b045cu: goto label_1b045c;
        case 0x1b0460u: goto label_1b0460;
        case 0x1b0464u: goto label_1b0464;
        case 0x1b0468u: goto label_1b0468;
        case 0x1b046cu: goto label_1b046c;
        case 0x1b0470u: goto label_1b0470;
        case 0x1b0474u: goto label_1b0474;
        case 0x1b0478u: goto label_1b0478;
        case 0x1b047cu: goto label_1b047c;
        case 0x1b0480u: goto label_1b0480;
        case 0x1b0484u: goto label_1b0484;
        case 0x1b0488u: goto label_1b0488;
        case 0x1b048cu: goto label_1b048c;
        case 0x1b0490u: goto label_1b0490;
        case 0x1b0494u: goto label_1b0494;
        case 0x1b0498u: goto label_1b0498;
        case 0x1b049cu: goto label_1b049c;
        default: break;
    }

    ctx->pc = 0x1b0430u;

label_1b0430:
    // 0x1b0430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b0434:
    // 0x1b0434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b0438:
    // 0x1b0438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b043c:
    // 0x1b043c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b043cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1b0440:
    // 0x1b0440: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1b0440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b0444:
    // 0x1b0444: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
label_1b0448:
    if (ctx->pc == 0x1B0448u) {
        ctx->pc = 0x1B0448u;
            // 0x1b0448: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1B044Cu;
        goto label_1b044c;
    }
    ctx->pc = 0x1B0444u;
    {
        const bool branch_taken_0x1b0444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0444) {
            ctx->pc = 0x1B0448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0444u;
            // 0x1b0448: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0494u;
            goto label_1b0494;
        }
    }
    ctx->pc = 0x1B044Cu;
label_1b044c:
    // 0x1b044c: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x1b044cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1b0450:
    // 0x1b0450: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_1b0454:
    if (ctx->pc == 0x1B0454u) {
        ctx->pc = 0x1B0454u;
            // 0x1b0454: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1B0458u;
        goto label_1b0458;
    }
    ctx->pc = 0x1B0450u;
    {
        const bool branch_taken_0x1b0450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0450) {
            ctx->pc = 0x1B0454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0450u;
            // 0x1b0454: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0494u;
            goto label_1b0494;
        }
    }
    ctx->pc = 0x1B0458u;
label_1b0458:
    // 0x1b0458: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b0458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b045c:
    // 0x1b045c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b045cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0460:
    // 0x1b0460: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x1b0460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_1b0464:
    // 0x1b0464: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
label_1b0468:
    if (ctx->pc == 0x1B0468u) {
        ctx->pc = 0x1B0468u;
            // 0x1b0468: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x1B046Cu;
        goto label_1b046c;
    }
    ctx->pc = 0x1B0464u;
    {
        const bool branch_taken_0x1b0464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b0464) {
            ctx->pc = 0x1B0468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0464u;
            // 0x1b0468: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0480u;
            goto label_1b0480;
        }
    }
    ctx->pc = 0x1B046Cu;
label_1b046c:
    // 0x1b046c: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x1b046cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1b0470:
    // 0x1b0470: 0xc06bab2  jal         func_1AEAC8
label_1b0474:
    if (ctx->pc == 0x1B0474u) {
        ctx->pc = 0x1B0474u;
            // 0x1b0474: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1B0478u;
        goto label_1b0478;
    }
    ctx->pc = 0x1B0470u;
    SET_GPR_U32(ctx, 31, 0x1B0478u);
    ctx->pc = 0x1B0474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0470u;
            // 0x1b0474: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEAC8u;
    if (runtime->hasFunction(0x1AEAC8u)) {
        auto targetFn = runtime->lookupFunction(0x1AEAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0478u; }
        if (ctx->pc != 0x1B0478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEAC8_0x1aeac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0478u; }
        if (ctx->pc != 0x1B0478u) { return; }
    }
    ctx->pc = 0x1B0478u;
label_1b0478:
    // 0x1b0478: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1b0478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b047c:
    // 0x1b047c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b0480:
    // 0x1b0480: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1b0480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1b0484:
    // 0x1b0484: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1b0484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1b0488:
    // 0x1b0488: 0x40f809  jalr        $v0
label_1b048c:
    if (ctx->pc == 0x1B048Cu) {
        ctx->pc = 0x1B048Cu;
            // 0x1b048c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0490u;
        goto label_1b0490;
    }
    ctx->pc = 0x1B0488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0490u);
        ctx->pc = 0x1B048Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0488u;
            // 0x1b048c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B0490u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B0490u; }
            if (ctx->pc != 0x1B0490u) { return; }
        }
        }
    }
    ctx->pc = 0x1B0490u;
label_1b0490:
    // 0x1b0490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0494:
    // 0x1b0494: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b0494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b0498:
    // 0x1b0498: 0x3e00008  jr          $ra
label_1b049c:
    if (ctx->pc == 0x1B049Cu) {
        ctx->pc = 0x1B049Cu;
            // 0x1b049c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B04A0u;
        goto label_fallthrough_0x1b0498;
    }
    ctx->pc = 0x1B0498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B049Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0498u;
            // 0x1b049c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b0498:
    ctx->pc = 0x1B04A0u;
    ctx->pc = 0x1b04a0u;
}
