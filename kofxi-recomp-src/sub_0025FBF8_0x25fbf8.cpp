#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025FBF8
// Address: 0x25fbf8 - 0x25fd68
void sub_0025FBF8_0x25fbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FBF8_0x25fbf8");
#endif

    switch (ctx->pc) {
        case 0x25fc18u: goto label_25fc18;
        case 0x25fc2cu: goto label_25fc2c;
        case 0x25fc3cu: goto label_25fc3c;
        case 0x25fc48u: goto label_25fc48;
        case 0x25fc64u: goto label_25fc64;
        case 0x25fc78u: goto label_25fc78;
        case 0x25fc94u: goto label_25fc94;
        case 0x25fcc0u: goto label_25fcc0;
        case 0x25fd2cu: goto label_25fd2c;
        case 0x25fd44u: goto label_25fd44;
        default: break;
    }

    ctx->pc = 0x25fbf8u;

    // 0x25fbf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25fbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25fbfc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x25fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x25fc00: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x25fc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25fc04: 0x248471b0  addiu       $a0, $a0, 0x71B0
    ctx->pc = 0x25fc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29104));
    // 0x25fc08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25fc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25fc0c: 0x2405430c  addiu       $a1, $zero, 0x430C
    ctx->pc = 0x25fc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17164));
    // 0x25fc10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25fc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25fc14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25fc14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fc18:
    // 0x25fc18: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x25fc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x25fc1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25fc1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc20: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x25fc20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc24: 0xc045286  jal         func_114A18
    ctx->pc = 0x25FC24u;
    SET_GPR_U32(ctx, 31, 0x25FC2Cu);
    ctx->pc = 0x25FC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC24u;
            // 0x25fc28: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114A18u;
    if (runtime->hasFunction(0x114A18u)) {
        auto targetFn = runtime->lookupFunction(0x114A18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FC2Cu; }
        if (ctx->pc != 0x25FC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A18_0x114a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FC2Cu; }
        if (ctx->pc != 0x25FC2Cu) { return; }
    }
    ctx->pc = 0x25FC2Cu;
label_25fc2c:
    // 0x25fc2c: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x25fc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x25fc30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25fc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc34: 0xc0bf3f8  jal         func_2FCFE0
    ctx->pc = 0x25FC34u;
    SET_GPR_U32(ctx, 31, 0x25FC3Cu);
    ctx->pc = 0x25FC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC34u;
            // 0x25fc38: 0x261117c0  addiu       $s1, $s0, 0x17C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCFE0u;
    if (runtime->hasFunction(0x2FCFE0u)) {
        auto targetFn = runtime->lookupFunction(0x2FCFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FC3Cu; }
        if (ctx->pc != 0x25FC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCFE0_0x2fcfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FC3Cu; }
        if (ctx->pc != 0x25FC3Cu) { return; }
    }
    ctx->pc = 0x25FC3Cu;
label_25fc3c:
    // 0x25fc3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25fc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc40: 0xc08c870  jal         func_2321C0
    ctx->pc = 0x25FC40u;
    SET_GPR_U32(ctx, 31, 0x25FC48u);
    ctx->pc = 0x25FC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC40u;
            // 0x25fc44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2321C0u;
    if (runtime->hasFunction(0x2321C0u)) {
        auto targetFn = runtime->lookupFunction(0x2321C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FC48u; }
        if (ctx->pc != 0x25FC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002321C0_0x2321c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FC48u; }
        if (ctx->pc != 0x25FC48u) { return; }
    }
    ctx->pc = 0x25FC48u;
label_25fc48:
    // 0x25fc48: 0xde0517c0  ld          $a1, 0x17C0($s0)
    ctx->pc = 0x25fc48u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 6080)));
    // 0x25fc4c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25fc50: 0xde240008  ld          $a0, 0x8($s1)
    ctx->pc = 0x25fc50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25fc54: 0x244317b0  addiu       $v1, $v0, 0x17B0
    ctx->pc = 0x25fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6064));
    // 0x25fc58: 0xfc4517b0  sd          $a1, 0x17B0($v0)
    ctx->pc = 0x25fc58u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 6064), GPR_U64(ctx, 5));
    // 0x25fc5c: 0xc046016  jal         func_118058
    ctx->pc = 0x25FC5Cu;
    SET_GPR_U32(ctx, 31, 0x25FC64u);
    ctx->pc = 0x25FC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC5Cu;
            // 0x25fc60: 0xfc640008  sd          $a0, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118058u;
    if (runtime->hasFunction(0x118058u)) {
        auto targetFn = runtime->lookupFunction(0x118058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FC64u; }
        if (ctx->pc != 0x25FC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118058_0x118058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FC64u; }
        if (ctx->pc != 0x25FC64u) { return; }
    }
    ctx->pc = 0x25FC64u;
label_25fc64:
    // 0x25fc64: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25fc68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25fc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc6c: 0xfc6217d8  sd          $v0, 0x17D8($v1)
    ctx->pc = 0x25fc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 6104), GPR_U64(ctx, 2));
    // 0x25fc70: 0xc046278  jal         func_1189E0
    ctx->pc = 0x25FC70u;
    SET_GPR_U32(ctx, 31, 0x25FC78u);
    ctx->pc = 0x25FC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC70u;
            // 0x25fc74: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1189E0u;
    if (runtime->hasFunction(0x1189E0u)) {
        auto targetFn = runtime->lookupFunction(0x1189E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FC78u; }
        if (ctx->pc != 0x25FC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001189E0_0x1189e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FC78u; }
        if (ctx->pc != 0x25FC78u) { return; }
    }
    ctx->pc = 0x25FC78u;
label_25fc78:
    // 0x25fc78: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x25fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x25fc7c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x25fc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x25fc80: 0xfc62ceb8  sd          $v0, -0x3148($v1)
    ctx->pc = 0x25fc80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294954680), GPR_U64(ctx, 2));
    // 0x25fc84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25fc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc88: 0x24a5fcc0  addiu       $a1, $a1, -0x340
    ctx->pc = 0x25fc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966464));
    // 0x25fc8c: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x25FC8Cu;
    SET_GPR_U32(ctx, 31, 0x25FC94u);
    ctx->pc = 0x25FC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC8Cu;
            // 0x25fc90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (runtime->hasFunction(0x118B90u)) {
        auto targetFn = runtime->lookupFunction(0x118B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FC94u; }
        if (ctx->pc != 0x25FC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118B90_0x118b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FC94u; }
        if (ctx->pc != 0x25FC94u) { return; }
    }
    ctx->pc = 0x25FC94u;
label_25fc94:
    // 0x25fc94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25fc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc98: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x25fc98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x25fc9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25fca0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25fca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fca4: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x25fca4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25fca8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x25fca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fcac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25fcacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fcb0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x25fcb0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x25fcb4: 0xac85cec0  sw          $a1, -0x3140($a0)
    ctx->pc = 0x25fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954688), GPR_U32(ctx, 5));
    // 0x25fcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x25FCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FCB8u;
            // 0x25fcbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FCC0u;
label_25fcc0:
    // 0x25fcc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25fcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25fcc4: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x25fcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x25fcc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25fcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25fccc: 0x24c517c0  addiu       $a1, $a2, 0x17C0
    ctx->pc = 0x25fcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 6080));
    // 0x25fcd0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x25fcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x25fcd4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x25fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x25fcd8: 0x3463423f  ori         $v1, $v1, 0x423F
    ctx->pc = 0x25fcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16959);
    // 0x25fcdc: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x25fcdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x25fce0: 0x64442710  daddiu      $a0, $v0, 0x2710
    ctx->pc = 0x25fce0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)10000);
    // 0x25fce4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x25fce4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x25fce8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25FCE8u;
    {
        const bool branch_taken_0x25fce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FCE8u;
            // 0x25fcec: 0xfca40008  sd          $a0, 0x8($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fce8) {
            ctx->pc = 0x25FD0Cu;
            goto label_25fd0c;
        }
    }
    ctx->pc = 0x25FCF0u;
    // 0x25fcf0: 0xdcc317c0  ld          $v1, 0x17C0($a2)
    ctx->pc = 0x25fcf0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 6080)));
    // 0x25fcf4: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x25fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x25fcf8: 0x3442bdc0  ori         $v0, $v0, 0xBDC0
    ctx->pc = 0x25fcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48576);
    // 0x25fcfc: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x25fcfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x25fd00: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x25fd00u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x25fd04: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x25fd04u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x25fd08: 0xfcc317c0  sd          $v1, 0x17C0($a2)
    ctx->pc = 0x25fd08u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 6080), GPR_U64(ctx, 3));
label_25fd0c:
    // 0x25fd0c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x25fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x25fd10: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x25fd10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x25fd14: 0xdc62ceb0  ld          $v0, -0x3150($v1)
    ctx->pc = 0x25fd14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294954672)));
    // 0x25fd18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x25fd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd1c: 0x8e0417a8  lw          $a0, 0x17A8($s0)
    ctx->pc = 0x25fd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6056)));
    // 0x25fd20: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25fd20u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25fd24: 0xc043338  jal         func_10CCE0
    ctx->pc = 0x25FD24u;
    SET_GPR_U32(ctx, 31, 0x25FD2Cu);
    ctx->pc = 0x25FD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FD24u;
            // 0x25fd28: 0xfc62ceb0  sd          $v0, -0x3150($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4294954672), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCE0u;
    if (runtime->hasFunction(0x10CCE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FD2Cu; }
        if (ctx->pc != 0x25FD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCE0_0x10cce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FD2Cu; }
        if (ctx->pc != 0x25FD2Cu) { return; }
    }
    ctx->pc = 0x25FD2Cu;
label_25fd2c:
    // 0x25fd2c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FD2Cu;
    {
        const bool branch_taken_0x25fd2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25FD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FD2Cu;
            // 0x25fd30: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd2c) {
            ctx->pc = 0x25FD44u;
            goto label_25fd44;
        }
    }
    ctx->pc = 0x25FD34u;
    // 0x25fd34: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FD34u;
    {
        const bool branch_taken_0x25fd34 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x25fd34) {
            ctx->pc = 0x25FD44u;
            goto label_25fd44;
        }
    }
    ctx->pc = 0x25FD3Cu;
    // 0x25fd3c: 0xc043324  jal         func_10CC90
    ctx->pc = 0x25FD3Cu;
    SET_GPR_U32(ctx, 31, 0x25FD44u);
    ctx->pc = 0x25FD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FD3Cu;
            // 0x25fd40: 0x8e0417a8  lw          $a0, 0x17A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6056)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (runtime->hasFunction(0x10CC90u)) {
        auto targetFn = runtime->lookupFunction(0x10CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FD44u; }
        if (ctx->pc != 0x25FD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FD44u; }
        if (ctx->pc != 0x25FD44u) { return; }
    }
    ctx->pc = 0x25FD44u;
label_25fd44:
    // 0x25fd44: 0xf  sync
    ctx->pc = 0x25fd44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x25fd48: 0x42000038  ei
    ctx->pc = 0x25fd48u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
    // 0x25fd4c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x25fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x25fd50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25fd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fd54: 0xdc62ceb8  ld          $v0, -0x3148($v1)
    ctx->pc = 0x25fd54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294954680)));
    // 0x25fd58: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x25fd58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fd5c: 0x3e00008  jr          $ra
    ctx->pc = 0x25FD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FD5Cu;
            // 0x25fd60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FD64u;
    // 0x25fd64: 0x0  nop
    ctx->pc = 0x25fd64u;
    // NOP
    ctx->pc = 0x25fd68u;
}
