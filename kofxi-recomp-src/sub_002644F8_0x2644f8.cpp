#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002644F8
// Address: 0x2644f8 - 0x2645a0
void sub_002644F8_0x2644f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002644F8_0x2644f8");
#endif

    switch (ctx->pc) {
        case 0x264520u: goto label_264520;
        case 0x264544u: goto label_264544;
        case 0x264554u: goto label_264554;
        case 0x264564u: goto label_264564;
        case 0x264570u: goto label_264570;
        case 0x26457cu: goto label_26457c;
        case 0x264598u: goto label_264598;
        default: break;
    }

    ctx->pc = 0x2644f8u;

    // 0x2644f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2644f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2644fc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2644fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x264500: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x264500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x264504: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x264504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264508: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x264508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26450c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26450cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264514: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x264514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x264518: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x264518u;
    SET_GPR_U32(ctx, 31, 0x264520u);
    ctx->pc = 0x26451Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264518u;
            // 0x26451c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (runtime->hasFunction(0x25CA38u)) {
        auto targetFn = runtime->lookupFunction(0x25CA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264520u; }
        if (ctx->pc != 0x264520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CA38_0x25ca38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264520u; }
        if (ctx->pc != 0x264520u) { return; }
    }
    ctx->pc = 0x264520u;
label_264520:
    // 0x264520: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x264520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264524: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x264524u;
    {
        const bool branch_taken_0x264524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x264528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264524u;
            // 0x264528: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264524) {
            ctx->pc = 0x264580u;
            goto label_264580;
        }
    }
    ctx->pc = 0x26452Cu;
    // 0x26452c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26452cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x264530: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x264530u;
    {
        const bool branch_taken_0x264530 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x264534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264530u;
            // 0x264534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264530) {
            ctx->pc = 0x26455Cu;
            goto label_26455c;
        }
    }
    ctx->pc = 0x264538u;
    // 0x264538: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x264538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26453c: 0xc099168  jal         func_2645A0
    ctx->pc = 0x26453Cu;
    SET_GPR_U32(ctx, 31, 0x264544u);
    ctx->pc = 0x264540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26453Cu;
            // 0x264540: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2645A0u;
    if (runtime->hasFunction(0x2645A0u)) {
        auto targetFn = runtime->lookupFunction(0x2645A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264544u; }
        if (ctx->pc != 0x264544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002645A0_0x2645a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264544u; }
        if (ctx->pc != 0x264544u) { return; }
    }
    ctx->pc = 0x264544u;
label_264544:
    // 0x264544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264548: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x264548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26454c: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x26454Cu;
    SET_GPR_U32(ctx, 31, 0x264554u);
    ctx->pc = 0x264550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26454Cu;
            // 0x264550: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (runtime->hasFunction(0x25CB68u)) {
        auto targetFn = runtime->lookupFunction(0x25CB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264554u; }
        if (ctx->pc != 0x264554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CB68_0x25cb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264554u; }
        if (ctx->pc != 0x264554u) { return; }
    }
    ctx->pc = 0x264554u;
label_264554:
    // 0x264554: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x264554u;
    {
        const bool branch_taken_0x264554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264554u;
            // 0x264558: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264554) {
            ctx->pc = 0x264580u;
            goto label_264580;
        }
    }
    ctx->pc = 0x26455Cu;
label_26455c:
    // 0x26455c: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x26455Cu;
    SET_GPR_U32(ctx, 31, 0x264564u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264564u; }
        if (ctx->pc != 0x264564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264564u; }
        if (ctx->pc != 0x264564u) { return; }
    }
    ctx->pc = 0x264564u;
label_264564:
    // 0x264564: 0x2403006a  addiu       $v1, $zero, 0x6A
    ctx->pc = 0x264564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x264568: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x264568u;
    SET_GPR_U32(ctx, 31, 0x264570u);
    ctx->pc = 0x26456Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264568u;
            // 0x26456c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264570u; }
        if (ctx->pc != 0x264570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264570u; }
        if (ctx->pc != 0x264570u) { return; }
    }
    ctx->pc = 0x264570u;
label_264570:
    // 0x264570: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x264570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264574: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x264574u;
    SET_GPR_U32(ctx, 31, 0x26457Cu);
    ctx->pc = 0x264578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264574u;
            // 0x264578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (runtime->hasFunction(0x25CB68u)) {
        auto targetFn = runtime->lookupFunction(0x25CB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26457Cu; }
        if (ctx->pc != 0x26457Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CB68_0x25cb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26457Cu; }
        if (ctx->pc != 0x26457Cu) { return; }
    }
    ctx->pc = 0x26457Cu;
label_26457c:
    // 0x26457c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_264580:
    // 0x264580: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x264580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264584: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x264584u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264588: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x264588u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26458c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26458cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264594: 0x3e00008  jr          $ra
label_264598:
    if (ctx->pc == 0x264598u) {
        ctx->pc = 0x264598u;
            // 0x264598: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x26459Cu;
        goto label_fallthrough_0x264594;
    }
    ctx->pc = 0x264594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264594u;
            // 0x264598: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x264594:
    ctx->pc = 0x26459Cu;
    // 0x26459c: 0x0  nop
    ctx->pc = 0x26459cu;
    // NOP
    ctx->pc = 0x2645a0u;
}
