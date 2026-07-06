#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00109638
// Address: 0x109638 - 0x1098a8
void sub_00109638_0x109638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109638_0x109638");
#endif

    switch (ctx->pc) {
        case 0x10964cu: goto label_10964c;
        case 0x10967cu: goto label_10967c;
        case 0x109688u: goto label_109688;
        case 0x1096a0u: goto label_1096a0;
        case 0x1096acu: goto label_1096ac;
        case 0x1096bcu: goto label_1096bc;
        case 0x1096c8u: goto label_1096c8;
        case 0x1096d4u: goto label_1096d4;
        case 0x1096e4u: goto label_1096e4;
        case 0x1096f4u: goto label_1096f4;
        case 0x109700u: goto label_109700;
        case 0x109718u: goto label_109718;
        case 0x109730u: goto label_109730;
        case 0x10973cu: goto label_10973c;
        case 0x109748u: goto label_109748;
        case 0x109754u: goto label_109754;
        case 0x109760u: goto label_109760;
        case 0x10976cu: goto label_10976c;
        case 0x109778u: goto label_109778;
        case 0x109784u: goto label_109784;
        case 0x109790u: goto label_109790;
        case 0x10979cu: goto label_10979c;
        case 0x1097b0u: goto label_1097b0;
        case 0x109830u: goto label_109830;
        case 0x109838u: goto label_109838;
        case 0x109850u: goto label_109850;
        case 0x109860u: goto label_109860;
        case 0x109874u: goto label_109874;
        default: break;
    }

    ctx->pc = 0x109638u;

    // 0x109638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x109638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10963c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109640: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x109640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x109644: 0xc042526  jal         func_109498
    ctx->pc = 0x109644u;
    SET_GPR_U32(ctx, 31, 0x10964Cu);
    ctx->pc = 0x109648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109644u;
            // 0x109648: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109498u;
    if (runtime->hasFunction(0x109498u)) {
        auto targetFn = runtime->lookupFunction(0x109498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10964Cu; }
        if (ctx->pc != 0x10964Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109498_0x109498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10964Cu; }
        if (ctx->pc != 0x10964Cu) { return; }
    }
    ctx->pc = 0x10964Cu;
label_10964c:
    // 0x10964c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10964cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x109650: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x109650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x109654: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109654u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x109658: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x109658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x10965c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x10965cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x109660: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x109660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x109664: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x109664u;
    {
        const bool branch_taken_0x109664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x109668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109664u;
            // 0x109668: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109664) {
            ctx->pc = 0x10967Cu;
            goto label_10967c;
        }
    }
    ctx->pc = 0x10966Cu;
    // 0x10966c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109674: 0x8042534  j           func_1094D0
    ctx->pc = 0x109674u;
    ctx->pc = 0x109678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109674u;
            // 0x109678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1094D0u;
    if (runtime->hasFunction(0x1094D0u)) {
        auto targetFn = runtime->lookupFunction(0x1094D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001094D0_0x1094d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10967Cu;
label_10967c:
    // 0x10967c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10967cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109680: 0x3e00008  jr          $ra
    ctx->pc = 0x109680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109680u;
            // 0x109684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109688u;
label_109688:
    // 0x109688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x109688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10968c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10968cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109690: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x109694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x109698: 0xc041c56  jal         func_107158
    ctx->pc = 0x109698u;
    SET_GPR_U32(ctx, 31, 0x1096A0u);
    ctx->pc = 0x10969Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109698u;
            // 0x10969c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1096A0u; }
        if (ctx->pc != 0x1096A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1096A0u; }
        if (ctx->pc != 0x1096A0u) { return; }
    }
    ctx->pc = 0x1096A0u;
label_1096a0:
    // 0x1096a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1096a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1096a4: 0xc041c56  jal         func_107158
    ctx->pc = 0x1096A4u;
    SET_GPR_U32(ctx, 31, 0x1096ACu);
    ctx->pc = 0x1096A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1096A4u;
            // 0x1096a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1096ACu; }
        if (ctx->pc != 0x1096ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1096ACu; }
        if (ctx->pc != 0x1096ACu) { return; }
    }
    ctx->pc = 0x1096ACu;
label_1096ac:
    // 0x1096ac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1096ACu;
    {
        const bool branch_taken_0x1096ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1096B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1096ACu;
            // 0x1096b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096ac) {
            ctx->pc = 0x1096D8u;
            goto label_1096d8;
        }
    }
    ctx->pc = 0x1096B4u;
    // 0x1096b4: 0xc041c56  jal         func_107158
    ctx->pc = 0x1096B4u;
    SET_GPR_U32(ctx, 31, 0x1096BCu);
    ctx->pc = 0x1096B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1096B4u;
            // 0x1096b8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1096BCu; }
        if (ctx->pc != 0x1096BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1096BCu; }
        if (ctx->pc != 0x1096BCu) { return; }
    }
    ctx->pc = 0x1096BCu;
label_1096bc:
    // 0x1096bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1096bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1096c0: 0xc041c56  jal         func_107158
    ctx->pc = 0x1096C0u;
    SET_GPR_U32(ctx, 31, 0x1096C8u);
    ctx->pc = 0x1096C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1096C0u;
            // 0x1096c4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1096C8u; }
        if (ctx->pc != 0x1096C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1096C8u; }
        if (ctx->pc != 0x1096C8u) { return; }
    }
    ctx->pc = 0x1096C8u;
label_1096c8:
    // 0x1096c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1096c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1096cc: 0xc041c56  jal         func_107158
    ctx->pc = 0x1096CCu;
    SET_GPR_U32(ctx, 31, 0x1096D4u);
    ctx->pc = 0x1096D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1096CCu;
            // 0x1096d0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1096D4u; }
        if (ctx->pc != 0x1096D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1096D4u; }
        if (ctx->pc != 0x1096D4u) { return; }
    }
    ctx->pc = 0x1096D4u;
label_1096d4:
    // 0x1096d4: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x1096d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_1096d8:
    // 0x1096d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1096d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1096dc: 0xc041c56  jal         func_107158
    ctx->pc = 0x1096DCu;
    SET_GPR_U32(ctx, 31, 0x1096E4u);
    ctx->pc = 0x1096E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1096DCu;
            // 0x1096e0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1096E4u; }
        if (ctx->pc != 0x1096E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1096E4u; }
        if (ctx->pc != 0x1096E4u) { return; }
    }
    ctx->pc = 0x1096E4u;
label_1096e4:
    // 0x1096e4: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x1096e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x1096e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1096e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1096ec: 0xc041c56  jal         func_107158
    ctx->pc = 0x1096ECu;
    SET_GPR_U32(ctx, 31, 0x1096F4u);
    ctx->pc = 0x1096F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1096ECu;
            // 0x1096f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1096F4u; }
        if (ctx->pc != 0x1096F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1096F4u; }
        if (ctx->pc != 0x1096F4u) { return; }
    }
    ctx->pc = 0x1096F4u;
label_1096f4:
    // 0x1096f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1096f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1096f8: 0xc041c56  jal         func_107158
    ctx->pc = 0x1096F8u;
    SET_GPR_U32(ctx, 31, 0x109700u);
    ctx->pc = 0x1096FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1096F8u;
            // 0x1096fc: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109700u; }
        if (ctx->pc != 0x109700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109700u; }
        if (ctx->pc != 0x109700u) { return; }
    }
    ctx->pc = 0x109700u;
label_109700:
    // 0x109700: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x109700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x109704: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x109704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10970c: 0x3e00008  jr          $ra
    ctx->pc = 0x10970Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10970Cu;
            // 0x109710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109714u;
    // 0x109714: 0x0  nop
    ctx->pc = 0x109714u;
    // NOP
label_109718:
    // 0x109718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x109718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10971c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10971cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x109724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x109728: 0xc041c56  jal         func_107158
    ctx->pc = 0x109728u;
    SET_GPR_U32(ctx, 31, 0x109730u);
    ctx->pc = 0x10972Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109728u;
            // 0x10972c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109730u; }
        if (ctx->pc != 0x109730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109730u; }
        if (ctx->pc != 0x109730u) { return; }
    }
    ctx->pc = 0x109730u;
label_109730:
    // 0x109730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109734: 0xc041c56  jal         func_107158
    ctx->pc = 0x109734u;
    SET_GPR_U32(ctx, 31, 0x10973Cu);
    ctx->pc = 0x109738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109734u;
            // 0x109738: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10973Cu; }
        if (ctx->pc != 0x10973Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10973Cu; }
        if (ctx->pc != 0x10973Cu) { return; }
    }
    ctx->pc = 0x10973Cu;
label_10973c:
    // 0x10973c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10973cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109740: 0xc041c56  jal         func_107158
    ctx->pc = 0x109740u;
    SET_GPR_U32(ctx, 31, 0x109748u);
    ctx->pc = 0x109744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109740u;
            // 0x109744: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109748u; }
        if (ctx->pc != 0x109748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109748u; }
        if (ctx->pc != 0x109748u) { return; }
    }
    ctx->pc = 0x109748u;
label_109748:
    // 0x109748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10974c: 0xc041c56  jal         func_107158
    ctx->pc = 0x10974Cu;
    SET_GPR_U32(ctx, 31, 0x109754u);
    ctx->pc = 0x109750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10974Cu;
            // 0x109750: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109754u; }
        if (ctx->pc != 0x109754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109754u; }
        if (ctx->pc != 0x109754u) { return; }
    }
    ctx->pc = 0x109754u;
label_109754:
    // 0x109754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109758: 0xc041c56  jal         func_107158
    ctx->pc = 0x109758u;
    SET_GPR_U32(ctx, 31, 0x109760u);
    ctx->pc = 0x10975Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109758u;
            // 0x10975c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109760u; }
        if (ctx->pc != 0x109760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109760u; }
        if (ctx->pc != 0x109760u) { return; }
    }
    ctx->pc = 0x109760u;
label_109760:
    // 0x109760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109764: 0xc041c56  jal         func_107158
    ctx->pc = 0x109764u;
    SET_GPR_U32(ctx, 31, 0x10976Cu);
    ctx->pc = 0x109768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109764u;
            // 0x109768: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10976Cu; }
        if (ctx->pc != 0x10976Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10976Cu; }
        if (ctx->pc != 0x10976Cu) { return; }
    }
    ctx->pc = 0x10976Cu;
label_10976c:
    // 0x10976c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10976cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109770: 0xc041c56  jal         func_107158
    ctx->pc = 0x109770u;
    SET_GPR_U32(ctx, 31, 0x109778u);
    ctx->pc = 0x109774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109770u;
            // 0x109774: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109778u; }
        if (ctx->pc != 0x109778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109778u; }
        if (ctx->pc != 0x109778u) { return; }
    }
    ctx->pc = 0x109778u;
label_109778:
    // 0x109778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10977c: 0xc041c56  jal         func_107158
    ctx->pc = 0x10977Cu;
    SET_GPR_U32(ctx, 31, 0x109784u);
    ctx->pc = 0x109780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10977Cu;
            // 0x109780: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109784u; }
        if (ctx->pc != 0x109784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109784u; }
        if (ctx->pc != 0x109784u) { return; }
    }
    ctx->pc = 0x109784u;
label_109784:
    // 0x109784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109788: 0xc041c56  jal         func_107158
    ctx->pc = 0x109788u;
    SET_GPR_U32(ctx, 31, 0x109790u);
    ctx->pc = 0x10978Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109788u;
            // 0x10978c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109790u; }
        if (ctx->pc != 0x109790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109790u; }
        if (ctx->pc != 0x109790u) { return; }
    }
    ctx->pc = 0x109790u;
label_109790:
    // 0x109790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109794: 0xc041c56  jal         func_107158
    ctx->pc = 0x109794u;
    SET_GPR_U32(ctx, 31, 0x10979Cu);
    ctx->pc = 0x109798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109794u;
            // 0x109798: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10979Cu; }
        if (ctx->pc != 0x10979Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10979Cu; }
        if (ctx->pc != 0x10979Cu) { return; }
    }
    ctx->pc = 0x10979Cu;
label_10979c:
    // 0x10979c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10979cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1097a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1097a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1097a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1097A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1097A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1097A4u;
            // 0x1097a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1097ACu;
    // 0x1097ac: 0x0  nop
    ctx->pc = 0x1097acu;
    // NOP
label_1097b0:
    // 0x1097b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1097b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1097b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1097b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1097b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1097b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1097bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1097bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1097c0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1097c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1097c4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1097c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1097c8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1097c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1097cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1097ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1097d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1097d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1097d4: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x1097d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x1097d8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1097D8u;
    {
        const bool branch_taken_0x1097d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1097d8) {
            ctx->pc = 0x1097DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1097D8u;
            // 0x1097dc: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1097FCu;
            goto label_1097fc;
        }
    }
    ctx->pc = 0x1097E0u;
    // 0x1097e0: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x1097e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x1097e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1097E4u;
    {
        const bool branch_taken_0x1097e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1097E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1097E4u;
            // 0x1097e8: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097e4) {
            ctx->pc = 0x109808u;
            goto label_109808;
        }
    }
    ctx->pc = 0x1097ECu;
    // 0x1097ec: 0x8e230188  lw          $v1, 0x188($s1)
    ctx->pc = 0x1097ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x1097f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1097f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1097f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1097F4u;
    {
        const bool branch_taken_0x1097f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1097F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1097F4u;
            // 0x1097f8: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097f4) {
            ctx->pc = 0x109818u;
            goto label_109818;
        }
    }
    ctx->pc = 0x1097FCu;
label_1097fc:
    // 0x1097fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1097fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109800: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109800u;
    {
        const bool branch_taken_0x109800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x109800) {
            ctx->pc = 0x109804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109800u;
            // 0x109804: 0x8e220194  lw          $v0, 0x194($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109810u;
            goto label_109810;
        }
    }
    ctx->pc = 0x109808u;
label_109808:
    // 0x109808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x109808u;
    {
        const bool branch_taken_0x109808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10980Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109808u;
            // 0x10980c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109808) {
            ctx->pc = 0x109818u;
            goto label_109818;
        }
    }
    ctx->pc = 0x109810u;
label_109810:
    // 0x109810: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x109810u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109814: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x109814u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_109818:
    // 0x109818: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x109818u;
    {
        const bool branch_taken_0x109818 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x10981Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109818u;
            // 0x10981c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109818) {
            ctx->pc = 0x109880u;
            goto label_109880;
        }
    }
    ctx->pc = 0x109820u;
    // 0x109820: 0x2635019c  addiu       $s5, $s1, 0x19C
    ctx->pc = 0x109820u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 412));
    // 0x109824: 0x263401a8  addiu       $s4, $s1, 0x1A8
    ctx->pc = 0x109824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 424));
    // 0x109828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10982c: 0x0  nop
    ctx->pc = 0x10982cu;
    // NOP
label_109830:
    // 0x109830: 0xc041c56  jal         func_107158
    ctx->pc = 0x109830u;
    SET_GPR_U32(ctx, 31, 0x109838u);
    ctx->pc = 0x109834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109830u;
            // 0x109834: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109838u; }
        if (ctx->pc != 0x109838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109838u; }
        if (ctx->pc != 0x109838u) { return; }
    }
    ctx->pc = 0x109838u;
label_109838:
    // 0x109838: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x109838u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x10983c: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x10983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x109840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109844: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x109844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x109848: 0xc041c56  jal         func_107158
    ctx->pc = 0x109848u;
    SET_GPR_U32(ctx, 31, 0x109850u);
    ctx->pc = 0x10984Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109848u;
            // 0x10984c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109850u; }
        if (ctx->pc != 0x109850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109850u; }
        if (ctx->pc != 0x109850u) { return; }
    }
    ctx->pc = 0x109850u;
label_109850:
    // 0x109850: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x109850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x109854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109858: 0xc041c56  jal         func_107158
    ctx->pc = 0x109858u;
    SET_GPR_U32(ctx, 31, 0x109860u);
    ctx->pc = 0x10985Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109858u;
            // 0x10985c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109860u; }
        if (ctx->pc != 0x109860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109860u; }
        if (ctx->pc != 0x109860u) { return; }
    }
    ctx->pc = 0x109860u;
label_109860:
    // 0x109860: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x109860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x109864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109868: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x109868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10986c: 0xc041c56  jal         func_107158
    ctx->pc = 0x10986Cu;
    SET_GPR_U32(ctx, 31, 0x109874u);
    ctx->pc = 0x109870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10986Cu;
            // 0x109870: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109874u; }
        if (ctx->pc != 0x109874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109874u; }
        if (ctx->pc != 0x109874u) { return; }
    }
    ctx->pc = 0x109874u;
label_109874:
    // 0x109874: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x109874u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x109878: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x109878u;
    {
        const bool branch_taken_0x109878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10987Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109878u;
            // 0x10987c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109878) {
            ctx->pc = 0x109830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109830;
        }
    }
    ctx->pc = 0x109880u;
label_109880:
    // 0x109880: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x109880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x109884: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x109884u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x109888: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x109888u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10988c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10988cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109890: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109894: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10989c: 0x3e00008  jr          $ra
    ctx->pc = 0x10989Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1098A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10989Cu;
            // 0x1098a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1098A4u;
    // 0x1098a4: 0x0  nop
    ctx->pc = 0x1098a4u;
    // NOP
    ctx->pc = 0x1098a8u;
}
