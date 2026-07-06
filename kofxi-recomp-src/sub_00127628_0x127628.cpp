#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127628
// Address: 0x127628 - 0x127758
void sub_00127628_0x127628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127628_0x127628");
#endif

    switch (ctx->pc) {
        case 0x127688u: goto label_127688;
        case 0x1276b0u: goto label_1276b0;
        case 0x1276c8u: goto label_1276c8;
        case 0x1276e4u: goto label_1276e4;
        case 0x1276f4u: goto label_1276f4;
        case 0x127704u: goto label_127704;
        case 0x127720u: goto label_127720;
        case 0x12774cu: goto label_12774c;
        default: break;
    }

    ctx->pc = 0x127628u;

    // 0x127628: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x127628u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12762c: 0x24ee0008  addiu       $t6, $a3, 0x8
    ctx->pc = 0x12762cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x127630: 0x1cf001a  div         $zero, $t6, $t7
    ctx->pc = 0x127630u;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 14);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x127634: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x127634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x127638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12763c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x12763cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127640: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x127640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x127644: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x127644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x127648: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x127648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12764c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12764cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x127650: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x127650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127654: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x127654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x127658: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x127658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12765c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12765cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x127660: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x127660u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127664: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x127664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x127668: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x127668u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12766c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12766cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127670: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x127670u;
    {
        const bool branch_taken_0x127670 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x127670) {
            ctx->pc = 0x127674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127670u;
            // 0x127674: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x127678u;
            goto label_127678;
        }
    }
    ctx->pc = 0x127678u;
label_127678:
    // 0x127678: 0x7012  mflo        $t6
    ctx->pc = 0x127678u;
    SET_GPR_U64(ctx, 14, ctx->lo);
    // 0x12767c: 0x18e782a  slt         $t7, $t4, $t6
    ctx->pc = 0x12767cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x127680: 0x11e00009  beqz        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x127680u;
    {
        const bool branch_taken_0x127680 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x127684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127680u;
            // 0x127684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127680) {
            ctx->pc = 0x1276A8u;
            goto label_1276a8;
        }
    }
    ctx->pc = 0x127688u;
label_127688:
    // 0x127688: 0xc6040  sll         $t4, $t4, 1
    ctx->pc = 0x127688u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x12768c: 0x18e782a  slt         $t7, $t4, $t6
    ctx->pc = 0x12768cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x127690: 0x0  nop
    ctx->pc = 0x127690u;
    // NOP
    // 0x127694: 0x0  nop
    ctx->pc = 0x127694u;
    // NOP
    // 0x127698: 0x0  nop
    ctx->pc = 0x127698u;
    // NOP
    // 0x12769c: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12769Cu;
    {
        const bool branch_taken_0x12769c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1276A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12769Cu;
            // 0x1276a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12769c) {
            ctx->pc = 0x127688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127688;
        }
    }
    ctx->pc = 0x1276A4u;
    // 0x1276a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1276a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1276a8:
    // 0x1276a8: 0xc049d12  jal         func_127448
    ctx->pc = 0x1276A8u;
    SET_GPR_U32(ctx, 31, 0x1276B0u);
    ctx->pc = 0x1276ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1276A8u;
            // 0x1276ac: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127448u;
    if (runtime->hasFunction(0x127448u)) {
        auto targetFn = runtime->lookupFunction(0x127448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1276B0u; }
        if (ctx->pc != 0x1276B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127448_0x127448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1276B0u; }
        if (ctx->pc != 0x1276B0u) { return; }
    }
    ctx->pc = 0x1276B0u;
label_1276b0:
    // 0x1276b0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1276b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1276b4: 0xac540014  sw          $s4, 0x14($v0)
    ctx->pc = 0x1276b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 20));
    // 0x1276b8: 0x2a6e000a  slti        $t6, $s3, 0xA
    ctx->pc = 0x1276b8u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1276bc: 0x15c00023  bnez        $t6, . + 4 + (0x23 << 2)
    ctx->pc = 0x1276BCu;
    {
        const bool branch_taken_0x1276bc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1276C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1276BCu;
            // 0x1276c0: 0xac4f0010  sw          $t7, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276bc) {
            ctx->pc = 0x12774Cu;
            goto label_12774c;
        }
    }
    ctx->pc = 0x1276C4u;
    // 0x1276c4: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x1276c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_1276c8:
    // 0x1276c8: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1276c8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1276cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1276ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1276d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276d4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1276d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1276d8: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x1276d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x1276dc: 0xc049d48  jal         func_127520
    ctx->pc = 0x1276DCu;
    SET_GPR_U32(ctx, 31, 0x1276E4u);
    ctx->pc = 0x1276E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1276DCu;
            // 0x1276e0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127520u;
    if (runtime->hasFunction(0x127520u)) {
        auto targetFn = runtime->lookupFunction(0x127520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1276E4u; }
        if (ctx->pc != 0x1276E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127520_0x127520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1276E4u; }
        if (ctx->pc != 0x1276E4u) { return; }
    }
    ctx->pc = 0x1276E4u;
label_1276e4:
    // 0x1276e4: 0x233782a  slt         $t7, $s1, $s3
    ctx->pc = 0x1276e4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1276e8: 0x15e0fff7  bnez        $t7, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1276E8u;
    {
        const bool branch_taken_0x1276e8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1276ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1276E8u;
            // 0x1276ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276e8) {
            ctx->pc = 0x1276C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1276c8;
        }
    }
    ctx->pc = 0x1276F0u;
    // 0x1276f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1276f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1276f4:
    // 0x1276f4: 0x235782a  slt         $t7, $s1, $s5
    ctx->pc = 0x1276f4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1276f8: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1276F8u;
    {
        const bool branch_taken_0x1276f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1276F8u;
            // 0x1276fc: 0x2b18823  subu        $s1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276f8) {
            ctx->pc = 0x127728u;
            goto label_127728;
        }
    }
    ctx->pc = 0x127700u;
    // 0x127700: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x127700u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_127704:
    // 0x127704: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x127704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x127708: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x127708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12770c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12770cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127710: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x127710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x127714: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x127714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x127718: 0xc049d48  jal         func_127520
    ctx->pc = 0x127718u;
    SET_GPR_U32(ctx, 31, 0x127720u);
    ctx->pc = 0x12771Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127718u;
            // 0x12771c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127520u;
    if (runtime->hasFunction(0x127520u)) {
        auto targetFn = runtime->lookupFunction(0x127520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127720u; }
        if (ctx->pc != 0x127720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127520_0x127520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127720u; }
        if (ctx->pc != 0x127720u) { return; }
    }
    ctx->pc = 0x127720u;
label_127720:
    // 0x127720: 0x5620fff8  bnel        $s1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x127720u;
    {
        const bool branch_taken_0x127720 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x127720) {
            ctx->pc = 0x127724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127720u;
            // 0x127724: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127704u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127704;
        }
    }
    ctx->pc = 0x127728u;
label_127728:
    // 0x127728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12772c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12772cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127730: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x127730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127734: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x127734u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127738: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x127738u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12773c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12773cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x127740: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x127740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127744: 0x3e00008  jr          $ra
    ctx->pc = 0x127744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127744u;
            // 0x127748: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12774Cu;
label_12774c:
    // 0x12774c: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x12774Cu;
    {
        const bool branch_taken_0x12774c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12774Cu;
            // 0x127750: 0x2610000a  addiu       $s0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12774c) {
            ctx->pc = 0x1276F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1276f4;
        }
    }
    ctx->pc = 0x127754u;
    // 0x127754: 0x0  nop
    ctx->pc = 0x127754u;
    // NOP
    ctx->pc = 0x127758u;
}
