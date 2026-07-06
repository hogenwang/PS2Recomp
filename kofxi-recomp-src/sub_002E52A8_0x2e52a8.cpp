#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E52A8
// Address: 0x2e52a8 - 0x2e5380
void sub_002E52A8_0x2e52a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E52A8_0x2e52a8");
#endif

    switch (ctx->pc) {
        case 0x2e52d0u: goto label_2e52d0;
        case 0x2e52e0u: goto label_2e52e0;
        case 0x2e52f4u: goto label_2e52f4;
        case 0x2e5330u: goto label_2e5330;
        case 0x2e535cu: goto label_2e535c;
        default: break;
    }

    ctx->pc = 0x2e52a8u;

    // 0x2e52a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e52a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e52ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e52acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e52b0: 0x3c1201ca  lui         $s2, 0x1CA
    ctx->pc = 0x2e52b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)458 << 16));
    // 0x2e52b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e52b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e52b8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e52b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e52bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e52bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e52c0: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x2e52c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52c4: 0x8e504dc0  lw          $s0, 0x4DC0($s2)
    ctx->pc = 0x2e52c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19904)));
    // 0x2e52c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e52c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e52ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2e52d0:
    // 0x2e52d0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E52D0u;
    {
        const bool branch_taken_0x2e52d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E52D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E52D0u;
            // 0x2e52d4: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e52d0) {
            ctx->pc = 0x2E5320u;
            goto label_2e5320;
        }
    }
    ctx->pc = 0x2E52D8u;
    // 0x2e52d8: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x2E52D8u;
    SET_GPR_U32(ctx, 31, 0x2E52E0u);
    ctx->pc = 0x2E52DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E52D8u;
            // 0x2e52dc: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E52E0u; }
        if (ctx->pc != 0x2E52E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E52E0u; }
        if (ctx->pc != 0x2E52E0u) { return; }
    }
    ctx->pc = 0x2E52E0u;
label_2e52e0:
    // 0x2e52e0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E52E0u;
    {
        const bool branch_taken_0x2e52e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e52e0) {
            ctx->pc = 0x2E52E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E52E0u;
            // 0x2e52e4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E52D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e52d0;
        }
    }
    ctx->pc = 0x2E52E8u;
    // 0x2e52e8: 0x26040108  addiu       $a0, $s0, 0x108
    ctx->pc = 0x2e52e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
    // 0x2e52ec: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x2E52ECu;
    SET_GPR_U32(ctx, 31, 0x2E52F4u);
    ctx->pc = 0x2E52F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E52ECu;
            // 0x2e52f0: 0x26250104  addiu       $a1, $s1, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E52F4u; }
        if (ctx->pc != 0x2E52F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E52F4u; }
        if (ctx->pc != 0x2E52F4u) { return; }
    }
    ctx->pc = 0x2E52F4u;
label_2e52f4:
    // 0x2e52f4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E52F4u;
    {
        const bool branch_taken_0x2e52f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e52f4) {
            ctx->pc = 0x2E52F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E52F4u;
            // 0x2e52f8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E52D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e52d0;
        }
    }
    ctx->pc = 0x2E52FCu;
    // 0x2e52fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2e52fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e5300: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e5300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e5304: 0x5462fff2  bnel        $v1, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2E5304u;
    {
        const bool branch_taken_0x2e5304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e5304) {
            ctx->pc = 0x2E5308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5304u;
            // 0x2e5308: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E52D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e52d0;
        }
    }
    ctx->pc = 0x2E530Cu;
    // 0x2e530c: 0x8e624dc0  lw          $v0, 0x4DC0($s3)
    ctx->pc = 0x2e530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 19904)));
    // 0x2e5310: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5310u;
    {
        const bool branch_taken_0x2e5310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2E5314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5310u;
            // 0x2e5314: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5310) {
            ctx->pc = 0x2E5334u;
            goto label_2e5334;
        }
    }
    ctx->pc = 0x2E5318u;
    // 0x2e5318: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5318u;
    {
        const bool branch_taken_0x2e5318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E531Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5318u;
            // 0x2e531c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5318) {
            ctx->pc = 0x2E5328u;
            goto label_2e5328;
        }
    }
    ctx->pc = 0x2E5320u;
label_2e5320:
    // 0x2e5320: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E5320u;
    {
        const bool branch_taken_0x2e5320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5320u;
            // 0x2e5324: 0x2402ffe4  addiu       $v0, $zero, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5320) {
            ctx->pc = 0x2E5360u;
            goto label_2e5360;
        }
    }
    ctx->pc = 0x2E5328u;
label_2e5328:
    // 0x2e5328: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E5328u;
    {
        const bool branch_taken_0x2e5328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E532Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5328u;
            // 0x2e532c: 0xae424dc0  sw          $v0, 0x4DC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 19904), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5328) {
            ctx->pc = 0x2E5354u;
            goto label_2e5354;
        }
    }
    ctx->pc = 0x2E5330u;
label_2e5330:
    // 0x2e5330: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e5330u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5334:
    // 0x2e5334: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e5334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e5338: 0x0  nop
    ctx->pc = 0x2e5338u;
    // NOP
    // 0x2e533c: 0x0  nop
    ctx->pc = 0x2e533cu;
    // NOP
    // 0x2e5340: 0x0  nop
    ctx->pc = 0x2e5340u;
    // NOP
    // 0x2e5344: 0x1450fffa  bne         $v0, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E5344u;
    {
        const bool branch_taken_0x2e5344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e5344) {
            ctx->pc = 0x2E5330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e5330;
        }
    }
    ctx->pc = 0x2E534Cu;
    // 0x2e534c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5350: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e5350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2e5354:
    // 0x2e5354: 0xc098560  jal         func_261580
    ctx->pc = 0x2E5354u;
    SET_GPR_U32(ctx, 31, 0x2E535Cu);
    ctx->pc = 0x2E5358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5354u;
            // 0x2e5358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E535Cu; }
        if (ctx->pc != 0x2E535Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E535Cu; }
        if (ctx->pc != 0x2E535Cu) { return; }
    }
    ctx->pc = 0x2E535Cu;
label_2e535c:
    // 0x2e535c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e535cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e5360:
    // 0x2e5360: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e5360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5364: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e5364u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5368: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e5368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e536c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e536cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5374: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5374u;
            // 0x2e5378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E537Cu;
    // 0x2e537c: 0x0  nop
    ctx->pc = 0x2e537cu;
    // NOP
    ctx->pc = 0x2e5380u;
}
