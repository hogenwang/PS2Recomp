#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EA2E0
// Address: 0x1ea2e0 - 0x1ea348
void sub_001EA2E0_0x1ea2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA2E0_0x1ea2e0");
#endif

    switch (ctx->pc) {
        case 0x1ea2e0u: goto label_1ea2e0;
        case 0x1ea2e4u: goto label_1ea2e4;
        case 0x1ea2e8u: goto label_1ea2e8;
        case 0x1ea2ecu: goto label_1ea2ec;
        case 0x1ea2f0u: goto label_1ea2f0;
        case 0x1ea2f4u: goto label_1ea2f4;
        case 0x1ea2f8u: goto label_1ea2f8;
        case 0x1ea2fcu: goto label_1ea2fc;
        case 0x1ea300u: goto label_1ea300;
        case 0x1ea304u: goto label_1ea304;
        case 0x1ea308u: goto label_1ea308;
        case 0x1ea30cu: goto label_1ea30c;
        case 0x1ea310u: goto label_1ea310;
        case 0x1ea314u: goto label_1ea314;
        case 0x1ea318u: goto label_1ea318;
        case 0x1ea31cu: goto label_1ea31c;
        case 0x1ea320u: goto label_1ea320;
        case 0x1ea324u: goto label_1ea324;
        case 0x1ea328u: goto label_1ea328;
        case 0x1ea32cu: goto label_1ea32c;
        case 0x1ea330u: goto label_1ea330;
        case 0x1ea334u: goto label_1ea334;
        case 0x1ea338u: goto label_1ea338;
        case 0x1ea33cu: goto label_1ea33c;
        case 0x1ea340u: goto label_1ea340;
        case 0x1ea344u: goto label_1ea344;
        default: break;
    }

    ctx->pc = 0x1ea2e0u;

label_1ea2e0:
    // 0x1ea2e0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1ea2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1ea2e4:
    // 0x1ea2e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ea2e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ea2e8:
    // 0x1ea2e8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1ea2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1ea2ec:
    // 0x1ea2ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ea2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ea2f0:
    // 0x1ea2f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea2f4:
    // 0x1ea2f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ea2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1ea2f8:
    // 0x1ea2f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ea2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1ea2fc:
    // 0x1ea2fc: 0x24841368  addiu       $a0, $a0, 0x1368
    ctx->pc = 0x1ea2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4968));
label_1ea300:
    // 0x1ea300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea304:
    // 0x1ea304: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1ea304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ea308:
    // 0x1ea308: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1ea308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ea30c:
    // 0x1ea30c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ea30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ea310:
    // 0x1ea310: 0x14660009  bne         $v1, $a2, . + 4 + (0x9 << 2)
label_1ea314:
    if (ctx->pc == 0x1EA314u) {
        ctx->pc = 0x1EA314u;
            // 0x1ea314: 0x24900010  addiu       $s0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x1EA318u;
        goto label_1ea318;
    }
    ctx->pc = 0x1EA310u;
    {
        const bool branch_taken_0x1ea310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1EA314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA310u;
            // 0x1ea314: 0x24900010  addiu       $s0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea310) {
            ctx->pc = 0x1EA338u;
            goto label_1ea338;
        }
    }
    ctx->pc = 0x1EA318u;
label_1ea318:
    // 0x1ea318: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ea318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ea31c:
    // 0x1ea31c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ea320:
    if (ctx->pc == 0x1EA320u) {
        ctx->pc = 0x1EA320u;
            // 0x1ea320: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EA324u;
        goto label_1ea324;
    }
    ctx->pc = 0x1EA31Cu;
    {
        const bool branch_taken_0x1ea31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA31Cu;
            // 0x1ea320: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea31c) {
            ctx->pc = 0x1EA338u;
            goto label_1ea338;
        }
    }
    ctx->pc = 0x1EA324u;
label_1ea324:
    // 0x1ea324: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ea324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea328:
    // 0x1ea328: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1ea328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1ea32c:
    // 0x1ea32c: 0x60f809  jalr        $v1
label_1ea330:
    if (ctx->pc == 0x1EA330u) {
        ctx->pc = 0x1EA334u;
        goto label_1ea334;
    }
    ctx->pc = 0x1EA32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA334u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EA334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EA334u; }
            if (ctx->pc != 0x1EA334u) { return; }
        }
        }
    }
    ctx->pc = 0x1EA334u;
label_1ea334:
    // 0x1ea334: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ea334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1ea338:
    // 0x1ea338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ea338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea33c:
    // 0x1ea33c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ea33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ea340:
    // 0x1ea340: 0x3e00008  jr          $ra
label_1ea344:
    if (ctx->pc == 0x1EA344u) {
        ctx->pc = 0x1EA344u;
            // 0x1ea344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EA348u;
        goto label_fallthrough_0x1ea340;
    }
    ctx->pc = 0x1EA340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA340u;
            // 0x1ea344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1ea340:
    ctx->pc = 0x1EA348u;
    ctx->pc = 0x1ea348u;
}
