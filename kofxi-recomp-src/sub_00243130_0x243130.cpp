#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00243130
// Address: 0x243130 - 0x243208
void sub_00243130_0x243130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243130_0x243130");
#endif

    switch (ctx->pc) {
        case 0x243150u: goto label_243150;
        case 0x243188u: goto label_243188;
        case 0x2431c0u: goto label_2431c0;
        case 0x2431c8u: goto label_2431c8;
        case 0x2431e4u: goto label_2431e4;
        case 0x2431f0u: goto label_2431f0;
        case 0x2431f8u: goto label_2431f8;
        default: break;
    }

    ctx->pc = 0x243130u;

    // 0x243130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x243134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x243138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x243138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24313c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24313Cu;
    {
        const bool branch_taken_0x24313c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x243140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24313Cu;
            // 0x243140: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24313c) {
            ctx->pc = 0x243150u;
            goto label_243150;
        }
    }
    ctx->pc = 0x243144u;
    // 0x243144: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x243144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x243148: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x243148u;
    SET_GPR_U32(ctx, 31, 0x243150u);
    ctx->pc = 0x24314Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243148u;
            // 0x24314c: 0x24846698  addiu       $a0, $a0, 0x6698 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243150u; }
        if (ctx->pc != 0x243150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243150u; }
        if (ctx->pc != 0x243150u) { return; }
    }
    ctx->pc = 0x243150u;
label_243150:
    // 0x243150: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x243150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x243154: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x243154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x243158: 0x1c400027  bgtz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x243158u;
    {
        const bool branch_taken_0x243158 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x24315Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243158u;
            // 0x24315c: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243158) {
            ctx->pc = 0x2431F8u;
            goto label_2431f8;
        }
    }
    ctx->pc = 0x243160u;
    // 0x243160: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x243160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x243164: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x243164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x243168: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x243168u;
    {
        const bool branch_taken_0x243168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24316Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243168u;
            // 0x24316c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243168) {
            ctx->pc = 0x2431FCu;
            goto label_2431fc;
        }
    }
    ctx->pc = 0x243170u;
    // 0x243170: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x243170u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x243174: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x243174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x243178: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x243178u;
    {
        const bool branch_taken_0x243178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24317Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243178u;
            // 0x24317c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243178) {
            ctx->pc = 0x243188u;
            goto label_243188;
        }
    }
    ctx->pc = 0x243180u;
    // 0x243180: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x243180u;
    SET_GPR_U32(ctx, 31, 0x243188u);
    ctx->pc = 0x243184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243180u;
            // 0x243184: 0x248466a0  addiu       $a0, $a0, 0x66A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243188u; }
        if (ctx->pc != 0x243188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243188u; }
        if (ctx->pc != 0x243188u) { return; }
    }
    ctx->pc = 0x243188u;
label_243188:
    // 0x243188: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x243188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24318c: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x24318cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x243190: 0x8c43ff90  lw          $v1, -0x70($v0)
    ctx->pc = 0x243190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967184)));
    // 0x243194: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x243194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x243198: 0x4810009  bgez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x243198u;
    {
        const bool branch_taken_0x243198 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x24319Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243198u;
            // 0x24319c: 0xac43ff90  sw          $v1, -0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243198) {
            ctx->pc = 0x2431C0u;
            goto label_2431c0;
        }
    }
    ctx->pc = 0x2431A0u;
    // 0x2431a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2431a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2431a4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2431a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2431a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2431a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2431ac: 0x24a566b0  addiu       $a1, $a1, 0x66B0
    ctx->pc = 0x2431acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26288));
    // 0x2431b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2431b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2431b4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2431b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2431b8: 0x808b5ac  j           func_22D6B0
    ctx->pc = 0x2431B8u;
    ctx->pc = 0x2431BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2431B8u;
            // 0x2431bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2431C0u;
label_2431c0:
    // 0x2431c0: 0xc091086  jal         func_244218
    ctx->pc = 0x2431C0u;
    SET_GPR_U32(ctx, 31, 0x2431C8u);
    ctx->pc = 0x2431C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2431C0u;
            // 0x2431c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244218u;
    if (runtime->hasFunction(0x244218u)) {
        auto targetFn = runtime->lookupFunction(0x244218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431C8u; }
        if (ctx->pc != 0x2431C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244218_0x244218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431C8u; }
        if (ctx->pc != 0x2431C8u) { return; }
    }
    ctx->pc = 0x2431C8u;
label_2431c8:
    // 0x2431c8: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x2431c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2431cc: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2431ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2431d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2431d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2431d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2431D4u;
    {
        const bool branch_taken_0x2431d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2431D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2431D4u;
            // 0x2431d8: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2431d4) {
            ctx->pc = 0x2431E8u;
            goto label_2431e8;
        }
    }
    ctx->pc = 0x2431DCu;
    // 0x2431dc: 0xc090c82  jal         func_243208
    ctx->pc = 0x2431DCu;
    SET_GPR_U32(ctx, 31, 0x2431E4u);
    ctx->pc = 0x243208u;
    if (runtime->hasFunction(0x243208u)) {
        auto targetFn = runtime->lookupFunction(0x243208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431E4u; }
        if (ctx->pc != 0x2431E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243208_0x243208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431E4u; }
        if (ctx->pc != 0x2431E4u) { return; }
    }
    ctx->pc = 0x2431E4u;
label_2431e4:
    // 0x2431e4: 0x0  nop
    ctx->pc = 0x2431e4u;
    // NOP
label_2431e8:
    // 0x2431e8: 0xc098560  jal         func_261580
    ctx->pc = 0x2431E8u;
    SET_GPR_U32(ctx, 31, 0x2431F0u);
    ctx->pc = 0x2431ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2431E8u;
            // 0x2431ec: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431F0u; }
        if (ctx->pc != 0x2431F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431F0u; }
        if (ctx->pc != 0x2431F0u) { return; }
    }
    ctx->pc = 0x2431F0u;
label_2431f0:
    // 0x2431f0: 0xc098560  jal         func_261580
    ctx->pc = 0x2431F0u;
    SET_GPR_U32(ctx, 31, 0x2431F8u);
    ctx->pc = 0x2431F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2431F0u;
            // 0x2431f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431F8u; }
        if (ctx->pc != 0x2431F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431F8u; }
        if (ctx->pc != 0x2431F8u) { return; }
    }
    ctx->pc = 0x2431F8u;
label_2431f8:
    // 0x2431f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2431f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2431fc:
    // 0x2431fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2431fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243200: 0x3e00008  jr          $ra
    ctx->pc = 0x243200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243200u;
            // 0x243204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243208u;
    ctx->pc = 0x243208u;
}
