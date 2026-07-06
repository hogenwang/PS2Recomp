#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295080
// Address: 0x295080 - 0x295288
void sub_00295080_0x295080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295080_0x295080");
#endif

    switch (ctx->pc) {
        case 0x295088u: goto label_295088;
        case 0x2950a0u: goto label_2950a0;
        case 0x29510cu: goto label_29510c;
        case 0x295140u: goto label_295140;
        case 0x295154u: goto label_295154;
        case 0x295188u: goto label_295188;
        case 0x295194u: goto label_295194;
        case 0x2951dcu: goto label_2951dc;
        case 0x295210u: goto label_295210;
        case 0x29524cu: goto label_29524c;
        default: break;
    }

    ctx->pc = 0x295080u;

    // 0x295080: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x295080u;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x295088u;
label_295088:
    // 0x295088: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x295088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x29508c: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x29508cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x295090: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x295090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x295094: 0x3e00008  jr          $ra
    ctx->pc = 0x295094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295094u;
            // 0x295098: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29509Cu;
    // 0x29509c: 0x0  nop
    ctx->pc = 0x29509cu;
    // NOP
label_2950a0:
    // 0x2950a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2950a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2950a4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2950a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2950a8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2950a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2950ac: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2950acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2950b0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2950b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2950b4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2950b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2950b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2950b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2950bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2950bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2950c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2950c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2950c4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2950c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2950c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2950c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2950cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2950ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2950d0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2950d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2950d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2950d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2950d8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2950d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2950dc: 0x12400041  beqz        $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x2950DCu;
    {
        const bool branch_taken_0x2950dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2950E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2950DCu;
            // 0x2950e0: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950dc) {
            ctx->pc = 0x2951E4u;
            goto label_2951e4;
        }
    }
    ctx->pc = 0x2950E4u;
    // 0x2950e4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2950e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2950e8: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x2950e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2950ec: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x2950ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2950f0: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x2950f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2950f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2950F4u;
    {
        const bool branch_taken_0x2950f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2950F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2950F4u;
            // 0x2950f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950f4) {
            ctx->pc = 0x29511Cu;
            goto label_29511c;
        }
    }
    ctx->pc = 0x2950FCu;
    // 0x2950fc: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2950fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x295100: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x295100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x295104: 0xc049c48  jal         func_127120
    ctx->pc = 0x295104u;
    SET_GPR_U32(ctx, 31, 0x29510Cu);
    ctx->pc = 0x295108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295104u;
            // 0x295108: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29510Cu; }
        if (ctx->pc != 0x29510Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29510Cu; }
        if (ctx->pc != 0x29510Cu) { return; }
    }
    ctx->pc = 0x29510Cu;
label_29510c:
    // 0x29510c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x29510cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x295110: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x295110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x295114: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x295114u;
    {
        const bool branch_taken_0x295114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295114u;
            // 0x295118: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295114) {
            ctx->pc = 0x2951E4u;
            goto label_2951e4;
        }
    }
    ctx->pc = 0x29511Cu;
label_29511c:
    // 0x29511c: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x29511Cu;
    {
        const bool branch_taken_0x29511c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x295120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29511Cu;
            // 0x295120: 0x246102a  slt         $v0, $s2, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29511c) {
            ctx->pc = 0x29517Cu;
            goto label_29517c;
        }
    }
    ctx->pc = 0x295124u;
    // 0x295124: 0xc48023  subu        $s0, $a2, $a0
    ctx->pc = 0x295124u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x295128: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x295128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29512c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x29512cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x295130: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x295130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295134: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x295134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x295138: 0xc049c48  jal         func_127120
    ctx->pc = 0x295138u;
    SET_GPR_U32(ctx, 31, 0x295140u);
    ctx->pc = 0x29513Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295138u;
            // 0x29513c: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295140u; }
        if (ctx->pc != 0x295140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295140u; }
        if (ctx->pc != 0x295140u) { return; }
    }
    ctx->pc = 0x295140u;
label_295140:
    // 0x295140: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x295140u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x295144: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x295144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x295148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x295148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29514c: 0xc0a54a2  jal         func_295288
    ctx->pc = 0x29514Cu;
    SET_GPR_U32(ctx, 31, 0x295154u);
    ctx->pc = 0x295150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29514Cu;
            // 0x295150: 0x26650008  addiu       $a1, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295288u;
    if (runtime->hasFunction(0x295288u)) {
        auto targetFn = runtime->lookupFunction(0x295288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295154u; }
        if (ctx->pc != 0x295154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295288_0x295288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295154u; }
        if (ctx->pc != 0x295154u) { return; }
    }
    ctx->pc = 0x295154u;
label_295154:
    // 0x295154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x295154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295158: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x295158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x29515c: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x29515cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x295160: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x295160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x295164: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x295164u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x295168: 0x24900001  addiu       $s0, $a0, 0x1
    ctx->pc = 0x295168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x29516c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29516cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x295170: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x295170u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x295174: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x295174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x295178: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x295178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_29517c:
    // 0x29517c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29517Cu;
    {
        const bool branch_taken_0x29517c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29517Cu;
            // 0x295180: 0x2415000a  addiu       $s5, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29517c) {
            ctx->pc = 0x2951C8u;
            goto label_2951c8;
        }
    }
    ctx->pc = 0x295184u;
    // 0x295184: 0x0  nop
    ctx->pc = 0x295184u;
    // NOP
label_295188:
    // 0x295188: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x295188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29518c: 0xc0a54a2  jal         func_295288
    ctx->pc = 0x29518Cu;
    SET_GPR_U32(ctx, 31, 0x295194u);
    ctx->pc = 0x295190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29518Cu;
            // 0x295190: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295288u;
    if (runtime->hasFunction(0x295288u)) {
        auto targetFn = runtime->lookupFunction(0x295288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295194u; }
        if (ctx->pc != 0x295194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295288_0x295288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295194u; }
        if (ctx->pc != 0x295194u) { return; }
    }
    ctx->pc = 0x295194u;
label_295194:
    // 0x295194: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x295194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295198: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x295198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x29519c: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x29519cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2951a0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2951a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2951a4: 0xa2350000  sb          $s5, 0x0($s1)
    ctx->pc = 0x2951a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x2951a8: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x2951a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2951ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2951acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2951b0: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x2951b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2951b4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2951b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2951b8: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x2951b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2951bc: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x2951bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2951c0: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2951C0u;
    {
        const bool branch_taken_0x2951c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2951C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2951C0u;
            // 0x2951c4: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2951c0) {
            ctx->pc = 0x295188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295188;
        }
    }
    ctx->pc = 0x2951C8u;
label_2951c8:
    // 0x2951c8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2951C8u;
    {
        const bool branch_taken_0x2951c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2951CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2951C8u;
            // 0x2951cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2951c8) {
            ctx->pc = 0x2951DCu;
            goto label_2951dc;
        }
    }
    ctx->pc = 0x2951D0u;
    // 0x2951d0: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x2951d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2951d4: 0xc049c48  jal         func_127120
    ctx->pc = 0x2951D4u;
    SET_GPR_U32(ctx, 31, 0x2951DCu);
    ctx->pc = 0x2951D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2951D4u;
            // 0x2951d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2951DCu; }
        if (ctx->pc != 0x2951DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2951DCu; }
        if (ctx->pc != 0x2951DCu) { return; }
    }
    ctx->pc = 0x2951DCu;
label_2951dc:
    // 0x2951dc: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x2951dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x2951e0: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x2951e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
label_2951e4:
    // 0x2951e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2951e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2951e8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2951e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2951ec: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2951ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2951f0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2951f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2951f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2951f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2951f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2951f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2951fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2951fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295204: 0x3e00008  jr          $ra
    ctx->pc = 0x295204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295204u;
            // 0x295208: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29520Cu;
    // 0x29520c: 0x0  nop
    ctx->pc = 0x29520cu;
    // NOP
label_295210:
    // 0x295210: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x295210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x295214: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x295214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x295218: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x295218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29521c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29521cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295224: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x295224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295228: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x295228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29522c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29522cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295230: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x295230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295234: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x295234u;
    {
        const bool branch_taken_0x295234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295234u;
            // 0x295238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295234) {
            ctx->pc = 0x29526Cu;
            goto label_29526c;
        }
    }
    ctx->pc = 0x29523Cu;
    // 0x29523c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29523cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295244: 0xc0a54a2  jal         func_295288
    ctx->pc = 0x295244u;
    SET_GPR_U32(ctx, 31, 0x29524Cu);
    ctx->pc = 0x295248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295244u;
            // 0x295248: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295288u;
    if (runtime->hasFunction(0x295288u)) {
        auto targetFn = runtime->lookupFunction(0x295288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29524Cu; }
        if (ctx->pc != 0x29524Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295288_0x295288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29524Cu; }
        if (ctx->pc != 0x29524Cu) { return; }
    }
    ctx->pc = 0x29524Cu;
label_29524c:
    // 0x29524c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29524cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295250: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x295250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x295254: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x295254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x295258: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x295258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29525c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29525cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x295260: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x295260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x295264: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x295264u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x295268: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x295268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_29526c:
    // 0x29526c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x29526cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x295270: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x295270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295274: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x295274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295278: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x295278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29527c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29527cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295280: 0x3e00008  jr          $ra
    ctx->pc = 0x295280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295280u;
            // 0x295284: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295288u;
    ctx->pc = 0x295288u;
}
