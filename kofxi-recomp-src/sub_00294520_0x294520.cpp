#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294520
// Address: 0x294520 - 0x294580
void sub_00294520_0x294520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294520_0x294520");
#endif

    switch (ctx->pc) {
        case 0x294520u: goto label_294520;
        case 0x294524u: goto label_294524;
        case 0x294528u: goto label_294528;
        case 0x29452cu: goto label_29452c;
        case 0x294530u: goto label_294530;
        case 0x294534u: goto label_294534;
        case 0x294538u: goto label_294538;
        case 0x29453cu: goto label_29453c;
        case 0x294540u: goto label_294540;
        case 0x294544u: goto label_294544;
        case 0x294548u: goto label_294548;
        case 0x29454cu: goto label_29454c;
        case 0x294550u: goto label_294550;
        case 0x294554u: goto label_294554;
        case 0x294558u: goto label_294558;
        case 0x29455cu: goto label_29455c;
        case 0x294560u: goto label_294560;
        case 0x294564u: goto label_294564;
        case 0x294568u: goto label_294568;
        case 0x29456cu: goto label_29456c;
        case 0x294570u: goto label_294570;
        case 0x294574u: goto label_294574;
        case 0x294578u: goto label_294578;
        case 0x29457cu: goto label_29457c;
        default: break;
    }

    ctx->pc = 0x294520u;

label_294520:
    // 0x294520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_294524:
    // 0x294524: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x294524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_294528:
    // 0x294528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29452c:
    // 0x29452c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29452cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_294530:
    // 0x294530: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x294530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_294534:
    // 0x294534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_294538:
    // 0x294538: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x294538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29453c:
    // 0x29453c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29453cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_294540:
    // 0x294540: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x294540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_294544:
    // 0x294544: 0x40f809  jalr        $v0
label_294548:
    if (ctx->pc == 0x294548u) {
        ctx->pc = 0x294548u;
            // 0x294548: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x29454Cu;
        goto label_29454c;
    }
    ctx->pc = 0x294544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29454Cu);
        ctx->pc = 0x294548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294544u;
            // 0x294548: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29454Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29454Cu; }
            if (ctx->pc != 0x29454Cu) { return; }
        }
        }
    }
    ctx->pc = 0x29454Cu;
label_29454c:
    // 0x29454c: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_294550:
    if (ctx->pc == 0x294550u) {
        ctx->pc = 0x294550u;
            // 0x294550: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x294554u;
        goto label_294554;
    }
    ctx->pc = 0x29454Cu;
    {
        const bool branch_taken_0x29454c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29454c) {
            ctx->pc = 0x294550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29454Cu;
            // 0x294550: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x294564u;
            goto label_294564;
        }
    }
    ctx->pc = 0x294554u;
label_294554:
    // 0x294554: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x294554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_294558:
    // 0x294558: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x294558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_29455c:
    // 0x29455c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x29455cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_294560:
    // 0x294560: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x294560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_294564:
    // 0x294564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294568:
    // 0x294568: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x294568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_29456c:
    // 0x29456c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29456cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_294570:
    // 0x294570: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_294574:
    // 0x294574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294578:
    // 0x294578: 0x8049cb6  j           func_1272D8
label_29457c:
    if (ctx->pc == 0x29457Cu) {
        ctx->pc = 0x29457Cu;
            // 0x29457c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x294580u;
        goto label_fallthrough_0x294578;
    }
    ctx->pc = 0x294578u;
    ctx->pc = 0x29457Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294578u;
            // 0x29457c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
label_fallthrough_0x294578:
    ctx->pc = 0x294580u;
    ctx->pc = 0x294580u;
}
