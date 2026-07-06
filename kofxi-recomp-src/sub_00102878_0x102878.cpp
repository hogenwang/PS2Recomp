#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102878
// Address: 0x102878 - 0x1029b0
void sub_00102878_0x102878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102878_0x102878");
#endif

    switch (ctx->pc) {
        case 0x10289cu: goto label_10289c;
        case 0x1028a8u: goto label_1028a8;
        case 0x1028f0u: goto label_1028f0;
        case 0x102914u: goto label_102914;
        case 0x102920u: goto label_102920;
        case 0x102968u: goto label_102968;
        case 0x10297cu: goto label_10297c;
        default: break;
    }

    ctx->pc = 0x102878u;

    // 0x102878: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x102878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10287c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10287cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102884: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x102884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x102888: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x102888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10288c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10288cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102890: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x102890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x102894: 0xc040920  jal         func_102480
    ctx->pc = 0x102894u;
    SET_GPR_U32(ctx, 31, 0x10289Cu);
    ctx->pc = 0x102898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102894u;
            // 0x102898: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102480u;
    if (runtime->hasFunction(0x102480u)) {
        auto targetFn = runtime->lookupFunction(0x102480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10289Cu; }
        if (ctx->pc != 0x10289Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102480_0x102480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10289Cu; }
        if (ctx->pc != 0x10289Cu) { return; }
    }
    ctx->pc = 0x10289Cu;
label_10289c:
    // 0x10289c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10289cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1028a0: 0xc0408e2  jal         func_102388
    ctx->pc = 0x1028A0u;
    SET_GPR_U32(ctx, 31, 0x1028A8u);
    ctx->pc = 0x1028A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1028A0u;
            // 0x1028a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102388u;
    if (runtime->hasFunction(0x102388u)) {
        auto targetFn = runtime->lookupFunction(0x102388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1028A8u; }
        if (ctx->pc != 0x1028A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102388_0x102388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1028A8u; }
        if (ctx->pc != 0x1028A8u) { return; }
    }
    ctx->pc = 0x1028A8u;
label_1028a8:
    // 0x1028a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1028a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1028ac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1028acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1028b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1028b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1028b4: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1028B4u;
    {
        const bool branch_taken_0x1028b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1028b4) {
            ctx->pc = 0x1028B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1028B4u;
            // 0x1028b8: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1028BCu;
            goto label_1028bc;
        }
    }
    ctx->pc = 0x1028BCu;
label_1028bc:
    // 0x1028bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1028bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1028c0: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x1028c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1028c4: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x1028c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x1028c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1028c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1028cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1028ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1028d0: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x1028d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x1028d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1028d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1028d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1028d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1028dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1028dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1028e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1028e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1028e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1028E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1028E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1028E4u;
            // 0x1028e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1028ECu;
    // 0x1028ec: 0x0  nop
    ctx->pc = 0x1028ecu;
    // NOP
label_1028f0:
    // 0x1028f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1028f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1028f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1028f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1028f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1028f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1028fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1028fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x102900: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x102900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x102904: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x102904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102908: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x102908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10290c: 0xc040920  jal         func_102480
    ctx->pc = 0x10290Cu;
    SET_GPR_U32(ctx, 31, 0x102914u);
    ctx->pc = 0x102910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10290Cu;
            // 0x102910: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102480u;
    if (runtime->hasFunction(0x102480u)) {
        auto targetFn = runtime->lookupFunction(0x102480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102914u; }
        if (ctx->pc != 0x102914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102480_0x102480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102914u; }
        if (ctx->pc != 0x102914u) { return; }
    }
    ctx->pc = 0x102914u;
label_102914:
    // 0x102914: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x102914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102918: 0xc0408e2  jal         func_102388
    ctx->pc = 0x102918u;
    SET_GPR_U32(ctx, 31, 0x102920u);
    ctx->pc = 0x10291Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102918u;
            // 0x10291c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102388u;
    if (runtime->hasFunction(0x102388u)) {
        auto targetFn = runtime->lookupFunction(0x102388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102920u; }
        if (ctx->pc != 0x102920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102388_0x102388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102920u; }
        if (ctx->pc != 0x102920u) { return; }
    }
    ctx->pc = 0x102920u;
label_102920:
    // 0x102920: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x102920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x102924: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x102924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x102928: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x102928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10292c: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x10292Cu;
    {
        const bool branch_taken_0x10292c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10292c) {
            ctx->pc = 0x102930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10292Cu;
            // 0x102930: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x102934u;
            goto label_102934;
        }
    }
    ctx->pc = 0x102934u;
label_102934:
    // 0x102934: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x102934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102938: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x102938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x10293c: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x10293cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x102940: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x102940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x102944: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x102944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102948: 0x34420109  ori         $v0, $v0, 0x109
    ctx->pc = 0x102948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)265);
    // 0x10294c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10294cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102950: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x102950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x102954: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x102954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10295c: 0x3e00008  jr          $ra
    ctx->pc = 0x10295Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10295Cu;
            // 0x102960: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102964u;
    // 0x102964: 0x0  nop
    ctx->pc = 0x102964u;
    // NOP
label_102968:
    // 0x102968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x102968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10296c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10296cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102970: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x102970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x102974: 0xc0408e2  jal         func_102388
    ctx->pc = 0x102974u;
    SET_GPR_U32(ctx, 31, 0x10297Cu);
    ctx->pc = 0x102978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102974u;
            // 0x102978: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102388u;
    if (runtime->hasFunction(0x102388u)) {
        auto targetFn = runtime->lookupFunction(0x102388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10297Cu; }
        if (ctx->pc != 0x10297Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102388_0x102388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10297Cu; }
        if (ctx->pc != 0x10297Cu) { return; }
    }
    ctx->pc = 0x10297Cu;
label_10297c:
    // 0x10297c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102980: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x102980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x102984: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x102984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x102988: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x102988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x10298c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x102990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x102990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102994: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x102994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x102998: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x102998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x10299c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x10299cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1029a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1029a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1029a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1029a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1029a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1029A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1029ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1029A8u;
            // 0x1029ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1029B0u;
    ctx->pc = 0x1029b0u;
}
