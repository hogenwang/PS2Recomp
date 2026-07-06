#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4540
// Address: 0x1c4540 - 0x1c46f8
void sub_001C4540_0x1c4540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4540_0x1c4540");
#endif

    switch (ctx->pc) {
        case 0x1c4570u: goto label_1c4570;
        case 0x1c4590u: goto label_1c4590;
        case 0x1c4598u: goto label_1c4598;
        case 0x1c45a4u: goto label_1c45a4;
        case 0x1c45b0u: goto label_1c45b0;
        case 0x1c45c8u: goto label_1c45c8;
        case 0x1c45f0u: goto label_1c45f0;
        case 0x1c4614u: goto label_1c4614;
        case 0x1c4630u: goto label_1c4630;
        case 0x1c4640u: goto label_1c4640;
        case 0x1c4648u: goto label_1c4648;
        case 0x1c4650u: goto label_1c4650;
        case 0x1c4660u: goto label_1c4660;
        case 0x1c466cu: goto label_1c466c;
        case 0x1c4680u: goto label_1c4680;
        case 0x1c4688u: goto label_1c4688;
        case 0x1c4690u: goto label_1c4690;
        case 0x1c4698u: goto label_1c4698;
        case 0x1c46a8u: goto label_1c46a8;
        case 0x1c46b0u: goto label_1c46b0;
        case 0x1c46bcu: goto label_1c46bc;
        case 0x1c46d8u: goto label_1c46d8;
        default: break;
    }

    ctx->pc = 0x1c4540u;

    // 0x1c4540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4544: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c4544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c4548: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c454c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c454cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c4550: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4550u;
    {
        const bool branch_taken_0x1c4550 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4550u;
            // 0x1c4554: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4550) {
            ctx->pc = 0x1C4568u;
            goto label_1c4568;
        }
    }
    ctx->pc = 0x1C4558u;
    // 0x1c4558: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c4558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c455c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1C455Cu;
    {
        const bool branch_taken_0x1c455c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C455Cu;
            // 0x1c4560: 0x24a5a128  addiu       $a1, $a1, -0x5ED8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c455c) {
            ctx->pc = 0x1C46D0u;
            goto label_1c46d0;
        }
    }
    ctx->pc = 0x1C4564u;
    // 0x1c4564: 0x0  nop
    ctx->pc = 0x1c4564u;
    // NOP
label_1c4568:
    // 0x1c4568: 0xc071664  jal         func_1C5990
    ctx->pc = 0x1C4568u;
    SET_GPR_U32(ctx, 31, 0x1C4570u);
    ctx->pc = 0x1C456Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4568u;
            // 0x1c456c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5990u;
    if (runtime->hasFunction(0x1C5990u)) {
        auto targetFn = runtime->lookupFunction(0x1C5990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4570u; }
        if (ctx->pc != 0x1C4570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5990_0x1c5990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4570u; }
        if (ctx->pc != 0x1C4570u) { return; }
    }
    ctx->pc = 0x1C4570u;
label_1c4570:
    // 0x1c4570: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c4570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c4574: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1C4574u;
    {
        const bool branch_taken_0x1c4574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4574u;
            // 0x1c4578: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4574) {
            ctx->pc = 0x1C46E0u;
            goto label_1c46e0;
        }
    }
    ctx->pc = 0x1C457Cu;
    // 0x1c457c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c457cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c4580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4584: 0x2451ee20  addiu       $s1, $v0, -0x11E0
    ctx->pc = 0x1c4584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962720));
    // 0x1c4588: 0xc071426  jal         func_1C5098
    ctx->pc = 0x1C4588u;
    SET_GPR_U32(ctx, 31, 0x1C4590u);
    ctx->pc = 0x1C458Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4588u;
            // 0x1c458c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5098u;
    if (runtime->hasFunction(0x1C5098u)) {
        auto targetFn = runtime->lookupFunction(0x1C5098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4590u; }
        if (ctx->pc != 0x1C4590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5098_0x1c5098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4590u; }
        if (ctx->pc != 0x1C4590u) { return; }
    }
    ctx->pc = 0x1C4590u;
label_1c4590:
    // 0x1c4590: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C4590u;
    SET_GPR_U32(ctx, 31, 0x1C4598u);
    ctx->pc = 0x1C4594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4590u;
            // 0x1c4594: 0x24044400  addiu       $a0, $zero, 0x4400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4598u; }
        if (ctx->pc != 0x1C4598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4598u; }
        if (ctx->pc != 0x1C4598u) { return; }
    }
    ctx->pc = 0x1C4598u;
label_1c4598:
    // 0x1c4598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c459c: 0xc070590  jal         func_1C1640
    ctx->pc = 0x1C459Cu;
    SET_GPR_U32(ctx, 31, 0x1C45A4u);
    ctx->pc = 0x1C45A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C459Cu;
            // 0x1c45a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1640u;
    if (runtime->hasFunction(0x1C1640u)) {
        auto targetFn = runtime->lookupFunction(0x1C1640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45A4u; }
        if (ctx->pc != 0x1C45A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1640_0x1c1640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45A4u; }
        if (ctx->pc != 0x1C45A4u) { return; }
    }
    ctx->pc = 0x1C45A4u;
label_1c45a4:
    // 0x1c45a4: 0x24044401  addiu       $a0, $zero, 0x4401
    ctx->pc = 0x1c45a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17409));
    // 0x1c45a8: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C45A8u;
    SET_GPR_U32(ctx, 31, 0x1C45B0u);
    ctx->pc = 0x1C45ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45A8u;
            // 0x1c45ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45B0u; }
        if (ctx->pc != 0x1C45B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45B0u; }
        if (ctx->pc != 0x1C45B0u) { return; }
    }
    ctx->pc = 0x1C45B0u;
label_1c45b0:
    // 0x1c45b0: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C45B0u;
    {
        const bool branch_taken_0x1c45b0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C45B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45B0u;
            // 0x1c45b4: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45b0) {
            ctx->pc = 0x1C45D8u;
            goto label_1c45d8;
        }
    }
    ctx->pc = 0x1C45B8u;
    // 0x1c45b8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c45b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c45bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c45bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45c0: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C45C0u;
    SET_GPR_U32(ctx, 31, 0x1C45C8u);
    ctx->pc = 0x1C45C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45C0u;
            // 0x1c45c4: 0x2484a158  addiu       $a0, $a0, -0x5EA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45C8u; }
        if (ctx->pc != 0x1C45C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45C8u; }
        if (ctx->pc != 0x1C45C8u) { return; }
    }
    ctx->pc = 0x1C45C8u;
label_1c45c8:
    // 0x1c45c8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c45c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c45cc: 0x24a5a178  addiu       $a1, $a1, -0x5E88
    ctx->pc = 0x1c45ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943096));
    // 0x1c45d0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1C45D0u;
    {
        const bool branch_taken_0x1c45d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C45D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45D0u;
            // 0x1c45d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45d0) {
            ctx->pc = 0x1C46D0u;
            goto label_1c46d0;
        }
    }
    ctx->pc = 0x1C45D8u;
label_1c45d8:
    // 0x1c45d8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1c45d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1c45dc: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C45DCu;
    {
        const bool branch_taken_0x1c45dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c45dc) {
            ctx->pc = 0x1C45E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45DCu;
            // 0x1c45e0: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4600u;
            goto label_1c4600;
        }
    }
    ctx->pc = 0x1C45E4u;
    // 0x1c45e4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c45e8: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C45E8u;
    SET_GPR_U32(ctx, 31, 0x1C45F0u);
    ctx->pc = 0x1C45ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45E8u;
            // 0x1c45ec: 0x2484a1a0  addiu       $a0, $a0, -0x5E60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45F0u; }
        if (ctx->pc != 0x1C45F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45F0u; }
        if (ctx->pc != 0x1C45F0u) { return; }
    }
    ctx->pc = 0x1C45F0u;
label_1c45f0:
    // 0x1c45f0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c45f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c45f4: 0x24a5a1d8  addiu       $a1, $a1, -0x5E28
    ctx->pc = 0x1c45f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943192));
    // 0x1c45f8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1C45F8u;
    {
        const bool branch_taken_0x1c45f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C45FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45F8u;
            // 0x1c45fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45f8) {
            ctx->pc = 0x1C46D0u;
            goto label_1c46d0;
        }
    }
    ctx->pc = 0x1C4600u;
label_1c4600:
    // 0x1c4600: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4600u;
    {
        const bool branch_taken_0x1c4600 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c4600) {
            ctx->pc = 0x1C4628u;
            goto label_1c4628;
        }
    }
    ctx->pc = 0x1C4608u;
    // 0x1c4608: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c4608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c460c: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C460Cu;
    SET_GPR_U32(ctx, 31, 0x1C4614u);
    ctx->pc = 0x1C4610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C460Cu;
            // 0x1c4610: 0x2484a200  addiu       $a0, $a0, -0x5E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4614u; }
        if (ctx->pc != 0x1C4614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4614u; }
        if (ctx->pc != 0x1C4614u) { return; }
    }
    ctx->pc = 0x1C4614u;
label_1c4614:
    // 0x1c4614: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c4614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c4618: 0x24a5a1d8  addiu       $a1, $a1, -0x5E28
    ctx->pc = 0x1c4618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943192));
    // 0x1c461c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1C461Cu;
    {
        const bool branch_taken_0x1c461c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C461Cu;
            // 0x1c4620: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c461c) {
            ctx->pc = 0x1C46D0u;
            goto label_1c46d0;
        }
    }
    ctx->pc = 0x1C4624u;
    // 0x1c4624: 0x0  nop
    ctx->pc = 0x1c4624u;
    // NOP
label_1c4628:
    // 0x1c4628: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C4628u;
    SET_GPR_U32(ctx, 31, 0x1C4630u);
    ctx->pc = 0x1C462Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4628u;
            // 0x1c462c: 0x24044600  addiu       $a0, $zero, 0x4600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4630u; }
        if (ctx->pc != 0x1C4630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4630u; }
        if (ctx->pc != 0x1C4630u) { return; }
    }
    ctx->pc = 0x1C4630u;
label_1c4630:
    // 0x1c4630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4638: 0xc070544  jal         func_1C1510
    ctx->pc = 0x1C4638u;
    SET_GPR_U32(ctx, 31, 0x1C4640u);
    ctx->pc = 0x1C463Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4638u;
            // 0x1c463c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1510u;
    if (runtime->hasFunction(0x1C1510u)) {
        auto targetFn = runtime->lookupFunction(0x1C1510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4640u; }
        if (ctx->pc != 0x1C4640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1510_0x1c1510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4640u; }
        if (ctx->pc != 0x1C4640u) { return; }
    }
    ctx->pc = 0x1C4640u;
label_1c4640:
    // 0x1c4640: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C4640u;
    SET_GPR_U32(ctx, 31, 0x1C4648u);
    ctx->pc = 0x1C4644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4640u;
            // 0x1c4644: 0x24044601  addiu       $a0, $zero, 0x4601 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4648u; }
        if (ctx->pc != 0x1C4648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4648u; }
        if (ctx->pc != 0x1C4648u) { return; }
    }
    ctx->pc = 0x1C4648u;
label_1c4648:
    // 0x1c4648: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C4648u;
    SET_GPR_U32(ctx, 31, 0x1C4650u);
    ctx->pc = 0x1C464Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4648u;
            // 0x1c464c: 0x24044600  addiu       $a0, $zero, 0x4600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4650u; }
        if (ctx->pc != 0x1C4650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4650u; }
        if (ctx->pc != 0x1C4650u) { return; }
    }
    ctx->pc = 0x1C4650u;
label_1c4650:
    // 0x1c4650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4658: 0xc070544  jal         func_1C1510
    ctx->pc = 0x1C4658u;
    SET_GPR_U32(ctx, 31, 0x1C4660u);
    ctx->pc = 0x1C465Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4658u;
            // 0x1c465c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1510u;
    if (runtime->hasFunction(0x1C1510u)) {
        auto targetFn = runtime->lookupFunction(0x1C1510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4660u; }
        if (ctx->pc != 0x1C4660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1510_0x1c1510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4660u; }
        if (ctx->pc != 0x1C4660u) { return; }
    }
    ctx->pc = 0x1C4660u;
label_1c4660:
    // 0x1c4660: 0x24044601  addiu       $a0, $zero, 0x4601
    ctx->pc = 0x1c4660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
    // 0x1c4664: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C4664u;
    SET_GPR_U32(ctx, 31, 0x1C466Cu);
    ctx->pc = 0x1C4668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4664u;
            // 0x1c4668: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C466Cu; }
        if (ctx->pc != 0x1C466Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C466Cu; }
        if (ctx->pc != 0x1C466Cu) { return; }
    }
    ctx->pc = 0x1C466Cu;
label_1c466c:
    // 0x1c466c: 0x621000c  bgez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C466Cu;
    {
        const bool branch_taken_0x1c466c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1C4670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C466Cu;
            // 0x1c4670: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c466c) {
            ctx->pc = 0x1C46A0u;
            goto label_1c46a0;
        }
    }
    ctx->pc = 0x1C4674u;
    // 0x1c4674: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c4674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4678: 0xc071076  jal         func_1C41D8
    ctx->pc = 0x1C4678u;
    SET_GPR_U32(ctx, 31, 0x1C4680u);
    ctx->pc = 0x1C467Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4678u;
            // 0x1c467c: 0x24a5a238  addiu       $a1, $a1, -0x5DC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C41D8u;
    if (runtime->hasFunction(0x1C41D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C41D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4680u; }
        if (ctx->pc != 0x1C4680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C41D8_0x1c41d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4680u; }
        if (ctx->pc != 0x1C4680u) { return; }
    }
    ctx->pc = 0x1C4680u;
label_1c4680:
    // 0x1c4680: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C4680u;
    SET_GPR_U32(ctx, 31, 0x1C4688u);
    ctx->pc = 0x1C4684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4680u;
            // 0x1c4684: 0x24044500  addiu       $a0, $zero, 0x4500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4688u; }
        if (ctx->pc != 0x1C4688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4688u; }
        if (ctx->pc != 0x1C4688u) { return; }
    }
    ctx->pc = 0x1C4688u;
label_1c4688:
    // 0x1c4688: 0xc0705aa  jal         func_1C16A8
    ctx->pc = 0x1C4688u;
    SET_GPR_U32(ctx, 31, 0x1C4690u);
    ctx->pc = 0x1C468Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4688u;
            // 0x1c468c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (runtime->hasFunction(0x1C16A8u)) {
        auto targetFn = runtime->lookupFunction(0x1C16A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4690u; }
        if (ctx->pc != 0x1C4690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C16A8_0x1c16a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4690u; }
        if (ctx->pc != 0x1C4690u) { return; }
    }
    ctx->pc = 0x1C4690u;
label_1c4690:
    // 0x1c4690: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C4690u;
    SET_GPR_U32(ctx, 31, 0x1C4698u);
    ctx->pc = 0x1C4694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4690u;
            // 0x1c4694: 0x24044501  addiu       $a0, $zero, 0x4501 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17665));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4698u; }
        if (ctx->pc != 0x1C4698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4698u; }
        if (ctx->pc != 0x1C4698u) { return; }
    }
    ctx->pc = 0x1C4698u;
label_1c4698:
    // 0x1c4698: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C4698u;
    {
        const bool branch_taken_0x1c4698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C469Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4698u;
            // 0x1c469c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4698) {
            ctx->pc = 0x1C46E4u;
            goto label_1c46e4;
        }
    }
    ctx->pc = 0x1C46A0u;
label_1c46a0:
    // 0x1c46a0: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C46A0u;
    SET_GPR_U32(ctx, 31, 0x1C46A8u);
    ctx->pc = 0x1C46A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46A0u;
            // 0x1c46a4: 0x24045000  addiu       $a0, $zero, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46A8u; }
        if (ctx->pc != 0x1C46A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46A8u; }
        if (ctx->pc != 0x1C46A8u) { return; }
    }
    ctx->pc = 0x1C46A8u;
label_1c46a8:
    // 0x1c46a8: 0xc0705aa  jal         func_1C16A8
    ctx->pc = 0x1C46A8u;
    SET_GPR_U32(ctx, 31, 0x1C46B0u);
    ctx->pc = 0x1C46ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46A8u;
            // 0x1c46ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (runtime->hasFunction(0x1C16A8u)) {
        auto targetFn = runtime->lookupFunction(0x1C16A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46B0u; }
        if (ctx->pc != 0x1C46B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C16A8_0x1c16a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46B0u; }
        if (ctx->pc != 0x1C46B0u) { return; }
    }
    ctx->pc = 0x1C46B0u;
label_1c46b0:
    // 0x1c46b0: 0x24045001  addiu       $a0, $zero, 0x5001
    ctx->pc = 0x1c46b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20481));
    // 0x1c46b4: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C46B4u;
    SET_GPR_U32(ctx, 31, 0x1C46BCu);
    ctx->pc = 0x1C46B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46B4u;
            // 0x1c46b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46BCu; }
        if (ctx->pc != 0x1C46BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46BCu; }
        if (ctx->pc != 0x1C46BCu) { return; }
    }
    ctx->pc = 0x1C46BCu;
label_1c46bc:
    // 0x1c46bc: 0x6030009  bgezl       $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C46BCu;
    {
        const bool branch_taken_0x1c46bc = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1c46bc) {
            ctx->pc = 0x1C46C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46BCu;
            // 0x1c46c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C46E4u;
            goto label_1c46e4;
        }
    }
    ctx->pc = 0x1C46C4u;
    // 0x1c46c4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c46c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c46c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c46c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46cc: 0x24a5a268  addiu       $a1, $a1, -0x5D98
    ctx->pc = 0x1c46ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943336));
label_1c46d0:
    // 0x1c46d0: 0xc071076  jal         func_1C41D8
    ctx->pc = 0x1C46D0u;
    SET_GPR_U32(ctx, 31, 0x1C46D8u);
    ctx->pc = 0x1C41D8u;
    if (runtime->hasFunction(0x1C41D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C41D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46D8u; }
        if (ctx->pc != 0x1C46D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C41D8_0x1c41d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46D8u; }
        if (ctx->pc != 0x1C46D8u) { return; }
    }
    ctx->pc = 0x1C46D8u;
label_1c46d8:
    // 0x1c46d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C46D8u;
    {
        const bool branch_taken_0x1c46d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C46DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46D8u;
            // 0x1c46dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c46d8) {
            ctx->pc = 0x1C46E4u;
            goto label_1c46e4;
        }
    }
    ctx->pc = 0x1C46E0u;
label_1c46e0:
    // 0x1c46e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c46e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c46e4:
    // 0x1c46e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c46e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c46e8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c46e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c46ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c46ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c46f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C46F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C46F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46F0u;
            // 0x1c46f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C46F8u;
    ctx->pc = 0x1c46f8u;
}
