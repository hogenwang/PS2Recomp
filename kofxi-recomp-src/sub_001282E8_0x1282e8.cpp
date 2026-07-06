#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001282E8
// Address: 0x1282e8 - 0x128410
void sub_001282E8_0x1282e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001282E8_0x1282e8");
#endif

    switch (ctx->pc) {
        case 0x12830cu: goto label_12830c;
        case 0x12831cu: goto label_12831c;
        case 0x128368u: goto label_128368;
        case 0x128374u: goto label_128374;
        case 0x12838cu: goto label_12838c;
        case 0x1283d8u: goto label_1283d8;
        case 0x1283e4u: goto label_1283e4;
        case 0x1283f0u: goto label_1283f0;
        case 0x128400u: goto label_128400;
        default: break;
    }

    ctx->pc = 0x1282e8u;

    // 0x1282e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1282e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1282ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1282ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1282f0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1282f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1282f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1282f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1282f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1282fc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1282fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x128300: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x128300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128304: 0xc049ff8  jal         func_127FE0
    ctx->pc = 0x128304u;
    SET_GPR_U32(ctx, 31, 0x12830Cu);
    ctx->pc = 0x128308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128304u;
            // 0x128308: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127FE0u;
    if (runtime->hasFunction(0x127FE0u)) {
        auto targetFn = runtime->lookupFunction(0x127FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12830Cu; }
        if (ctx->pc != 0x12830Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127FE0_0x127fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12830Cu; }
        if (ctx->pc != 0x12830Cu) { return; }
    }
    ctx->pc = 0x12830Cu;
label_12830c:
    // 0x12830c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12830cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128314: 0xc049ff8  jal         func_127FE0
    ctx->pc = 0x128314u;
    SET_GPR_U32(ctx, 31, 0x12831Cu);
    ctx->pc = 0x128318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128314u;
            // 0x128318: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127FE0u;
    if (runtime->hasFunction(0x127FE0u)) {
        auto targetFn = runtime->lookupFunction(0x127FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12831Cu; }
        if (ctx->pc != 0x12831Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127FE0_0x127fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12831Cu; }
        if (ctx->pc != 0x12831Cu) { return; }
    }
    ctx->pc = 0x12831Cu;
label_12831c:
    // 0x12831c: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x12831cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x128320: 0x12603f  dsra32      $t4, $s2, 0
    ctx->pc = 0x128320u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x128324: 0x8e2d0010  lw          $t5, 0x10($s1)
    ctx->pc = 0x128324u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x128328: 0x2583f  dsra32      $t3, $v0, 0
    ctx->pc = 0x128328u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12832c: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x12832cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x128330: 0x1af6823  subu        $t5, $t5, $t7
    ctx->pc = 0x128330u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x128334: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x128334u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128338: 0xd6940  sll         $t5, $t5, 5
    ctx->pc = 0x128338u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
    // 0x12833c: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x12833cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x128340: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x128340u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x128344: 0xf7500  sll         $t6, $t7, 20
    ctx->pc = 0x128344u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 20));
    // 0x128348: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x128348u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x12834c: 0x16e5823  subu        $t3, $t3, $t6
    ctx->pc = 0x12834cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x128350: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x128350u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x128354: 0x19e0000d  blez        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x128354u;
    {
        const bool branch_taken_0x128354 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x128358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128354u;
            // 0x128358: 0xb583c  dsll32      $t3, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128354) {
            ctx->pc = 0x12838Cu;
            goto label_12838c;
        }
    }
    ctx->pc = 0x12835Cu;
    // 0x12835c: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x12835cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x128360: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x128360u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x128364: 0x24c9025  or          $s2, $s2, $t4
    ctx->pc = 0x128364u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 12));
label_128368:
    // 0x128368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12836c: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x12836Cu;
    SET_GPR_U32(ctx, 31, 0x128374u);
    ctx->pc = 0x128370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12836Cu;
            // 0x128370: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (runtime->hasFunction(0x122C28u)) {
        auto targetFn = runtime->lookupFunction(0x122C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128374u; }
        if (ctx->pc != 0x128374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122C28_0x122c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128374u; }
        if (ctx->pc != 0x128374u) { return; }
    }
    ctx->pc = 0x128374u;
label_128374:
    // 0x128374: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x128374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128378: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x128378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12837c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12837cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128380: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x128380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x128384: 0x3e00008  jr          $ra
    ctx->pc = 0x128384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128384u;
            // 0x128388: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12838Cu;
label_12838c:
    // 0x12838c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12838cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x128390: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x128390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x128394: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x128394u;
    {
        const bool branch_taken_0x128394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128394u;
            // 0x128398: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128394) {
            ctx->pc = 0x128368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128368;
        }
    }
    ctx->pc = 0x12839Cu;
    // 0x12839c: 0x0  nop
    ctx->pc = 0x12839cu;
    // NOP
    // 0x1283a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1283a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1283a4: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x1283a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1283a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1283a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1283ac: 0x2153c  dsll32      $v0, $v0, 20
    ctx->pc = 0x1283acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 20));
    // 0x1283b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1283b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1283b4: 0x288f0018  slti        $t7, $a0, 0x18
    ctx->pc = 0x1283b4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1283b8: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1283B8u;
    {
        const bool branch_taken_0x1283b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1283BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1283B8u;
            // 0x1283bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283b8) {
            ctx->pc = 0x1283E4u;
            goto label_1283e4;
        }
    }
    ctx->pc = 0x1283C0u;
    // 0x1283c0: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x1283c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x1283c4: 0x470c0  sll         $t6, $a0, 3
    ctx->pc = 0x1283c4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1283c8: 0x25efb978  addiu       $t7, $t7, -0x4688
    ctx->pc = 0x1283c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949240));
    // 0x1283cc: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1283ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1283d0: 0xddc20000  ld          $v0, 0x0($t6)
    ctx->pc = 0x1283d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1283d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1283d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1283d8:
    // 0x1283d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1283d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1283dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1283DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1283E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1283DCu;
            // 0x1283e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1283E4u;
label_1283e4:
    // 0x1283e4: 0x5880fffc  blezl       $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1283E4u;
    {
        const bool branch_taken_0x1283e4 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1283e4) {
            ctx->pc = 0x1283E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1283E4u;
            // 0x1283e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1283D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1283d8;
        }
    }
    ctx->pc = 0x1283ECu;
    // 0x1283ec: 0x24051009  addiu       $a1, $zero, 0x1009
    ctx->pc = 0x1283ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
label_1283f0:
    // 0x1283f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1283f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283f4: 0x52cbc  dsll32      $a1, $a1, 18
    ctx->pc = 0x1283f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 18));
    // 0x1283f8: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x1283F8u;
    SET_GPR_U32(ctx, 31, 0x128400u);
    ctx->pc = 0x1283FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1283F8u;
            // 0x1283fc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128400u; }
        if (ctx->pc != 0x128400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128400u; }
        if (ctx->pc != 0x128400u) { return; }
    }
    ctx->pc = 0x128400u;
label_128400:
    // 0x128400: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x128400u;
    {
        const bool branch_taken_0x128400 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x128404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128400u;
            // 0x128404: 0x24051009  addiu       $a1, $zero, 0x1009 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128400) {
            ctx->pc = 0x1283F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1283f0;
        }
    }
    ctx->pc = 0x128408u;
    // 0x128408: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x128408u;
    {
        const bool branch_taken_0x128408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12840Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128408u;
            // 0x12840c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128408) {
            ctx->pc = 0x1283D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1283d8;
        }
    }
    ctx->pc = 0x128410u;
    ctx->pc = 0x128410u;
}
