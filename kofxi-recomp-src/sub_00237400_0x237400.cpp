#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00237400
// Address: 0x237400 - 0x2376e0
void sub_00237400_0x237400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237400_0x237400");
#endif

    switch (ctx->pc) {
        case 0x237438u: goto label_237438;
        case 0x23747cu: goto label_23747c;
        case 0x2374a8u: goto label_2374a8;
        case 0x2374c4u: goto label_2374c4;
        case 0x2374e8u: goto label_2374e8;
        case 0x237504u: goto label_237504;
        case 0x237524u: goto label_237524;
        case 0x23753cu: goto label_23753c;
        case 0x237594u: goto label_237594;
        case 0x23759cu: goto label_23759c;
        case 0x2375d0u: goto label_2375d0;
        case 0x2375d8u: goto label_2375d8;
        case 0x2375f4u: goto label_2375f4;
        case 0x237638u: goto label_237638;
        case 0x237674u: goto label_237674;
        case 0x23767cu: goto label_23767c;
        case 0x237684u: goto label_237684;
        case 0x23768cu: goto label_23768c;
        case 0x2376a0u: goto label_2376a0;
        case 0x2376b4u: goto label_2376b4;
        case 0x2376c8u: goto label_2376c8;
        default: break;
    }

    ctx->pc = 0x237400u;

    // 0x237400: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x237400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x237404: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x237404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x237408: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x237408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23740c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23740cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237410: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x237410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x237414: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x237414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x237418: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x237418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23741c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23741cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237420: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x237420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x237424: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x237424u;
    {
        const bool branch_taken_0x237424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x237428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237424u;
            // 0x237428: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237424) {
            ctx->pc = 0x237488u;
            goto label_237488;
        }
    }
    ctx->pc = 0x23742Cu;
    // 0x23742c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x23742cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237430: 0x3c13f000  lui         $s3, 0xF000
    ctx->pc = 0x237430u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)61440 << 16));
    // 0x237434: 0x0  nop
    ctx->pc = 0x237434u;
    // NOP
label_237438:
    // 0x237438: 0x12340006  beq         $s1, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x237438u;
    {
        const bool branch_taken_0x237438 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x23743Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237438u;
            // 0x23743c: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237438) {
            ctx->pc = 0x237454u;
            goto label_237454;
        }
    }
    ctx->pc = 0x237440u;
    // 0x237440: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x237440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x237444: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x237444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x237448: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x237448u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x23744c: 0x5622000c  bnel        $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23744Cu;
    {
        const bool branch_taken_0x23744c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x23744c) {
            ctx->pc = 0x237450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23744Cu;
            // 0x237450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x237480u;
            goto label_237480;
        }
    }
    ctx->pc = 0x237454u;
label_237454:
    // 0x237454: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237454u;
    {
        const bool branch_taken_0x237454 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237454u;
            // 0x237458: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237454) {
            ctx->pc = 0x237468u;
            goto label_237468;
        }
    }
    ctx->pc = 0x23745Cu;
    // 0x23745c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23745Cu;
    {
        const bool branch_taken_0x23745c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23745Cu;
            // 0x237460: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23745c) {
            ctx->pc = 0x23746Cu;
            goto label_23746c;
        }
    }
    ctx->pc = 0x237464u;
    // 0x237464: 0x0  nop
    ctx->pc = 0x237464u;
    // NOP
label_237468:
    // 0x237468: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x237468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_23746c:
    // 0x23746c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x237470: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x237470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x237474: 0xc098560  jal         func_261580
    ctx->pc = 0x237474u;
    SET_GPR_U32(ctx, 31, 0x23747Cu);
    ctx->pc = 0x237478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237474u;
            // 0x237478: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23747Cu; }
        if (ctx->pc != 0x23747Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23747Cu; }
        if (ctx->pc != 0x23747Cu) { return; }
    }
    ctx->pc = 0x23747Cu;
label_23747c:
    // 0x23747c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23747cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237480:
    // 0x237480: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x237480u;
    {
        const bool branch_taken_0x237480 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x237480) {
            ctx->pc = 0x237438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_237438;
        }
    }
    ctx->pc = 0x237488u;
label_237488:
    // 0x237488: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x237488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23748c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23748cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237490: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x237490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237494: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x237494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237498: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x237498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23749c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23749cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2374a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2374A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2374A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2374A0u;
            // 0x2374a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2374A8u;
label_2374a8:
    // 0x2374a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2374a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2374ac: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2374acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2374b0: 0xac40fe78  sw          $zero, -0x188($v0)
    ctx->pc = 0x2374b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966904), GPR_U32(ctx, 0));
    // 0x2374b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2374b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2374b8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2374b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2374bc: 0xc08d316  jal         func_234C58
    ctx->pc = 0x2374BCu;
    SET_GPR_U32(ctx, 31, 0x2374C4u);
    ctx->pc = 0x2374C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2374BCu;
            // 0x2374c0: 0x2484fe60  addiu       $a0, $a0, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234C58u;
    if (runtime->hasFunction(0x234C58u)) {
        auto targetFn = runtime->lookupFunction(0x234C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2374C4u; }
        if (ctx->pc != 0x2374C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234C58_0x234c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2374C4u; }
        if (ctx->pc != 0x2374C4u) { return; }
    }
    ctx->pc = 0x2374C4u;
label_2374c4:
    // 0x2374c4: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x2374c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2374c8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2374c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2374cc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2374ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2374d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2374d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2374d4: 0xac44fe3c  sw          $a0, -0x1C4($v0)
    ctx->pc = 0x2374d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966844), GPR_U32(ctx, 4));
    // 0x2374d8: 0xac64fe54  sw          $a0, -0x1AC($v1)
    ctx->pc = 0x2374d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966868), GPR_U32(ctx, 4));
    // 0x2374dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2374DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2374E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2374DCu;
            // 0x2374e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2374E4u;
    // 0x2374e4: 0x0  nop
    ctx->pc = 0x2374e4u;
    // NOP
label_2374e8:
    // 0x2374e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2374e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2374ec: 0x24044f90  addiu       $a0, $zero, 0x4F90
    ctx->pc = 0x2374ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20368));
    // 0x2374f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2374f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2374f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2374f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2374f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2374f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2374fc: 0xc098552  jal         func_261548
    ctx->pc = 0x2374FCu;
    SET_GPR_U32(ctx, 31, 0x237504u);
    ctx->pc = 0x237500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2374FCu;
            // 0x237500: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237504u; }
        if (ctx->pc != 0x237504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237504u; }
        if (ctx->pc != 0x237504u) { return; }
    }
    ctx->pc = 0x237504u;
label_237504:
    // 0x237504: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237508: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237508u;
    {
        const bool branch_taken_0x237508 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23750Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237508u;
            // 0x23750c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237508) {
            ctx->pc = 0x237518u;
            goto label_237518;
        }
    }
    ctx->pc = 0x237510u;
    // 0x237510: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x237510u;
    {
        const bool branch_taken_0x237510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237510u;
            // 0x237514: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237510) {
            ctx->pc = 0x237624u;
            goto label_237624;
        }
    }
    ctx->pc = 0x237518u;
label_237518:
    // 0x237518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23751c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x23751Cu;
    SET_GPR_U32(ctx, 31, 0x237524u);
    ctx->pc = 0x237520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23751Cu;
            // 0x237520: 0x24064f90  addiu       $a2, $zero, 0x4F90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237524u; }
        if (ctx->pc != 0x237524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237524u; }
        if (ctx->pc != 0x237524u) { return; }
    }
    ctx->pc = 0x237524u;
label_237524:
    // 0x237524: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x237524u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x237528: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x237528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23752c: 0x24c64c28  addiu       $a2, $a2, 0x4C28
    ctx->pc = 0x23752cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19496));
    // 0x237530: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x237530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x237534: 0xc043e24  jal         func_10F890
    ctx->pc = 0x237534u;
    SET_GPR_U32(ctx, 31, 0x23753Cu);
    ctx->pc = 0x237538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237534u;
            // 0x237538: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (runtime->hasFunction(0x10F890u)) {
        auto targetFn = runtime->lookupFunction(0x10F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23753Cu; }
        if (ctx->pc != 0x23753Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F890_0x10f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23753Cu; }
        if (ctx->pc != 0x23753Cu) { return; }
    }
    ctx->pc = 0x23753Cu;
label_23753c:
    // 0x23753c: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x23753cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x237540: 0x240405d4  addiu       $a0, $zero, 0x5D4
    ctx->pc = 0x237540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1492));
    // 0x237544: 0x24068810  addiu       $a2, $zero, -0x77F0
    ctx->pc = 0x237544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294936592));
    // 0x237548: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x237548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x23754c: 0x244282e0  addiu       $v0, $v0, -0x7D20
    ctx->pc = 0x23754cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935264));
    // 0x237550: 0x34630021  ori         $v1, $v1, 0x21
    ctx->pc = 0x237550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33);
    // 0x237554: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x237554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x237558: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x237558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23755c: 0x24090032  addiu       $t1, $zero, 0x32
    ctx->pc = 0x23755cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x237560: 0xfe040040  sd          $a0, 0x40($s0)
    ctx->pc = 0x237560u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 4));
    // 0x237564: 0xa6060030  sh          $a2, 0x30($s0)
    ctx->pc = 0x237564u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 6));
    // 0x237568: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x237568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x23756c: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x23756cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x237570: 0x24a5fd00  addiu       $a1, $a1, -0x300
    ctx->pc = 0x237570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966528));
    // 0x237574: 0xa2070038  sb          $a3, 0x38($s0)
    ctx->pc = 0x237574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 7));
    // 0x237578: 0x26044e40  addiu       $a0, $s0, 0x4E40
    ctx->pc = 0x237578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20032));
    // 0x23757c: 0xa208003a  sb          $t0, 0x3A($s0)
    ctx->pc = 0x23757cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 8));
    // 0x237580: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x237580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x237584: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x237584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
    // 0x237588: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x237588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
    // 0x23758c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x23758Cu;
    SET_GPR_U32(ctx, 31, 0x237594u);
    ctx->pc = 0x237590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23758Cu;
            // 0x237590: 0xae0900e8  sw          $t1, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237594u; }
        if (ctx->pc != 0x237594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237594u; }
        if (ctx->pc != 0x237594u) { return; }
    }
    ctx->pc = 0x237594u;
label_237594:
    // 0x237594: 0xc08a054  jal         func_228150
    ctx->pc = 0x237594u;
    SET_GPR_U32(ctx, 31, 0x23759Cu);
    ctx->pc = 0x237598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237594u;
            // 0x237598: 0x26044e58  addiu       $a0, $s0, 0x4E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228150u;
    if (runtime->hasFunction(0x228150u)) {
        auto targetFn = runtime->lookupFunction(0x228150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23759Cu; }
        if (ctx->pc != 0x23759Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228150_0x228150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23759Cu; }
        if (ctx->pc != 0x23759Cu) { return; }
    }
    ctx->pc = 0x23759Cu;
label_23759c:
    // 0x23759c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x23759cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x2375a0: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x2375a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x2375a4: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x2375a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x2375a8: 0x24429080  addiu       $v0, $v0, -0x6F80
    ctx->pc = 0x2375a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938752));
    // 0x2375ac: 0x24639028  addiu       $v1, $v1, -0x6FD8
    ctx->pc = 0x2375acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938664));
    // 0x2375b0: 0x24a59048  addiu       $a1, $a1, -0x6FB8
    ctx->pc = 0x2375b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938696));
    // 0x2375b4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2375b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2375b8: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x2375b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    // 0x2375bc: 0xae034e1c  sw          $v1, 0x4E1C($s0)
    ctx->pc = 0x2375bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 19996), GPR_U32(ctx, 3));
    // 0x2375c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2375c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375c4: 0xae054e20  sw          $a1, 0x4E20($s0)
    ctx->pc = 0x2375c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20000), GPR_U32(ctx, 5));
    // 0x2375c8: 0xc08d10e  jal         func_234438
    ctx->pc = 0x2375C8u;
    SET_GPR_U32(ctx, 31, 0x2375D0u);
    ctx->pc = 0x2375CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2375C8u;
            // 0x2375cc: 0xae060130  sw          $a2, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234438u;
    if (runtime->hasFunction(0x234438u)) {
        auto targetFn = runtime->lookupFunction(0x234438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2375D0u; }
        if (ctx->pc != 0x2375D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234438_0x234438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2375D0u; }
        if (ctx->pc != 0x2375D0u) { return; }
    }
    ctx->pc = 0x2375D0u;
label_2375d0:
    // 0x2375d0: 0xc08e6f2  jal         func_239BC8
    ctx->pc = 0x2375D0u;
    SET_GPR_U32(ctx, 31, 0x2375D8u);
    ctx->pc = 0x2375D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2375D0u;
            // 0x2375d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239BC8u;
    if (runtime->hasFunction(0x239BC8u)) {
        auto targetFn = runtime->lookupFunction(0x239BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2375D8u; }
        if (ctx->pc != 0x2375D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239BC8_0x239bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2375D8u; }
        if (ctx->pc != 0x2375D8u) { return; }
    }
    ctx->pc = 0x2375D8u;
label_2375d8:
    // 0x2375d8: 0x240200f4  addiu       $v0, $zero, 0xF4
    ctx->pc = 0x2375d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x2375dc: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x2375dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2375e0: 0xa2020038  sb          $v0, 0x38($s0)
    ctx->pc = 0x2375e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x2375e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2375e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375e8: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x2375e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2375ec: 0xc08ce36  jal         func_2338D8
    ctx->pc = 0x2375ECu;
    SET_GPR_U32(ctx, 31, 0x2375F4u);
    ctx->pc = 0x2375F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2375ECu;
            // 0x2375f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2338D8u;
    if (runtime->hasFunction(0x2338D8u)) {
        auto targetFn = runtime->lookupFunction(0x2338D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2375F4u; }
        if (ctx->pc != 0x2375F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002338D8_0x2338d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2375F4u; }
        if (ctx->pc != 0x2375F4u) { return; }
    }
    ctx->pc = 0x2375F4u;
label_2375f4:
    // 0x2375f4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2375f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2375f8: 0x8c82fe78  lw          $v0, -0x188($a0)
    ctx->pc = 0x2375f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294966904)));
    // 0x2375fc: 0x2485fe78  addiu       $a1, $a0, -0x188
    ctx->pc = 0x2375fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966904));
    // 0x237600: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237600u;
    {
        const bool branch_taken_0x237600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237600u;
            // 0x237604: 0xae024e30  sw          $v0, 0x4E30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237600) {
            ctx->pc = 0x237618u;
            goto label_237618;
        }
    }
    ctx->pc = 0x237608u;
    // 0x237608: 0x8c83fe78  lw          $v1, -0x188($a0)
    ctx->pc = 0x237608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294966904)));
    // 0x23760c: 0x26024e30  addiu       $v0, $s0, 0x4E30
    ctx->pc = 0x23760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20016));
    // 0x237610: 0xac624e34  sw          $v0, 0x4E34($v1)
    ctx->pc = 0x237610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20020), GPR_U32(ctx, 2));
    // 0x237614: 0x0  nop
    ctx->pc = 0x237614u;
    // NOP
label_237618:
    // 0x237618: 0xac90fe78  sw          $s0, -0x188($a0)
    ctx->pc = 0x237618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966904), GPR_U32(ctx, 16));
    // 0x23761c: 0xae054e34  sw          $a1, 0x4E34($s0)
    ctx->pc = 0x23761cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20020), GPR_U32(ctx, 5));
    // 0x237620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x237620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237624:
    // 0x237624: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x237624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237628: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x237628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23762c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23762cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237630: 0x3e00008  jr          $ra
    ctx->pc = 0x237630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237630u;
            // 0x237634: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x237638u;
label_237638:
    // 0x237638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23763c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x237640: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x237640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x237644: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x237644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23764c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x23764cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x237650: 0x8e034e30  lw          $v1, 0x4E30($s0)
    ctx->pc = 0x237650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20016)));
    // 0x237654: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x237654u;
    {
        const bool branch_taken_0x237654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237654u;
            // 0x237658: 0x8e024e34  lw          $v0, 0x4E34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237654) {
            ctx->pc = 0x237668u;
            goto label_237668;
        }
    }
    ctx->pc = 0x23765Cu;
    // 0x23765c: 0xac624e34  sw          $v0, 0x4E34($v1)
    ctx->pc = 0x23765cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20020), GPR_U32(ctx, 2));
    // 0x237660: 0x8e034e30  lw          $v1, 0x4E30($s0)
    ctx->pc = 0x237660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20016)));
    // 0x237664: 0x8e024e34  lw          $v0, 0x4E34($s0)
    ctx->pc = 0x237664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20020)));
label_237668:
    // 0x237668: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x237668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23766c: 0xc08a08c  jal         func_228230
    ctx->pc = 0x23766Cu;
    SET_GPR_U32(ctx, 31, 0x237674u);
    ctx->pc = 0x237670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23766Cu;
            // 0x237670: 0x26044e58  addiu       $a0, $s0, 0x4E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (runtime->hasFunction(0x228230u)) {
        auto targetFn = runtime->lookupFunction(0x228230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237674u; }
        if (ctx->pc != 0x237674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228230_0x228230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237674u; }
        if (ctx->pc != 0x237674u) { return; }
    }
    ctx->pc = 0x237674u;
label_237674:
    // 0x237674: 0xc08ce60  jal         func_233980
    ctx->pc = 0x237674u;
    SET_GPR_U32(ctx, 31, 0x23767Cu);
    ctx->pc = 0x237678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237674u;
            // 0x237678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x233980u;
    if (runtime->hasFunction(0x233980u)) {
        auto targetFn = runtime->lookupFunction(0x233980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23767Cu; }
        if (ctx->pc != 0x23767Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233980_0x233980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23767Cu; }
        if (ctx->pc != 0x23767Cu) { return; }
    }
    ctx->pc = 0x23767Cu;
label_23767c:
    // 0x23767c: 0xc08e73e  jal         func_239CF8
    ctx->pc = 0x23767Cu;
    SET_GPR_U32(ctx, 31, 0x237684u);
    ctx->pc = 0x237680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23767Cu;
            // 0x237680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239CF8u;
    if (runtime->hasFunction(0x239CF8u)) {
        auto targetFn = runtime->lookupFunction(0x239CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237684u; }
        if (ctx->pc != 0x237684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239CF8_0x239cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237684u; }
        if (ctx->pc != 0x237684u) { return; }
    }
    ctx->pc = 0x237684u;
label_237684:
    // 0x237684: 0xc08d208  jal         func_234820
    ctx->pc = 0x237684u;
    SET_GPR_U32(ctx, 31, 0x23768Cu);
    ctx->pc = 0x237688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237684u;
            // 0x237688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234820u;
    if (runtime->hasFunction(0x234820u)) {
        auto targetFn = runtime->lookupFunction(0x234820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23768Cu; }
        if (ctx->pc != 0x23768Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234820_0x234820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23768Cu; }
        if (ctx->pc != 0x23768Cu) { return; }
    }
    ctx->pc = 0x23768Cu;
label_23768c:
    // 0x23768c: 0x8e044e50  lw          $a0, 0x4E50($s0)
    ctx->pc = 0x23768cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20048)));
    // 0x237690: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x237690u;
    {
        const bool branch_taken_0x237690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x237690) {
            ctx->pc = 0x237694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x237690u;
            // 0x237694: 0x8e044e4c  lw          $a0, 0x4E4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20044)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2376A4u;
            goto label_2376a4;
        }
    }
    ctx->pc = 0x237698u;
    // 0x237698: 0xc098560  jal         func_261580
    ctx->pc = 0x237698u;
    SET_GPR_U32(ctx, 31, 0x2376A0u);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2376A0u; }
        if (ctx->pc != 0x2376A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2376A0u; }
        if (ctx->pc != 0x2376A0u) { return; }
    }
    ctx->pc = 0x2376A0u;
label_2376a0:
    // 0x2376a0: 0x8e044e4c  lw          $a0, 0x4E4C($s0)
    ctx->pc = 0x2376a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20044)));
label_2376a4:
    // 0x2376a4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2376A4u;
    {
        const bool branch_taken_0x2376a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2376a4) {
            ctx->pc = 0x2376A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2376A4u;
            // 0x2376a8: 0x8e044e48  lw          $a0, 0x4E48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20040)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2376B8u;
            goto label_2376b8;
        }
    }
    ctx->pc = 0x2376ACu;
    // 0x2376ac: 0xc098560  jal         func_261580
    ctx->pc = 0x2376ACu;
    SET_GPR_U32(ctx, 31, 0x2376B4u);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2376B4u; }
        if (ctx->pc != 0x2376B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2376B4u; }
        if (ctx->pc != 0x2376B4u) { return; }
    }
    ctx->pc = 0x2376B4u;
label_2376b4:
    // 0x2376b4: 0x8e044e48  lw          $a0, 0x4E48($s0)
    ctx->pc = 0x2376b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20040)));
label_2376b8:
    // 0x2376b8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2376B8u;
    {
        const bool branch_taken_0x2376b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2376b8) {
            ctx->pc = 0x2376BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2376B8u;
            // 0x2376bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2376CCu;
            goto label_2376cc;
        }
    }
    ctx->pc = 0x2376C0u;
    // 0x2376c0: 0xc098560  jal         func_261580
    ctx->pc = 0x2376C0u;
    SET_GPR_U32(ctx, 31, 0x2376C8u);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2376C8u; }
        if (ctx->pc != 0x2376C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2376C8u; }
        if (ctx->pc != 0x2376C8u) { return; }
    }
    ctx->pc = 0x2376C8u;
label_2376c8:
    // 0x2376c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2376c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2376cc:
    // 0x2376cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2376ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2376d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2376d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2376d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2376d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2376d8: 0x8098560  j           func_261580
    ctx->pc = 0x2376D8u;
    ctx->pc = 0x2376DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2376D8u;
            // 0x2376dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00261580_0x261580(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2376E0u;
    ctx->pc = 0x2376e0u;
}
