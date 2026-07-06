#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211708
// Address: 0x211708 - 0x211848
void sub_00211708_0x211708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211708_0x211708");
#endif

    switch (ctx->pc) {
        case 0x211764u: goto label_211764;
        case 0x211778u: goto label_211778;
        case 0x2117c0u: goto label_2117c0;
        case 0x211808u: goto label_211808;
        default: break;
    }

    ctx->pc = 0x211708u;

    // 0x211708: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x211708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21170c: 0x8cef0000  lw          $t7, 0x0($a3)
    ctx->pc = 0x21170cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x211710: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x211710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x211714: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x211714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211718: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x211718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21171c: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x21171cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x211720: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x211720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x211724: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x211724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211728: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x211728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21172c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21172cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211730: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x211730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x211734: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x211734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211738: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x211738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x21173c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x21173cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211740: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x211740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x211744: 0x15e00038  bnez        $t7, . + 4 + (0x38 << 2)
    ctx->pc = 0x211744u;
    {
        const bool branch_taken_0x211744 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x211748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211744u;
            // 0x211748: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211744) {
            ctx->pc = 0x211828u;
            goto label_211828;
        }
    }
    ctx->pc = 0x21174Cu;
    // 0x21174c: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x21174cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x211750: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x211750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211754: 0x8dcfab5c  lw          $t7, -0x54A4($t6)
    ctx->pc = 0x211754u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294945628)));
    // 0x211758: 0x1e67821  addu        $t7, $t7, $a2
    ctx->pc = 0x211758u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x21175c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x21175Cu;
    SET_GPR_U32(ctx, 31, 0x211764u);
    ctx->pc = 0x211760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21175Cu;
            // 0x211760: 0xadcfab5c  sw          $t7, -0x54A4($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 4294945628), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211764u; }
        if (ctx->pc != 0x211764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211764u; }
        if (ctx->pc != 0x211764u) { return; }
    }
    ctx->pc = 0x211764u;
label_211764:
    // 0x211764: 0x242782b  sltu        $t7, $s2, $v0
    ctx->pc = 0x211764u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x211768: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x211768u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21176c: 0x24f100b  movn        $v0, $s2, $t7
    ctx->pc = 0x21176cu;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x211770: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x211770u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211774: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x211774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_211778:
    // 0x211778: 0x28c7821  addu        $t7, $s4, $t4
    ctx->pc = 0x211778u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 12)));
    // 0x21177c: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x21177cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x211780: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x211780u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x211784: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x211784u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x211788: 0xa1cd0000  sb          $t5, 0x0($t6)
    ctx->pc = 0x211788u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 13));
    // 0x21178c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x21178cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x211790: 0x158bfff9  bne         $t4, $t3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x211790u;
    {
        const bool branch_taken_0x211790 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 11));
        ctx->pc = 0x211794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211790u;
            // 0x211794: 0xae0e0000  sw          $t6, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211790) {
            ctx->pc = 0x211778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211778;
        }
    }
    ctx->pc = 0x211798u;
    // 0x211798: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x211798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21179c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21179cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2117a0: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x2117a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2117a4: 0x244dffff  addiu       $t5, $v0, -0x1
    ctx->pc = 0x2117a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2117a8: 0x2426023  subu        $t4, $s2, $v0
    ctx->pc = 0x2117a8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2117ac: 0x1f27823  subu        $t7, $t7, $s2
    ctx->pc = 0x2117acu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x2117b0: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x2117b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x2117b4: 0x11ae000e  beq         $t5, $t6, . + 4 + (0xE << 2)
    ctx->pc = 0x2117B4u;
    {
        const bool branch_taken_0x2117b4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 14));
        ctx->pc = 0x2117B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2117B4u;
            // 0x2117b8: 0xae6f0000  sw          $t7, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2117b4) {
            ctx->pc = 0x2117F0u;
            goto label_2117f0;
        }
    }
    ctx->pc = 0x2117BCu;
    // 0x2117bc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x2117bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2117c0:
    // 0x2117c0: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x2117c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2117c4: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x2117c4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2117c8: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x2117c8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2117cc: 0xa1af0000  sb          $t7, 0x0($t5)
    ctx->pc = 0x2117ccu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x2117d0: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2117d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2117d4: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x2117d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2117d8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2117d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2117dc: 0xae2e0000  sw          $t6, 0x0($s1)
    ctx->pc = 0x2117dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 14));
    // 0x2117e0: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x2117e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x2117e4: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x2117e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
    // 0x2117e8: 0x15ebfff5  bne         $t7, $t3, . + 4 + (-0xB << 2)
    ctx->pc = 0x2117E8u;
    {
        const bool branch_taken_0x2117e8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 11));
        ctx->pc = 0x2117ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2117E8u;
            // 0x2117ec: 0xafaf0000  sw          $t7, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2117e8) {
            ctx->pc = 0x2117C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2117c0;
        }
    }
    ctx->pc = 0x2117F0u;
label_2117f0:
    // 0x2117f0: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x2117f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x2117f4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2117f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2117f8: 0x518f000c  beql        $t4, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x2117F8u;
    {
        const bool branch_taken_0x2117f8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 15));
        if (branch_taken_0x2117f8) {
            ctx->pc = 0x2117FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2117F8u;
            // 0x2117fc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21182Cu;
            goto label_21182c;
        }
    }
    ctx->pc = 0x211800u;
    // 0x211800: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x211800u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211804: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x211804u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_211808:
    // 0x211808: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x211808u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x21180c: 0x0  nop
    ctx->pc = 0x21180cu;
    // NOP
    // 0x211810: 0x0  nop
    ctx->pc = 0x211810u;
    // NOP
    // 0x211814: 0x0  nop
    ctx->pc = 0x211814u;
    // NOP
    // 0x211818: 0x0  nop
    ctx->pc = 0x211818u;
    // NOP
    // 0x21181c: 0x158efffa  bne         $t4, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21181Cu;
    {
        const bool branch_taken_0x21181c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 14));
        ctx->pc = 0x211820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21181Cu;
            // 0x211820: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21181c) {
            ctx->pc = 0x211808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211808;
        }
    }
    ctx->pc = 0x211824u;
    // 0x211824: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x211824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_211828:
    // 0x211828: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x211828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21182c:
    // 0x21182c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21182cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x211830: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x211830u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211834: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x211834u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x211838: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x211838u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21183c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x21183cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x211840: 0x3e00008  jr          $ra
    ctx->pc = 0x211840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211840u;
            // 0x211844: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211848u;
    ctx->pc = 0x211848u;
}
