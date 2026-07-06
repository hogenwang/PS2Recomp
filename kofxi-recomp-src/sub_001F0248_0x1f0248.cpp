#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F0248
// Address: 0x1f0248 - 0x1f0358
void sub_001F0248_0x1f0248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0248_0x1f0248");
#endif

    switch (ctx->pc) {
        case 0x1f0278u: goto label_1f0278;
        case 0x1f0288u: goto label_1f0288;
        case 0x1f0290u: goto label_1f0290;
        case 0x1f0298u: goto label_1f0298;
        case 0x1f02c4u: goto label_1f02c4;
        case 0x1f0300u: goto label_1f0300;
        case 0x1f0314u: goto label_1f0314;
        case 0x1f0328u: goto label_1f0328;
        case 0x1f033cu: goto label_1f033c;
        default: break;
    }

    ctx->pc = 0x1f0248u;

    // 0x1f0248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f024c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f024cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0250: 0xac860d74  sw          $a2, 0xD74($a0)
    ctx->pc = 0x1f0250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3444), GPR_U32(ctx, 6));
    // 0x1f0254: 0x8c822018  lw          $v0, 0x2018($a0)
    ctx->pc = 0x1f0254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f0258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f025c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f025cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0260: 0xac850d7c  sw          $a1, 0xD7C($a0)
    ctx->pc = 0x1f0260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3452), GPR_U32(ctx, 5));
    // 0x1f0264: 0xac870d78  sw          $a3, 0xD78($a0)
    ctx->pc = 0x1f0264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3448), GPR_U32(ctx, 7));
    // 0x1f0268: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f0268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f026c: 0x80770e4  j           func_1DC390
    ctx->pc = 0x1F026Cu;
    ctx->pc = 0x1F0270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F026Cu;
            // 0x1f0270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1F0274u;
    // 0x1f0274: 0x0  nop
    ctx->pc = 0x1f0274u;
    // NOP
label_1f0278:
    // 0x1f0278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f027c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f027cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0280: 0xc07d92c  jal         func_1F64B0
    ctx->pc = 0x1F0280u;
    SET_GPR_U32(ctx, 31, 0x1F0288u);
    ctx->pc = 0x1F64B0u;
    if (runtime->hasFunction(0x1F64B0u)) {
        auto targetFn = runtime->lookupFunction(0x1F64B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0288u; }
        if (ctx->pc != 0x1F0288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F64B0_0x1f64b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0288u; }
        if (ctx->pc != 0x1F0288u) { return; }
    }
    ctx->pc = 0x1F0288u;
label_1f0288:
    // 0x1f0288: 0xc07c0d6  jal         func_1F0358
    ctx->pc = 0x1F0288u;
    SET_GPR_U32(ctx, 31, 0x1F0290u);
    ctx->pc = 0x1F0358u;
    if (runtime->hasFunction(0x1F0358u)) {
        auto targetFn = runtime->lookupFunction(0x1F0358u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0290u; }
        if (ctx->pc != 0x1F0290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0358_0x1f0358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0290u; }
        if (ctx->pc != 0x1F0290u) { return; }
    }
    ctx->pc = 0x1F0290u;
label_1f0290:
    // 0x1f0290: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F0290u;
    {
        const bool branch_taken_0x1f0290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0290u;
            // 0x1f0294: 0x3c0501c0  lui         $a1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0290) {
            ctx->pc = 0x1F02B8u;
            goto label_1f02b8;
        }
    }
    ctx->pc = 0x1F0298u;
label_1f0298:
    // 0x1f0298: 0x0  nop
    ctx->pc = 0x1f0298u;
    // NOP
    // 0x1f029c: 0x0  nop
    ctx->pc = 0x1f029cu;
    // NOP
    // 0x1f02a0: 0x0  nop
    ctx->pc = 0x1f02a0u;
    // NOP
    // 0x1f02a4: 0x0  nop
    ctx->pc = 0x1f02a4u;
    // NOP
    // 0x1f02a8: 0x0  nop
    ctx->pc = 0x1f02a8u;
    // NOP
    // 0x1f02ac: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F02ACu;
    {
        const bool branch_taken_0x1f02ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f02ac) {
            ctx->pc = 0x1F0298u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f0298;
        }
    }
    ctx->pc = 0x1F02B4u;
    // 0x1f02b4: 0x0  nop
    ctx->pc = 0x1f02b4u;
    // NOP
label_1f02b8:
    // 0x1f02b8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1f02b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f02bc: 0xc076eec  jal         func_1DBBB0
    ctx->pc = 0x1F02BCu;
    SET_GPR_U32(ctx, 31, 0x1F02C4u);
    ctx->pc = 0x1F02C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F02BCu;
            // 0x1f02c0: 0x24a55770  addiu       $a1, $a1, 0x5770 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBB0u;
    if (runtime->hasFunction(0x1DBBB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DBBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F02C4u; }
        if (ctx->pc != 0x1F02C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBBB0_0x1dbbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F02C4u; }
        if (ctx->pc != 0x1F02C4u) { return; }
    }
    ctx->pc = 0x1F02C4u;
label_1f02c4:
    // 0x1f02c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f02c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f02c8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F02C8u;
    {
        const bool branch_taken_0x1f02c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F02CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F02C8u;
            // 0x1f02cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02c8) {
            ctx->pc = 0x1F0300u;
            goto label_1f0300;
        }
    }
    ctx->pc = 0x1F02D0u;
    // 0x1f02d0: 0x3c02ff03  lui         $v0, 0xFF03
    ctx->pc = 0x1f02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65283 << 16));
    // 0x1f02d4: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1f02d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1f02d8: 0x3442ff05  ori         $v0, $v0, 0xFF05
    ctx->pc = 0x1f02d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65285);
    // 0x1f02dc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f02dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f02e0: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x1f02e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x1f02e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f02e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f02e8: 0x34630f01  ori         $v1, $v1, 0xF01
    ctx->pc = 0x1f02e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3841);
    // 0x1f02ec: 0x34a50f13  ori         $a1, $a1, 0xF13
    ctx->pc = 0x1f02ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3859);
    // 0x1f02f0: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1f02f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1f02f4: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F02F4u;
    ctx->pc = 0x1F02F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F02F4u;
            // 0x1f02f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F02FCu;
    // 0x1f02fc: 0x0  nop
    ctx->pc = 0x1f02fcu;
    // NOP
label_1f0300:
    // 0x1f0300: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x1f0300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x1f0304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0308: 0x24849ab0  addiu       $a0, $a0, -0x6550
    ctx->pc = 0x1f0308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941360));
    // 0x1f030c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1F030Cu;
    SET_GPR_U32(ctx, 31, 0x1F0314u);
    ctx->pc = 0x1F0310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F030Cu;
            // 0x1f0310: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0314u; }
        if (ctx->pc != 0x1F0314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0314u; }
        if (ctx->pc != 0x1F0314u) { return; }
    }
    ctx->pc = 0x1F0314u;
label_1f0314:
    // 0x1f0314: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x1f0314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x1f0318: 0x24849ad8  addiu       $a0, $a0, -0x6528
    ctx->pc = 0x1f0318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941400));
    // 0x1f031c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f031cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0320: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1F0320u;
    SET_GPR_U32(ctx, 31, 0x1F0328u);
    ctx->pc = 0x1F0324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0320u;
            // 0x1f0324: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0328u; }
        if (ctx->pc != 0x1F0328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0328u; }
        if (ctx->pc != 0x1F0328u) { return; }
    }
    ctx->pc = 0x1F0328u;
label_1f0328:
    // 0x1f0328: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x1f0328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x1f032c: 0x24849ae0  addiu       $a0, $a0, -0x6520
    ctx->pc = 0x1f032cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941408));
    // 0x1f0330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0334: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1F0334u;
    SET_GPR_U32(ctx, 31, 0x1F033Cu);
    ctx->pc = 0x1F0338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0334u;
            // 0x1f0338: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F033Cu; }
        if (ctx->pc != 0x1F033Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F033Cu; }
        if (ctx->pc != 0x1F033Cu) { return; }
    }
    ctx->pc = 0x1F033Cu;
label_1f033c:
    // 0x1f033c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f033cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f0340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0344: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f0344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0348: 0xac601778  sw          $zero, 0x1778($v1)
    ctx->pc = 0x1f0348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6008), GPR_U32(ctx, 0));
    // 0x1f034c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F034Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F034Cu;
            // 0x1f0350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0354u;
    // 0x1f0354: 0x0  nop
    ctx->pc = 0x1f0354u;
    // NOP
    ctx->pc = 0x1f0358u;
}
