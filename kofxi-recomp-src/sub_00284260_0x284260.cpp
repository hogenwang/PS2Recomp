#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00284260
// Address: 0x284260 - 0x2843c0
void sub_00284260_0x284260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284260_0x284260");
#endif

    switch (ctx->pc) {
        case 0x2842e8u: goto label_2842e8;
        case 0x28430cu: goto label_28430c;
        case 0x284320u: goto label_284320;
        case 0x284348u: goto label_284348;
        case 0x284398u: goto label_284398;
        default: break;
    }

    ctx->pc = 0x284260u;

    // 0x284260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x284260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x284264: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x284264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x284268: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x284268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28426c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28426cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284270: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x284270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x284274: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x284274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284278: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x284278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28427c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28427cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x284280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x284280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x284284: 0x92420016  lbu         $v0, 0x16($s2)
    ctx->pc = 0x284284u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x284288: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x284288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x28428c: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x28428Cu;
    {
        const bool branch_taken_0x28428c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x284290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28428Cu;
            // 0x284290: 0xa2420016  sb          $v0, 0x16($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 22), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28428c) {
            ctx->pc = 0x2842B4u;
            goto label_2842b4;
        }
    }
    ctx->pc = 0x284294u;
    // 0x284294: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x284294u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x284298: 0x24e7a6b0  addiu       $a3, $a3, -0x5950
    ctx->pc = 0x284298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944432));
    // 0x28429c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28429cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2842a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2842a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2842a4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2842a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2842a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2842a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2842ac: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2842ACu;
    {
        const bool branch_taken_0x2842ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2842B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2842ACu;
            // 0x2842b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842ac) {
            ctx->pc = 0x284390u;
            goto label_284390;
        }
    }
    ctx->pc = 0x2842B4u;
label_2842b4:
    // 0x2842b4: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2842B4u;
    {
        const bool branch_taken_0x2842b4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2842B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2842B4u;
            // 0x2842b8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842b4) {
            ctx->pc = 0x2842D0u;
            goto label_2842d0;
        }
    }
    ctx->pc = 0x2842BCu;
    // 0x2842bc: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2842bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2842c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2842c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2842c4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2842c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2842c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2842C8u;
    {
        const bool branch_taken_0x2842c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2842CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2842C8u;
            // 0x2842cc: 0x28023  negu        $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842c8) {
            ctx->pc = 0x2842D8u;
            goto label_2842d8;
        }
    }
    ctx->pc = 0x2842D0u;
label_2842d0:
    // 0x2842d0: 0x5803c  dsll32      $s0, $a1, 0
    ctx->pc = 0x2842d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2842d4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2842d4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_2842d8:
    // 0x2842d8: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2842D8u;
    {
        const bool branch_taken_0x2842d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2842DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2842D8u;
            // 0x2842dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842d8) {
            ctx->pc = 0x2842FCu;
            goto label_2842fc;
        }
    }
    ctx->pc = 0x2842E0u;
    // 0x2842e0: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2842E0u;
    SET_GPR_U32(ctx, 31, 0x2842E8u);
    ctx->pc = 0x2842E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2842E0u;
            // 0x2842e4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2842E8u; }
        if (ctx->pc != 0x2842E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2842E8u; }
        if (ctx->pc != 0x2842E8u) { return; }
    }
    ctx->pc = 0x2842E8u;
label_2842e8:
    // 0x2842e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2842e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2842ec: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2842ECu;
    {
        const bool branch_taken_0x2842ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2842F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2842ECu;
            // 0x2842f0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842ec) {
            ctx->pc = 0x2842FCu;
            goto label_2842fc;
        }
    }
    ctx->pc = 0x2842F4u;
    // 0x2842f4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2842F4u;
    {
        const bool branch_taken_0x2842f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2842F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2842F4u;
            // 0x2842f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842f4) {
            ctx->pc = 0x28439Cu;
            goto label_28439c;
        }
    }
    ctx->pc = 0x2842FCu;
label_2842fc:
    // 0x2842fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2842fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284304: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x284304u;
    SET_GPR_U32(ctx, 31, 0x28430Cu);
    ctx->pc = 0x284308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284304u;
            // 0x284308: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28430Cu; }
        if (ctx->pc != 0x28430Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28430Cu; }
        if (ctx->pc != 0x28430Cu) { return; }
    }
    ctx->pc = 0x28430Cu;
label_28430c:
    // 0x28430c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28430cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284310: 0x26260006  addiu       $a2, $s1, 0x6
    ctx->pc = 0x284310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x284314: 0x2e020080  sltiu       $v0, $s0, 0x80
    ctx->pc = 0x284314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x284318: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x284318u;
    {
        const bool branch_taken_0x284318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28431Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284318u;
            // 0x28431c: 0xa2300006  sb          $s0, 0x6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284318) {
            ctx->pc = 0x28433Cu;
            goto label_28433c;
        }
    }
    ctx->pc = 0x284320u;
label_284320:
    // 0x284320: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x284320u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x284324: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x284324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x284328: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x284328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x28432c: 0xa0d00000  sb          $s0, 0x0($a2)
    ctx->pc = 0x28432cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x284330: 0x2e020080  sltiu       $v0, $s0, 0x80
    ctx->pc = 0x284330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x284334: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x284334u;
    {
        const bool branch_taken_0x284334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284334) {
            ctx->pc = 0x284320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_284320;
        }
    }
    ctx->pc = 0x28433Cu;
label_28433c:
    // 0x28433c: 0x1900000a  blez        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x28433Cu;
    {
        const bool branch_taken_0x28433c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x284340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28433Cu;
            // 0x284340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28433c) {
            ctx->pc = 0x284368u;
            goto label_284368;
        }
    }
    ctx->pc = 0x284344u;
    // 0x284344: 0x0  nop
    ctx->pc = 0x284344u;
    // NOP
label_284348:
    // 0x284348: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x284348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x28434c: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x28434cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x284350: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x284350u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284354: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x284354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x284358: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x284358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x28435c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x28435cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x284360: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x284360u;
    {
        const bool branch_taken_0x284360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284360) {
            ctx->pc = 0x284348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_284348;
        }
    }
    ctx->pc = 0x284368u;
label_284368:
    // 0x284368: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x284368u;
    {
        const bool branch_taken_0x284368 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28436Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284368u;
            // 0x28436c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284368) {
            ctx->pc = 0x28437Cu;
            goto label_28437c;
        }
    }
    ctx->pc = 0x284370u;
    // 0x284370: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x284370u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x284374: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x284374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x284378: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x284378u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_28437c:
    // 0x28437c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28437cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284380: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x284380u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284388: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x284388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28438c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28438cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284390:
    // 0x284390: 0xc0a0edc  jal         func_283B70
    ctx->pc = 0x284390u;
    SET_GPR_U32(ctx, 31, 0x284398u);
    ctx->pc = 0x283B70u;
    if (runtime->hasFunction(0x283B70u)) {
        auto targetFn = runtime->lookupFunction(0x283B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284398u; }
        if (ctx->pc != 0x284398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283B70_0x283b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284398u; }
        if (ctx->pc != 0x284398u) { return; }
    }
    ctx->pc = 0x284398u;
label_284398:
    // 0x284398: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x284398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28439c:
    // 0x28439c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28439cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2843a0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2843a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2843a4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2843a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2843a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2843a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2843ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2843acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2843b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2843b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2843b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2843B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2843B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2843B4u;
            // 0x2843b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2843BCu;
    // 0x2843bc: 0x0  nop
    ctx->pc = 0x2843bcu;
    // NOP
    ctx->pc = 0x2843c0u;
}
